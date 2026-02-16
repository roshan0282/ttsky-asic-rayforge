#include <SDL2/SDL.h>
#include <iostream>
#include <cstring>

// Verilator-generated headers
#include "VtbVgaDisplayVerilator.h"
#include "verilated.h"

// Verilator requires sc_time_stamp() function
vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

const int VGA_WIDTH = 160;
const int VGA_HEIGHT = 120;
const int SCALE = 4;  // scale up for vga display

// pixel buffer
uint8_t pixels[VGA_HEIGHT][VGA_WIDTH][3] = {0};

int main(int argc, char* argv[]) {
    SDL_SetMainReady();
    
    // initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL init failed: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    // create Verilator context
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    // create Verilator top module
    VtbVgaDisplayVerilator* top = new VtbVgaDisplayVerilator{contextp};
    
    // reset sequence
    top->resetn = 0;
    top->clock50MHz = 0;
    
    // run a few cycles with reset
    for (int i = 0; i < 100; i++) {
        top->clock50MHz = 0;
        main_time += 10;
        top->eval();
        top->clock50MHz = 1;
        main_time += 10;
        top->eval();
    }
    
    // release reset
    top->resetn = 1;
    
    // SDL window
    const int WINDOW_WIDTH = VGA_WIDTH * SCALE;
    const int WINDOW_HEIGHT = VGA_HEIGHT * SCALE;
    
    SDL_Window* window = SDL_CreateWindow(
        "VGA Display (Verilator)",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_SHOWN
    );
    
    if (!window) {
        std::cerr << "Window creation failed: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB24,
                                             SDL_TEXTUREACCESS_STREAMING,
                                             VGA_WIDTH, VGA_HEIGHT);
    
    bool running = true;
    int frameCounter = 0;
    
    // simulation loop
    while (running) {
        // handle SDL events
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
        
        // simulate in chunks
        const int CYCLES_PER_CHUNK = 16666;  // ~1/3 of a frame at 50MHz
        static int cycle_count = 0;
        
        for (int i = 0; i < CYCLES_PER_CHUNK; i++) {
            top->clock50MHz = 0;
            main_time += 10; // 20ns period = 10ns half-period
            top->eval();
            
            top->clock50MHz = 1;
            main_time += 10;
            top->eval();
            
            cycle_count++;
            
            // capture VGA pixels
            if (top->visible && top->xOrd < VGA_WIDTH && top->yOrd < VGA_HEIGHT) {
                pixels[top->yOrd][top->xOrd][0] = top->red;
                pixels[top->yOrd][top->xOrd][1] = top->green;
                pixels[top->yOrd][top->xOrd][2] = top->blue;
            }
        }
        
        // render frame
        void* pixels_ptr;
        int pitch;
        SDL_LockTexture(texture, NULL, &pixels_ptr, &pitch);
        
        for (int y = 0; y < VGA_HEIGHT; y++) {
            for (int x = 0; x < VGA_WIDTH; x++) {
                uint8_t* dst = (uint8_t*)pixels_ptr + y * pitch + x * 3;
                dst[0] = pixels[y][x][0];
                dst[1] = pixels[y][x][1];
                dst[2] = pixels[y][x][2];
            }
        }
        
        SDL_UnlockTexture(texture);
        
        // render
        SDL_RenderClear(renderer);
        SDL_Rect dst = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};
        SDL_RenderCopy(renderer, texture, NULL, &dst);
        SDL_RenderPresent(renderer);
        
        frameCounter++;
        if (frameCounter % 60 == 0) {
            std::cout << "Frame " << frameCounter << " - Sim time: " << main_time << " ns" << std::endl;
        }
    }
    
    // cleanup
    top->final();
    delete top;
    delete contextp;
    
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}

