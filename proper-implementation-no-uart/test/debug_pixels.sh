#!/bin/bash
cd "$(dirname "$0")"
echo "=== Building debug pixel test ==="
verilator --cc --exe --build -j 4 -Wall \
    -Wno-DECLFILENAME -Wno-TIMESCALEMOD -Wno-IMPORTSTAR \
    -Wno-WIDTH -Wno-UNUSED -Wno-UNDRIVEN \
    --top-module vga_raytracer_wrapper \
    -I.. \
    ../primitives_q16.sv \
    ../vec3_q16.sv \
    ../ray_sphere_intersect.sv \
    ../scene_lut.sv \
    ../raytracer_simple.sv \
    ../vga_raytracer_wrapper.sv \
    tb_debug_pixels.cpp \
    -o debug_pixels

if [ $? -eq 0 ]; then
    echo "=== Running debug test ==="
    ./obj_dir/debug_pixels
else
    echo "Build failed!"
    exit 1
fi
