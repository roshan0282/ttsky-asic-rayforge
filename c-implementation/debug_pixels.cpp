// C++ reference: output same test pixels for comparison
#include <iostream>
#include <iomanip>
#include "fixed_point.h"
#include "vec3.h"
#include "scene.h"
#include "ray_sphere.h"
#include "raytracer.h"

int main() {
    std::cout << "C++ Reference Pixel Values:\n";
    std::cout << "===========================\n\n";
    
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
        Pixel pix = tracePixel(p[0], p[1]);
        
        std::cout << "Pixel (" << std::setw(3) << p[0] << ", " << std::setw(3) << p[1] << "): ";
        std::cout << "R=" << std::setw(3) << (int)pix.r;
        std::cout << " G=" << std::setw(3) << (int)pix.g;
        std::cout << " B=" << std::setw(3) << (int)pix.b << "\n";
    }
    
    return 0;
}
