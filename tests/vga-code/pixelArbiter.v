// pixel arbiter - combines multiple visual layers with priority
module pixelArbiter(
    input clock25MHz,
    input [7:0] textR, textG, textB,
    input [7:0] uiR, uiG, uiB,
    input [7:0] cursorR, cursorG, cursorB,
    input [7:0] trigR, trigG, trigB,
    input [7:0] waveR, waveG, waveB,
    input [7:0] axisR, axisG, axisB,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    output reg [7:0] vgaR,
    output reg [7:0] vgaG,
    output reg [7:0] vgaB
);
    // determine if layer has non-transparent pixel
    wire textActive = (textR != 8'h00) || (textG != 8'h00) || (textB != 8'h00);
    wire uiActive = (uiR != 8'h00) || (uiG != 8'h00) || (uiB != 8'h00);
    wire cursorActive = (cursorR != 8'h00) || (cursorG != 8'h00) || (cursorB != 8'h00);
    wire trigActive = (trigR != 8'h00) || (trigG != 8'h00) || (trigB != 8'h00);
    wire waveActive = (waveR != 8'h00) || (waveG != 8'h00) || (waveB != 8'h00);
    wire axisActive = (axisR != 8'h00) || (axisG != 8'h00) || (axisB != 8'h00);
    
    // priority multiplexer
    always @(*) begin
        if (!visible) begin
            // blanking period
            vgaR = 8'h00;
            vgaG = 8'h00;
            vgaB = 8'h00;
        end else if (textActive) begin
            // highest priority: text
            vgaR = textR;
            vgaG = textG;
            vgaB = textB;
        end else if (uiActive) begin
            // ui highlight backgrounds under text
            vgaR = uiR;
            vgaG = uiG;
            vgaB = uiB;
        end else if (cursorActive) begin
            // cursors on top of triggers and wave
            vgaR = cursorR;
            vgaG = cursorG;
            vgaB = cursorB;
        end else if (trigActive) begin
            // trigger overlay above waveform
            vgaR = trigR;
            vgaG = trigG;
            vgaB = trigB;
        end else if (waveActive) begin
            // medium priority: waveform
            vgaR = waveR;
            vgaG = waveG;
            vgaB = waveB;
        end else if (axisActive) begin
            // low priority: grid
            vgaR = axisR;
            vgaG = axisG;
            vgaB = axisB;
        end else begin
            // background: dark blue
            vgaR = 8'h00;
            vgaG = 8'h20;
            vgaB = 8'h40;
        end
    end
endmodule
