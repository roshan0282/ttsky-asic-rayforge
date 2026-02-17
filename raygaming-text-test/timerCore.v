// timer core - displays HH:MM:SS.SSSSS timer at top left
// takes pixel coordinates, outputs 8-bit RGB
module timerCore(
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
    wire [7:0] textR, textG, textB;
    textGenerator textGen (
        .clock25MHz(clk),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .charRamData(charRamDataRdB),
        .pixelR(textR),
        .pixelG(textG),
        .pixelB(textB),
        .charRamAddrB(charRamAddrB)
    );
    
    // background generator - rotating quadrant colors
    wire [7:0] bgR, bgG, bgB;
    backgroundGenerator bgGen (
        .clock(clk),
        .reset(rst_n),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .red(bgR),
        .green(bgG),
        .blue(bgB)
    );
    
    // pixel arbiter - composite text over background
    pixelArbiter arbiter (
        .textRed(textR),
        .textGreen(textG),
        .textBlue(textB),
        .bgRed(bgR),
        .bgGreen(bgG),
        .bgBlue(bgB),
        .outRed(red),
        .outGreen(green),
        .outBlue(blue)
    );
endmodule

