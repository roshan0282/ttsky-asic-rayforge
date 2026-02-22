// ─────────────────────────────────────────────────────────────────────────────
// tb_sqrt_debug.cpp  —  Debug sqrt implementation
// ─────────────────────────────────────────────────────────────────────────────

#include <verilated.h>
#include "Vq16_sqrt.h"
#include <iostream>
#include <cmath>
#include <iomanip>

// Required by Verilator
double sc_time_stamp() { return 0; }

// Convert Q16.16 to float
float q16_to_float(int32_t q) {
    return q / 65536.0f;
}

// Convert float to Q16.16
int32_t float_to_q16(float f) {
    return (int32_t)(f * 65536.0f);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vq16_sqrt* dut = new Vq16_sqrt;
    
    std::cout << "=== Q16.16 Sqrt Debug Test ===" << std::endl << std::endl;
    
    // Test various values
    float test_values[] = {
        0.25, 0.5, 1.0, 2.0, 3.0, 4.0, 5.0, 10.0, 16.0, 25.0, 100.0, 256.0
    };
    
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    int failures = 0;
    
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Input     Expected  Got       Error     Status" << std::endl;
    std::cout << "--------  --------  --------  --------  ------" << std::endl;
    
    for (int i = 0; i < num_tests; i++) {
        float input = test_values[i];
        float expected = std::sqrt(input);
        
        dut->a = float_to_q16(input);
        dut->eval();
        
        float got = q16_to_float(dut->root);
        float error = std::abs(got - expected);
        float rel_error = error / expected;
        
        bool pass = (rel_error < 0.001f);  // 0.1% tolerance
        
        std::cout << std::setw(8) << input << "  "
                  << std::setw(8) << expected << "  "
                  << std::setw(8) << got << "  "
                  << std::setw(8) << error << "  "
                  << (pass ? "PASS" : "FAIL") << std::endl;
        
        if (!pass) failures++;
    }
    
    std::cout << std::endl;
    std::cout << "Tests: " << num_tests << ", Failures: " << failures << std::endl;
    
    // Detailed test of a problematic range
    std::cout << std::endl << "=== Detailed test (1.0 to 2.0) ===" << std::endl;
    for (float v = 1.0f; v <= 2.0f; v += 0.1f) {
        dut->a = float_to_q16(v);
        dut->eval();
        float got = q16_to_float(dut->root);
        float expected = std::sqrt(v);
        std::cout << "sqrt(" << v << ") = " << got 
                  << " (expected " << expected << ", error " 
                  << std::abs(got - expected) << ")" << std::endl;
    }
    
    delete dut;
    return (failures == 0) ? 0 : 1;
}
