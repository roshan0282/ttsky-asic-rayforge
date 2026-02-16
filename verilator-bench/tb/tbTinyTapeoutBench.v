// Testbench for TinyTapeout-format VGA module
module tbTinyTapeoutBench(
    input clock50MHz,
    input resetn,
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);
    wire [7:0] dut_uo_out;
    wire [7:0] dut_uio_out;
    wire [7:0] dut_uio_oe;
    reg [7:0] ui_in = 0;
    reg [7:0] uio_in = 0;

    // Instantiate DUT using TOP_MODULE define
    `ifdef TOP_MODULE
        `TOP_MODULE dut (
    `else
        tt_um_tinytapeout_vga dut (
    `endif
        .clk(clock50MHz),
        .rst_n(resetn),
        .ena(1'b1),
        .ui_in(ui_in),
        .uio_in(uio_in),
        .uo_out(dut_uo_out),
        .uio_out(dut_uio_out),
        .uio_oe(dut_uio_oe)
    );

    // internal counters to track pixel coordinates
    reg [9:0] xReg, yReg;
    reg v_visibleReg;
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            xReg <= 10'd0;
            yReg <= 10'd0;
            v_visibleReg <= 1'b0;
        end else begin
            // horizontal counter: 0-799
            if (xReg == 10'd799) begin
                xReg <= 10'd0;
                // vertical counter: 0-524
                if (yReg == 10'd524)
                    yReg <= 10'd0;
                else
                    yReg <= yReg + 10'd1;
            end else begin
                xReg <= xReg + 10'd1;
            end
            
            // visible region is first 640x480 pixels
            v_visibleReg <= (xReg < 10'd640 && yReg < 10'd480);
        end
    end

    assign hSync = dut_uo_out[7];
    assign vSync = dut_uo_out[3];
    assign visible = v_visibleReg;
    assign xOrd = xReg;
    assign yOrd = yReg;
    // expand 2-bit color to 8-bit (replicate 4 times for brightness)
    wire [1:0] r_2bit = {dut_uo_out[0], dut_uo_out[4]};  // {r[1], r[0]}
    wire [1:0] g_2bit = {dut_uo_out[1], dut_uo_out[5]};  // {g[1], g[0]}
    wire [1:0] b_2bit = {dut_uo_out[2], dut_uo_out[6]};  // {b[1], b[0]}
    assign red   = {r_2bit, r_2bit, r_2bit, r_2bit};
    assign green = {g_2bit, g_2bit, g_2bit, g_2bit};
    assign blue  = {b_2bit, b_2bit, b_2bit, b_2bit};
endmodule
