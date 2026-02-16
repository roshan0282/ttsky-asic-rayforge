// TinyTapeout-format VGA generator for Verilator bench
module tt_um_tinytapeout_vga(
    input clk,
    input rst_n,
    input ena,
    input [7:0] ui_in,
    input [7:0] uio_in,
    output [7:0] uo_out,
    output [7:0] uio_out,
    output [7:0] uio_oe
);
    reg [9:0] x, y;
    reg hSync, vSync, visible;
    
    // 1hz clock divider (50mhz / 50000000 = 1hz)
    reg [25:0] slowCounter;
    reg [1:0] colorRotate;
    
    // vga 640x480 @ 60hz timing (full horizontal: 800, full vertical: 525)
    always @(posedge clk) begin
        if (!rst_n) begin
            x <= 10'd0;
            y <= 10'd0;
            hSync <= 1'b1;
            vSync <= 1'b1;
            visible <= 1'b0;
            slowCounter <= 26'd0;
            colorRotate <= 2'd0;
        end else begin
            // horizontal counter: 0-799
            if (x == 10'd799) begin
                x <= 10'd0;
                // vertical counter: 0-524
                if (y == 10'd524)
                    y <= 10'd0;
                else
                    y <= y + 10'd1;
            end else begin
                x <= x + 10'd1;
            end
            
            // hsync pulse: active low during sync period (656-751)
            hSync <= (x >= 10'd656 && x < 10'd752) ? 1'b0 : 1'b1;
            // vsync pulse: active low during sync period (490-491)
            vSync <= (y >= 10'd490 && y < 10'd492) ? 1'b0 : 1'b1;
            // visible region: first 640x480 pixels
            visible <= (x < 10'd640 && y < 10'd480);
            
            // 1hz counter for color rotation
            if (slowCounter == 26'd49999999) begin
                slowCounter <= 26'd0;
                colorRotate <= colorRotate + 2'd1;
            end else begin
                slowCounter <= slowCounter + 26'd1;
            end
        end
    end
    
    // determine which quadrant we're in
    wire topHalf = (y < 10'd240);
    wire leftHalf = (x < 10'd320);
    
    // quadrant encoding: top-left=0, top-right=1, bottom-left=2, bottom-right=3
    wire [1:0] quadrant = topHalf ? (leftHalf ? 2'd0 : 2'd1) : (leftHalf ? 2'd2 : 2'd3);
    
    // rotate color assignment: initially green, yellow, red, blue
    // then every second it rotates clockwise
    wire [1:0] colorSelect = (quadrant + colorRotate) & 2'b11;
    
    // color mapping: 0=green, 1=yellow, 2=red, 3=blue
    wire [1:0] r_color = (colorSelect == 2'd1 || colorSelect == 2'd2) ? 2'b11 : 2'b00; // yellow or red
    wire [1:0] g_color = (colorSelect == 2'd0 || colorSelect == 2'd1) ? 2'b11 : 2'b00; // green or yellow  
    wire [1:0] b_color = (colorSelect == 2'd3) ? 2'b11 : 2'b00;                        // blue only
    
    // only show colors when visible
    wire [1:0] r = visible ? r_color : 2'b00;
    wire [1:0] g = visible ? g_color : 2'b00;
    wire [1:0] b = visible ? b_color : 2'b00;
    assign uo_out = {hSync, b[0], g[0], r[0], vSync, b[1], g[1], r[1]};
    assign uio_out = 8'b0;
    assign uio_oe = 8'b0;
endmodule
