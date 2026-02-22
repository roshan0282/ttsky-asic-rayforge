// ─────────────────────────────────────────────────────────────────────────────
// tb_raytracer.cpp  —  Simple testbench for Q16.16 raytracer
//
// Renders full frame and outputs to PPM file for verification
// ─────────────────────────────────────────────────────────────────────────────

#include <verilated.h>
#include "Vvga_raytracer_wrapper.h"
#include <iostream>
#include <fstream>
#include <cstdint>

// Required by Verilator
double sc_time_stamp() { return 0; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Instantiate DUT
    Vvga_raytracer_wrapper* dut = new Vvga_raytracer_wrapper;
    
    // Reset
    dut->clk = 0;
    dut->rst_n = 0;
    dut->pixel_valid = 0;
    dut->eval();
    
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    
    dut->rst_n = 1;
    dut->eval();
    
    // Output buffer
    const int WIDTH = 640;
    const int HEIGHT = 480;
    uint8_t framebuffer[HEIGHT][WIDTH][3];
    
    std::cout << "Rendering " << WIDTH << "x" << HEIGHT << " frame..." << std::endl;
    
    int total_pixels = WIDTH * HEIGHT;
    int pixels_done = 0;
    
    // Render all pixels (handshake with output_valid)
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // Set pixel coordinates and pulse valid for one cycle
            dut->pixel_x = x;
            dut->pixel_y = y;
            dut->pixel_valid = 1;

            dut->clk = 0;
            dut->eval();
            dut->clk = 1;
            dut->eval();

            dut->pixel_valid = 0;

            // Wait until DUT reports valid output for this pixel
            bool got_pixel = false;
            for (int guard = 0; guard < 32 && !got_pixel; guard++) {
                dut->clk = 0;
                dut->eval();
                dut->clk = 1;
                dut->eval();

                if (dut->output_valid) {
                    got_pixel = true;
                }
            }

            if (!got_pixel) {
                std::cerr << "Timeout waiting for output_valid at pixel (" << x << ", " << y << ")" << std::endl;
                delete dut;
                return 1;
            }
            
            // Capture output
            framebuffer[y][x][0] = dut->rgb_r;
            framebuffer[y][x][1] = dut->rgb_g;
            framebuffer[y][x][2] = dut->rgb_b;
            
            pixels_done++;
            if (pixels_done % 10000 == 0) {
                std::cout << "  " << pixels_done << "/" << total_pixels 
                         << " (" << (pixels_done * 100 / total_pixels) << "%)" << std::endl;
            }
        }
    }
    
    std::cout << "Rendering complete. Writing output.ppm..." << std::endl;
    
    // Write PPM file
    std::ofstream ppm("output.ppm", std::ios::binary);
    ppm << "P6\n" << WIDTH << " " << HEIGHT << "\n255\n";
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            ppm.write((char*)framebuffer[y][x], 3);
        }
    }
    ppm.close();
    
    std::cout << "Done! View with: eog output.ppm" << std::endl;
    
    // Test a few specific pixels for debugging
    std::cout << "\nSample pixels:" << std::endl;
    std::cout << "  (320, 240) center: R=" << (int)framebuffer[240][320][0] 
              << " G=" << (int)framebuffer[240][320][1]
              << " B=" << (int)framebuffer[240][320][2] << std::endl;
    std::cout << "  (0, 0) corner: R=" << (int)framebuffer[0][0][0]
              << " G=" << (int)framebuffer[0][0][1]
              << " B=" << (int)framebuffer[0][0][2] << std::endl;
    
    delete dut;
    return 0;
}
