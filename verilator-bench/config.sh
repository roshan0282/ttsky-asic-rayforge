#!/bin/bash
# verilator-bench configuration for SDL VGA viewer
# usage:
#   cd /c/2w/ttsky-asic/verilator-bench
#   bash run.sh clean

# verilog source directory (all dependent .sv/.v files are auto-included)
export VERILATOR_SOURCE_FOLDER=/c/2w/ttsky-asic/proper-implementation

# top module that matches tb/tbGenericVga.v interface:
#   clk, rst_n, pixel_x, pixel_y, pixel_valid, rgb_r, rgb_g, rgb_b
export VERILATOR_TOP_MODULE=raytracer_simple

# generic VGA testbench used by the SDL viewer
export VERILATOR_TESTBENCH=tb/tbGenericVga.v

