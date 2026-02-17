// vga core - rotating quadrant colors (8-bit RGB output)
module vgaCore(
    input clk,
    input rst_n,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);
    // 1hz clock divider (50mhz / 50000000 = 1hz)
    reg [25:0] slowCounter;
    reg [1:0] colorRotate;
    
    always @(posedge clk) begin
        if (!rst_n) begin
            slowCounter <= 26'd0;
            colorRotate <= 2'd0;
        end else begin
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
    wire topHalf = (yOrd < 10'd240);
    wire leftHalf = (xOrd < 10'd320);
    
    // quadrant encoding: top-left=0, top-right=1, bottom-left=2, bottom-right=3
    wire [1:0] quadrant = topHalf ? (leftHalf ? 2'd0 : 2'd1) : (leftHalf ? 2'd2 : 2'd3);
    
    // rotate color assignment: initially green, yellow, red, blue
    // then every second it rotates clockwise
    wire [1:0] colorSelect = (quadrant + colorRotate) & 2'b11;
    
    // color mapping: 0=green, 1=yellow, 2=red, 3=blue (full 8-bit colors)
    wire [7:0] r_color = (colorSelect == 2'd1 || colorSelect == 2'd2) ? 8'hFF : 8'h00; // yellow or red
    wire [7:0] g_color = (colorSelect == 2'd0 || colorSelect == 2'd1) ? 8'hFF : 8'h00; // green or yellow  
    wire [7:0] b_color = (colorSelect == 2'd3) ? 8'hFF : 8'h00;                        // blue only
    
    // only show colors when visible
    assign red   = visible ? r_color : 8'h00;
    assign green = visible ? g_color : 8'h00;
    assign blue  = visible ? b_color : 8'h00;
endmodule

