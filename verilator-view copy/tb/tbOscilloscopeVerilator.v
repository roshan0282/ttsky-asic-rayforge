// testbench wrapper for oscilloscope - Verilator compatible
module tbOscilloscopeVerilator(
    // clock and reset (exposed as ports for Verilator)
    input clock50MHz,
    input resetn,
    
    // PS/2 keyboard inputs (from C++)
    input key_action,
    input [7:0] scan_code,
    
    // VGA outputs (exposed for C++ to read)
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue,
    
    // debug outputs
    output [1:0] debug_screenMode,
    output [7:0] debug_asciiOut,
    output debug_asciiReady
);
    // internal PS/2 wires
    wire ps2Clk;
    wire ps2Dat;
    
    // direct ASCII from keyboard simulator (bypass mode)
    wire [7:0] ascii_from_sim;
    wire ascii_ready_from_sim;
    
    // PS/2 keyboard simulator (direct ASCII output mode)
    ps2KeyboardVerilator keyboard (
        .Clock(clock50MHz),
        .Resetn(resetn),
        .key_action(key_action),
        .scan_code(scan_code),
        .ps2_clk(ps2Clk),
        .ps2_dat(ps2Dat),
        .ascii_out(ascii_from_sim),
        .ascii_ready(ascii_ready_from_sim)
    );
    
    // oscilloscope design under test
    oscilloscopeTop dut (
        .CLOCK_50(clock50MHz),
        .KEY({3'b111, resetn}),
        .PS2_CLK(ps2Clk),
        .PS2_DAT(ps2Dat),
        .VGA_HS(hSync),
        .VGA_VS(vSync),
        .VGA_R(red),
        .VGA_G(green),
        .VGA_B(blue),
        .VGA_BLANK_N(),
        .VGA_SYNC_N(),
        .VGA_CLK(),
        .ADC_SCLK(),
        .ADC_CS_N(),
        .ADC_DIN(),
        .ADC_DOUT(1'b0),
        .VGA_X(xOrd),
        .VGA_Y(yOrd),
        .VGA_VISIBLE(visible),
        .MOCK_ADC_DATA(12'd0),
        .MOCK_ADC_ENABLE(1'b0),
        .BYPASS_PS2(1'b1),               // enable bypass mode
        .BYPASS_ASCII(ascii_from_sim),
        .BYPASS_ASCII_READY(ascii_ready_from_sim)
    );
    
    // tap internal signals for debug
    assign debug_screenMode = dut.screenMode;
    assign debug_asciiOut = dut.ps2Ascii;
    assign debug_asciiReady = dut.ps2AsciiReady;

endmodule

