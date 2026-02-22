// uiOverlay - draws colored background rectangles under selected menu items
// positions moved to right side under axis info (8x8 char grid):
// row 9, col 54: "CHA: C1 C2 C3 C4"
// row 10, col 54: "CUR: X1 Y1 X2 Y2"
module uiOverlay(
    input clock25MHz,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    input [1:0] selectedChannel,   // 0..3
    input selectedCursorPair,      // 0 = X1/Y1, 1 = X2/Y2
    input uiMode,  // 0=channel mode, 1=cursor mode
    output reg [7:0] pixelR,
    output reg [7:0] pixelG,
    output reg [7:0] pixelB
);
    // map char cell to pixel bounds
    function [9:0] colToX0; input [9:0] col; begin colToX0 = {col, 3'b000}; end endfunction
    function [9:0] rowToY0; input [9:0] row; begin rowToY0 = {row, 3'b000}; end endfunction
    
    // channels line: row 9, "CHA: C1 C2 C3 C4" starting at col 54
    // 'C1' at cols 59-60, 'C2' at 62-63, 'C3' at 65-66, 'C4' at 68-69
    wire [9:0] chRowY0 = rowToY0(10'd9);
    wire [9:0] chRowY1 = chRowY0 + 10'd7;
    wire [9:0] chColX0 [0:3];
    assign chColX0[0] = colToX0(10'd59);
    assign chColX0[1] = colToX0(10'd62);
    assign chColX0[2] = colToX0(10'd65);
    assign chColX0[3] = colToX0(10'd68);
    wire [9:0] chColX1 = chColX0[selectedChannel] + 10'd15;
    wire [9:0] chSelX0 = chColX0[selectedChannel];
    wire [9:0] chSelY0 = chRowY0;
    
    // cursors line: row 10, "CUR: X1 Y1 X2 Y2" starting at col 54
    // pair0: X1 (59-60) and Y1 (62-63); pair1: X2 (65-66) and Y2 (68-69)
    wire [9:0] curRowY0 = rowToY0(10'd10);
    wire [9:0] curRowY1 = curRowY0 + 10'd7;
    wire [9:0] curX0_pair0_a = colToX0(10'd59);
    wire [9:0] curX0_pair0_b = colToX0(10'd62);
    wire [9:0] curX0_pair1_a = colToX0(10'd65);
    wire [9:0] curX0_pair1_b = colToX0(10'd68);
    wire [9:0] curX1_pair0_a = curX0_pair0_a + 10'd15;
    wire [9:0] curX1_pair0_b = curX0_pair0_b + 10'd15;
    wire [9:0] curX1_pair1_a = curX0_pair1_a + 10'd15;
    wire [9:0] curX1_pair1_b = curX0_pair1_b + 10'd15;
    wire [9:0] curSelY0 = curRowY0;
    wire [9:0] curSelY1 = curRowY1;
    
    // highlight only the labels "CHA:" and "CUR:" (cols 54..57)
    wire [9:0] lblX0 = colToX0(10'd54);
    wire [9:0] lblX1 = colToX0(10'd57) + 10'd7;
    wire onChModeRect = (uiMode == 1'b0) && (xOrd >= lblX0) && (xOrd <= lblX1) && (yOrd >= chRowY0) && (yOrd <= chRowY1);
    wire onCurModeRect = (uiMode == 1'b1) && (xOrd >= lblX0) && (xOrd <= lblX1) && (yOrd >= curRowY0) && (yOrd <= curRowY1);
    
    // colors - muted highlights matching waveform traces
    reg [7:0] chR, chG, chB;
    always @(*) begin
        case (selectedChannel)
            2'd0: begin chR=8'h00; chG=8'h80; chB=8'h00; end // muted green
            2'd1: begin chR=8'h80; chG=8'h00; chB=8'h00; end // muted red
            2'd2: begin chR=8'h00; chG=8'h00; chB=8'h80; end // muted blue
            default: begin chR=8'h80; chG=8'h80; chB=8'h00; end // muted yellow
        endcase
    end
    reg [7:0] curR, curG, curB;
    always @(*) begin
        if (selectedCursorPair == 1'b0) begin
            curR=8'h00; curG=8'hC0; curB=8'hC0; // cyan for pair 0 (X1/Y1)
        end else begin
            curR=8'hC0; curG=8'h00; curB=8'hC0; // magenta for pair 1 (X2/Y2)
        end
    end
    
    // selection rectangles for chosen channel item and selected cursor pair
    wire onChRect = (xOrd >= chSelX0) && (xOrd <= chColX1) && (yOrd >= chSelY0) && (yOrd <= chRowY1);
    wire onCurPair0 = (xOrd >= curX0_pair0_a && xOrd <= curX1_pair0_a && yOrd >= curSelY0 && yOrd <= curSelY1) ||
                      (xOrd >= curX0_pair0_b && xOrd <= curX1_pair0_b && yOrd >= curSelY0 && yOrd <= curSelY1);
    wire onCurPair1 = (xOrd >= curX0_pair1_a && xOrd <= curX1_pair1_a && yOrd >= curSelY0 && yOrd <= curSelY1) ||
                      (xOrd >= curX0_pair1_b && xOrd <= curX1_pair1_b && yOrd >= curSelY0 && yOrd <= curSelY1);
    wire onCurRect = (selectedCursorPair == 1'b0) ? onCurPair0 : onCurPair1;
    
    always @(*) begin
        if (!visible) begin
            pixelR=8'h00; pixelG=8'h00; pixelB=8'h00;
        end else if (onChModeRect || onCurModeRect) begin
            // very dark grey background for active label
            pixelR = 8'h61; pixelG = 8'h5f; pixelB = 8'h5f;
        end else if (onChRect) begin
            pixelR = chR; pixelG = chG; pixelB = chB;
        end else if (onCurRect) begin
            pixelR = curR; pixelG = curG; pixelB = curB;
        end else begin
            pixelR=8'h00; pixelG=8'h00; pixelB=8'h00;
        end
    end
endmodule


