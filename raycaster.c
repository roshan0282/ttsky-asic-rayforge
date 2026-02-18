/*
 * Bare-Metal RISC-V Raycasting Engine
 * Single-file version for CPUlator
 * Target: DE1-SoC with Nios V (RISC-V)
 * Controls: WASD keys via PS/2 keyboard
 * Features: 3D raycasting view + minimap
 */

#include <stdint.h>
#include <math.h>

// ============================================================================
// HARDWARE DEFINITIONS
// ============================================================================

// Memory map addresses for CPUlator RISC-V DE1-SoC
#define VGA_FRAMEBUFFER_BASE    0x08000000  // VGA Pixel Buffer
#define PS2_BASE                0xFF200100  // PS/2 Keyboard

// PS/2 Keyboard registers
#define PS2_DATA                (*(volatile uint32_t *)(PS2_BASE))
#define PS2_CONTROL             (*(volatile uint32_t *)(PS2_BASE + 4))

// VGA 320x240 for CPUlator
#define SCREEN_WIDTH            320
#define SCREEN_HEIGHT           240

// Raycasting parameters
#define MAP_WIDTH               16
#define MAP_HEIGHT              16
#define FOV                     60.0f
#define NUM_RAYS                SCREEN_WIDTH
#define MAX_DEPTH               20.0f

// Minimap parameters
#define MINIMAP_SCALE           8
#define MINIMAP_SIZE            (MAP_WIDTH * MINIMAP_SCALE)

// Color definitions (RGB565)
#define COLOR_BLACK             0x0000
#define COLOR_WHITE             0xFFFF
#define COLOR_RED               0xF800
#define COLOR_GREEN             0x07E0
#define COLOR_BLUE              0x001F
#define COLOR_YELLOW            0xFFE0
#define COLOR_CYAN              0x07FF
#define COLOR_MAGENTA           0xF81F
#define COLOR_GRAY              0x7BEF
#define COLOR_DARKGRAY          0x39E7
#define COLOR_LIGHTBLUE         0x867F
#define COLOR_DARKGREEN         0x0320

// Key scan codes
#define KEY_W                   0x1D
#define KEY_A                   0x1C
#define KEY_S                   0x1B
#define KEY_D                   0x23

// ============================================================================
// GLOBAL VARIABLES
// ============================================================================

// Map: 1 = wall, 0 = empty
int map[MAP_HEIGHT][MAP_WIDTH] = {
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,1,1,1,0,0,0,0,1,1,1,0,0,1},
    {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1},
    {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1},
    {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1},
    {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1},
    {1,0,0,1,1,1,0,0,0,0,1,1,1,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

// Player state
float playerX = 8.5f;
float playerY = 8.5f;
float playerAngle = 0.0f;

// Movement constants
#define MOVE_SPEED      0.1f
#define ROTATE_SPEED    0.05f

// ============================================================================
// MATH HELPERS
// ============================================================================

#define PI 3.14159265358979323846f
#define DEG_TO_RAD(deg) ((deg) * PI / 180.0f)

float fast_sin(float x) {
    return sinf(x);
}

float fast_cos(float x) {
    return cosf(x);
}

float fast_tan(float x) {
    return tanf(x);
}

float fast_sqrt(float x) {
    return sqrtf(x);
}

// ============================================================================
// VGA DRAWING FUNCTIONS
// ============================================================================

void plot_pixel(int x, int y, uint16_t color) {
    if (x >= 0 && x < SCREEN_WIDTH && y >= 0 && y < SCREEN_HEIGHT) {
        *(volatile uint16_t *)(VGA_FRAMEBUFFER_BASE + (y << 10) + (x << 1)) = color;
    }
}

void draw_rect(int x, int y, int w, int h, uint16_t color) {
    for (int j = y; j < y + h && j < SCREEN_HEIGHT; j++) {
        for (int i = x; i < x + w && i < SCREEN_WIDTH; i++) {
            plot_pixel(i, j, color);
        }
    }
}

void draw_line(int x0, int y0, int x1, int y1, uint16_t color) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = (dx > dy ? dx : dy);
    if (steps < 0) steps = -steps;
    
    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;
    
    float x = x0;
    float y = y0;
    
    for (int i = 0; i <= steps; i++) {
        plot_pixel((int)x, (int)y, color);
        x += xInc;
        y += yInc;
    }
}

