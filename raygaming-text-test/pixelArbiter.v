// Pixel Arbiter - chooses text over background
// If text pixel is non-black, display text; otherwise display background
module pixelArbiter(
    input [7:0] textRed,
    input [7:0] textGreen,
    input [7:0] textBlue,
    input [7:0] bgRed,
    input [7:0] bgGreen,
    input [7:0] bgBlue,
    output reg [7:0] outRed,
    output reg [7:0] outGreen,
    output reg [7:0] outBlue
);
    // Check if text pixel is active (non-black)
    wire textActive = (textRed != 8'h00) || (textGreen != 8'h00) || (textBlue != 8'h00);
    
    always @(*) begin
        if (textActive) begin
            // Display text
            outRed = textRed;
            outGreen = textGreen;
            outBlue = textBlue;
        end else begin
            // Display background
            outRed = bgRed;
            outGreen = bgGreen;
            outBlue = bgBlue;
        end
    end
endmodule
