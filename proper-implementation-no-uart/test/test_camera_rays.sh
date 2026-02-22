#!/bin/bash
cd "$(dirname "$0")"
g++ -std=c++17 -O2 -o compare_pixels compare_pixels.cpp
./compare_pixels
