#pragma once
// ─────────────────────────────────────────────────────────────────────────────
// ray_sphere.h  —  Ray-sphere intersection (half-b formulation)
//
// C++ equivalent of implementation/ray-sphere-intersect.sv
//
// Given:
//   Ray:    origin O, direction D (should be normalised)
//   Sphere: centre C, scalar radius r
//
// Algorithm (half-b variant avoids the factor-of-4 under the sqrt):
//   L     = O - C
//   a     = D · D          (= 1 for normalised D)
//   halfB = L · D
//   l2    = L · L
//   c     = l2 - r²
//   disc  = halfB² - a·c
//
//   if disc < 0 → no hit
//   t0 = (-halfB - √disc) / a
//   t1 = (-halfB + √disc) / a
//   pick smallest positive t
// ─────────────────────────────────────────────────────────────────────────────

#include "fixed_point.h"
#include "vec3.h"

struct HitResult {
    bool hit;
    Q84  t;
};

inline HitResult raySphereIntersect(const Vec3& O,
                                    const Vec3& D,
                                    const Vec3& C,
                                    Q84         radius)
{
    // L = O - C
    Vec3 L = vec3_sub(O, C);

    // a = D · D
    Q84 a = vec3_dot(D, D);

    // halfB = L · D
    Q84 halfB = vec3_dot(L, D);

    // l2 = L · L
    Q84 l2 = vec3_dot(L, L);

    // r2 = radius * radius
    Q84 r2 = q84_mul(radius, radius);

    // c = l2 - r2
    Q84 c = q84_sub(l2, r2);

    // disc = halfB*halfB - a*c
    Q84 hb2  = q84_mul(halfB, halfB);
    Q84 ac   = q84_mul(a, c);
    Q84 disc = q84_sub(hb2, ac);

    if (disc < 0 || a == 0) return { false, 0 };

    Q84 sqrtDisc = q84_sqrt(disc);
    Q84 negHalfB = q84_neg(halfB);

    // num0 = -halfB - sqrtDisc,  num1 = -halfB + sqrtDisc
    Q84 num0 = q84_sub(negHalfB, sqrtDisc);
    Q84 num1 = q84_add(negHalfB, sqrtDisc);

    Q84 t0 = q84_div(num0, a);
    Q84 t1 = q84_div(num1, a);

    // Select smallest positive root (matching always_comb in .sv)
    Q84  t   = 0;
    bool hit = false;

    if (t0 > 0 && t1 > 0) {
        hit = true;
        t   = (t0 < t1) ? t0 : t1;
    } else if (t0 > 0) {
        hit = true; t = t0;
    } else if (t1 > 0) {
        hit = true; t = t1;
    }

    return { hit, t };
}
