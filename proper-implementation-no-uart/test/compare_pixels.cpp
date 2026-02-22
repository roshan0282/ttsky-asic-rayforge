// Comparison test: C++ reference vs Verilog for specific pixels
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cmath>

// Q16.16 helpers
typedef int32_t q16_t;
#define Q16_ONE 65536
#define Q16_FRAC_BITS 16

q16_t float_to_q16(double f) {
    return (q16_t)(f * Q16_ONE + (f >= 0 ? 0.5 : -0.5));
}

double q16_to_float(q16_t q) {
    return (double)q / Q16_ONE;
}

q16_t q16_mul(q16_t a, q16_t b) {
    int64_t tmp = (int64_t)a * (int64_t)b;
    tmp += (1 << (Q16_FRAC_BITS - 1)); // Round
    return (q16_t)(tmp >> Q16_FRAC_BITS);
}

q16_t q16_div(q16_t a, q16_t b) {
    if (b == 0) return (a >= 0) ? 0x7FFFFFFF : 0x80000000;
    int64_t tmp = ((int64_t)a << Q16_FRAC_BITS) / b;
    if (tmp > 0x7FFFFFFF) return 0x7FFFFFFF;
    if (tmp < (int64_t)0x80000000) return 0x80000000;
    return (q16_t)tmp;
}

q16_t q16_sqrt(q16_t x) {
    if (x <= 0) return 0;
    
    uint32_t rem = 0;
    uint32_t root = 0;
    uint32_t val = (uint32_t)x;
    
    for (int i = 0; i < 24; i++) {
        root <<= 1;
        rem = (rem << 2) | ((val >> 30) & 0x3);
        val <<= 2;
        
        uint32_t test = (root << 1) | 1;
        if (rem >= test) {
            rem -= test;
            root |= 1;
        }
    }
    
    return (q16_t)root;
}

q16_t q16_dot3(q16_t a0, q16_t a1, q16_t a2, q16_t b0, q16_t b1, q16_t b2) {
    int64_t p0 = (int64_t)a0 * b0;
    int64_t p1 = (int64_t)a1 * b1;
    int64_t p2 = (int64_t)a2 * b2;
    int64_t sum = p0 + p1 + p2;
    sum += (1 << (Q16_FRAC_BITS - 1));
    return (q16_t)(sum >> Q16_FRAC_BITS);
}

// C++ ray generation and normalization
void generate_camera_ray(int px, int py, q16_t& dx, q16_t& dy, q16_t& dz) {
    // Match C++ implementation exactly
    q16_t centered_x = (px - 320) << 14; // Divide by 4 in Q16.16
    q16_t centered_y = (240 - py) << 14;
    q16_t raw_dz = 100 << 16;
    
    // Normalize
    q16_t len_sq = q16_dot3(centered_x, centered_y, raw_dz, centered_x, centered_y, raw_dz);
    q16_t len = q16_sqrt(len_sq);
    
    dx = q16_div(centered_x, len);
    dy = q16_div(centered_y, len);
    dz = q16_div(raw_dz, len);
}

int main() {
    std::cout << "C++ Reference Ray Generation Test\n";
    std::cout << "==================================\n\n";
    
    // Test center pixel
    std::cout << "Pixel (320, 240) - Center:\n";
    q16_t dx, dy, dz;
    generate_camera_ray(320, 240, dx, dy, dz);
    std::cout << "  Raw: dx=" << dx << " dy=" << dy << " dz=" << dz << "\n";
    std::cout << "  Float: dx=" << q16_to_float(dx) << " dy=" << q16_to_float(dy) 
              << " dz=" << q16_to_float(dz) << "\n";
    std::cout << "  Length: " << q16_to_float(q16_sqrt(q16_dot3(dx, dy, dz, dx, dy, dz))) << "\n\n";
    
    // Test pixels that would show ringing
    int test_pixels[][2] = {
        {320, 200},  // Above center
        {320, 280},  // Below center
        {280, 240},  // Left of center
        {360, 240},  // Right of center
        {400, 240},  // Further right
        {320, 150},  // Way above center
        {200, 240},  // Way left
    };
    
    for (auto& p : test_pixels) {
        std::cout << "Pixel (" << p[0] << ", " << p[1] << "):\n";
        generate_camera_ray(p[0], p[1], dx, dy, dz);
        std::cout << "  Raw: dx=" << std::setw(8) << dx << " dy=" << std::setw(8) << dy 
                  << " dz=" << std::setw(8) << dz << "\n";
        std::cout << "  Float: dx=" << std::fixed << std::setprecision(6) 
                  << std::setw(10) << q16_to_float(dx) 
                  << " dy=" << std::setw(10) << q16_to_float(dy)
                  << " dz=" << std::setw(10) << q16_to_float(dz) << "\n";
        
        double len = q16_to_float(q16_sqrt(q16_dot3(dx, dy, dz, dx, dy, dz)));
        std::cout << "  Length: " << len << " (should be ~1.0)\n";
        
        if (std::abs(len - 1.0) > 0.01) {
            std::cout << "  WARNING: Length not normalized!\n";
        }
        std::cout << "\n";
    }
    
    return 0;
}
