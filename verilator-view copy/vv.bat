@echo off
REM Quick wrapper for verilator-view
REM Usage: vv.bat [source-folder] [top-module]
REM Default: vv.bat = vv.bat ..\tiniest-gpu tt_um_pongsagon_tinygpu_v2

if "%~1"=="" (
    call verilator-view.bat ..\tiniest-gpu tt_um_pongsagon_tinygpu_v2
) else (
    call verilator-view.bat %*
)
