@echo off
REM Unified Verilator VGA Viewer
REM Usage: verilator-view.bat <source-folder> [top-module]
REM Example: verilator-view.bat ..\tiniest-gpu tt_um_pongsagon_tinygpu_v2

setlocal enabledelayedexpansion

REM Check for source folder argument
if "%~1"=="" (
    echo Error: Source folder required
    echo.
    echo Usage: verilator-view.bat ^<source-folder^> [top-module]
    echo   source-folder: Path to folder containing Verilog files
    echo   top-module:    Top module name ^(optional, will auto-detect if not provided^)
    echo.
    echo Example: verilator-view.bat ..\tiniest-gpu tt_um_pongsagon_tinygpu_v2
    exit /b 1
)

set SOURCE_FOLDER=%~1
set TOP_MODULE=%~2

REM Verify source folder exists
if not exist "%SOURCE_FOLDER%" (
    echo Error: Source folder not found: %SOURCE_FOLDER%
    exit /b 1
)

REM Convert to absolute path
pushd "%SOURCE_FOLDER%"
set SOURCE_FOLDER=%CD%
popd

echo ==========================================
echo Verilator VGA Viewer
echo ==========================================
echo Source folder: %SOURCE_FOLDER%

REM Auto-detect top module if not provided
if "%TOP_MODULE%"=="" (
    echo.
    echo Auto-detecting top module...
    
    REM Look for common top module patterns in .v files
    for %%f in ("%SOURCE_FOLDER%\*.v") do (
        findstr /r /c:"^module tt_um_" "%%f" >nul 2>&1
        if !errorlevel! equ 0 (
            for /f "tokens=2" %%m in ('findstr /r /c:"^module tt_um_" "%%f"') do (
                set TOP_MODULE=%%m
                set TOP_MODULE=!TOP_MODULE:(=!
                goto :found_module
            )
        )
        
        findstr /r /c:"^module project" "%%f" >nul 2>&1
        if !errorlevel! equ 0 (
            for /f "tokens=2" %%m in ('findstr /r /c:"^module project" "%%f"') do (
                set TOP_MODULE=%%m
                set TOP_MODULE=!TOP_MODULE:(=!
                goto :found_module
            )
        )
    )
    
    :found_module
    if "!TOP_MODULE!"=="" (
        echo Error: Could not auto-detect top module
        echo Please specify top module as second argument
        exit /b 1
    )
    echo Found top module: !TOP_MODULE!
)

echo Top module: %TOP_MODULE%
echo.

REM Build with Make through MSYS2
echo.
echo Building with Verilator...
echo.

C:\msys64\usr\bin\bash.exe -l -c "cd '%CD:\=/% ' && export VERILATOR_SOURCE_FOLDER='%SOURCE_FOLDER:\=/%' && export VERILATOR_TOP_MODULE='%TOP_MODULE%' && make generic"

if exist generic_vga_viewer.exe (
    echo.
    echo ==========================================
    echo Build successful!
    echo ==========================================
    echo.
    echo Running VGA viewer...
    echo Controls:
    echo   ESC - Exit application
    echo.
    generic_vga_viewer.exe
) else (
    echo.
    echo ==========================================
    echo Build failed! Check errors above.
    echo ==========================================
    exit /b 1
)

endlocal
