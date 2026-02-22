// Debug testbench: render specific pixels and compare
#include <iostream>
#include <iomanip>
#include "verilated.h"
#include "Vvga_raytracer_wrapper.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vvga_raytracer_wrapper* top = new Vvga_raytracer_wrapper;
    
    // Proper reset sequence
    top->clk = 0;
    top->rst_n = 0;
    top->pixel_valid = 0;
    top->eval();
    
    top->clk = 1;
    top->eval();
    
    top->clk = 0;
    top->rst_n = 1;
    top->eval();
    
    top->clk = 1;
    top->eval();
    
    std::cout << "Testing specific pixels:\n";
    std::cout << "========================\n\n";
    
    int test_pixels[][2] = {
        {320, 240},  // Center
        {320, 200},  // Above center
        {320, 280},  // Below center
        {280, 240},  // Left
        {360, 240},  // Right
        {400, 300},  // Lower right
        {200, 150},  // Upper left
    };
    
    for (auto& p : test_pixels) {
        // Set pixel and assert valid
        top->pixel_x = p[0];
        top->pixel_y = p[1];
        top->pixel_valid = 1;
        
        // Cycle 1: IDLE -> COMPUTE (latch pixel)
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        
        top->pixel_valid = 0;
        
        // Cycle 2: COMPUTE -> OUTPUT
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        
        // Cycle 3: OUTPUT -> IDLE (read output)
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        
        // Read output (should be valid now)
        std::cout << "Pixel (" << std::setw(3) << p[0] << ", " << std::setw(3) << p[1] << "): ";
        std::cout << "R=" << std::setw(3) << (int)top->rgb_r;
        std::cout << " G=" << std::setw(3) << (int)top->rgb_g;
        std::cout << " B=" << std::setw(3) << (int)top->rgb_b;
        std::cout << " valid=" << (int)top->output_valid << "\n";
    }
    
    delete top;
    return 0;
}

double sc_time_stamp() { return 0; }
