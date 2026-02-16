# vgaDisplay verilator simulation

fast simulation of the vgaDisplay module using verilator and sdl2.

## requirements

- verilator
- mingw-w64 (g++ compiler)
- sdl2 development libraries
- make

## build

```bash
make vgaDisplayVerilator
```

or use the batch file:

```bash
build-vgadisplay.bat
```

## run

```bash
vgaDisplayVerilator.exe
```

## controls

- **ESC** - exit simulation

## features

- 160x120 vga display (scaled 4x for visibility)
- real-time display of tile pattern
- much faster than desim (verilator compiles to c++)
- displays colored tiles from ramModule

## notes

- the simulation runs at ~50mhz (actual fpga speed)
- rendering is optimized for smooth display
- displays 4 colored tiles in a row
- background is light gray when not in tile area

