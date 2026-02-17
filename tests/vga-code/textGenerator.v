// text generator - converts ASCII characters to pixels using font ROM
// supports position-based colored backgrounds for channel measurements
module textGenerator(
    input clock25MHz,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    input [6:0] charRamData,
    input runState,  // 1 = running, 0 = stopped (for RUN/STOP region coloring)
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
    
    // determine region type more efficiently using direct comparisons
    // measurement rows: 21,22,25,26,29,30,33,34,37,38
    // status rows: 40,41
    wire [5:0] rowMod = charRow - 6'd21;
    wire isMeasRow = (rowMod <= 6'd17) && ((rowMod[1:0] == 2'd0) || (rowMod[1:0] == 2'd1));
    wire isStatusRow = (charRow == 6'd40 || charRow == 6'd41);
    wire inMeasCol = (charCol >= 7'd54 && charCol <= 7'd66);
    wire inLeftMeasCol = (charCol >= 7'd54 && charCol <= 7'd59);   // 6 cols for ch0/ch2 values
    wire inRightMeasCol = (charCol >= 7'd61 && charCol <= 7'd66);  // 6 cols for ch1/ch3 values
    
    // status regions - all extended to 6 columns
    wire inRunStopRegion = (charRow == 6'd40 && charCol >= 7'd54 && charCol <= 7'd59);
    wire inTrigLevelRegion = (charRow == 6'd40 && charCol >= 7'd61 && charCol <= 7'd66);
    wire inTrigModeRegion = (charRow == 6'd41 && charCol >= 7'd54 && charCol <= 7'd59);
    wire inTrigEdgeRegion = (charRow == 6'd41 && charCol >= 7'd61 && charCol <= 7'd66);
    
    // determine channel/status type - use case for better synthesis
    reg [1:0] colorChannel;
    reg useChannelColor;
    reg [2:0] statusColorType;
    
    always @(*) begin
        colorChannel = 2'd0;
        useChannelColor = 1'b0;
        statusColorType = 3'd0;
        
        if (isMeasRow && inMeasCol) begin
            // measurement region - determine channel from row and column
            useChannelColor = 1'b1;
            if (inLeftMeasCol) begin
                // left column: even rows (21,25,29,33,37) = ch0, odd rows (22,26,30,34,38) = ch2
                colorChannel = rowMod[0] ? 2'd2 : 2'd0;
            end else if (inRightMeasCol) begin
                // right column: even rows = ch1, odd rows = ch3
                colorChannel = rowMod[0] ? 2'd3 : 2'd1;
            end
        end else if (inRunStopRegion) begin
            statusColorType = runState ? 3'd1 : 3'd2;
        end else if (inTrigModeRegion || inTrigEdgeRegion || inTrigLevelRegion) begin
            statusColorType = 3'd3;  // all orange
        end
    end
    
    // channel background colors - muted colors matching waveform traces
    reg [7:0] bgR, bgG, bgB;
    reg [7:0] fgR, fgG, fgB;
    reg hasBackground;
    
    always @(*) begin
        // default: white on black
        fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
        bgR = 8'h00; bgG = 8'h00; bgB = 8'h00;
        hasBackground = 1'b0;
        
        if (useChannelColor) begin
            hasBackground = 1'b1;
            case (colorChannel)
                2'd0: begin // ch0 - muted green background (matches waveform)
                    bgR = 8'h00; bgG = 8'h80; bgB = 8'h00;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
                2'd1: begin // ch1 - muted red background (matches waveform)
                    bgR = 8'h80; bgG = 8'h00; bgB = 8'h00;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
                2'd2: begin // ch2 - muted blue background (matches waveform)
                    bgR = 8'h00; bgG = 8'h00; bgB = 8'h80;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
                2'd3: begin // ch3 - muted yellow background (matches waveform), BLACK text for readability
                    bgR = 8'h80; bgG = 8'h80; bgB = 8'h00;
                    fgR = 8'h00; fgG = 8'h00; fgB = 8'h00;
                end
            endcase
        end else if (statusColorType != 3'd0) begin
            hasBackground = 1'b1;
            case (statusColorType)
                3'd1: begin // RUN - muted green background
                    bgR = 8'h00; bgG = 8'h80; bgB = 8'h00;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
                3'd2: begin // STOP - muted red background
                    bgR = 8'h80; bgG = 8'h00; bgB = 8'h00;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
                3'd3: begin // trigger mode/edge/level - muted orange
                    bgR = 8'hA0; bgG = 8'h60; bgB = 8'h00;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
                default: begin
                    bgR = 8'h00; bgG = 8'h00; bgB = 8'h00;
                    fgR = 8'hFF; fgG = 8'hFF; fgB = 8'hFF;
                end
            endcase
        end
    end
    
    // output color
    always @(*) begin
        if (visible && pixelOn) begin
            pixelR = fgR;
            pixelG = fgG;
            pixelB = fgB;
        end else if (visible && hasBackground) begin
            pixelR = bgR;
            pixelG = bgG;
            pixelB = bgB;
        end else begin
            pixelR = 8'h00;
            pixelG = 8'h00;
            pixelB = 8'h00;
        end
    end
endmodule

