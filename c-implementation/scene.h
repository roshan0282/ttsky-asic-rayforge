#pragma once
// ─────────────────────────────────────────────────────────────────────────────
// scene.h  —  Compile-time scene LUT (spheres + lights)
//
// C++ equivalent of implementation/scene-lut.svh, sourced from
// tools/scene-sample.json.  All values in Q8.4 fixed-point.
//
// Q8.4 raw encoding:  float_value * 16  (e.g. 4.0 → 64, 0.25 → 4)
// ─────────────────────────────────────────────────────────────────────────────

#include "fixed_point.h"
#include <cstdint>
#include <cstddef>

// ── Data types ────────────────────────────────────────────────────────────────

struct Sphere {
    Q84     cx, cy, cz;      // center (Q8.4)
    Q84     radius;           // radius (Q8.4)
    uint8_t colorR, colorG, colorB;
    Q84     reflectivity;     // Q8.4, clamped to [0,1] → [0,16]
};

struct Light {
    Q84     lx, ly, lz;      // position (Q8.4)
    uint8_t colorR, colorG, colorB;
    Q84     intensity;        // Q8.4  (1.0 → 16)
};

// ── Scene data ────────────────────────────────────────────────────────────────
//
//  Camera FOV ~77° HFOV (rawDz=100).  At z=6, screen half-width = 4.8 world.
//  Top spheres r=1.5 at z=6  → ~100 px radius.  cx=±1.75 → ~33 px gap.
//  Bottom sphere r=3.0 below them to catch shadows.
//
//  Sphere 0:  center(-1.75,  0.0,  6.0)  r=1.5  rgb(255, 80, 60)  refl=0.65
//  Sphere 1:  center(+1.75,  0.0,  6.0)  r=1.5  rgb( 60,160,255)  refl=0.65
//  Sphere 2:  center( 0.0,  -4.0,  6.5)  r=3.0  rgb(220,220,220)  refl=0.15
//
//  Light  0:  pos(0.0,  5.0,  6.0)  rgb(255,245,230)  intensity=1.5
//
// Q16.16 raw values (float * 65536):
//  ±1.75→±114688   6.0→393216   1.5→98304   0.65→42598
//   5.0→327680   -4.0→-262144   6.5→425984   3.0→196608   0.15→9830

static const Sphere SCENE_SPHERES[] = {
    //        cx        cy       cz        r      R    G    B    refl
    {     -114688,       0,   393216,   98304,   255,  80,  60,  42598  },  // left:  red-orange
    {      114688,       0,   393216,   98304,    60, 160, 255,  42598  },  // right: sky-blue
    {           0,  -262144,  425984,  196608,   220, 220, 220,   9830  },  // bottom: light gray ground sphere
};

static const Light SCENE_LIGHTS[] = {
    //     lx       ly        lz      R    G    B   intensity
    {       0,   327680,   393216,  255, 245, 230,   150000  },  // centred above both, I=1.5
};

constexpr int SCENE_SPHERE_COUNT = static_cast<int>(sizeof(SCENE_SPHERES) / sizeof(SCENE_SPHERES[0]));
constexpr int SCENE_LIGHT_COUNT  = static_cast<int>(sizeof(SCENE_LIGHTS)  / sizeof(SCENE_LIGHTS[0]));
