#include <SDL2/SDL.h>
#include <iostream>
#include <cstring>

// Verilator-generated headers
#include "VtbOscilloscopeVerilator.h"
#include "verilated.h"

// Verilator requires sc_time_stamp() function
vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

const int VGA_WIDTH = 640;
const int VGA_HEIGHT = 480;
const int SCALE = 1;  // 1:1 scale for oscilloscope

// pixel buffer
uint8_t pixels[VGA_HEIGHT][VGA_WIDTH][3] = {0};

// SDL key to PS/2 scancode mapping (set 2 scancodes)
uint8_t sdlKeyToScancode(SDL_Keycode key) {
    // letters (a-z)
    if (key >= SDLK_a && key <= SDLK_z) {
        uint8_t base[] = {0x1C, 0x32, 0x21, 0x23, 0x24, 0x2B, 0x34, 0x33,
                          0x43, 0x3B, 0x42, 0x4B, 0x3A, 0x31, 0x44, 0x4D,
                          0x15, 0x2D, 0x1B, 0x2C, 0x3C, 0x2A, 0x1D, 0x22,
                          0x35, 0x1A};
        return base[key - SDLK_a];
    }
    // numbers
    if (key == SDLK_0) return 0x45;
    if (key == SDLK_1) return 0x16;
    if (key == SDLK_2) return 0x1E;
    if (key == SDLK_3) return 0x26;
    if (key == SDLK_4) return 0x25;
    if (key == SDLK_5) return 0x2E;
    if (key == SDLK_6) return 0x36;
    if (key == SDLK_7) return 0x3D;
    if (key == SDLK_8) return 0x3E;
    if (key == SDLK_9) return 0x46;
    
    // special
    if (key == SDLK_SPACE) return 0x29;
    if (key == SDLK_RETURN) return 0x5A;
    if (key == SDLK_BACKSPACE) return 0x66;
    if (key == SDLK_ESCAPE) return 0x76;
    
    return 0;
}

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
    VtbOscilloscopeVerilator* top = new VtbOscilloscopeVerilator{contextp};
    
    // reset sequence
    top->resetn = 0;
    top->key_action = 0;
    top->scan_code = 0;
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
        "Oscilloscope (Verilator)",
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
    
    // track if key_action was just set (to pulse for one cycle only)
    bool key_action_pending = false;
    
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
                } else {
                    uint8_t scancode = sdlKeyToScancode(event.key.keysym.sym);
                    if (scancode != 0) {
                        char keyChar = (char)event.key.keysym.sym;
                        std::cout << "Key '" << keyChar << "' (ASCII=" << (int)keyChar 
                                  << ", Scan=0x" << std::hex << (int)scancode << std::dec
                                  << ") | Mode=" << (int)top->debug_screenMode 
                                  << " | ASCIIOut=0x" << std::hex << (int)top->debug_asciiOut << std::dec
                                  << " | Ready=" << (int)top->debug_asciiReady << std::endl;
                        top->scan_code = scancode;
                        top->key_action = 1;
                        key_action_pending = true;
                    } else {
                        std::cout << "Key pressed but no scancode: " << event.key.keysym.sym << std::endl;
                    }
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
            
            // clear key_action after rising edge (pulse for exactly one cycle)
            if (key_action_pending) {
                top->key_action = 0;
                key_action_pending = false;
            }
            
            cycle_count++;
            // periodic debug every 1M cycles (~20ms)
            if (cycle_count % 1000000 == 0) {
                std::cout << "DEBUG: ScreenMode=" << (int)top->debug_screenMode 
                          << " ASCII=0x" << std::hex << (int)top->debug_asciiOut << std::dec
                          << " Ready=" << (int)top->debug_asciiReady << std::endl;
            }
            
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

