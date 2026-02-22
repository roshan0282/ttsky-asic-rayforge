// ─────────────────────────────────────────────────────────────────────────────
// main.cpp  —  SDL2 window + Q8.4 raytracer render loop
//
// Renders a 640 × 480 frame using the Q8.4 fixed-point pipeline defined in
// raytracer.h, then displays it in an SDL2 window and waits for input.
// ─────────────────────────────────────────────────────────────────────────────

#include <SDL2/SDL.h>
#include <iostream>
#include <cstdint>
#include <cstdio>

#include "raytracer.h"

static constexpr int SCREEN_W = 640;
static constexpr int SCREEN_H = 480;

int main(int /*argc*/, char* /*argv*/[]) {
    // ── SDL init ─────────────────────────────────────────────────────────────
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init failed: " << SDL_GetError() << "\n";
        return 1;
    }

    SDL_Window* win = SDL_CreateWindow(
        "Q8.4 Fixed-Point Raytracer  [ESC to quit]",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        SCREEN_W, SCREEN_H,
        SDL_WINDOW_SHOWN);
    if (!win) {
        std::cerr << "SDL_CreateWindow failed: " << SDL_GetError() << "\n";
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    if (!ren) ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);

    SDL_Texture* tex = SDL_CreateTexture(
        ren,
        SDL_PIXELFORMAT_RGB24,
        SDL_TEXTUREACCESS_STREAMING,
        SCREEN_W, SCREEN_H);

    // ── Render ───────────────────────────────────────────────────────────────
    // Static pixel buffer (RGB24, row-major)
    static uint8_t pixels[SCREEN_H][SCREEN_W][3];

    std::printf("Rendering %d×%d …\n", SCREEN_W, SCREEN_H);

    for (int py = 0; py < SCREEN_H; py++) {
        for (int px = 0; px < SCREEN_W; px++) {
            Pixel p = tracePixel(px, py);
            pixels[py][px][0] = p.r;
            pixels[py][px][1] = p.g;
            pixels[py][px][2] = p.b;
        }
        // Progress bar every 60 lines
        if (py % 60 == 59) {
            std::printf("  row %4d / %d done\n", py + 1, SCREEN_H);
            std::fflush(stdout);
        }
    }
    std::printf("Render complete.\n");

    // Upload to GPU texture
    SDL_UpdateTexture(tex, nullptr, pixels, SCREEN_W * 3);

    // ── Event loop ────────────────────────────────────────────────────────────
    bool running = true;
    SDL_Event ev;
    while (running) {
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_QUIT) running = false;
            if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_ESCAPE)
                running = false;
        }
        SDL_RenderClear(ren);
        SDL_RenderCopy(ren, tex, nullptr, nullptr);
        SDL_RenderPresent(ren);
        SDL_Delay(16);
    }

    // ── Cleanup ───────────────────────────────────────────────────────────────
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
