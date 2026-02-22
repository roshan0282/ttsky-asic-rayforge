// ─────────────────────────────────────────────────────────────────────────────
// vga_raytracer_wrapper.sv  —  VGA wrapper for Q16.16 raytracer
//
// Integrates with verilator-bench infrastructure for visual testing
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps
`default_nettype none

module vga_raytracer_wrapper (
    input  logic clk,
    input  logic rst_n,
    
    // Direct raytracer interface (for testbench)
    input  logic [9:0]  pixel_x,
    input  logic [8:0]  pixel_y,
    input  logic        pixel_valid,
    output logic [7:0]  rgb_r,
    output logic [7:0]  rgb_g,
    output logic [7:0]  rgb_b,
    output logic        output_valid,
    
    // VGA outputs (optional, for standalone use)
    output logic hsync,
    output logic vsync,
    output logic [3:0] r,
    output logic [3:0] g,
    output logic [3:0] b
);

    // Raytracer instance (direct connection)
    raytracer_simple u_raytracer (
        .clk(clk),
        .rst_n(rst_n),
        .pixel_x(pixel_x),
        .pixel_y(pixel_y),
        .pixel_valid(pixel_valid),
        .rgb_r(rgb_r),
        .rgb_g(rgb_g),
        .rgb_b(rgb_b),
        .output_valid(output_valid)
    );
    
    // VGA outputs (unused in testbench, set to defaults)
    assign hsync = 1'b1;
    assign vsync = 1'b1;
    assign r = rgb_r[7:4];
    assign g = rgb_g[7:4];
    assign b = rgb_b[7:4];

endmodule

`default_nettype wire
