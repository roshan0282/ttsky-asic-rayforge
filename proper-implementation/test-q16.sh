#!/bin/bash
# Quick test script for Q16.16 modules

echo "=== Testing Q16.16 Primitives ==="

# Compile with Verilator
verilator --binary --trace \
    -Wall \
    primitives_q16.sv \
    tb_q16_basic.sv \
    --top-module tb_q16_basic \
    -Wno-WIDTH \
    -Wno-UNUSED \
    -Wno-UNDRIVEN

# Run if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful, running simulation..."
    ./obj_dir/Vtb_q16_basic
else
    echo "Compilation failed!"
    exit 1
fi
