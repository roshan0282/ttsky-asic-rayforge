@echo off
REM Quick test script for Q16.16 modules (Windows)

echo === Testing Q16.16 Primitives ===

REM Compile with Verilator
verilator --binary --trace -Wall primitives_q16.sv tb_q16_basic.sv --top-module tb_q16_basic -Wno-WIDTH -Wno-UNUSED -Wno-UNDRIVEN

if %ERRORLEVEL% EQU 0 (
    echo Compilation successful, running simulation...
    obj_dir\Vtb_q16_basic.exe
) else (
    echo Compilation failed!
    exit /b 1
)
