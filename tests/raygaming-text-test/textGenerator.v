// text generator - converts ASCII characters to pixels using font ROM
// simplified version for timer display (white text on black background)
module textGenerator(
    input clock25MHz,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    input [6:0] charRamData,
    output reg [7:0] pixelR,
    output reg [7:0] pixelG,
    output reg [7:0] pixelB,
    output wire [12:0] charRamAddrB
);
    // calculate character cell position
    wire [6:0] charCol = xOrd[9:3];  // divide by 8 (80 chars across)
    wire [5:0] charRow = yOrd[9:3];  // divide by 8 (60 chars down)
    
    // position within character
    wire [2:0] pixelCol = xOrd[2:0];
    wire [2:0] pixelRow = yOrd[2:0];
    
    // character RAM address (output to connect to char RAM)
    assign charRamAddrB = {charRow, 6'd0} + {charRow, 4'd0} + charCol;   // row*80 + col (64+16)
    
    // ASCII code from character RAM (input)
    wire [6:0] asciiCode = charRamData;
    
    // font ROM lookup
    wire [7:0] rowBitmap;
    fontROM font (
        .charCode(asciiCode),
        .row(pixelRow),
        .rowData(rowBitmap)
    );
    
    // extract specific pixel (bit 7 is leftmost)
    wire pixelOn = rowBitmap[7 - pixelCol];
    
    // output color - simple white on black
    always @(*) begin
        if (visible && pixelOn) begin
            // white text
            pixelR = 8'hFF;
            pixelG = 8'hFF;
            pixelB = 8'hFF;
        end else begin
            // black background
            pixelR = 8'h00;
            pixelG = 8'h00;
            pixelB = 8'h00;
        end
    end
endmodule
