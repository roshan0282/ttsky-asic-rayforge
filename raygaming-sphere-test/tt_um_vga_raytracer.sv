// TinyTapeout VGA Raytracer Wrapper
// Adapts vga_raytracer to TinyTapeout interface format
// Outputs 640x480 @ 60Hz VGA timing in TinyTapeout format

module tt_um_vga_raytracer (
    input  logic       clk,      // 50MHz clock
    input  logic       rst_n,    // Active-low reset
    input  logic       ena,      // Enable (always 1 for this design)
    input  logic [7:0] ui_in,    // User input (unused)
    input  logic [7:0] uio_in,   // Bidirectional input (unused)
    output logic [7:0] uo_out,   // VGA output in TinyTapeout format
    output logic [7:0] uio_out,  // Bidirectional output (unused)
    output logic [7:0] uio_oe    // Bidirectional enable (all inputs)
);

    // Internal VGA signals from raytracer
    logic hsync_int, vsync_int, visible_int;
    logic [9:0] x_coord_int, y_coord_int;
    logic [7:0] red_int, green_int, blue_int;
    
    // Convert active-low reset to active-high
    logic reset;
    assign reset = ~rst_n;
    
    // Instantiate the VGA raytracer core
    vga_raytracer raytracer_core (
        .clock(clk),
        .reset(reset),
        .hsync(hsync_int),
        .vsync(vsync_int),
        .visible(visible_int),
        .x_coord(x_coord_int),
        .y_coord(y_coord_int),
        .red(red_int),
        .green(green_int),
        .blue(blue_int)
    );
    
    // Extract 2-bit color values from 8-bit RGB
    // Use the top 2 bits of each color channel
    logic [1:0] r_2bit, g_2bit, b_2bit;
    assign r_2bit = red_int[7:6];
    assign g_2bit = green_int[7:6];
    assign b_2bit = blue_int[7:6];
    
    // Pack into TinyTapeout format:
    // uo_out = {hSync, b[0], g[0], r[0], vSync, b[1], g[1], r[1]}
    assign uo_out[7] = hsync_int;        // hSync
    assign uo_out[6] = b_2bit[0];        // Blue bit 0
    assign uo_out[5] = g_2bit[0];        // Green bit 0
    assign uo_out[4] = r_2bit[0];        // Red bit 0
    assign uo_out[3] = vsync_int;        // vSync
    assign uo_out[2] = b_2bit[1];        // Blue bit 1
    assign uo_out[1] = g_2bit[1];        // Green bit 1
    assign uo_out[0] = r_2bit[1];        // Red bit 1
    
    // Bidirectional pins are all inputs (not used)
    assign uio_out = 8'b0;
    assign uio_oe  = 8'b0;

endmodule