// Removed clear_screen - we now draw each vertical column completely

// ============================================================================
// PS/2 KEYBOARD FUNCTIONS
// ============================================================================

uint8_t read_ps2_key() {
    uint32_t data = PS2_DATA;
    if (data & 0x8000) {  // Check if data is valid (bit 15)
        return (uint8_t)(data & 0xFF);
    }
    return 0;
}

void process_input() {
    uint8_t key = read_ps2_key();
    
    if (key == 0) return;
    
    float newX = playerX;
    float newY = playerY;
    
    switch (key) {
        case KEY_W: // Move forward
            newX = playerX + fast_cos(playerAngle) * MOVE_SPEED;
            newY = playerY + fast_sin(playerAngle) * MOVE_SPEED;
            break;
            
        case KEY_S: // Move backward
            newX = playerX - fast_cos(playerAngle) * MOVE_SPEED;
            newY = playerY - fast_sin(playerAngle) * MOVE_SPEED;
            break;
            
        case KEY_A: // Rotate left
            playerAngle -= ROTATE_SPEED;
            break;
            
        case KEY_D: // Rotate right
            playerAngle += ROTATE_SPEED;
            break;
    }
    
    // Collision detection
    int mapX = (int)newX;
    int mapY = (int)newY;
    
    if (mapX >= 0 && mapX < MAP_WIDTH && mapY >= 0 && mapY < MAP_HEIGHT) {
        if (map[mapY][mapX] == 0) {
            playerX = newX;
            playerY = newY;
        }
    }
    
    // Normalize angle
    while (playerAngle < 0) playerAngle += 2 * PI;
    while (playerAngle >= 2 * PI) playerAngle -= 2 * PI;
}

// ============================================================================
// RAYCASTING ENGINE
// ============================================================================

float cast_ray(float rayAngle) {
    float rayX = playerX;
    float rayY = playerY;
    
    float rayDirX = fast_cos(rayAngle);
    float rayDirY = fast_sin(rayAngle);
    
    float stepSize = 0.02f;
    float distance = 0.0f;
    
    while (distance < MAX_DEPTH) {
        rayX += rayDirX * stepSize;
        rayY += rayDirY * stepSize;
        distance += stepSize;
        
        int mapX = (int)rayX;
        int mapY = (int)rayY;
        
        if (mapX < 0 || mapX >= MAP_WIDTH || mapY < 0 || mapY >= MAP_HEIGHT) {
            return MAX_DEPTH;
        }
        
        if (map[mapY][mapX] == 1) {
            return distance;
        }
    }
    
    return MAX_DEPTH;
}

void render_3d_view() {
    float rayAngle = playerAngle - DEG_TO_RAD(FOV / 2.0f);
    float angleStep = DEG_TO_RAD(FOV) / (float)NUM_RAYS;
    
    uint16_t ceilingColor = 0x2104;  // Dark blue
    uint16_t floorColor = 0x3186;    // Dark gray
    
    for (int ray = 0; ray < NUM_RAYS; ray++) {
        float distance = cast_ray(rayAngle);
        
        // Fix fish-eye effect
        distance = distance * fast_cos(rayAngle - playerAngle);
        
        // Calculate wall height
        int wallHeight = (int)((SCREEN_HEIGHT / distance) * 0.5f);
        if (wallHeight > SCREEN_HEIGHT) wallHeight = SCREEN_HEIGHT;
        
        int wallTop = (SCREEN_HEIGHT / 2) - (wallHeight / 2);
        int wallBottom = wallTop + wallHeight;
        
        // Calculate shading based on distance
        uint16_t wallColor;
        if (distance < 3.0f) {
            wallColor = COLOR_WHITE;
        } else if (distance < 6.0f) {
            wallColor = COLOR_GRAY;
        } else if (distance < 10.0f) {
            wallColor = COLOR_DARKGRAY;
        } else {
            wallColor = 0x2104;  // Very dark
        }
        
        // Draw complete vertical column: ceiling, wall, floor
        for (int y = 0; y < SCREEN_HEIGHT; y++) {
            uint16_t color;
            if (y < wallTop) {
                color = ceilingColor;  // Ceiling
            } else if (y < wallBottom) {
                color = wallColor;     // Wall
            } else {
                color = floorColor;    // Floor
            }
            plot_pixel(ray, y, color);
        }
        
        rayAngle += angleStep;
    }
}

