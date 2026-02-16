# oscilloscope verilator simulation

fast simulation of the oscilloscope using verilator and sdl2.

## requirements

- verilator
- mingw-w64 (g++ compiler)
- sdl2 development libraries
- make

## build

```bash
make
```

or use the batch file:

```bash
build.bat
```

## run

```bash
oscilloscopeVerilator.exe
```

## controls

- **s** - start oscilloscope (enter waveform screen)
- **h** - show help screen
- **q** - quit/back to previous screen
- **r** - run/stop acquisition (when in waveform screen)
- **t** - cycle trigger mode
- **e** - toggle trigger edge
- **w** - trigger level up
- **d** - trigger level down
- **ESC** - exit simulation

## features

- full 640x480 vga display
- real-time keyboard input
- much faster than desim (verilator compiles to c++)
- displays grid, waveform trace, and measurements
- fake adc generates sine wave for testing

## notes

- the simulation runs at ~50mhz (actual fpga speed)
- rendering is optimized for smooth display
- green waveform trace on grid
- white text overlay for measurements
- dark blue background

