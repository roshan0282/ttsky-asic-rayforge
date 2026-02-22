#pragma once
// ─────────────────────────────────────────────────────────────────────────────
// raytracer.h  —  Full per-pixel pipeline  (Q16.16 fixed-point)
//
// Hardware-friendly design for TinyTapeout (16 tiles, no framebuffer):
//  - Streaming pixel output (chase-the-beam)
//  - Time-budget per pixel (MAX_ITERATIONS), not fixed depth
//  - Shadow rays for each light
//  - Multi-bounce reflections (until time budget exhausted)
//  - Q16.16 fixed-point throughout (no float → synthesisable)
// ─────────────────────────────────────────────────────────────────────────────

#include "fixed_point.h"
#include "vec3.h"
#include "scene.h"
#include "ray_sphere.h"

#include <cstdint>

// ── Configuration ─────────────────────────────────────────────────────────────
// MAX_ITERATIONS: time budget per pixel (hardware cycles budget in real ASIC)
// Tracing continues bouncing until this limit is reached, then outputs pixel.
constexpr int MAX_ITERATIONS = 8;   // ~8 ray tests per pixel max

struct Pixel    { uint8_t r, g, b; };
struct RawColor { int r, g, b; };

inline int clamp8(int v) {
    if (v <   0) return 0;
    if (v > 255) return 255;
    return v;
}

// ─────────────────────────────────────────────────────────────────────────────
// Camera — ~77° HFOV
//   rawDx_max = 320/4 = 80 world units  (centeredX << 14 in Q16.16)
//   rawDz     = 100 world units  → HFOV = 2·atan(80/100) ≈ 77°
// ─────────────────────────────────────────────────────────────────────────────
inline Vec3 cameraRayDir(int px, int py) {
    int centeredX = px - 320;
    int centeredY = 240 - py;
    Q84 rawDx = static_cast<Q84>(centeredX) << 14;  // world = centeredX / 4
    Q84 rawDy = static_cast<Q84>(centeredY) << 14;
    Q84 rawDz = static_cast<Q84>(100) << 16;         // 100.0 world units
    return vec3_normalize(Vec3(rawDx, rawDy, rawDz));
}

// ─────────────────────────────────────────────────────────────────────────────
// Nearest sphere hit (optional sphere index to skip for self-intersection)
// ─────────────────────────────────────────────────────────────────────────────
struct NearestHit { bool hit; Q84 t; int idx; };

inline NearestHit findNearest(const Vec3& O, const Vec3& D, int skipIdx = -1) {
    NearestHit best = { false, Q84_MAX, -1 };
    for (int i = 0; i < SCENE_SPHERE_COUNT; i++) {
        if (i == skipIdx) continue;
        const Sphere& s = SCENE_SPHERES[i];
        HitResult hr = raySphereIntersect(O, D, Vec3(s.cx, s.cy, s.cz), s.radius);
        if (hr.hit && hr.t > 0 && (!best.hit || hr.t < best.t))
            best = { true, hr.t, i };
    }
    return best;
}

// ─────────────────────────────────────────────────────────────────────────────
// Mirror reflection direction:  R = D - 2·(D·N)·N
// ─────────────────────────────────────────────────────────────────────────────
inline Vec3 reflectDir(const Vec3& D, const Vec3& N) {
    Q84  ndotn     = vec3_dot(D, N);
    Q84  twoNdotN  = q84_add(ndotn, ndotn);      // 2·(D·N)
    Vec3 proj      = vec3_scale(N, twoNdotN);    // 2·(D·N)·N
    return vec3_normalize(vec3_sub(D, proj));    // normalise for safety
}