// ============================================================================
// MINIMAP
// ============================================================================

void draw_minimap() {
    int offsetX = 5;
    int offsetY = 5;
    
    int playerScreenX = offsetX + (int)(playerX * MINIMAP_SCALE);
    int playerScreenY = offsetY + (int)(playerY * MINIMAP_SCALE);
    
    // Draw minimap pixel by pixel
    for (int screenY = offsetY - 1; screenY < offsetY + MINIMAP_SIZE + 1; screenY++) {
        for (int screenX = offsetX - 1; screenX < offsetX + MINIMAP_SIZE + 1; screenX++) {
            uint16_t color;
            
            // Check if this is the border
            if (screenX == offsetX - 1 || screenX == offsetX + MINIMAP_SIZE ||
                screenY == offsetY - 1 || screenY == offsetY + MINIMAP_SIZE) {
                color = COLOR_WHITE;
            }
            // Check if this is part of the player (3x3 red square)
            else if (screenX >= playerScreenX - 1 && screenX <= playerScreenX + 1 &&
                     screenY >= playerScreenY - 1 && screenY <= playerScreenY + 1) {
                color = COLOR_RED;
            }
            // Otherwise, draw the map tile
            else {
                int mapX = (screenX - offsetX) / MINIMAP_SCALE;
                int mapY = (screenY - offsetY) / MINIMAP_SCALE;
                
                // Check if we're on a grid line (spacing between tiles)
                int tilePixelX = (screenX - offsetX) % MINIMAP_SCALE;
                int tilePixelY = (screenY - offsetY) % MINIMAP_SCALE;
                
                if (tilePixelX == MINIMAP_SCALE - 1 || tilePixelY == MINIMAP_SCALE - 1) {
                    color = COLOR_BLACK;  // Grid line
                } else if (mapX >= 0 && mapX < MAP_WIDTH && mapY >= 0 && mapY < MAP_HEIGHT) {
                    color = (map[mapY][mapX] == 1) ? COLOR_DARKGRAY : COLOR_BLACK;
                } else {
                    color = COLOR_BLACK;
                }
            }
            
            plot_pixel(screenX, screenY, color);
        }
    }
    
    // Draw player direction line on top
    int dirEndX = playerScreenX + (int)(fast_cos(playerAngle) * 10);
    int dirEndY = playerScreenY + (int)(fast_sin(playerAngle) * 10);
    draw_line(playerScreenX, playerScreenY, dirEndX, dirEndY, COLOR_YELLOW);
}

// ============================================================================
// MAIN GAME LOOP
// ============================================================================

void delay_ms(int ms) {
    for (volatile int i = 0; i < ms * 1000; i++) {
        __asm__ volatile ("nop");
    }
}

int main(void) {
    // Main game loop
    while (1) {
        // Process keyboard input
        process_input();
        
        // Render 3D view (draws complete screen)
        render_3d_view();
        
        // Draw minimap on top
        draw_minimap();
        
        // Small delay to control frame rate
        delay_ms(1);
    }
    
    return 0;
}
