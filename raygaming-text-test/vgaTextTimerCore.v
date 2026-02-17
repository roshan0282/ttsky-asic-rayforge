// vga text timer core - displays HH:MM:SS.SSSSS in top left corner
// this module only handles the display logic, timing is provided by testbench
module vgaTextTimerCore(
    input clk,
    input rst_n,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);
    // clock counter for timer
    wire [5:0] hours;
    wire [5:0] minutes;
    wire [5:0] seconds;
    wire [16:0] subSeconds;
    
    clockCounter clkCounter (
        .clock50MHz(clk),
        .resetn(rst_n),
        .hours(hours),
        .minutes(minutes),
        .seconds(seconds),
        .subSeconds(subSeconds)
    );
    
    // timer display - writes to character RAM
    wire timerWrEn;
    wire [12:0] timerAddr;
    wire [6:0] timerData;
    
    timerDisplay timerDisp (
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
    
    // character RAM (dual-port)
    wire [12:0] charRamAddrB;
    wire [6:0] charRamDataRdB;
    
    characterRAM charRam (
        .clkA(clk),
        .addrA(timerAddr),
        .wrEnA(timerWrEn),
        .dataWrA(timerData),
        .clkB(clk),
        .addrB(charRamAddrB),
        .dataRdB(charRamDataRdB)
    );
    
    // text generator - renders text
    wire [7:0] textRed, textGreen, textBlue;
    textGenerator textGen (
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
    
    // background generator - 4 rotating color quadrants
    wire [7:0] bgRed, bgGreen, bgBlue;
    backgroundGenerator bgGen (
        .clock(clk),
        .reset(rst_n),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .red(bgRed),
        .green(bgGreen),
        .blue(bgBlue)
    );
    
    // pixel arbiter - text over background
    pixelArbiter arbiter (
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

