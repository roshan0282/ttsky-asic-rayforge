# Q16.16 Raytracer - SystemVerilog Implementation

This folder contains the SystemVerilog conversion of the C++ Q16.16 raytracer for ASIC synthesis (TinyTapeout).

## File Structure

### Core Modules
- **primitives_q16.sv** - Q16.16 fixed-point arithmetic (add, sub, mul, div, sqrt, dot3)
- **vec3_q16.sv** - 3D vector operations (add, sub, scale, dot, normalize)
- **ray_sphere_intersect.sv** - Ray-sphere intersection using half-b formulation
- **scene_lut.sv** - Compile-time scene definition (3 spheres + 1 light)

### Raytracer
- **raytracer_simple.sv** - Streaming raytracer (shadows + bounded multi-bounce)
  - Zero-latency per-pixel evaluation for VGA stream alignment
  - Diffuse lighting + shadow rays
  - Multi-bounce reflections (bounded by iteration budget)
  
- **raytracer_pipeline.sv** - Full multi-bounce version (WIP)
  - State machine for multi-bounce reflections
  - Shadow ray support
  - Time-budget iteration control

### Integration
- **vga_raytracer_wrapper.sv** - VGA timing wrapper for verilator testing
  - 640×480 @ 60Hz (25MHz pixel clock)
  - Interfaces with verilator-bench

### Testing
- **tb_q16_basic.sv** - Unit tests for Q16.16 primitives
- **test-q16.bat/sh** - Test runner scripts

## Test Results

All Q16.16 arithmetic primitives verified:
- ✅ Addition: 1.0 + 2.0 = 3.0
- ✅ Subtraction: 3.0 - 1.0 = 2.0
- ✅ Multiplication: 1.5 × 2.0 = 3.0
- ✅ Division: 3.0 ÷ 2.0 = 1.5
- ✅ Square Root: √4.0 = 2.0
- ✅ Dot Product: (2,1,1)·(1,0,1) = 3.0

## Q16.16 Format

- **Type**: 32-bit signed fixed-point
- **Layout**: 16 integer bits + 16 fractional bits
- **Range**: [-32768.0, 32767.99998]
- **Precision**: 1/65536 ≈ 0.0000153
- **Representation**: 1.0 = 65536

## Scene Definition

### Spheres
1. **Sphere 0** (Red-Orange, Left)
   - Center: (-1.75, 0, 6)
   - Radius: 1.5
   - Color: RGB(255, 80, 60)
   - Reflectivity: 0.65

2. **Sphere 1** (Sky-Blue, Right)
   - Center: (1.75, 0, 6)
   - Radius: 1.5
   - Color: RGB(60, 160, 255)
   - Reflectivity: 0.65

3. **Sphere 2** (Gray, Below)
   - Center: (0, -4, 6.5)
   - Radius: 3.0
   - Color: RGB(220, 220, 220)
   - Reflectivity: 0.15

### Lights
- **Light 0** (Warm White, Overhead)
  - Position: (0, 5, 6)
  - Color: RGB(255, 245, 230)
  - Intensity: 1.5

## Camera

- **Position**: Origin (0, 0, 0)
- **HFOV**: ~77° (rawDz = 100 world units)
- **Resolution**: 640×480
- **Ray Generation**: `ray = normalize((px-320)/4, (240-py)/4, 100)`

## Building & Testing

### Test Q16.16 Primitives
```bash
cd proper-implementation
bash test-q16.sh
# Or on Windows: test-q16.bat
```

### Verilator Simulation (TODO)
```bash
cd ../verilator-bench
# Update config.sh to point to proper-implementation
bash run.sh
```

## Next Steps

1. ✅ Q16.16 arithmetic primitives
2. ✅ Vector operations
3. ✅ Ray-sphere intersection
4. ✅ Scene LUT
5. ✅ Simple single-bounce raytracer
6. ✅ Visual verification in verilator
7. ✅ Add shadow rays
8. ✅ Add multi-bounce reflections
9. ⏳ Optimize for TinyTapeout constraints

## Differences from C++ Implementation

### Current (Implemented)
- Shadow rays enabled (single light)
- Multi-bounce reflections enabled (bounded loop)
- Time-budget style iteration cap (`MAX_ITERATIONS`)

### Planned
- Multi-bounce with time budget (MAX_ITERATIONS=8)
- Shadow ray occlusion testing
- Full path accumulation matching C++

## Notes

- All modules use `timescale 1ns/1ps` for simulation
- Files use `/* verilator lint_off DECLFILENAME */` to allow multiple modules per file
- Scene data is compile-time only (no RAM)
- Streaming flow: color is computed from current input pixel each cycle (no cross-pixel latency)
