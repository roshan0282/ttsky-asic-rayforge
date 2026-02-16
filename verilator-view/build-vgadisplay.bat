@echo off
REM Build vgaDisplay with Verilator

echo Building vgaDisplay with Verilator...
make vgaDisplayVerilator

if exist vgaDisplayVerilator.exe (
    echo.
    echo Build successful!
    echo Run with: vgaDisplayVerilator.exe
    echo.
    echo Controls:
    echo   ESC - Exit application
) else (
    echo.
    echo Build failed! Check errors above.
)

