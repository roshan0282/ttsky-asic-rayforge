// vga driver module - generates sync signals and pixel coordinates
module vgaDriver(
    input clock50MHz,
    input resetn,
    input [9:0] resolutionX,
    input [9:0] resolutionY,
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output pixelClkOut
);
    // standard VGA timing blanking periods (640x480 @ 60Hz)
    wire [9:0] hFrontPorch = 10'd16;
    wire [9:0] hSyncPulse = 10'd96;
    wire [9:0] hBackPorch = 10'd48;
    wire [9:0] vFrontPorch = 10'd10;
    wire [9:0] vSyncPulse = 10'd2;
    wire [9:0] vBackPorch = 10'd33;
    
    // calculate timing values
    wire [9:0] hSyncStart = resolutionX + hFrontPorch;
    wire [9:0] hSyncEnd = hSyncStart + hSyncPulse;
    wire [9:0] hTotal = resolutionX + hFrontPorch + hSyncPulse + hBackPorch;
    
    wire [9:0] vSyncStart = resolutionY + vFrontPorch;
    wire [9:0] vSyncEnd = vSyncStart + vSyncPulse;
    wire [9:0] vTotal = resolutionY + vFrontPorch + vSyncPulse + vBackPorch;

    wire pixelClk;
    wire [9:0] xCoord;
    wire [9:0] yCoord;
    wire hEnd;
    wire vis;

    pixelClock pc (.clock(clock50MHz), .resetn(resetn), .pulse(pixelClk));
    
    hCounter hc (
        .pixelClock(pixelClk), 
        .resetn(resetn),
        .hTotal(hTotal),
        .xOrd(xCoord), 
        .hEnd(hEnd)
    );
    
    vCounter vc (
        .pixelClock(pixelClk), 
        .resetn(resetn), 
        .hEnd(hEnd),
        .vTotal(vTotal),
        .yOrd(yCoord)
    );
    
    syncGenerator sg (
        .xOrd(xCoord), 
        .yOrd(yCoord),
        .hVisible(resolutionX),
        .hSyncStart(hSyncStart),
        .hSyncEnd(hSyncEnd),
        .vVisible(resolutionY),
        .vSyncStart(vSyncStart),
        .vSyncEnd(vSyncEnd),
        .hSync(hSync), 
        .vSync(vSync), 
        .visible(vis)
    );
    
    assign xOrd = xCoord;
    assign yOrd = yCoord;
    assign visible = vis;
    assign pixelClkOut = pixelClk;
endmodule

// pixel clock divider - divide 50MHz by 2 to get 25MHz
module pixelClock(
    input clock,
    input resetn,
    output reg pulse
);
    always @(posedge clock or negedge resetn) begin
        if (!resetn) begin
            pulse <= 0;
        end else begin
            pulse <= ~pulse;
        end
    end
endmodule

// horizontal counter
module hCounter(
    input pixelClock,
    input resetn,
    input [9:0] hTotal,
    output reg [9:0] xOrd,
    output reg hEnd
);
    always @(posedge pixelClock or negedge resetn) begin
        if (!resetn) begin
            xOrd <= 10'd0;
            hEnd <= 0;
        end else begin
            if (xOrd == hTotal - 1) begin
                xOrd <= 10'd0;
                hEnd <= 1;
            end else begin
                xOrd <= xOrd + 1;
                hEnd <= 0;
            end
        end
    end
endmodule

// vertical counter
module vCounter(
    input pixelClock,
    input resetn,
    input hEnd,
    input [9:0] vTotal,
    output reg [9:0] yOrd
);
    always @(posedge pixelClock or negedge resetn) begin
        if (!resetn) begin
            yOrd <= 10'd0;
        end else if (hEnd) begin
            if (yOrd == vTotal - 1)
                yOrd <= 10'd0;
            else
                yOrd <= yOrd + 1;
        end
    end
endmodule

// sync signal generator
module syncGenerator(
    input wire [9:0] xOrd,
    input wire [9:0] yOrd,
    input wire [9:0] hVisible,
    input wire [9:0] hSyncStart,
    input wire [9:0] hSyncEnd,
    input wire [9:0] vVisible,
    input wire [9:0] vSyncStart,
    input wire [9:0] vSyncEnd,
    output reg hSync,
    output reg vSync,
    output reg visible
);
    always @(*) begin
        // hSync conditions
        if (xOrd >= hSyncStart && xOrd < hSyncEnd)
            hSync = 0;
        else
            hSync = 1;

        // vSync conditions
        if (yOrd >= vSyncStart && yOrd < vSyncEnd)
            vSync = 0;
        else
            vSync = 1;

        // visible conditions
        if (xOrd < hVisible && yOrd < vVisible)
            visible = 1;
        else
            visible = 0;
    end
endmodule

