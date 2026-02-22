#!/bin/bash
# Build and run raytracer testbench

echo "=== Building raytracer testbench ==="

# Compile with Verilator
verilator --cc --exe --build -j 4 \
    -Wall \
    -Wno-DECLFILENAME \
    -Wno-TIMESCALEMOD \
    -Wno-IMPORTSTAR \
    -Wno-WIDTH \
    -Wno-UNUSED \
    -Wno-UNDRIVEN \
    --top-module vga_raytracer_wrapper \
    -I.. \
    ../primitives_q16.sv \
    ../vec3_q16.sv \
    ../ray_sphere_intersect.sv \
    ../scene_lut.sv \
    ../raytracer_simple.sv \
    ../vga_raytracer_wrapper.sv \
    tb_raytracer.cpp \
    -o raytracer_test

if [ $? -eq 0 ]; then
    echo ""
    echo "=== Running simulation ==="
    ./obj_dir/raytracer_test
    
    if [ -f output.ppm ]; then
        echo ""
        echo "Output saved to: $(pwd)/output.ppm"
        echo "View with: eog output.ppm"
    fi
else
    echo "Build failed!"
    exit 1
fi
