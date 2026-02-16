# Verilator VGA Viewer Configuration

A clean, reusable Verilator-based VGA viewer that can point to any Verilog project and display VGA output.

## Quick Start

From MSYS2 terminal:
```bash
cd /c/2w/ttsky-asic/verilator-view
export VERILATOR_SOURCE_FOLDER=/c/2w/ttsky-asic/tiniest-gpu
export VERILATOR_TOP_MODULE=tt_um_pongsagon_tinygpu_v2
make generic
./generic_vga_viewer.exe
```

Or use the batch file from Windows terminal:
```batch
cd verilator-view
vv.bat
```

## Usage

### Full Command
```
verilator-view.bat <source-folder> [top-module]
```

### Examples

**Tiniest GPU (default)**
```batch
vv.bat
```
or
```batch
verilator-view.bat ..\tiniest-gpu tt_um_pongsagon_tinygpu_v2
```

**Custom Project**
```batch
verilator-view.bat ..\my-project my_top_module
```

## Requirements

Your Verilog project should have:
1. A top module with VGA output signals
2. Standard TinyTapeout-style interface (or compatible):
   - `clk` - clock input
   - `rst_n` - active-low reset
   - `ena` - enable signal
   - `uo_out[7:0]` - outputs including VGA signals

## VGA Signal Mapping

The testbench expects VGA signals packed in `uo_out` as follows:
- `uo_out[7]` - vSync
- `uo_out[6]` - hSync
- `uo_out[5:4]` - Blue[7:6] (2-bit blue)
- `uo_out[3:2]` - Green[7:6] (2-bit green)
- `uo_out[1:0]` - Red[7:6] (2-bit red)

Colors are automatically expanded from 2-bit to 8-bit for display.

## Auto-detection

If you don't specify a top module, the script will try to auto-detect:
- Modules starting with `tt_um_`
- Modules named `project`

## Customization

If your project has a different interface, you can modify:
- `tb/tbGenericVga.v` - testbench wrapper
- `genericVgaViewer.cpp` - C++ viewer application

## Troubleshooting

1. **Module not found**: Ensure your top module is in a .v file in the source folder
2. **Build errors**: Check that all Verilog dependencies are in the source folder
3. **No display**: Verify VGA signal mapping matches your project's output format
