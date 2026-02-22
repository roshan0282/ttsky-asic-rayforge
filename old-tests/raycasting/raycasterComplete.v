// Complete Raycaster System with Timer, Minimap, and Keyboard Control
// Integrates: raycaster rendering, timer display, minimap, and PS2 keyboard input

module raycasterComplete(
    input clk,
    input rst_n,
    inout ps2Clk,
    inout ps2Dat,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);

    // PS2 keyboard driver
    wire [7:0] asciiCode;
    wire asciiReady;
    
    ps2Driver keyboard(
        .clock50MHz(clk),
        .resetn(rst_n),
        .ps2Clk(ps2Clk),
        .ps2Dat(ps2Dat),
        .asciiOut(asciiCode),
        .asciiReady(asciiReady)
    );
    
    // Player position and angle from raycaster
    wire [15:0] playerX;
    wire [15:0] playerY;
    wire [8:0] playerAngle;
    
    // Raycaster with keyboard control
    wire [7:0] raycasterRed, raycasterGreen, raycasterBlue;
    
    raycasterKeyboard raycaster(
        .clock(clk),
        .reset(~rst_n),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .asciiCode(asciiCode),
        .asciiReady(asciiReady),
        .red(raycasterRed),
        .green(raycasterGreen),
        .blue(raycasterBlue),
        .playerX(playerX),
        .playerY(playerY),
        .playerAngle(playerAngle)
    );
    
    // Minimap overlay
    wire [7:0] minimapRed, minimapGreen, minimapBlue;
    wire isMinimapPixel;
    
    minimap minimap_inst(
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .playerX(playerX),
        .playerY(playerY),
        .playerAngle(playerAngle),
        .red(minimapRed),
        .green(minimapGreen),
        .blue(minimapBlue),
        .isMinimapPixel(isMinimapPixel)
    );
    
    // Timer system
    wire [5:0] hours, minutes, seconds;
    wire [16:0] subSeconds;
    
    clockCounter timer(
        .clock50MHz(clk),
        .resetn(rst_n),
        .hours(hours),
        .minutes(minutes),
        .seconds(seconds),
        .subSeconds(subSeconds)
    );
    
    // Timer display to character RAM
    wire timerWrEn;
    wire [12:0] timerAddr;
    wire [6:0] timerData;
    
    timerDisplayTopRight timerDisp(
        .clock50MHz(clk),
        .resetn(rst_n),
        .hours(hours),
        .minutes(minutes),
        .seconds(seconds),
        .subSeconds(subSeconds),
        .charRamWrEn(timerWrEn),
        .charRamAddr(timerAddr),
        .charRamData(timerData)
    );
    
    // Character RAM
    wire [12:0] charRamAddrB;
    wire [6:0] charRamDataRdB;
    
    characterRAM charRam(
        .clkA(clk),
        .addrA(timerAddr),
        .wrEnA(timerWrEn),
        .dataWrA(timerData),
        .clkB(clk),
        .addrB(charRamAddrB),
        .dataRdB(charRamDataRdB)
    );
    
    // Text generator
    wire [7:0] textRed, textGreen, textBlue;
    
    textGenerator textGen(
        .clock25MHz(clk),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .charRamData(charRamDataRdB),
        .pixelR(textRed),
        .pixelG(textGreen),
        .pixelB(textBlue),
        .charRamAddrB(charRamAddrB)
    );
    
    // Multi-layer pixel arbiter
    // Priority: Text > Minimap > Raycaster
    wire textActive;
    assign textActive = (textRed != 8'h00) || (textGreen != 8'h00) || (textBlue != 8'h00);
    
    assign red   = textActive ? textRed   : (isMinimapPixel ? minimapRed   : raycasterRed);
    assign green = textActive ? textGreen : (isMinimapPixel ? minimapGreen : raycasterGreen);
    assign blue  = textActive ? textBlue  : (isMinimapPixel ? minimapBlue  : raycasterBlue);

endmodule


// Timer display module for top-right corner (from raycasterWithTimer.v)
module timerDisplayTopRight(
    input clock50MHz,
    input resetn,
    input [5:0] hours,
    input [5:0] minutes,
    input [5:0] seconds,
    input [16:0] subSeconds,
    output reg charRamWrEn,
    output reg [12:0] charRamAddr,
    output reg [6:0] charRamData
);
    reg [3:0] writeIndex;
    reg [3:0] state;
    
    localparam IDLE = 4'd0;
    localparam WRITE_TIMER = 4'd1;
    
    reg [19:0] updateCounter;
    
    function [6:0] digitToAscii;
        input [3:0] digit;
        begin
            digitToAscii = 7'd48 + digit;
        end
    endfunction
    
    wire [3:0] subSec10000 = subSeconds / 17'd10000;
    wire [16:0] subSecRem1 = subSeconds % 17'd10000;
    wire [3:0] subSec1000  = subSecRem1 / 17'd1000;
    wire [16:0] subSecRem2 = subSecRem1 % 17'd1000;
    wire [3:0] subSec100   = subSecRem2 / 17'd100;
    wire [16:0] subSecRem3 = subSecRem2 % 17'd100;
    wire [3:0] subSec10    = subSecRem3 / 17'd10;
    wire [3:0] subSec1     = subSecRem3 % 17'd10;
    
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            state <= IDLE;
            writeIndex <= 4'd0;
            charRamWrEn <= 1'b0;
            updateCounter <= 20'd0;
        end else begin
            case (state)
                IDLE: begin
                    charRamWrEn <= 1'b0;
                    if (updateCounter == 20'd799999) begin
                        updateCounter <= 20'd0;
                        state <= WRITE_TIMER;
                        writeIndex <= 4'd0;
                    end else begin
                        updateCounter <= updateCounter + 20'd1;
                    end
                end
                
                WRITE_TIMER: begin
                    charRamWrEn <= 1'b1;
                    case (writeIndex)
                        4'd0: begin charRamAddr <= 13'd64; charRamData <= digitToAscii(hours / 6'd10); writeIndex <= writeIndex + 4'd1; end
                        4'd1: begin charRamAddr <= 13'd65; charRamData <= digitToAscii(hours % 6'd10); writeIndex <= writeIndex + 4'd1; end
                        4'd2: begin charRamAddr <= 13'd66; charRamData <= 7'd58; writeIndex <= writeIndex + 4'd1; end
                        4'd3: begin charRamAddr <= 13'd67; charRamData <= digitToAscii(minutes / 6'd10); writeIndex <= writeIndex + 4'd1; end
                        4'd4: begin charRamAddr <= 13'd68; charRamData <= digitToAscii(minutes % 6'd10); writeIndex <= writeIndex + 4'd1; end
                        4'd5: begin charRamAddr <= 13'd69; charRamData <= 7'd58; writeIndex <= writeIndex + 4'd1; end
                        4'd6: begin charRamAddr <= 13'd70; charRamData <= digitToAscii(seconds / 6'd10); writeIndex <= writeIndex + 4'd1; end
                        4'd7: begin charRamAddr <= 13'd71; charRamData <= digitToAscii(seconds % 6'd10); writeIndex <= writeIndex + 4'd1; end
                        4'd8: begin charRamAddr <= 13'd72; charRamData <= 7'd46; writeIndex <= writeIndex + 4'd1; end
                        4'd9: begin charRamAddr <= 13'd73; charRamData <= digitToAscii(subSec10000); writeIndex <= writeIndex + 4'd1; end
                        4'd10: begin charRamAddr <= 13'd74; charRamData <= digitToAscii(subSec1000); writeIndex <= writeIndex + 4'd1; end
                        4'd11: begin charRamAddr <= 13'd75; charRamData <= digitToAscii(subSec100); writeIndex <= writeIndex + 4'd1; end
                        4'd12: begin charRamAddr <= 13'd76; charRamData <= digitToAscii(subSec10); writeIndex <= writeIndex + 4'd1; end
                        4'd13: begin charRamAddr <= 13'd77; charRamData <= digitToAscii(subSec1); writeIndex <= 4'd0; state <= IDLE; end
                        default: begin state <= IDLE; charRamWrEn <= 1'b0; writeIndex <= 4'd0; end
                    endcase
                end
                
                default: begin
                    state <= IDLE;
                    charRamWrEn <= 1'b0;
                end
            endcase
        end
    end
endmodule
