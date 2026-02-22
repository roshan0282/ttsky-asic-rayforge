@echo off
REM build.bat — compile and run the Q8.4 fixed-point SDL2 raytracer
REM Requires MSYS2 ucrt64 (C:\msys64\ucrt64) with SDL2 installed

set CLANG=C:\msys64\ucrt64\bin\clang++.exe
set INCLUDE=-I. -IC:\msys64\ucrt64\include -IC:\msys64\ucrt64\include\SDL2
set LIBS=-LC:\msys64\ucrt64\lib -lmingw32 -lSDL2main -lSDL2 -mwindows
set FLAGS=-std=c++17 -O2 -Wall

echo Compiling...
%CLANG% %FLAGS% %INCLUDE% -o raytracer.exe main.cpp %LIBS%
if errorlevel 1 (
    echo BUILD FAILED
    exit /b 1
)

echo Build successful.
echo Copying SDL2.dll...
copy /Y C:\msys64\ucrt64\bin\SDL2.dll . >nul 2>&1

echo Launching raytracer...
set PATH=C:\msys64\ucrt64\bin;%PATH%
start "" raytracer.exe
