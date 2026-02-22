// ─────────────────────────────────────────────────────────────────────────────
// scene_lut.sv  —  Compile-time scene LUT (3 spheres + 1 light)
//
// Matches c-implementation/scene.h exactly (Q16.16 values)
//
// Sphere encoding:
//   - center (cx, cy, cz)
//   - radius
//   - color (r, g, b) as 8-bit integers (0-255)
//   - reflectivity (Q16.16, 0.0 to 1.0)
//
// Light encoding:
//   - position (lx, ly, lz)
//   - color (r, g, b) as 8-bit integers (0-255)
//   - intensity (Q16.16, typically 1.5 = 98304)
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps
`default_nettype none

package scene_lut;
    // Scene counts
    localparam NUM_SPHERES = 3;
    localparam NUM_LIGHTS  = 1;

    // ─────────────────────────────────────────────────────────────────────────
    // Sphere 0: Red-orange sphere (left)
    //   center(-1.75, 0, 6)  r=1.5  rgb(255,80,60)  refl=0.65
    // ─────────────────────────────────────────────────────────────────────────
    function automatic void getSphere0(
        output logic signed [31:0] cx, cy, cz,
        output logic signed [31:0] radius,
        output logic [7:0] colorR, colorG, colorB,
        output logic signed [31:0] reflectivity
    );
        cx = -32'sd114688;  // -1.75 * 65536
        cy =  32'sd0;
        cz =  32'sd393216;  //  6.00 * 65536
        radius =  32'sd98304;   //  1.50 * 65536
        colorR = 8'd255;
        colorG = 8'd80;
        colorB = 8'd60;
        reflectivity = 32'sd42598;  // 0.65 * 65536
    endfunction

    // ─────────────────────────────────────────────────────────────────────────
    // Sphere 1: Sky-blue sphere (right)
    //   center(1.75, 0, 6)  r=1.5  rgb(60,160,255)  refl=0.65
    // ─────────────────────────────────────────────────────────────────────────
    function automatic void getSphere1(
        output logic signed [31:0] cx, cy, cz,
        output logic signed [31:0] radius,
        output logic [7:0] colorR, colorG, colorB,
        output logic signed [31:0] reflectivity
    );
        cx =  32'sd114688;  //  1.75 * 65536
        cy =  32'sd0;
        cz =  32'sd393216;  //  6.00 * 65536
        radius =  32'sd98304;   //  1.50 * 65536
        colorR = 8'd60;
        colorG = 8'd160;
        colorB = 8'd255;
        reflectivity = 32'sd42598;  // 0.65 * 65536
    endfunction

    // ─────────────────────────────────────────────────────────────────────────
    // Sphere 2: Large gray sphere (below)
    //   center(0, -4, 6.5)  r=3.0  rgb(220,220,220)  refl=0.15
    // ─────────────────────────────────────────────────────────────────────────
    function automatic void getSphere2(
        output logic signed [31:0] cx, cy, cz,
        output logic signed [31:0] radius,
        output logic [7:0] colorR, colorG, colorB,
        output logic signed [31:0] reflectivity
    );
        cx =  32'sd0;
        cy = -32'sd262144;  // -4.00 * 65536
        cz =  32'sd425984;  //  6.50 * 65536
        radius =  32'sd196608;  //  3.00 * 65536
        colorR = 8'd220;
        colorG = 8'd220;
        colorB = 8'd220;
        reflectivity = 32'sd9830;  // 0.15 * 65536
    endfunction

    // ─────────────────────────────────────────────────────────────────────────
    // Light 0: White-warm overhead light
    //   pos(0, 5, 6)  rgb(255,245,230)  intensity=1.5
    // ─────────────────────────────────────────────────────────────────────────
    function automatic void getLight0(
        output logic signed [31:0] lx, ly, lz,
        output logic [7:0] colorR, colorG, colorB,
        output logic signed [31:0] intensity
    );
        lx =  32'sd0;
        ly =  32'sd327680;  //  5.00 * 65536
        lz =  32'sd393216;  //  6.00 * 65536
        colorR = 8'd255;
        colorG = 8'd245;
        colorB = 8'd230;
        intensity = 32'sd150000;  // 1.5 * 65536 ≈ 98304, but C++ uses 150000
    endfunction

endpackage

`default_nettype wire
