// testbench wrapper for raycaster
// single raycaster testbench for Verilator simulation

module tbRaycasterVerilator(
    // clock and reset (exposed as ports for Verilator)
    input clock50MHz,
    input resetn,
    
    // PS/2 keyboard inputs (from C++)
    input key_action,
    input [7:0] scan_code,
    
    // VGA outputs (exposed as ports)
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output [3:0] red,
    output [3:0] green,
    output [3:0] blue,
    
    // debug outputs (exposed for C++ debugging)
    output [31:0] debug_playerX,
    output [31:0] debug_playerY,
    output [7:0] debug_playerDir,
    output [7:0] debug_renderState,
    output [8:0] debug_nextColumnToCast,
    output debug_castReady,
    output [31:0] debug_castDist,
    output debug_castSide,
    output [31:0] debug_columnDist160,
    output debug_columnSide160,
    output [31:0] debug_lineHeight,
    output [31:0] debug_drawStart,
    output [31:0] debug_drawEnd
);

    // internal signals (not exposed)
    wire ps2Clk;
    wire ps2Dat;
    
    // PS/2 keyboard simulator
    ps2KeyboardVerilator keyboard (
        .Clock(clock50MHz),
        .Resetn(resetn),
        .key_action(key_action),
        .scan_code(scan_code),
        .ps2_clk(ps2Clk),
        .ps2_dat(ps2Dat)
    );
    
    // instantiate raycaster
    raycaster u_raycaster (
        .clock50MHz(clock50MHz),
        .resetn(resetn),
        .ps2Clk(ps2Clk),
        .ps2Dat(ps2Dat),
        .hSync(hSync),
        .vSync(vSync),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .red(red),
        .green(green),
        .blue(blue)
    );
    
    // expose debug signals from raycaster internals
    assign debug_playerX = u_raycaster.posx_f >>> 12; // convert from FP30.12 to integer
    assign debug_playerY = u_raycaster.posy_f >>> 12;
    assign debug_playerDir = u_raycaster.posa;
    assign debug_renderState = u_raycaster.renderState;
    assign debug_nextColumnToCast = u_raycaster.nextColumnToCast;
    assign debug_castReady = u_raycaster.castReady;
    assign debug_castDist = u_raycaster.castHeight;
    assign debug_lineHeight = u_raycaster.height;
    assign debug_drawStart = u_raycaster.drawStart;
    assign debug_drawEnd = u_raycaster.drawEnd;
    assign debug_castSide = u_raycaster.v_or_h;
    assign debug_columnDist160 = u_raycaster.columnHeight[160];
    assign debug_columnSide160 = u_raycaster.columnVOrH[160];
    
    // clock generation is handled by C++ in Verilator
    
    // reset sequence (handled in C++)
    // initial begin block removed - reset handled in C++ main()
    
    // key_action is controlled by C++ - no need to clear here
    // C++ will pulse it for one cycle

endmodule

