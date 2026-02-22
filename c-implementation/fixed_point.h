#pragma once
// ─────────────────────────────────────────────────────────────────────────────
// fixed_point.h  —  Q16.16 fixed-point arithmetic
//
//   - 32-bit signed value stored in int32_t
//   - 16 fractional bits  (1.0 == 65536, range [-32768, ~32767.99998])
//   - Multiplication: ((int64)a * b + 32768) >> 16  (round-to-nearest, clamp)
//   - Division:       ((int64)a << 16) / b          (clamp on overflow/div-by-zero)
//   - Sqrt:           digit-by-digit binary sqrt of (a << 16), 24 iterations
//   - Dot product:    sum of ((int64)xi * yi) >> 16  for each axis
// ─────────────────────────────────────────────────────────────────────────────

#include <cstdint>
#include <cstdlib>

using Q84 = int32_t;   // Q16.16 — name kept for API compatibility

constexpr int  Q84_FRAC  = 16;
constexpr int  Q84_SCALE = 1 << Q84_FRAC;          // 65536
constexpr Q84  Q84_MAX   =  2147483647;              // INT32_MAX  (~32767.99998)
constexpr Q84  Q84_MIN   = -2147483647 - 1;          // INT32_MIN  (-32768.0)

// ── Conversion ───────────────────────────────────────────────────────────────

inline Q84 q84_clamp(int64_t v) {
    if (v >  static_cast<int64_t>(Q84_MAX)) return Q84_MAX;
    if (v <  static_cast<int64_t>(Q84_MIN)) return Q84_MIN;
    return static_cast<Q84>(v);
}

// float → Q16.16  (round-to-nearest, saturate)
inline Q84 q84(float f) {
    double  scaled  = static_cast<double>(f) * static_cast<double>(Q84_SCALE);
    int64_t rounded = static_cast<int64_t>(scaled + (scaled >= 0.0 ? 0.5 : -0.5));
    return q84_clamp(rounded);
}

inline float q84_to_float(Q84 v) {
    return static_cast<float>(v) / static_cast<float>(Q84_SCALE);
}

// ── Arithmetic ────────────────────────────────────────────────────────────────

inline Q84 q84_add(Q84 a, Q84 b) {
    return q84_clamp(static_cast<int64_t>(a) + static_cast<int64_t>(b));
}

inline Q84 q84_sub(Q84 a, Q84 b) {
    return q84_clamp(static_cast<int64_t>(a) - static_cast<int64_t>(b));
}

inline Q84 q84_neg(Q84 a) {
    return q84_clamp(-static_cast<int64_t>(a));
}

// Multiply: (a * b + 32768) >> 16  — round-to-nearest, then saturate
inline Q84 q84_mul(Q84 a, Q84 b) {
    int64_t prod = (static_cast<int64_t>(a) * static_cast<int64_t>(b)
                    + (1LL << (Q84_FRAC - 1))) >> Q84_FRAC;
    return q84_clamp(prod);
}

// Divide: (a << 16) / b  — saturate on overflow or divide-by-zero
inline Q84 q84_div(Q84 a, Q84 b) {
    if (b == 0) return (a >= 0) ? Q84_MAX : Q84_MIN;
    int64_t quot = (static_cast<int64_t>(a) << Q84_FRAC) / static_cast<int64_t>(b);
    return q84_clamp(quot);
}

// Square-root: digit-by-digit binary sqrt of (a << 16)
// Computes floor(sqrt(a_float) * 65536).  24 iterations cover the full positive
// Q16.16 range: sqrt(INT32_MAX * 65536) < 2^24.
inline Q84 q84_sqrt(Q84 a) {
    if (a <= 0) return 0;
    uint64_t v    = static_cast<uint64_t>(static_cast<uint32_t>(a)) << Q84_FRAC;
    uint64_t rem  = 0;
    uint64_t root = 0;
    for (int i = 23; i >= 0; i--) {
        rem            = (rem << 2) | ((v >> (2 * i)) & 3u);
        uint64_t trial = (root << 2) | 1u;
        if (rem >= trial) {
            rem  -= trial;
            root  = (root << 1) | 1u;
        } else {
            root <<= 1;
        }
    }
    return q84_clamp(static_cast<int64_t>(root));
}

// ── Dot product (3D) ──────────────────────────────────────────────────────────
// sum of ((int64)xi * yi) >> 16  for each axis
inline Q84 q84_dot3(Q84 ax, Q84 ay, Q84 az,
                    Q84 bx, Q84 by, Q84 bz) {
    int64_t s = ((static_cast<int64_t>(ax) * static_cast<int64_t>(bx)) >> Q84_FRAC)
              + ((static_cast<int64_t>(ay) * static_cast<int64_t>(by)) >> Q84_FRAC)
              + ((static_cast<int64_t>(az) * static_cast<int64_t>(bz)) >> Q84_FRAC);
    return q84_clamp(s);
}
