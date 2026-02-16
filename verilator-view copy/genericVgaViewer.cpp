#include <SDL2/SDL.h>
#include <iostream>
#include <cstring>

// Verilator-generated headers
#include "VtbGenericVga.h"
#include "verilated.h"

// Verilator requires sc_time_stamp() function
vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

const int VGA_WIDTH = 640;
const int VGA_HEIGHT = 480;
const int SCALE = 1;  // Display at native resolution

// Pixel buffer
uint8_t pixels[VGA_HEIGHT][VGA_WIDTH][3] = {0};

int main(int argc, char* argv[]) {
    SDL_SetMainReady();
    
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL init failed: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    // Create SDL window
    SDL_Window* window = SDL_CreateWindow(
        "Generic VGA Viewer - Verilator",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        VGA_WIDTH * SCALE,
        VGA_HEIGHT * SCALE,
        SDL_WINDOW_SHOWN
    );
    
    if (!window) {
        std::cerr << "Window creation failed: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    
    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Renderer creation failed: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    
    // Create texture for pixel data
    SDL_Texture* texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_RGB24,
        SDL_TEXTUREACCESS_STREAMING,
        VGA_WIDTH,
        VGA_HEIGHT
    );
    
    if (!texture) {
        std::cerr << "Texture creation failed: " << SDL_GetError() << std::endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    
    // Create Verilator context
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    // Create Verilator top module
    VtbGenericVga* top = new VtbGenericVga{contextp};
    
    // Reset sequence
    top->resetn = 0;
    top->clock50MHz = 0;
    
    std::cout << "Initializing VGA viewer..." << std::endl;
    std::cout << "Resolution: " << VGA_WIDTH << "x" << VGA_HEIGHT << std::endl;
    
    // Run reset for a few cycles
    for (int i = 0; i < 100; i++) {
        top->clock50MHz = 0;
        main_time += 10;
        top->eval();
        top->clock50MHz = 1;
        main_time += 10;
        top->eval();
    }
    
    // Release reset
    top->resetn = 1;
    
    std::cout << "Reset complete. Starting simulation..." << std::endl;
    
    // Main simulation loop
    bool running = true;
    bool frameReady = false;
    int lastVSync = 0;
    
    while (running && !contextp->gotFinish()) {
        // Handle SDL events
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            } else if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_ESCAPE) {
                    running = false;
                }
            }
        }
        
        // Run simulation
        for (int cycle = 0; cycle < 1000 && running; cycle++) {
            // Toggle clock
            top->clock50MHz = 0;
            main_time += 10;
            top->eval();
            
            top->clock50MHz = 1;
            main_time += 10;
            top->eval();
            
            // Capture pixel data during visible period
            if (top->visible) {
                int x = top->xOrd;
                int y = top->yOrd;
                
                if (x >= 0 && x < VGA_WIDTH && y >= 0 && y < VGA_HEIGHT) {
                    pixels[y][x][0] = top->red;
                    pixels[y][x][1] = top->green;
                    pixels[y][x][2] = top->blue;
                }
            }
            
            // Detect VSync falling edge (frame complete)
            if (lastVSync == 1 && top->vSync == 0) {
                frameReady = true;
            }
            lastVSync = top->vSync;
            
            // Update display when frame is ready
            if (frameReady) {
                frameReady = false;
                
                // Update texture with pixel data
                SDL_UpdateTexture(texture, NULL, pixels, VGA_WIDTH * 3);
                
                // Render to screen
                SDL_RenderClear(renderer);
                SDL_RenderCopy(renderer, texture, NULL, NULL);
                SDL_RenderPresent(renderer);
            }
        }
    }
    
    std::cout << "Shutting down..." << std::endl;
    
    // Cleanup
    delete top;
    delete contextp;
    
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    std::cout << "Done." << std::endl;
    return 0;
}