// ─────────────────────────────────────────────────────────────────────────────
// Shade a hit point — diffuse + shadow rays
// For each light: cast shadow ray, if unoccluded add diffuse contribution.
// ─────────────────────────────────────────────────────────────────────────────
inline RawColor shadePoint(const Vec3& hitP, const Vec3& N,
                           uint8_t sR, uint8_t sG, uint8_t sB,
                           int& iterCount) {
    // Ambient
    int aR = sR >> 3;
    int aG = sG >> 3;
    int aB = sB >> 3;

    for (int li = 0; li < SCENE_LIGHT_COUNT; li++) {
        const Light& Ls = SCENE_LIGHTS[li];
        Vec3 toLight = vec3_sub(Vec3(Ls.lx, Ls.ly, Ls.lz), hitP);
        Q84  distToLight = q84_sqrt(vec3_dot(toLight, toLight));
        Vec3 lDir  = vec3_normalize(toLight);
        Q84  ndotl = vec3_dot(N, lDir);
        if (ndotl <= 0) continue;

        // ── Shadow ray ────────────────────────────────────────────────────────
        // Offset origin slightly along normal to avoid self-intersection
        Q84  eps     = static_cast<Q84>(655);    // ~0.01 world units
        Vec3 shadOrig = vec3_add(hitP, vec3_scale(N, eps));
        bool inShadow = false;

        for (int si = 0; si < SCENE_SPHERE_COUNT && iterCount < MAX_ITERATIONS; si++) {
            iterCount++;
            const Sphere& ss = SCENE_SPHERES[si];
            HitResult shr = raySphereIntersect(shadOrig, lDir, 
                                               Vec3(ss.cx, ss.cy, ss.cz), ss.radius);
            if (shr.hit && shr.t > 0 && shr.t < distToLight) {
                inShadow = true;
                break;
            }
        }

        if (inShadow) continue;  // skip this light (in shadow)

        // ── Diffuse contribution ──────────────────────────────────────────────
        // difQInt ∈ [0,16] represents [0,1] diffuse weight
        int difQInt = static_cast<int>(q84_mul(ndotl, Ls.intensity)) >> 12;
        if (difQInt > 16) difQInt = 16;

        aR += (((int)sR * (int)Ls.colorR) >> 8) * difQInt >> 4;
        aG += (((int)sG * (int)Ls.colorG) >> 8) * difQInt >> 4;
        aB += (((int)sB * (int)Ls.colorB) >> 8) * difQInt >> 4;
    }
    return { aR, aG, aB };
}

// ─────────────────────────────────────────────────────────────────────────────
// Full pixel pipeline: multi-bounce path tracing with time budget
//
// Keep bouncing reflections until MAX_ITERATIONS reached, then output pixel.
// This models hardware cycle budget: pixel must be output in fixed time.
// Accumulates color via recursive reflection with diminishing weights.
// ─────────────────────────────────────────────────────────────────────────────
inline Pixel tracePixel(int px, int py) {
    const Vec3 O(0, 0, 0);
    Vec3 rayOrig = O;
    Vec3 rayDir  = cameraRayDir(px, py);

    int iterCount = 0;

    // Accumulated color and reflection weight
    RawColor accum = { 0, 0, 0 };
    int weight = 16;   // Q4.4 fixed-point weight [0,16] representing [0,1]

    // ── Multi-bounce loop (until time budget exhausted) ───────────────────────
    for (int bounce = 0; bounce < 4 && iterCount < MAX_ITERATIONS; bounce++) {
        iterCount++;

        // Find nearest hit
        NearestHit nh = findNearest(rayOrig, rayDir);
        if (!nh.hit) {
            // Hit background — accumulate deep-space blue weighted by current path
            accum.r += (0   * weight) >> 4;
            accum.g += (0   * weight) >> 4;
            accum.b += (32  * weight) >> 4;
            break;
        }

        const Sphere& s = SCENE_SPHERES[nh.idx];
        Vec3 hitP = vec3_add(rayOrig, vec3_scale(rayDir, nh.t));
        Vec3 N    = vec3_normalize(vec3_sub(hitP, Vec3(s.cx, s.cy, s.cz)));

        // Shade this hit point (includes shadow rays)
        RawColor shade = shadePoint(hitP, N, s.colorR, s.colorG, s.colorB, iterCount);

        // Accumulate this bounce's contribution
        accum.r += (shade.r * weight) >> 4;
        accum.g += (shade.g * weight) >> 4;
        accum.b += (shade.b * weight) >> 4;

        // Check reflection coefficient
        int rMix = static_cast<int>(s.reflectivity) >> 12;  // Q16.16 → [0,16]
        if (rMix <  0) rMix = 0;
        if (rMix > 16) rMix = 16;

        if (rMix == 0 || iterCount >= MAX_ITERATIONS) break;  // no reflection or out of time

        // Update weight for next bounce (diminish by reflectivity)
        weight = (weight * rMix) >> 4;
        if (weight < 1) break;  // negligible contribution

        // Prepare reflected ray for next bounce
        Q84  eps     = static_cast<Q84>(655);
        rayOrig = vec3_add(hitP, vec3_scale(N, eps));
        rayDir  = reflectDir(rayDir, N);
    }

    return {
        static_cast<uint8_t>(clamp8(accum.r)),
        static_cast<uint8_t>(clamp8(accum.g)),
        static_cast<uint8_t>(clamp8(accum.b))
    };
}
