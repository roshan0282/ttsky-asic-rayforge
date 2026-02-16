// testbench wrapper for vgaDisplay - Verilator compatible
module tbVgaDisplayVerilator(
    // clock and reset (exposed as ports for Verilator)
    input clock50MHz,
    input resetn,
    
    // VGA outputs (exposed for C++ to read)
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue,
    output blank,
    output vgaClk
);
    // vgaDisplay design under test
    vgaDisplay dut (
        .CLOCK_50(clock50MHz),
        .KEY({3'b111, resetn}),
        .VGA_HS(hSync),
        .VGA_VS(vSync),
        .VGA_R(red),
        .VGA_G(green),
        .VGA_B(blue),
        .VGA_BLANK_N(blank),
        .VGA_SYNC_N(),
        .VGA_CLK(vgaClk)
    );
    
    // create a separate vgaDriver instance to get coordinates for display
    // this matches the resolution used in vgaDisplay (160x120 based on the instantiation)
    wire [9:0] coordX, coordY;
    wire coordVisible;
    wire coordHSync, coordVSync;
    wire coordPixelClk;
    
    vgaDriver coordDriver (
        .clock50MHz(clock50MHz),
        .resetn(resetn),
        .resolutionX(10'd160),
        .resolutionY(10'd120),
        .hSync(coordHSync),
        .vSync(coordVSync),
        .xOrd(coordX),
        .yOrd(coordY),
        .visible(coordVisible),
        .pixelClkOut(coordPixelClk)
    );
    
    // use coordinates from the separate driver
    assign xOrd = coordX;
    assign yOrd = coordY;
    assign visible = coordVisible;

endmodule

