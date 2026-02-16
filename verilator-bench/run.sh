#!/bin/bash
# build and run script for verilator vga viewer
# usage: bash run.sh [clean]
# edit config.sh to change project settings

# load configuration
if [ -f config.sh ]; then
    source config.sh
else
    echo "error: config.sh not found!"
    echo "please create config.sh with your project settings"
    exit 1
fi

echo "==========================================="
echo "Verilator-Bench"
echo "==========================================="
echo "source folder: $VERILATOR_SOURCE_FOLDER"
echo "top module: $VERILATOR_TOP_MODULE"
echo "testbench: $VERILATOR_TESTBENCH"
echo ""

# check if source folder exists
if [ ! -d "$VERILATOR_SOURCE_FOLDER" ]; then
    echo "error: source folder not found: $VERILATOR_SOURCE_FOLDER"
    exit 1
fi

# clean if requested
if [ "$1" = "clean" ]; then
    echo "cleaning previous build..."
    make clean
    echo ""
fi

# build
echo "building..."
make generic

if [ $? -eq 0 ]; then
    echo ""
    echo "==========================================="
    echo "Build Successful!"
    echo "==========================================="
    echo ""
    echo "running vga viewer..."
    echo "controls: ESC to exit"
    echo ""
    ./generic_vga_viewer.exe
else
    echo ""
    echo "==========================================="
    echo "Build Failed! Check errors above"
    echo "==========================================="
    exit 1
fi

