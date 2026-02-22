// Raycaster with Timer Overlay - displays HH:MM:SS.SSSSS in top right corner
// Integrates the raycaster rendering with timer text overlay
module raycasterWithTimer(
    input clk,
    input rst_n,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);

    // Background raycaster rendering
    wire [7:0] bgRed, bgGreen, bgBlue;
    
    raycaster raycastRenderer(
        .clock(clk),
        .reset(~rst_n),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .red(bgRed),
        .green(bgGreen),
        .blue(bgBlue)
    );
    
    // Clock counter for timer
    wire [5:0] hours;
    wire [5:0] minutes;
    wire [5:0] seconds;
    wire [16:0] subSeconds;
    
    clockCounter clkCounter(
        .clock50MHz(clk),
        .resetn(rst_n),
        .hours(hours),
        .minutes(minutes),
        .seconds(seconds),
        .subSeconds(subSeconds)
    );
    
    // Timer display - writes to character RAM at top right
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
    
    // Character RAM (dual-port)
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
    
    // Text generator - renders text
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
    
    // Pixel arbiter - overlay text on raycaster background
    pixelArbiter arbiter(
        .textRed(textRed),
        .textGreen(textGreen),
        .textBlue(textBlue),
        .bgRed(bgRed),
        .bgGreen(bgGreen),
        .bgBlue(bgBlue),
        .outRed(red),
        .outGreen(green),
        .outBlue(blue)
    );

endmodule


// Timer display module modified for top-right corner
// Writes HH:MM:SS.SSSSS to character RAM (top right corner)
module timerDisplayTopRight(
    input clock50MHz,
    input resetn,
    input [5:0] hours,
    input [5:0] minutes,
    input [5:0] seconds,
    input [16:0] subSeconds,  // 0-99999
    output reg charRamWrEn,
    output reg [12:0] charRamAddr,
    output reg [6:0] charRamData
);
    // state machine for writing timer digits
    reg [3:0] writeIndex;
    reg [3:0] state;
    
    // states
    localparam IDLE = 4'd0;
    localparam WRITE_TIMER = 4'd1;
    
    // update counter - update timer display every ~16ms (60Hz update rate)
    // 50MHz / 800000 = 62.5Hz
    reg [19:0] updateCounter;
    
    // helper function to convert digit to ASCII
    function [6:0] digitToAscii;
        input [3:0] digit;
        begin
            digitToAscii = 7'd48 + digit;  // '0' = ASCII 48
        end
    endfunction
    
    // extract digits for subseconds (5 digits)
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
                    
                    // count cycles for update rate
                    if (updateCounter == 20'd799999) begin
                        updateCounter <= 20'd0;
                        state <= WRITE_TIMER;
                        writeIndex <= 4'd0;
                    end else begin
                        updateCounter <= updateCounter + 20'd1;
                    end
                end
                
                WRITE_TIMER: begin
                    // write timer at row 0, col 64: "HH:MM:SS.SSSSS" (14 chars)
                    // row 0 * 80 + 64 = 64 (top right with 2 char margin)
                    charRamWrEn <= 1'b1;
                    
                    case (writeIndex)
                        4'd0: begin  // hours tens
                            charRamAddr <= 13'd64;
                            charRamData <= digitToAscii(hours / 6'd10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd1: begin  // hours ones
                            charRamAddr <= 13'd65;
                            charRamData <= digitToAscii(hours % 6'd10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd2: begin  // colon
                            charRamAddr <= 13'd66;
                            charRamData <= 7'd58;  // ':'
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd3: begin  // minutes tens
                            charRamAddr <= 13'd67;
                            charRamData <= digitToAscii(minutes / 6'd10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd4: begin  // minutes ones
                            charRamAddr <= 13'd68;
                            charRamData <= digitToAscii(minutes % 6'd10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd5: begin  // colon
                            charRamAddr <= 13'd69;
                            charRamData <= 7'd58;  // ':'
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd6: begin  // seconds tens
                            charRamAddr <= 13'd70;
                            charRamData <= digitToAscii(seconds / 6'd10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd7: begin  // seconds ones
                            charRamAddr <= 13'd71;
                            charRamData <= digitToAscii(seconds % 6'd10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd8: begin  // decimal point
                            charRamAddr <= 13'd72;
                            charRamData <= 7'd46;  // '.'
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd9: begin  // subseconds 10000s digit
                            charRamAddr <= 13'd73;
                            charRamData <= digitToAscii(subSec10000);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd10: begin  // subseconds 1000s digit
                            charRamAddr <= 13'd74;
                            charRamData <= digitToAscii(subSec1000);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd11: begin  // subseconds 100s digit
                            charRamAddr <= 13'd75;
                            charRamData <= digitToAscii(subSec100);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd12: begin  // subseconds 10s digit
                            charRamAddr <= 13'd76;
                            charRamData <= digitToAscii(subSec10);
                            writeIndex <= writeIndex + 4'd1;
                        end
                        4'd13: begin  // subseconds 1s digit
                            charRamAddr <= 13'd77;
                            charRamData <= digitToAscii(subSec1);
                            writeIndex <= 4'd0;
                            state <= IDLE;
                        end
                        default: begin
                            state <= IDLE;
                            charRamWrEn <= 1'b0;
                            writeIndex <= 4'd0;
                        end
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
