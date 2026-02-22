#pragma once
// ─────────────────────────────────────────────────────────────────────────────
// vec3.h  —  Q8.4 fixed-point 3-D vector operations
//
// Mirrors fixed_vec3_sub / fixed_vec3_add / fixed_vec3_scalar_mul /
//         fixed_vec3_normalize from primitives.v
// ─────────────────────────────────────────────────────────────────────────────

#include "fixed_point.h"

struct Vec3 {
    Q84 x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    Vec3(Q84 x, Q84 y, Q84 z) : x(x), y(y), z(z) {}
};

// ── Component-wise arithmetic ─────────────────────────────────────────────────

inline Vec3 vec3_add(const Vec3& a, const Vec3& b) {
    return { q84_add(a.x, b.x), q84_add(a.y, b.y), q84_add(a.z, b.z) };
}

inline Vec3 vec3_sub(const Vec3& a, const Vec3& b) {
    return { q84_sub(a.x, b.x), q84_sub(a.y, b.y), q84_sub(a.z, b.z) };
}

// Scalar-multiply each component by s  (Q8.4 × Q8.4 → Q8.4)
inline Vec3 vec3_scale(const Vec3& v, Q84 s) {
    return { q84_mul(v.x, s), q84_mul(v.y, s), q84_mul(v.z, s) };
}

// ── Dot product ───────────────────────────────────────────────────────────────

inline Q84 vec3_dot(const Vec3& a, const Vec3& b) {
    return q84_dot3(a.x, a.y, a.z, b.x, b.y, b.z);
}

// ── Normalization  (mirrors fixed_vec3_normalize) ────────────────────────────
// 1. mag2 = dot(v, v)
// 2. mag  = sqrt(mag2)
// 3. each component / mag  (returns zero-vector if mag == 0)
inline Vec3 vec3_normalize(const Vec3& v) {
    Q84 mag2 = vec3_dot(v, v);
    Q84 mag  = q84_sqrt(mag2);
    if (mag <= 0) return Vec3(0, 0, 0);
    return { q84_div(v.x, mag), q84_div(v.y, mag), q84_div(v.z, mag) };
}
