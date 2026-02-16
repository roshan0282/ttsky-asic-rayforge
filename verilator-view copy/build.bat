@echo off
REM Build oscilloscope with Verilator

echo Building oscilloscope with Verilator...
make

if exist oscilloscopeVerilator.exe (
    echo.
    echo Build successful!
    echo Run with: oscilloscopeVerilator.exe
    echo.
    echo Controls:
    echo   's' - Start oscilloscope waveform screen
    echo   'h' - Help screen
    echo   'q' - Quit/back
    echo   ESC - Exit application
) else (
    echo.
    echo Build failed! Check errors above.
)

