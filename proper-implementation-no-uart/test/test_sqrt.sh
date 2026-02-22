#!/bin/bash
# Test sqrt specifically

echo "=== Testing Q16.16 Sqrt Implementation ==="

verilator --cc --exe --build -j 4 \
    -Wall \
    -Wno-DECLFILENAME \
    -Wno-TIMESCALEMOD \
    --top-module q16_sqrt \
    ../primitives_q16.sv \
    tb_sqrt_debug.cpp \
    -o sqrt_test

if [ $? -eq 0 ]; then
    echo ""
    ./obj_dir/sqrt_test
else
    echo "Build failed!"
    exit 1
fi
