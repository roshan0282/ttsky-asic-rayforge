# verilator vga viewer

a clean, reusable verilator-based vga viewer for tinytapeout-style verilog projects.

## quick start

### 1. edit configuration (one time setup)

edit `config.sh` to point to your project:

```bash
# verilator bench configuration
export VERILATOR_SOURCE_FOLDER=/c/2w/ttsky-asic/your-project-folder
export VERILATOR_TOP_MODULE=your_module_name
export VERILATOR_TESTBENCH=tb/tbGenericVga.v
```

### 2. build and run

```bash
cd /c/2w/ttsky-asic/verilator-bench
bash run.sh
```

for a clean rebuild (when switching projects or after major changes):

```bash
bash run.sh clean
```

that's it! the vga viewer will open and display your vga output.

## controls

- `ESC` - exit application

## directory structure

```
verilator-bench/
├── config.sh              ← edit this for your project!
├── run.sh                 ← build + run (use "run.sh clean" for clean build)
├── Makefile               ← build configuration (no edit needed)
├── genericVgaViewer.cpp   ← c++ viewer (no edit needed)
├── tb/                    ← testbench modules
│   ├── tbGenericVga.v     ← generic testbench (default)
│   └── tbTinyTapeoutBench.v ← alternative testbench
└── README.md              ← you are here
```

## requirements

your verilog module should have:

1. **tinytapeout-style interface:**
   - `clk` - clock input
   - `rst_n` - active-low reset
   - `ena` - enable signal
   - `uo_out[7:0]` - output pins with vga signals

2. **tinytapeout vga pinout in uo_out:**
   - bit 7: hSync
   - bit 6: blue bit 0
   - bit 5: green bit 0
   - bit 4: red bit 0
   - bit 3: vSync
   - bit 2: blue bit 1 (msb)
   - bit 1: green bit 1 (msb)
   - bit 0: red bit 1 (msb)

3. **proper vga timing:**
   - horizontal: 800 pixels total (640 visible + 160 blanking)
   - vertical: 525 lines total (480 visible + 45 blanking)
   - see `raygaming-test/tinytapeout_vga.v` for reference implementation

## example project

the included `raygaming-test/tinytapeout_vga.v` shows a rotating 4-quadrant color pattern:

- top-left: green → yellow → red → blue (rotates every 1 second)
- top-right: yellow → red → blue → green
- bottom-left: red → blue → green → yellow
- bottom-right: blue → green → yellow → red

this demonstrates proper vga timing, color generation, and clock division.

## testbenches

two testbenches are available in `tb/`:

### tbGenericVga.v (default, recommended)
- fully generic, works with any tinytapeout vga module
- uses `TOP_MODULE` define set by makefile
- tracks coordinates internally (800x525 full vga timing)
- extracts vga signals from tinytapeout uo_out format
- expands 2-bit rgb to 8-bit for display

### tbTinyTapeoutBench.v (alternative)
- functionally identical to tbGenericVga.v
- kept for compatibility

both testbenches handle coordinate tracking automatically so your verilog module only needs to output color values and sync signals.

## customization

### using a different testbench

edit `config.sh`:
```bash
export VERILATOR_TESTBENCH=tb/tbTinyTapeoutBench.v
```

### non-tinytapeout modules

if your module has a different interface, you'll need to:
1. create a custom testbench in `tb/`
2. update `config.sh` to use your testbench
3. possibly modify `genericVgaViewer.cpp` if signal names differ

## troubleshooting

### black screen
- verify your module outputs valid vga sync signals
- check that coordinate counters use full vga timing (800x525)
- ensure module is properly instantiated via TOP_MODULE define

### module not found
- check that `VERILATOR_SOURCE_FOLDER` points to correct directory
- verify your .v files are in that folder
- ensure `VERILATOR_TOP_MODULE` matches your module name exactly

### build errors
- make sure all verilog dependencies are in source folder
- check for syntax errors in your verilog
- verify tinytapeout interface is implemented correctly

### colors wrong
- verify your module outputs colors in tinytapeout pinout format
- check that color bits are mapped correctly (see pinout above)
- ensure visible signal matches coordinate ranges

## technical details

### vga timing (640x480 @ 60hz)

**horizontal (per line):**
- 0-639: visible pixels (640)
- 640-655: front porch (16)
- 656-751: sync pulse (96) - active low
- 752-799: back porch (48)
- total: 800 pixels

**vertical (per frame):**
- 0-479: visible lines (480)
- 480-489: front porch (10)
- 490-491: sync pulse (2) - active low
- 492-524: back porch (33)
- total: 525 lines

### clock frequency
- assumes 50mhz input clock
- 50mhz / 800 / 525 ≈ 119hz refresh rate (faster than standard 60hz)
- adjust timing counters if using different clock frequency

## further reading

- `raygaming-test/tinytapeout_vga.v` - reference vga implementation with color rotation
