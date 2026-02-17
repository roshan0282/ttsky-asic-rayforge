// text composer - writes text strings to character RAM for display
// TODO: fix the python generation of this file, it's not working correctly, currently manually editing it
module textComposer(
    input clock50MHz,
    input resetn,
    input [1:0] screenMode,
    // real-time clock inputs
    input [5:0] hours,
    input [5:0] minutes,
    input [5:0] seconds,
    input [13:0] subSeconds,  // 0-9999 (0.1ms resolution)
    // parameter inputs for status display
    input [31:0] paramRunState,         // from paramRAM addr 0x06
    input [31:0] paramTriggerMode,      // from paramRAM addr 0x04
    input [31:0] paramTriggerEdge,      // from paramRAM addr 0x05
    input [31:0] paramTriggerLevel,     // from paramRAM addr 0x03
    input [31:0] paramVoltsPerDiv,      // volts/div scale
    input [31:0] paramTimePerDiv,       // time/div scale
    input [31:0] paramVerticalOffset,   // vertical shift
    input [31:0] paramHorizontalOffset, // horizontal shift
    // per-channel measurement inputs
    input [15:0] ch0Vmax, ch1Vmax, ch2Vmax, ch3Vmax,
    input [15:0] ch0Vmin, ch1Vmin, ch2Vmin, ch3Vmin,
    input [15:0] ch0Vp2p, ch1Vp2p, ch2Vp2p, ch3Vp2p,
    input [31:0] ch0Period, ch1Period, ch2Period, ch3Period,
    input [31:0] ch0Freq, ch1Freq, ch2Freq, ch3Freq,
    // ui menu inputs
    input [3:0] channelsEnabled,
    input [1:0] selectedChannel,
    input [1:0] selectedCursor,
    // per-channel offsets
    input signed [9:0] ch0VerticalOffset,
    input signed [9:0] ch1VerticalOffset,
    input signed [9:0] ch2VerticalOffset,
    input signed [9:0] ch3VerticalOffset,
    input signed [9:0] ch0HorizontalOffset,
    input signed [9:0] ch1HorizontalOffset,
    input signed [9:0] ch2HorizontalOffset,
    input signed [9:0] ch3HorizontalOffset,
    // cursor positions
    input [9:0] cursorX1,
    input [9:0] cursorX2,
    input [9:0] cursorY1,
    input [9:0] cursorY2,
    // ui mode for highlight
    input uiMode,  // 0=channel mode, 1=cursor mode
    // measurement calculation complete signal
    input calculationComplete,
    output reg charRamWrEn,
    output reg [12:0] charRamAddr,
    output reg [6:0] charRamData
);
    // Version string characters (7-bit ASCII)
    localparam [6:0] TEXT_VERSION_MAJOR_CHAR = 7'd51; // '4'
    localparam [6:0] TEXT_VERSION_MINOR_CHAR = 7'd53; // '2'

    // Build date (MM/DD/YYYY) digits
    localparam [6:0] TEXT_BUILD_MONTH_CHAR1 = 7'd49; // '1'
    localparam [6:0] TEXT_BUILD_MONTH_CHAR2 = 7'd49; // '1'

    localparam [6:0] TEXT_BUILD_DAY_CHAR1 = 7'd50;   // '2'
    localparam [6:0] TEXT_BUILD_DAY_CHAR2 = 7'd53;   // '5'

    localparam [6:0] TEXT_BUILD_YEAR_CHAR1 = 7'd50;  // '2'
    localparam [6:0] TEXT_BUILD_YEAR_CHAR2 = 7'd48;  // '0'
    localparam [6:0] TEXT_BUILD_YEAR_CHAR3 = 7'd50;  // '2'
    localparam [6:0] TEXT_BUILD_YEAR_CHAR4 = 7'd53;  // '5'
    
    // screen modes
    localparam START_MENU = 2'd0;
    localparam HELP_SCREEN = 2'd1;
    localparam WAVEFORM_SCREEN = 2'd2;
    
    // state machine
    localparam IDLE = 4'd0;
    localparam CLEAR_SCREEN = 4'd1;
    localparam WRITE_CHAR = 4'd2;
    localparam UPDATE_CLOCK = 4'd3;
    localparam UPDATE_RUN_STATE = 4'd4;
    localparam UPDATE_MEASUREMENTS = 4'd5;
    localparam UPDATE_TRIGGER_MODE = 4'd6;
    localparam UPDATE_TRIGGER_EDGE = 4'd7;
    localparam UPDATE_TRIGGER_LEVEL = 4'd8;
    localparam UPDATE_AXIS_INFO = 4'd9;
    localparam UPDATE_UI_MENU = 4'd10;
    localparam UPDATE_CURSOR_VALUES = 4'd11;
    
    reg [3:0] state;
    reg [12:0] charCounter;
    reg [1:0] lastScreenMode;
    reg [7:0] writeIndex;
    reg [3:0] clockWriteIndex;
    reg [3:0] runStateWriteIndex;
    reg [7:0] measurementWriteIndex;
    reg [3:0] triggerModeWriteIndex;
    reg [3:0] triggerEdgeWriteIndex;
    reg [3:0] triggerLevelWriteIndex;
    reg [5:0] axisInfoWriteIndex;
    reg [6:0] uiWriteIndex;
    reg [6:0] cursorWriteIndex;
    reg [9:0] cursorDeltaX, cursorDeltaY;
    reg doingInitialUpdate;  // flag to chain updates on screen entry
    // ui menu line rendering temps
    reg [1:0] uiLine;
    reg [5:0] uiPos;
    reg signed [9:0] uiVOff;
    reg signed [9:0] uiHOff;
    reg [12:0] uiBaseAddr;
    reg [9:0] uiVAbs, uiHAbs;
    reg [3:0] uiVHund, uiVTens, uiVOnes, uiHHund, uiHTens, uiHOnes;
    
    // track previous values to detect changes
    reg lastRunState;
    reg [1:0] lastTriggerMode;
    reg lastTriggerEdge;
    reg [11:0] lastTriggerLevel;
    // per-channel measurement tracking
    reg [15:0] lastCh0Vmax, lastCh1Vmax, lastCh2Vmax, lastCh3Vmax;
    reg [15:0] lastCh0Vmin, lastCh1Vmin, lastCh2Vmin, lastCh3Vmin;
    reg [15:0] lastCh0Vp2p, lastCh1Vp2p, lastCh2Vp2p, lastCh3Vp2p;
    reg [31:0] lastCh0Freq, lastCh1Freq, lastCh2Freq, lastCh3Freq;
    reg [31:0] lastCh0Period, lastCh1Period, lastCh2Period, lastCh3Period;
    reg [3:0] lastVoltsPerDiv;
    reg [3:0] lastTimePerDiv;
    reg [7:0] lastVerticalOffset;
    reg [9:0] lastHorizontalOffset;
    reg [3:0] lastChannelsEnabled;
    reg [1:0] lastSelectedChannel;
    reg [1:0] lastSelectedCursor;
    reg signed [9:0] lastCh0VO, lastCh1VO, lastCh2VO, lastCh3VO;
    reg signed [9:0] lastCh0HO, lastCh1HO, lastCh2HO, lastCh3HO;
    reg [9:0] lastCursorX1, lastCursorX2, lastCursorY1, lastCursorY2;
    
    // derived axis parameter codes
    wire [3:0] voltsPerDivCode = paramVoltsPerDiv[3:0];
    wire [3:0] timePerDivCode = paramTimePerDiv[3:0];
    wire signed [9:0] verticalOffsetValue = paramVerticalOffset[9:0];
    wire signed [9:0] horizontalOffsetValue = paramHorizontalOffset[9:0];
    
    wire [9:0] verticalOffsetAbs = verticalOffsetValue[9] ? (~verticalOffsetValue + 10'd1) : verticalOffsetValue[9:0];
    wire [7:0] horizontalOffsetAbs = horizontalOffsetValue[9] ? (~horizontalOffsetValue[7:0] + 8'd1) : horizontalOffsetValue[7:0];
    
    wire [3:0] verticalOffsetHundreds = (verticalOffsetAbs / 10'd100) % 10'd10;
    wire [3:0] verticalOffsetTens = (verticalOffsetAbs / 10'd10) % 10'd10;
    wire [3:0] verticalOffsetOnes = verticalOffsetAbs % 10'd10;
    wire [3:0] horizontalOffsetTens = (horizontalOffsetAbs / 8'd10) % 8'd10;
    wire [3:0] horizontalOffsetOnes = horizontalOffsetAbs % 8'd10;
    
    // base addresses for axis info text (right side of axis area)
    // column 54 (80 chars per row)
    localparam [12:0] vAxisBaseAddr = 13'd534;  // row 6, col 54
    localparam [12:0] tAxisBaseAddr = 13'd614;  // row 7, col 54
    // (row 8 blank for spacing)
    // ui menu base rows under axis info
    localparam [12:0] chMenuBaseAddr = 13'd774;  // row 9, col 54
    localparam [12:0] curMenuBaseAddr = 13'd854; // row 10, col 54
    // (row 11 blank for spacing)
    // per-channel offsets rows
    localparam [12:0] ch1OffBaseAddr = 13'd1014;  // row 12, col 54
    localparam [12:0] ch2OffBaseAddr = 13'd1094;  // row 13, col 54
    localparam [12:0] ch3OffBaseAddr = 13'd1174;  // row 14, col 54
    localparam [12:0] ch4OffBaseAddr = 13'd1254;  // row 15, col 54
    // (row 16 blank for spacing)
    // cursor value display rows
    localparam [12:0] cursorXBaseAddr = 13'd1414; // row 17, col 54: "X1:xxx X2:xxx"
    localparam [12:0] cursorYBaseAddr = 13'd1494; // row 18, col 54: "Y1:xxx Y2:xxx"
    // (row 19 blank for spacing)
    // measurement display rows (rows 20-31)
    localparam [12:0] vmaxLabelAddr = 13'd1654;   // row 20, col 54: "Channel Vmax"
    localparam [12:0] vmaxRow1Addr = 13'd1734;    // row 21, col 54: "XX.XXX XX.XXX" (ch0, ch1)
    localparam [12:0] vmaxRow2Addr = 13'd1814;    // row 22, col 54: "XX.XXX XX.XXX" (ch2, ch3)
    localparam [12:0] vminLabelAddr = 13'd1974;   // row 24, col 54: "Channel Vmin"
    localparam [12:0] vminRow1Addr = 13'd2054;    // row 25, col 54
    localparam [12:0] vminRow2Addr = 13'd2134;    // row 26, col 54
    localparam [12:0] vp2pLabelAddr = 13'd2294;   // row 28, col 54: "Channel Vp2p"
    localparam [12:0] vp2pRow1Addr = 13'd2374;    // row 29, col 54
    localparam [12:0] vp2pRow2Addr = 13'd2454;    // row 30, col 54
    localparam [12:0] periLabelAddr = 13'd2614;   // row 32, col 54: "Channel Peri"
    localparam [12:0] periRow1Addr = 13'd2694;    // row 33, col 54
    localparam [12:0] periRow2Addr = 13'd2774;    // row 34, col 54
    localparam [12:0] freqLabelAddr = 13'd2934;   // row 36, col 54: "Channel Freq"
    localparam [12:0] freqRow1Addr = 13'd3014;    // row 37, col 54
    localparam [12:0] freqRow2Addr = 13'd3094;    // row 38, col 54
    // status display rows (rows 40-41)
    localparam [12:0] statusRow1Addr = 13'd3254;  // row 40, col 54: "RUN"/"STOP" + level
    localparam [12:0] statusRow2Addr = 13'd3334;  // row 41, col 54: trigger mode + edge
    
    // TODO: this is non-standard, we should use a LUT to convert digits to ASCII
    // function to convert digit to ascii
    function [6:0] digitToAscii;
        input [3:0] digit;
        begin
            digitToAscii = 7'd48 + {3'd0, digit};  // '0' is ASCII 48
        end
    endfunction
    
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            state <= CLEAR_SCREEN;  // start by clearing screen
            charRamWrEn <= 1'b0;
            charRamAddr <= 13'd0;
            charRamData <= 7'd32;
            charCounter <= 13'd0;
            lastScreenMode <= 2'd3;  // invalid mode to force initial write
            writeIndex <= 8'd0;
            clockWriteIndex <= 4'd0;
            runStateWriteIndex <= 4'd0;
            measurementWriteIndex <= 8'd0;
            triggerModeWriteIndex <= 4'd0;
            triggerEdgeWriteIndex <= 4'd0;
            triggerLevelWriteIndex <= 4'd0;
            lastRunState <= 1'b0;
            lastTriggerMode <= 2'd0;
            lastTriggerEdge <= 1'b0;
            lastTriggerLevel <= 12'd0;
            // per-channel measurement reset
            lastCh0Vmax <= 16'd0; lastCh1Vmax <= 16'd0; lastCh2Vmax <= 16'd0; lastCh3Vmax <= 16'd0;
            lastCh0Vmin <= 16'd0; lastCh1Vmin <= 16'd0; lastCh2Vmin <= 16'd0; lastCh3Vmin <= 16'd0;
            lastCh0Vp2p <= 16'd0; lastCh1Vp2p <= 16'd0; lastCh2Vp2p <= 16'd0; lastCh3Vp2p <= 16'd0;
            lastCh0Freq <= 32'd0; lastCh1Freq <= 32'd0; lastCh2Freq <= 32'd0; lastCh3Freq <= 32'd0;
            lastCh0Period <= 32'd0; lastCh1Period <= 32'd0; lastCh2Period <= 32'd0; lastCh3Period <= 32'd0;
            lastVoltsPerDiv <= 4'd0;
            lastTimePerDiv <= 4'd0;
            lastVerticalOffset <= 8'd0;
            lastHorizontalOffset <= 10'd0;
            axisInfoWriteIndex <= 6'd0;
            uiWriteIndex <= 6'd0;
            cursorWriteIndex <= 6'd0;
            lastCh0VO <= 10'sd0; lastCh1VO <= 10'sd0; lastCh2VO <= 10'sd0; lastCh3VO <= 10'sd0;
            lastCh0HO <= 10'sd0; lastCh1HO <= 10'sd0; lastCh2HO <= 10'sd0; lastCh3HO <= 10'sd0;
            lastChannelsEnabled <= 4'd0;
            lastSelectedChannel <= 2'd0;
            lastSelectedCursor <= 2'd0;
            lastCursorX1 <= 10'd0;
            lastCursorX2 <= 10'd0;
            lastCursorY1 <= 10'd0;
            lastCursorY2 <= 10'd0;
            doingInitialUpdate <= 1'b0;
        end else begin
            charRamWrEn <= 1'b0;  // default
            
            case (state)
                IDLE: begin
                    if (screenMode != lastScreenMode) begin
                        lastScreenMode <= screenMode;
                        state <= CLEAR_SCREEN;
                        charCounter <= 13'd0;
                        // reset measurement tracking when switching screens to prevent stale values
                        lastCh0Vmax <= 16'd0; lastCh1Vmax <= 16'd0; lastCh2Vmax <= 16'd0; lastCh3Vmax <= 16'd0;
                        lastCh0Vmin <= 16'd0; lastCh1Vmin <= 16'd0; lastCh2Vmin <= 16'd0; lastCh3Vmin <= 16'd0;
                        lastCh0Vp2p <= 16'd0; lastCh1Vp2p <= 16'd0; lastCh2Vp2p <= 16'd0; lastCh3Vp2p <= 16'd0;
                        lastCh0Freq <= 32'd0; lastCh1Freq <= 32'd0; lastCh2Freq <= 32'd0; lastCh3Freq <= 32'd0;
                        lastCh0Period <= 32'd0; lastCh1Period <= 32'd0; lastCh2Period <= 32'd0; lastCh3Period <= 32'd0;
                        // reset all tracking to force updates when entering waveform screen
                        lastRunState <= 1'b0;
                        lastTriggerMode <= 2'd0;
                        lastTriggerEdge <= 1'b0;
                        lastTriggerLevel <= 12'd0;
                        lastVoltsPerDiv <= 4'd0;
                        lastTimePerDiv <= 4'd0;
                        lastVerticalOffset <= 8'd0;
                        lastHorizontalOffset <= 10'd0;
                        lastChannelsEnabled <= 4'd0;
                        lastSelectedChannel <= 2'd0;
                        lastSelectedCursor <= 2'd0;
                        lastCh0VO <= 10'sd0; lastCh1VO <= 10'sd0; lastCh2VO <= 10'sd0; lastCh3VO <= 10'sd0;
                        lastCh0HO <= 10'sd0; lastCh1HO <= 10'sd0; lastCh2HO <= 10'sd0; lastCh3HO <= 10'sd0;
                        lastCursorX1 <= 10'd0; lastCursorX2 <= 10'd0; lastCursorY1 <= 10'd0; lastCursorY2 <= 10'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && paramRunState[0] != lastRunState) begin
                        // run state changed in waveform screen
                        lastRunState <= paramRunState[0];
                        state <= UPDATE_RUN_STATE;
                        runStateWriteIndex <= 4'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && paramTriggerMode[1:0] != lastTriggerMode) begin
                        // trigger mode changed in waveform screen
                        lastTriggerMode <= paramTriggerMode[1:0];
                        state <= UPDATE_TRIGGER_MODE;
                        triggerModeWriteIndex <= 4'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && paramTriggerEdge[0] != lastTriggerEdge) begin
                        // trigger edge changed in waveform screen
                        lastTriggerEdge <= paramTriggerEdge[0];
                        state <= UPDATE_TRIGGER_EDGE;
                        triggerEdgeWriteIndex <= 4'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && paramTriggerLevel[11:0] != lastTriggerLevel) begin
                        // trigger level changed in waveform screen
                        lastTriggerLevel <= paramTriggerLevel[11:0];
                        state <= UPDATE_TRIGGER_LEVEL;
                        triggerLevelWriteIndex <= 4'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && 
                                 (paramVoltsPerDiv[3:0] != lastVoltsPerDiv ||
                                  paramTimePerDiv[3:0] != lastTimePerDiv ||
                                  paramVerticalOffset[7:0] != lastVerticalOffset ||
                                  paramHorizontalOffset[9:0] != lastHorizontalOffset)) begin
                        // axis scaling or offset changed in waveform screen
                        lastVoltsPerDiv <= paramVoltsPerDiv[3:0];
                        lastTimePerDiv <= paramTimePerDiv[3:0];
                        lastVerticalOffset <= paramVerticalOffset[7:0];
                        lastHorizontalOffset <= paramHorizontalOffset[9:0];
                        state <= UPDATE_AXIS_INFO;
                        axisInfoWriteIndex <= 6'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && 
                                (calculationComplete ||
                                 ch0Vmax != lastCh0Vmax || ch1Vmax != lastCh1Vmax || ch2Vmax != lastCh2Vmax || ch3Vmax != lastCh3Vmax ||
                                 ch0Vmin != lastCh0Vmin || ch1Vmin != lastCh1Vmin || ch2Vmin != lastCh2Vmin || ch3Vmin != lastCh3Vmin ||
                                 ch0Vp2p != lastCh0Vp2p || ch1Vp2p != lastCh1Vp2p || ch2Vp2p != lastCh2Vp2p || ch3Vp2p != lastCh3Vp2p ||
                                 ch0Freq != lastCh0Freq || ch1Freq != lastCh1Freq || ch2Freq != lastCh2Freq || ch3Freq != lastCh3Freq ||
                                 ch0Period != lastCh0Period || ch1Period != lastCh1Period || ch2Period != lastCh2Period || ch3Period != lastCh3Period)) begin
                        // measurements changed in waveform screen (or calculation just completed)
                        lastCh0Vmax <= ch0Vmax; lastCh1Vmax <= ch1Vmax; lastCh2Vmax <= ch2Vmax; lastCh3Vmax <= ch3Vmax;
                        lastCh0Vmin <= ch0Vmin; lastCh1Vmin <= ch1Vmin; lastCh2Vmin <= ch2Vmin; lastCh3Vmin <= ch3Vmin;
                        lastCh0Vp2p <= ch0Vp2p; lastCh1Vp2p <= ch1Vp2p; lastCh2Vp2p <= ch2Vp2p; lastCh3Vp2p <= ch3Vp2p;
                        lastCh0Freq <= ch0Freq; lastCh1Freq <= ch1Freq; lastCh2Freq <= ch2Freq; lastCh3Freq <= ch3Freq;
                        lastCh0Period <= ch0Period; lastCh1Period <= ch1Period; lastCh2Period <= ch2Period; lastCh3Period <= ch3Period;
                        state <= UPDATE_MEASUREMENTS;
                        measurementWriteIndex <= 8'd0;
                    end else if (screenMode == WAVEFORM_SCREEN && 
                                (channelsEnabled != lastChannelsEnabled ||
                                 selectedChannel != lastSelectedChannel ||
                                 selectedCursor != lastSelectedCursor)) begin
                        lastChannelsEnabled <= channelsEnabled;
                        lastSelectedChannel <= selectedChannel;
                        lastSelectedCursor <= selectedCursor;
                        state <= UPDATE_UI_MENU;
                        uiWriteIndex <= 6'd0;
                    end else if (screenMode == WAVEFORM_SCREEN &&
                                (ch0VerticalOffset != lastCh0VO || ch1VerticalOffset != lastCh1VO ||
                                 ch2VerticalOffset != lastCh2VO || ch3VerticalOffset != lastCh3VO ||
                                 ch0HorizontalOffset != lastCh0HO || ch1HorizontalOffset != lastCh1HO ||
                                 ch2HorizontalOffset != lastCh2HO || ch3HorizontalOffset != lastCh3HO)) begin
                        lastCh0VO <= ch0VerticalOffset; lastCh1VO <= ch1VerticalOffset;
                        lastCh2VO <= ch2VerticalOffset; lastCh3VO <= ch3VerticalOffset;
                        lastCh0HO <= ch0HorizontalOffset; lastCh1HO <= ch1HorizontalOffset;
                        lastCh2HO <= ch2HorizontalOffset; lastCh3HO <= ch3HorizontalOffset;
                        state <= UPDATE_UI_MENU;
                        uiWriteIndex <= 6'd0;
                    end else if (screenMode == WAVEFORM_SCREEN &&
                                (cursorX1 != lastCursorX1 || cursorX2 != lastCursorX2 ||
                                 cursorY1 != lastCursorY1 || cursorY2 != lastCursorY2)) begin
                        lastCursorX1 <= cursorX1;
                        lastCursorX2 <= cursorX2;
                        lastCursorY1 <= cursorY1;
                        lastCursorY2 <= cursorY2;
                        state <= UPDATE_CURSOR_VALUES;
                        cursorWriteIndex <= 6'd0;
                    end else begin
                        // continuously update clock
                        state <= UPDATE_CLOCK;
                        clockWriteIndex <= 4'd0;
                    end
                end
                
                CLEAR_SCREEN: begin
                    charRamWrEn <= 1'b1;
                    charRamAddr <= charCounter;
                    charRamData <= 7'd32;  // space
                    charCounter <= charCounter + 13'd1;
                    
                    if (charCounter == 13'd4799) begin
                        state <= WRITE_CHAR;
                        writeIndex <= 8'd0;
                    end
                end
                
                WRITE_CHAR: begin
                    charRamWrEn <= 1'b1;
                    case (screenMode)
                        START_MENU: begin
                            // write "FPGAScope - v3.5 Build 11 19th 2025" at row 1, col 17
                            if (writeIndex < 8'd35) begin
                                charRamAddr <= 13'd107 + writeIndex;  // row 1 * 80 + 17 = 109
                                case (writeIndex)
                                    8'd0:  charRamData <= 7'd70;   // F
                                    8'd1:  charRamData <= 7'd80;   // P
                                    8'd2:  charRamData <= 7'd71;   // G
                                    8'd3:  charRamData <= 7'd65;   // A
                                    8'd4:  charRamData <= 7'd83;   // S
                                    8'd5:  charRamData <= 7'd99;   // c
                                    8'd6:  charRamData <= 7'd111;  // o
                                    8'd7:  charRamData <= 7'd112;  // p
                                    8'd8:  charRamData <= 7'd101;  // e
                                    8'd9:  charRamData <= 7'd32;   // space
                                    8'd10: charRamData <= 7'd45;   // -
                                    8'd11: charRamData <= 7'd32;   // space
                                    8'd12: charRamData <= 7'd66;   // B
                                    8'd13: charRamData <= 7'd117;  // u
                                    8'd14: charRamData <= 7'd105;  // i
                                    8'd15: charRamData <= 7'd108;  // l
                                    8'd16: charRamData <= 7'd100;  // d
                                    8'd17: charRamData <= 7'd32;   // space
                                    8'd18: charRamData <= TEXT_BUILD_MONTH_CHAR1;
                                    8'd19: charRamData <= TEXT_BUILD_MONTH_CHAR2;
                                    8'd20: charRamData <= 7'd45;   // -
                                    8'd21: charRamData <= TEXT_BUILD_DAY_CHAR1;
                                    8'd22: charRamData <= TEXT_BUILD_DAY_CHAR2;
                                    8'd23: charRamData <= 7'd45;   // -
                                    8'd24: charRamData <= TEXT_BUILD_YEAR_CHAR1;
                                    8'd25: charRamData <= TEXT_BUILD_YEAR_CHAR2;
                                    8'd26: charRamData <= TEXT_BUILD_YEAR_CHAR3;
                                    8'd27: charRamData <= TEXT_BUILD_YEAR_CHAR4;
                                    default: charRamData <= 7'd32;
                                endcase
                                writeIndex <= writeIndex + 8'd1;
                            // end else if (writeIndex < 8'd62) begin
                            //     // write "DE1-SoC OSCILLOSCOPE" at row 10, col 25
                            //     charRamAddr <= 13'd1025 + (writeIndex - 8'd42);  // row 10 * 80 + 25
                            //     case (writeIndex - 8'd42)
                            //         8'd0:  charRamData <= 7'd68;   // D
                            //         8'd1:  charRamData <= 7'd69;   // E
                            //         8'd2:  charRamData <= 7'd49;   // 1
                            //         8'd3:  charRamData <= 7'd45;   // -
                            //         8'd4:  charRamData <= 7'd83;   // S
                            //         8'd5:  charRamData <= 7'd111;  // o
                            //         8'd6:  charRamData <= 7'd67;   // C
                            //         8'd7:  charRamData <= 7'd32;   // space
                            //         8'd8:  charRamData <= 7'd79;   // O
                            //         8'd9:  charRamData <= 7'd83;   // S
                            //         8'd10: charRamData <= 7'd67;   // C
                            //         8'd11: charRamData <= 7'd73;   // I
                            //         8'd12: charRamData <= 7'd76;   // L
                            //         8'd13: charRamData <= 7'd76;   // L
                            //         8'd14: charRamData <= 7'd79;   // O
                            //         8'd15: charRamData <= 7'd83;   // S
                            //         8'd16: charRamData <= 7'd67;   // C
                            //         8'd17: charRamData <= 7'd79;   // O
                            //         8'd18: charRamData <= 7'd80;   // P
                            //         8'd19: charRamData <= 7'd69;   // E
                            //         default: charRamData <= 7'd32;
                            //     endcase
                            //     writeIndex <= writeIndex + 8'd1;
                            end else if (writeIndex < 8'd78) begin
                                // write "Press s to Start" at row 12, col 30
                                charRamAddr <= 13'd990 + (writeIndex - 8'd62);  // row 12 * 80 + 30
                                case (writeIndex - 8'd62)
                                    8'd0:  charRamData <= 7'd80;   // P
                                    8'd1:  charRamData <= 7'd114;  // r
                                    8'd2:  charRamData <= 7'd101;  // e
                                    8'd3:  charRamData <= 7'd115;  // s
                                    8'd4:  charRamData <= 7'd115;  // s
                                    8'd5:  charRamData <= 7'd32;   // space
                                    8'd6:  charRamData <= 7'd115;  // s
                                    8'd7:  charRamData <= 7'd32;   // space
                                    8'd8:  charRamData <= 7'd116;  // t
                                    8'd9:  charRamData <= 7'd111;  // o
                                    8'd10: charRamData <= 7'd32;   // space
                                    8'd11: charRamData <= 7'd83;   // S
                                    8'd12: charRamData <= 7'd116;  // t
                                    8'd13: charRamData <= 7'd97;   // a
                                    8'd14: charRamData <= 7'd114;  // r
                                    8'd15: charRamData <= 7'd116;  // t
                                    default: charRamData <= 7'd32;
                                endcase
                                writeIndex <= writeIndex + 8'd1;
                            end else begin
                                state <= UPDATE_CLOCK;  // start clock updates
                                charRamWrEn <= 1'b0;
                                lastScreenMode <= screenMode;  // update to prevent re-trigger
                                clockWriteIndex <= 4'd0;
                            end
                        end
                        
                        HELP_SCREEN: begin
                            // write keyboard controls help text
                            if (writeIndex < 8'd250) begin  // extended for full help text
                                charRamWrEn <= 1'b1;
                                
                                // "FPGAScope - v3.5 Build November 19th 2025" at row 1, col 17
                                if (writeIndex < 8'd42) begin
                                    charRamAddr <= 13'd107 + writeIndex;  // row 1 * 80 + 17 = 97
                                case (writeIndex)
                                    8'd0:  charRamData <= 7'd70;   // F
                                    8'd1:  charRamData <= 7'd80;   // P
                                    8'd2:  charRamData <= 7'd71;   // G
                                    8'd3:  charRamData <= 7'd65;   // A
                                    8'd4:  charRamData <= 7'd83;   // S
                                    8'd5:  charRamData <= 7'd99;   // c
                                    8'd6:  charRamData <= 7'd111;  // o
                                    8'd7:  charRamData <= 7'd112;  // p
                                    8'd8:  charRamData <= 7'd101;  // e
                                    8'd9:  charRamData <= 7'd32;   // space
                                    8'd10: charRamData <= 7'd45;   // -
                                    8'd11: charRamData <= 7'd32;   // space
                                    8'd12: charRamData <= 7'd66;   // B
                                    8'd13: charRamData <= 7'd117;  // u
                                    8'd14: charRamData <= 7'd105;  // i
                                    8'd15: charRamData <= 7'd108;  // l
                                    8'd16: charRamData <= 7'd100;  // d
                                    8'd17: charRamData <= 7'd32;   // space
                                    8'd18: charRamData <= TEXT_BUILD_MONTH_CHAR1;
                                    8'd19: charRamData <= TEXT_BUILD_MONTH_CHAR2;
                                    8'd20: charRamData <= 7'd45;   // -
                                    8'd21: charRamData <= TEXT_BUILD_DAY_CHAR1;
                                    8'd22: charRamData <= TEXT_BUILD_DAY_CHAR2;
                                    8'd23: charRamData <= 7'd45;   // -
                                    8'd24: charRamData <= TEXT_BUILD_YEAR_CHAR1;
                                    8'd25: charRamData <= TEXT_BUILD_YEAR_CHAR2;
                                    8'd26: charRamData <= TEXT_BUILD_YEAR_CHAR3;
                                    8'd27: charRamData <= TEXT_BUILD_YEAR_CHAR4;
                                    default: charRamData <= 7'd32;
                                    endcase
                                // Title: "KEYBOARD CONTROLS" at row 5, col 30
                                end else if (writeIndex < 8'd60) begin
                                    charRamAddr <= 13'd430 + (writeIndex - 8'd42);  // row 5 * 80 + 30
                                case (writeIndex - 8'd42)
                                        8'd0:  charRamData <= 7'd75;   // K
                                        8'd1:  charRamData <= 7'd69;   // E
                                        8'd2:  charRamData <= 7'd89;   // Y
                                        8'd3:  charRamData <= 7'd66;   // B
                                        8'd4:  charRamData <= 7'd79;   // O
                                        8'd5:  charRamData <= 7'd65;   // A
                                        8'd6:  charRamData <= 7'd82;   // R
                                        8'd7:  charRamData <= 7'd68;   // D
                                        8'd8:  charRamData <= 7'd32;   // space
                                        8'd9:  charRamData <= 7'd67;   // C
                                        8'd10: charRamData <= 7'd79;   // O
                                        8'd11: charRamData <= 7'd78;   // N
                                        8'd12: charRamData <= 7'd84;   // T
                                        8'd13: charRamData <= 7'd82;   // R
                                        8'd14: charRamData <= 7'd79;   // O
                                        8'd15: charRamData <= 7'd76;   // L
                                        8'd16: charRamData <= 7'd83;   // S
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "s - start oscilloscope" at row 8, col 10
                                end else if (writeIndex < 8'd83) begin
                                    charRamAddr <= 13'd650 + (writeIndex - 8'd60);  // row 8 * 80 + 10
                                    case (writeIndex - 8'd60)
                                        8'd0:  charRamData <= 7'd115;  // s
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd115;  // s
                                        8'd5:  charRamData <= 7'd116;  // t
                                        8'd6:  charRamData <= 7'd97;   // a
                                        8'd7:  charRamData <= 7'd114;  // r
                                        8'd8:  charRamData <= 7'd116;  // t
                                        8'd9:  charRamData <= 7'd32;   // space
                                        8'd10: charRamData <= 7'd111;  // o
                                        8'd11: charRamData <= 7'd115;  // s
                                        8'd12: charRamData <= 7'd99;   // c
                                        8'd13: charRamData <= 7'd105;  // i
                                        8'd14: charRamData <= 7'd108;  // l
                                        8'd15: charRamData <= 7'd108;  // l
                                        8'd16: charRamData <= 7'd111;  // o
                                        8'd17: charRamData <= 7'd115;  // s
                                        8'd18: charRamData <= 7'd99;   // c
                                        8'd19: charRamData <= 7'd111;  // o
                                        8'd20: charRamData <= 7'd112;  // p
                                        8'd21: charRamData <= 7'd101;  // e
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "h - show help" at row 9, col 10
                                end else if (writeIndex < 8'd97) begin
                                    charRamAddr <= 13'd730 + (writeIndex - 8'd83);
                                    case (writeIndex - 8'd83)
                                        8'd0:  charRamData <= 7'd104;  // h
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd115;  // s
                                        8'd5:  charRamData <= 7'd104;  // h
                                        8'd6:  charRamData <= 7'd111;  // o
                                        8'd7:  charRamData <= 7'd119;  // w
                                        8'd8:  charRamData <= 7'd32;   // space
                                        8'd9:  charRamData <= 7'd104;  // h
                                        8'd10: charRamData <= 7'd101;  // e
                                        8'd11: charRamData <= 7'd108;  // l
                                        8'd12: charRamData <= 7'd112;  // p
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "q - quit back" at row 10, col 10
                                end else if (writeIndex < 8'd110) begin
                                    charRamAddr <= 13'd810 + (writeIndex - 8'd97);
                                    case (writeIndex - 8'd97)
                                        8'd0:  charRamData <= 7'd113;  // q
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd113;  // q
                                        8'd5:  charRamData <= 7'd117;  // u
                                        8'd6:  charRamData <= 7'd105;  // i
                                        8'd7:  charRamData <= 7'd116;  // t
                                        8'd8:  charRamData <= 7'd32;   // space
                                        8'd9:  charRamData <= 7'd98;   // b
                                        8'd10: charRamData <= 7'd97;   // a
                                        8'd11: charRamData <= 7'd99;   // c
                                        8'd12: charRamData <= 7'd107;  // k
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "r - run stop" at row 11, col 10
                                end else if (writeIndex < 8'd122) begin
                                    charRamAddr <= 13'd890 + (writeIndex - 8'd110);
                                    case (writeIndex - 8'd110)
                                        8'd0:  charRamData <= 7'd114;  // r
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd114;  // r
                                        8'd5:  charRamData <= 7'd117;  // u
                                        8'd6:  charRamData <= 7'd110;  // n
                                        8'd7:  charRamData <= 7'd47;   // /
                                        8'd8:  charRamData <= 7'd115;  // s
                                        8'd9:  charRamData <= 7'd116;  // t
                                        8'd10: charRamData <= 7'd111;  // o
                                        8'd11: charRamData <= 7'd112;  // p
                                    default: charRamData <= 7'd32;
                                endcase
                                // "t - trigger mode" at row 12, col 10
                                end else if (writeIndex < 8'd140) begin
                                    charRamAddr <= 13'd970 + (writeIndex - 8'd122);
                                    case (writeIndex - 8'd122)
                                        8'd0:  charRamData <= 7'd116;  // t
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd116;  // t
                                        8'd5:  charRamData <= 7'd114;  // r
                                        8'd6:  charRamData <= 7'd105;  // i
                                        8'd7:  charRamData <= 7'd103;  // g
                                        8'd8:  charRamData <= 7'd103;  // g
                                        8'd9:  charRamData <= 7'd101;  // e
                                        8'd10: charRamData <= 7'd114;  // r
                                        8'd11: charRamData <= 7'd32;   // space
                                        8'd12: charRamData <= 7'd109;  // m
                                        8'd13: charRamData <= 7'd111;  // o
                                        8'd14: charRamData <= 7'd100;  // d
                                        8'd15: charRamData <= 7'd101;  // e
                                        8'd16: charRamData <= 7'd32;   // space
                                        8'd17: charRamData <= 7'd99;   // c
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "e - trigger edge" at row 13, col 10
                                end else if (writeIndex < 8'd158) begin
                                    charRamAddr <= 13'd1050 + (writeIndex - 8'd140);
                                    case (writeIndex - 8'd140)
                                        8'd0:  charRamData <= 7'd101;  // e
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd116;  // t
                                        8'd5:  charRamData <= 7'd114;  // r
                                        8'd6:  charRamData <= 7'd105;  // i
                                        8'd7:  charRamData <= 7'd103;  // g
                                        8'd8:  charRamData <= 7'd103;  // g
                                        8'd9:  charRamData <= 7'd101;  // e
                                        8'd10: charRamData <= 7'd114;  // r
                                        8'd11: charRamData <= 7'd32;   // space
                                        8'd12: charRamData <= 7'd101;  // e
                                        8'd13: charRamData <= 7'd100;  // d
                                        8'd14: charRamData <= 7'd103;  // g
                                        8'd15: charRamData <= 7'd101;  // e
                                        8'd16: charRamData <= 7'd32;   // space
                                        8'd17: charRamData <= 7'd99;   // c
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "w - level up" at row 14, col 10
                                end else if (writeIndex < 8'd172) begin
                                    charRamAddr <= 13'd1130 + (writeIndex - 8'd158);
                                    case (writeIndex - 8'd158)
                                        8'd0:  charRamData <= 7'd119;  // w
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd108;  // l
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd118;  // v
                                        8'd7:  charRamData <= 7'd101;  // e
                                        8'd8:  charRamData <= 7'd108;  // l
                                        8'd9:  charRamData <= 7'd32;   // space
                                        8'd10: charRamData <= 7'd117;  // u
                                        8'd11: charRamData <= 7'd112;  // p
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "d - level down" at row 15, col 10
                                end else if (writeIndex < 8'd188) begin
                                    charRamAddr <= 13'd1210 + (writeIndex - 8'd172);
                                    case (writeIndex - 8'd172)
                                        8'd0:  charRamData <= 7'd100;  // d
                                        8'd1:  charRamData <= 7'd32;   // space
                                        8'd2:  charRamData <= 7'd45;   // -
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd108;  // l
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd118;  // v
                                        8'd7:  charRamData <= 7'd101;  // e
                                        8'd8:  charRamData <= 7'd108;  // l
                                        8'd9:  charRamData <= 7'd32;   // space
                                        8'd10: charRamData <= 7'd100;  // d
                                        8'd11: charRamData <= 7'd111;  // o
                                        8'd12: charRamData <= 7'd119;  // w
                                        8'd13: charRamData <= 7'd110;  // n
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "v/V - volts div (not impl)" at row 18, col 10
                                end else if (writeIndex < 8'd223) begin
                                    charRamAddr <= 13'd1450 + (writeIndex - 8'd196);
                                    case (writeIndex - 8'd196)
                                        8'd0:  charRamData <= 7'd118;  // v
                                        8'd1:  charRamData <= 7'd47;   // /
                                        8'd2:  charRamData <= 7'd86;   // V
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd45;   // -
                                        8'd5:  charRamData <= 7'd32;   // space
                                        8'd6:  charRamData <= 7'd118;  // v
                                        8'd7:  charRamData <= 7'd111;  // o
                                        8'd8:  charRamData <= 7'd108;  // l
                                        8'd9:  charRamData <= 7'd116;  // t
                                        8'd10: charRamData <= 7'd115;  // s
                                        8'd11: charRamData <= 7'd47;   // /
                                        8'd12: charRamData <= 7'd100;  // d
                                        8'd13: charRamData <= 7'd105;  // i
                                        8'd14: charRamData <= 7'd118;  // v
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "a/z - time div" at row 19, col 10
                                end else if (writeIndex < 8'd250) begin
                                    charRamAddr <= 13'd1530 + (writeIndex - 8'd223);
                                    case (writeIndex - 8'd223)
                                        8'd0:  charRamData <= 7'd97;   // a
                                        8'd1:  charRamData <= 7'd47;   // /
                                        8'd2:  charRamData <= 7'd122;  // z
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd45;   // -
                                        8'd5:  charRamData <= 7'd32;   // space
                                        8'd6:  charRamData <= 7'd116;  // t
                                        8'd7:  charRamData <= 7'd105;  // i
                                        8'd8:  charRamData <= 7'd109;  // m
                                        8'd9:  charRamData <= 7'd101;  // e
                                        8'd10: charRamData <= 7'd47;   // /
                                        8'd11: charRamData <= 7'd100;  // d
                                        8'd12: charRamData <= 7'd105;  // i
                                        8'd13: charRamData <= 7'd118;  // v
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "i/k - vert offset" at row 20, col 10
                                end else if (writeIndex < 8'd277) begin
                                    charRamAddr <= 13'd1610 + (writeIndex - 8'd250);
                                    case (writeIndex - 8'd250)
                                        8'd0:  charRamData <= 7'd105;  // i
                                        8'd1:  charRamData <= 7'd47;   // /
                                        8'd2:  charRamData <= 7'd107;  // k
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd45;   // -
                                        8'd5:  charRamData <= 7'd32;   // space
                                        8'd6:  charRamData <= 7'd118;  // v
                                        8'd7:  charRamData <= 7'd101;  // e
                                        8'd8:  charRamData <= 7'd114;  // r
                                        8'd9:  charRamData <= 7'd116;  // t
                                        8'd10: charRamData <= 7'd32;   // space
                                        8'd11: charRamData <= 7'd111;  // o
                                        8'd12: charRamData <= 7'd102;  // f
                                        8'd13: charRamData <= 7'd102;  // f
                                        8'd14: charRamData <= 7'd115;  // s
                                        8'd15: charRamData <= 7'd101;  // e
                                        8'd16: charRamData <= 7'd116;  // t
                                        default: charRamData <= 7'd32;
                                    endcase
                                // "j/l - horiz offset" at row 21, col 10
                                end else if (writeIndex < 8'd304) begin
                                    charRamAddr <= 13'd1690 + (writeIndex - 8'd277);
                                    case (writeIndex - 8'd277)
                                        8'd0:  charRamData <= 7'd106;  // j
                                        8'd1:  charRamData <= 7'd47;   // /
                                        8'd2:  charRamData <= 7'd108;  // l
                                        8'd3:  charRamData <= 7'd32;   // space
                                        8'd4:  charRamData <= 7'd45;   // -
                                        8'd5:  charRamData <= 7'd32;   // space
                                        8'd6:  charRamData <= 7'd104;  // h
                                        8'd7:  charRamData <= 7'd111;  // o
                                        8'd8:  charRamData <= 7'd114;  // r
                                        8'd9:  charRamData <= 7'd105;  // i
                                        8'd10: charRamData <= 7'd122;  // z
                                        8'd11: charRamData <= 7'd32;   // space
                                        8'd12: charRamData <= 7'd111;  // o
                                        8'd13: charRamData <= 7'd102;  // f
                                        8'd14: charRamData <= 7'd102;  // f
                                        8'd15: charRamData <= 7'd115;  // s
                                        8'd16: charRamData <= 7'd101;  // e
                                        8'd17: charRamData <= 7'd116;  // t
                                        default: charRamData <= 7'd32;
                                    endcase
                                end else begin
                                    state <= UPDATE_CLOCK;  // start clock updates
                                    charRamWrEn <= 1'b0;
                                    lastScreenMode <= screenMode;
                                    clockWriteIndex <= 4'd0;
                                end
                                writeIndex <= writeIndex + 8'd1;
                            end else begin
                                state <= UPDATE_CLOCK;  // start clock updates
                                charRamWrEn <= 1'b0;
                                lastScreenMode <= screenMode;
                                clockWriteIndex <= 4'd0;
                            end
                        end
                        
                        WAVEFORM_SCREEN: begin
                            // Row 0: Clock (row 1: FPGAScope version)
                            // Row 56: Status
                            // Row 57: Vmax/Vmin/Vdelta
                            // Row 58: Vp2p/Vrms/Period/Frequency
                            if (writeIndex < 8'd35) begin
                                charRamWrEn <= 1'b1;
                                // "FPGAScope - vX.Y Build mm ddth yyyy" at row 1, col 17 (after clock space)
                                charRamAddr <= 13'd107 + writeIndex;  // row 1 * 80 + 17 = 97
                                case (writeIndex)
                                    8'd0:  charRamData <= 7'd70;   // F
                                    8'd1:  charRamData <= 7'd80;   // P
                                    8'd2:  charRamData <= 7'd71;   // G
                                    8'd3:  charRamData <= 7'd65;   // A
                                    8'd4:  charRamData <= 7'd83;   // S
                                    8'd5:  charRamData <= 7'd99;   // c
                                    8'd6:  charRamData <= 7'd111;  // o
                                    8'd7:  charRamData <= 7'd112;  // p
                                    8'd8:  charRamData <= 7'd101;  // e
                                    8'd9:  charRamData <= 7'd32;   // space
                                    8'd10: charRamData <= 7'd45;   // -
                                    8'd11: charRamData <= 7'd32;   // space
                                    8'd12: charRamData <= 7'd66;   // B
                                    8'd13: charRamData <= 7'd117;  // u
                                    8'd14: charRamData <= 7'd105;  // i
                                    8'd15: charRamData <= 7'd108;  // l
                                    8'd16: charRamData <= 7'd100;  // d
                                    8'd17: charRamData <= 7'd32;   // space
                                    8'd18: charRamData <= TEXT_BUILD_MONTH_CHAR1;
                                    8'd19: charRamData <= TEXT_BUILD_MONTH_CHAR2;
                                    8'd20: charRamData <= 7'd45;   // -
                                    8'd21: charRamData <= TEXT_BUILD_DAY_CHAR1;
                                    8'd22: charRamData <= TEXT_BUILD_DAY_CHAR2;
                                    8'd23: charRamData <= 7'd45;   // -
                                    8'd24: charRamData <= TEXT_BUILD_YEAR_CHAR1;
                                    8'd25: charRamData <= TEXT_BUILD_YEAR_CHAR2;
                                    8'd26: charRamData <= TEXT_BUILD_YEAR_CHAR3;
                                    8'd27: charRamData <= TEXT_BUILD_YEAR_CHAR4;
                                    default: charRamData <= 7'd32;
                                endcase
                                writeIndex <= writeIndex + 8'd1;
                            end else if (writeIndex <= 8'd260) begin
                                // write measurement labels at rows 20, 24, 28, 32, 36
                                charRamWrEn <= 1'b1;
                                
                                // row 20: "Channel Vmax" at col 54
                                if (writeIndex < 8'd212) begin
                                    charRamAddr <= vmaxLabelAddr + {5'd0, writeIndex} - 13'd200;
                                    case (writeIndex - 8'd200)
                                        8'd0:  charRamData <= 7'd67;   // C
                                        8'd1:  charRamData <= 7'd104;  // h
                                        8'd2:  charRamData <= 7'd97;   // a
                                        8'd3:  charRamData <= 7'd110;  // n
                                        8'd4:  charRamData <= 7'd110;  // n
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd108;  // l
                                                    8'd7:  charRamData <= 7'd32;   // space
                                        8'd8:  charRamData <= 7'd86;   // V
                                        8'd9:  charRamData <= 7'd109;  // m
                                        8'd10: charRamData <= 7'd97;   // a
                                        8'd11: charRamData <= 7'd120;  // x
                                                    default: charRamData <= 7'd32;
                                            endcase
                                // row 24: "Channel Vmin" at col 54
                                end else if (writeIndex < 8'd224) begin
                                    charRamAddr <= vminLabelAddr + {5'd0, writeIndex} - 13'd212;
                                    case (writeIndex - 8'd212)
                                        8'd0:  charRamData <= 7'd67;   // C
                                        8'd1:  charRamData <= 7'd104;  // h
                                        8'd2:  charRamData <= 7'd97;   // a
                                        8'd3:  charRamData <= 7'd110;  // n
                                        8'd4:  charRamData <= 7'd110;  // n
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd108;  // l
                                                    8'd7:  charRamData <= 7'd32;   // space
                                        8'd8:  charRamData <= 7'd86;   // V
                                        8'd9:  charRamData <= 7'd109;  // m
                                        8'd10: charRamData <= 7'd105;  // i
                                        8'd11: charRamData <= 7'd110;  // n
                                                    default: charRamData <= 7'd32;
                                            endcase
                                // row 28: "Channel Vp2p" at col 54
                                end else if (writeIndex < 8'd236) begin
                                    charRamAddr <= vp2pLabelAddr + {5'd0, writeIndex} - 13'd224;
                                    case (writeIndex - 8'd224)
                                        8'd0:  charRamData <= 7'd67;   // C
                                        8'd1:  charRamData <= 7'd104;  // h
                                        8'd2:  charRamData <= 7'd97;   // a
                                        8'd3:  charRamData <= 7'd110;  // n
                                        8'd4:  charRamData <= 7'd110;  // n
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd108;  // l
                                                    8'd7:  charRamData <= 7'd32;   // space
                                        8'd8:  charRamData <= 7'd86;   // V
                                        8'd9:  charRamData <= 7'd112;  // p
                                        8'd10: charRamData <= 7'd50;   // 2
                                        8'd11: charRamData <= 7'd112;  // p
                                                    default: charRamData <= 7'd32;
                                            endcase
                                // row 32: "Channel Peri" at col 54
                                end else if (writeIndex < 8'd248) begin
                                    charRamAddr <= periLabelAddr + {5'd0, writeIndex} - 13'd236;
                                    case (writeIndex - 8'd236)
                                        8'd0:  charRamData <= 7'd67;   // C
                                        8'd1:  charRamData <= 7'd104;  // h
                                        8'd2:  charRamData <= 7'd97;   // a
                                        8'd3:  charRamData <= 7'd110;  // n
                                        8'd4:  charRamData <= 7'd110;  // n
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd108;  // l
                                        8'd7:  charRamData <= 7'd32;   // space
                                        8'd8:  charRamData <= 7'd80;   // P
                                        8'd9:  charRamData <= 7'd101;  // e
                                        8'd10: charRamData <= 7'd114;  // r
                                        8'd11: charRamData <= 7'd105;  // i
                                        default: charRamData <= 7'd32;
                                    endcase
                                // row 36: "Channel Freq" at col 54
                                end else if (writeIndex < 8'd260) begin
                                    charRamAddr <= freqLabelAddr + {5'd0, writeIndex} - 13'd248;
                                    case (writeIndex - 8'd248)
                                        8'd0:  charRamData <= 7'd67;   // C
                                        8'd1:  charRamData <= 7'd104;  // h
                                        8'd2:  charRamData <= 7'd97;   // a
                                        8'd3:  charRamData <= 7'd110;  // n
                                        8'd4:  charRamData <= 7'd110;  // n
                                        8'd5:  charRamData <= 7'd101;  // e
                                        8'd6:  charRamData <= 7'd108;  // l
                                        8'd7:  charRamData <= 7'd32;   // space
                                        8'd8:  charRamData <= 7'd70;   // F
                                        8'd9:  charRamData <= 7'd114;  // r
                                        8'd10: charRamData <= 7'd101;  // e
                                        8'd11: charRamData <= 7'd113;  // q
                                        default: charRamData <= 7'd32;
                                    endcase
                                end
                                writeIndex <= writeIndex + 8'd1;
                            end else begin
                                // after writing all labels, force updates of all dynamic content
                                doingInitialUpdate <= 1'b1;  // set flag to chain updates
                                state <= UPDATE_RUN_STATE;  // start with run state
                                runStateWriteIndex <= 4'd0;
                                // will chain through all update states
                                charRamWrEn <= 1'b0;
                                lastScreenMode <= screenMode;
                                clockWriteIndex <= 4'd0;
                            end
                        end
                        
                        default: begin
                            state <= IDLE;
                            charRamWrEn <= 1'b0;
                        end
                    endcase
                end
                
                UPDATE_CLOCK: begin
                    // write clock at row 1, col 2: "HH:MM:SS.XXXX" (13 chars)
                    // row 1 * 80 + 2 = 82
                    charRamWrEn <= 1'b1;
                    
                    case (clockWriteIndex)
                        4'd0: begin  // hours tens
                            charRamAddr <= 13'd82;
                            charRamData <= digitToAscii(hours / 6'd10);
                        end
                        4'd1: begin  // hours ones
                            charRamAddr <= 13'd83;
                            charRamData <= digitToAscii(hours % 6'd10);
                        end
                        4'd2: begin  // colon
                            charRamAddr <= 13'd84;
                            charRamData <= 7'd58;  // ':'
                        end
                        4'd3: begin  // minutes tens
                            charRamAddr <= 13'd85;
                            charRamData <= digitToAscii(minutes / 6'd10);
                        end
                        4'd4: begin  // minutes ones
                            charRamAddr <= 13'd86;
                            charRamData <= digitToAscii(minutes % 6'd10);
                        end
                        4'd5: begin  // colon
                            charRamAddr <= 13'd87;
                            charRamData <= 7'd58;  // ':'
                        end
                        4'd6: begin  // seconds tens
                            charRamAddr <= 13'd88;
                            charRamData <= digitToAscii(seconds / 6'd10);
                        end
                        4'd7: begin  // seconds ones
                            charRamAddr <= 13'd89;
                            charRamData <= digitToAscii(seconds % 6'd10);
                        end
                        4'd8: begin  // decimal point
                            charRamAddr <= 13'd90;
                            charRamData <= 7'd46;  // '.'
                        end
                        4'd9: begin  // subseconds thousands
                            charRamAddr <= 13'd91;
                            charRamData <= digitToAscii((subSeconds / 14'd1000) % 14'd10);
                        end
                        4'd10: begin  // subseconds hundreds
                            charRamAddr <= 13'd92;
                            charRamData <= digitToAscii((subSeconds / 14'd100) % 14'd10);
                        end
                        4'd11: begin  // subseconds tens
                            charRamAddr <= 13'd93;
                            charRamData <= digitToAscii((subSeconds / 14'd10) % 14'd10);
                        end
                        4'd12: begin  // subseconds ones
                            charRamAddr <= 13'd94;
                            charRamData <= digitToAscii(subSeconds % 14'd10);
                        end
                        default: begin
                            state <= IDLE;
                            charRamWrEn <= 1'b0;
                        end
                    endcase
                    
                    if (clockWriteIndex < 4'd13) begin
                        clockWriteIndex <= clockWriteIndex + 4'd1;
                    end else begin
                        clockWriteIndex <= 4'd0;
                        state <= IDLE;
                    end
                end
                
                UPDATE_RUN_STATE: begin
                    // update " RUN" or "STOP" text at row 40, col 54
                    charRamWrEn <= 1'b1;
                    
                        case (runStateWriteIndex)
                            4'd0: begin
                            charRamAddr <= statusRow1Addr;
                            charRamData <= paramRunState[0] ? 7'd32 : 7'd83;  // space or S
                            end
                            4'd1: begin
                            charRamAddr <= statusRow1Addr + 13'd1;
                            charRamData <= paramRunState[0] ? 7'd82 : 7'd84;  // R or T
                            end
                            4'd2: begin
                            charRamAddr <= statusRow1Addr + 13'd2;
                            charRamData <= paramRunState[0] ? 7'd85 : 7'd79;  // U or O
                            end
                            4'd3: begin
                            charRamAddr <= statusRow1Addr + 13'd3;
                            charRamData <= paramRunState[0] ? 7'd78 : 7'd80;  // N or P
                            end
                            default: begin
                                state <= IDLE;
                                charRamWrEn <= 1'b0;
                            end
                        endcase
                    
                    if (runStateWriteIndex < 4'd4) begin
                        runStateWriteIndex <= runStateWriteIndex + 4'd1;
                    end else begin
                        runStateWriteIndex <= 4'd0;
                        if (doingInitialUpdate) begin
                            state <= UPDATE_TRIGGER_MODE;
                            triggerModeWriteIndex <= 4'd0;
                        end else begin
                        state <= IDLE;
                        end
                    end
                end
                
                UPDATE_AXIS_INFO: begin
                    // display volts/time scaling and offsets on right side of axis
                    if (screenMode != WAVEFORM_SCREEN) begin
                        state <= IDLE;
                        charRamWrEn <= 1'b0;
                    end else begin
                        charRamWrEn <= 1'b1;
                        case (axisInfoWriteIndex)
                            // vertical axis text: "V:" then scale then " off" then signed offset
                            6'd0: begin
                                charRamAddr <= vAxisBaseAddr + 13'd0;
                                charRamData <= 7'd86;  // V
                            end
                            6'd1: begin
                                charRamAddr <= vAxisBaseAddr + 13'd1;
                                charRamData <= 7'd58;  // :
                            end
                            6'd2: begin
                                charRamAddr <= vAxisBaseAddr + 13'd2;
                                charRamData <= 7'd32;  // space
                            end
                            // volts/div scale (5 chars)
                            6'd3: begin
                                charRamAddr <= vAxisBaseAddr + 13'd3;
                                case (voltsPerDivCode)
                                    4'd0: charRamData <= 7'd49;  // 1 (10mv)
                                    4'd1: charRamData <= 7'd50;  // 2 (20mv)
                                    4'd2: charRamData <= 7'd53;  // 5 (50mv)
                                    4'd3: charRamData <= 7'd49;  // 1 (100mv)
                                    4'd4: charRamData <= 7'd50;  // 2 (200mv)
                                    4'd5: charRamData <= 7'd53;  // 5 (500mv)
                                    4'd6: charRamData <= 7'd49;  // 1 (1v)
                                    4'd7: charRamData <= 7'd50;  // 2 (2v)
                                    default: charRamData <= 7'd63; // ?
                                endcase
                            end
                            6'd4: begin
                                charRamAddr <= vAxisBaseAddr + 13'd4;
                                case (voltsPerDivCode)
                                    4'd0: charRamData <= 7'd48;  // 0
                                    4'd1: charRamData <= 7'd48;  // 0
                                    4'd2: charRamData <= 7'd48;  // 0 (50mv -> "50mv")
                                    4'd3: charRamData <= 7'd48;  // 0 (100mv)
                                    4'd4: charRamData <= 7'd48;  // 0 (200mv)
                                    4'd5: charRamData <= 7'd48;  // 0 (500mv)
                                    4'd6: charRamData <= 7'd86;  // V (1v)
                                    4'd7: charRamData <= 7'd86;  // V (2v)
                                    default: charRamData <= 7'd63; // ?
                                endcase
                            end
                            6'd5: begin
                                charRamAddr <= vAxisBaseAddr + 13'd5;
                                case (voltsPerDivCode)
                                    4'd0: charRamData <= 7'd109; // m
                                    4'd1: charRamData <= 7'd109; // m
                                    4'd2: charRamData <= 7'd109; // m
                                    4'd3: charRamData <= 7'd48;  // 0 (100mv -> "100mv")
                                    4'd4: charRamData <= 7'd48;  // 0
                                    4'd5: charRamData <= 7'd48;  // 0
                                    4'd6: charRamData <= 7'd32;  // space
                                    4'd7: charRamData <= 7'd32;  // space
                                    default: charRamData <= 7'd63;
                                endcase
                            end
                            6'd6: begin
                                charRamAddr <= vAxisBaseAddr + 13'd6;
                                case (voltsPerDivCode)
                                    4'd0: charRamData <= 7'd86;  // V
                                    4'd1: charRamData <= 7'd86;  // V
                                    4'd2: charRamData <= 7'd86;  // V
                                    4'd3: charRamData <= 7'd109; // m
                                    4'd4: charRamData <= 7'd109; // m
                                    4'd5: charRamData <= 7'd109; // m
                                    4'd6: charRamData <= 7'd32;  // space
                                    4'd7: charRamData <= 7'd32;  // space
                                    default: charRamData <= 7'd63;
                                endcase
                            end
                            6'd7: begin
                                charRamAddr <= vAxisBaseAddr + 13'd7;
                                case (voltsPerDivCode)
                                    4'd0: charRamData <= 7'd0;   // unused
                                    4'd1: charRamData <= 7'd0;
                                    4'd2: charRamData <= 7'd0;
                                    4'd3: charRamData <= 7'd86;  // V
                                    4'd4: charRamData <= 7'd86;  // V
                                    4'd5: charRamData <= 7'd86;  // V
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            6'd8: begin
                                charRamAddr <= vAxisBaseAddr + 13'd8;
                                charRamData <= 7'd32;
                            end
                            
                            // time axis text: "T:" then scale (up to 6 chars for "500ms ")
                            // format: "T: XXXus" or "T: XXms " or "T: Xs   "
                            6'd16: begin
                                charRamAddr <= tAxisBaseAddr + 13'd0;
                                charRamData <= 7'd84;  // T
                            end
                            6'd17: begin
                                charRamAddr <= tAxisBaseAddr + 13'd1;
                                charRamData <= 7'd58;  // :
                            end
                            6'd18: begin
                                charRamAddr <= tAxisBaseAddr + 13'd2;
                                charRamData <= 7'd32;  // space
                            end
                            // time/div scale: positions 3,4,5,6,7 for up to "500ms"
                            // codes: 0=50us, 1=100us, 2=200us, 3=500us, 4=1ms, 5=2ms, 6=5ms,
                            //        7=10ms, 8=20ms, 9=50ms, 10=100ms, 11=200ms, 12=500ms, 13=1s, 14=2s, 15=5s
                            6'd19: begin
                                charRamAddr <= tAxisBaseAddr + 13'd3;
                                case (timePerDivCode)
                                    4'd0:  charRamData <= 7'd53;  // 5 (50us)
                                    4'd1:  charRamData <= 7'd49;  // 1 (100us)
                                    4'd2:  charRamData <= 7'd50;  // 2 (200us)
                                    4'd3:  charRamData <= 7'd53;  // 5 (500us)
                                    4'd4:  charRamData <= 7'd49;  // 1 (1ms)
                                    4'd5:  charRamData <= 7'd50;  // 2 (2ms)
                                    4'd6:  charRamData <= 7'd53;  // 5 (5ms)
                                    4'd7:  charRamData <= 7'd49;  // 1 (10ms)
                                    4'd8:  charRamData <= 7'd50;  // 2 (20ms)
                                    4'd9:  charRamData <= 7'd53;  // 5 (50ms)
                                    4'd10: charRamData <= 7'd49;  // 1 (100ms)
                                    4'd11: charRamData <= 7'd50;  // 2 (200ms)
                                    4'd12: charRamData <= 7'd53;  // 5 (500ms)
                                    4'd13: charRamData <= 7'd49;  // 1 (1s)
                                    4'd14: charRamData <= 7'd50;  // 2 (2s)
                                    4'd15: charRamData <= 7'd53;  // 5 (5s)
                                    default: charRamData <= 7'd63; // ?
                                endcase
                            end
                            6'd20: begin
                                charRamAddr <= tAxisBaseAddr + 13'd4;
                                case (timePerDivCode)
                                    4'd0:  charRamData <= 7'd48;  // 0 (50us)
                                    4'd1:  charRamData <= 7'd48;  // 0 (100us)
                                    4'd2:  charRamData <= 7'd48;  // 0 (200us)
                                    4'd3:  charRamData <= 7'd48;  // 0 (500us)
                                    4'd4:  charRamData <= 7'd109; // m (1ms)
                                    4'd5:  charRamData <= 7'd109; // m (2ms)
                                    4'd6:  charRamData <= 7'd109; // m (5ms)
                                    4'd7:  charRamData <= 7'd48;  // 0 (10ms)
                                    4'd8:  charRamData <= 7'd48;  // 0 (20ms)
                                    4'd9:  charRamData <= 7'd48;  // 0 (50ms)
                                    4'd10: charRamData <= 7'd48;  // 0 (100ms)
                                    4'd11: charRamData <= 7'd48;  // 0 (200ms)
                                    4'd12: charRamData <= 7'd48;  // 0 (500ms)
                                    4'd13: charRamData <= 7'd115; // s (1s)
                                    4'd14: charRamData <= 7'd115; // s (2s)
                                    4'd15: charRamData <= 7'd115; // s (5s)
                                    default: charRamData <= 7'd63;
                                endcase
                            end
                            6'd21: begin
                                charRamAddr <= tAxisBaseAddr + 13'd5;
                                case (timePerDivCode)
                                    // 2-digit values: "50us" -> pos5 = 'u'
                                    4'd0:  charRamData <= 7'd117; // u (50us)
                                    // 3-digit values: "100us" -> pos5 = '0'
                                    4'd1:  charRamData <= 7'd48;  // 0 (100us)
                                    4'd2:  charRamData <= 7'd48;  // 0 (200us)
                                    4'd3:  charRamData <= 7'd48;  // 0 (500us)
                                    // 1-digit ms: "1ms" -> pos5 = 's'
                                    4'd4:  charRamData <= 7'd115; // s (1ms)
                                    4'd5:  charRamData <= 7'd115; // s (2ms)
                                    4'd6:  charRamData <= 7'd115; // s (5ms)
                                    // 2-digit ms: "10ms" -> pos5 = 'm'
                                    4'd7:  charRamData <= 7'd109; // m (10ms)
                                    4'd8:  charRamData <= 7'd109; // m (20ms)
                                    4'd9:  charRamData <= 7'd109; // m (50ms)
                                    // 3-digit ms: "100ms" -> pos5 = '0'
                                    4'd10: charRamData <= 7'd48;  // 0 (100ms)
                                    4'd11: charRamData <= 7'd48;  // 0 (200ms)
                                    4'd12: charRamData <= 7'd48;  // 0 (500ms)
                                    // 1-digit s: "1s" -> pos5 = space
                                    4'd13: charRamData <= 7'd32;  // space (1s)
                                    4'd14: charRamData <= 7'd32;  // space (2s)
                                    4'd15: charRamData <= 7'd32;  // space (5s)
                                    default: charRamData <= 7'd63;
                                endcase
                            end
                            6'd22: begin
                                charRamAddr <= tAxisBaseAddr + 13'd6;
                                case (timePerDivCode)
                                    // 2-digit us: "50us" -> pos6 = 's'
                                    4'd0:  charRamData <= 7'd115; // s (50us)
                                    // 3-digit us: "100us" -> pos6 = 'u'
                                    4'd1:  charRamData <= 7'd117; // u (100us)
                                    4'd2:  charRamData <= 7'd117; // u (200us)
                                    4'd3:  charRamData <= 7'd117; // u (500us)
                                    // 1-digit ms: "1ms" -> pos6 = space
                                    4'd4:  charRamData <= 7'd32;  // space (1ms)
                                    4'd5:  charRamData <= 7'd32;  // space (2ms)
                                    4'd6:  charRamData <= 7'd32;  // space (5ms)
                                    // 2-digit ms: "10ms" -> pos6 = 's'
                                    4'd7:  charRamData <= 7'd115; // s (10ms)
                                    4'd8:  charRamData <= 7'd115; // s (20ms)
                                    4'd9:  charRamData <= 7'd115; // s (50ms)
                                    // 3-digit ms: "100ms" -> pos6 = 'm'
                                    4'd10: charRamData <= 7'd109; // m (100ms)
                                    4'd11: charRamData <= 7'd109; // m (200ms)
                                    4'd12: charRamData <= 7'd109; // m (500ms)
                                    // 1-digit s: "1s" -> pos6 = space
                                    4'd13: charRamData <= 7'd32;  // space (1s)
                                    4'd14: charRamData <= 7'd32;  // space (2s)
                                    4'd15: charRamData <= 7'd32;  // space (5s)
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            6'd23: begin
                                charRamAddr <= tAxisBaseAddr + 13'd7;
                                case (timePerDivCode)
                                    // 2-digit us: "50us" -> pos7 = space
                                    4'd0:  charRamData <= 7'd32;  // space (50us)
                                    // 3-digit us: "100us" -> pos7 = 's'
                                    4'd1:  charRamData <= 7'd115; // s (100us)
                                    4'd2:  charRamData <= 7'd115; // s (200us)
                                    4'd3:  charRamData <= 7'd115; // s (500us)
                                    // 1-digit ms: "1ms" -> pos7 = space
                                    4'd4:  charRamData <= 7'd32;  // space (1ms)
                                    4'd5:  charRamData <= 7'd32;  // space (2ms)
                                    4'd6:  charRamData <= 7'd32;  // space (5ms)
                                    // 2-digit ms: "10ms" -> pos7 = space
                                    4'd7:  charRamData <= 7'd32;  // space (10ms)
                                    4'd8:  charRamData <= 7'd32;  // space (20ms)
                                    4'd9:  charRamData <= 7'd32;  // space (50ms)
                                    // 3-digit ms: "100ms" -> pos7 = 's'
                                    4'd10: charRamData <= 7'd115; // s (100ms)
                                    4'd11: charRamData <= 7'd115; // s (200ms)
                                    4'd12: charRamData <= 7'd115; // s (500ms)
                                    // 1-digit s: "1s" -> pos7 = space
                                    4'd13: charRamData <= 7'd32;  // space (1s)
                                    4'd14: charRamData <= 7'd32;  // space (2s)
                                    4'd15: charRamData <= 7'd32;  // space (5s)
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            default: begin
                                charRamWrEn <= 1'b0;
                            end
                        endcase
                        
                        if (axisInfoWriteIndex == 6'd23) begin
                            axisInfoWriteIndex <= 6'd0;
                            if (doingInitialUpdate) begin
                                state <= UPDATE_UI_MENU;
                                uiWriteIndex <= 7'd0;
                            end else begin
                            state <= IDLE;
                            end
                        end else begin
                            axisInfoWriteIndex <= axisInfoWriteIndex + 6'd1;
                        end
                    end
                end
                
                UPDATE_MEASUREMENTS: begin
                    // update 4-channel measurement values - COMPLETE VERSION
                    // format: XX.XXX XX.XXX (6 chars each with space = 13 chars per row)
                    // row 21: ch0Vmax ch1Vmax, row 22: ch2Vmax ch3Vmax
                    // row 25: ch0Vmin ch1Vmin, row 26: ch2Vmin ch3Vmin
                    // row 29: ch0Vp2p ch1Vp2p, row 30: ch2Vp2p ch3Vp2p
                    // row 33: ch0Period ch1Period, row 34: ch2Period ch3Period
                    // row 37: ch0Freq ch1Freq, row 38: ch2Freq ch3Freq
                    // row 40: RUN/STOP + level, row 41: trigger mode + edge
                    if (screenMode != WAVEFORM_SCREEN) begin
                        state <= IDLE;
                        charRamWrEn <= 1'b0;
                    end else begin
                        charRamWrEn <= 1'b1;
                        // sync lastCh* values at start of update to ensure proper change detection
                        if (measurementWriteIndex == 8'd0) begin
                            lastCh0Vmax <= ch0Vmax; lastCh1Vmax <= ch1Vmax; lastCh2Vmax <= ch2Vmax; lastCh3Vmax <= ch3Vmax;
                            lastCh0Vmin <= ch0Vmin; lastCh1Vmin <= ch1Vmin; lastCh2Vmin <= ch2Vmin; lastCh3Vmin <= ch3Vmin;
                            lastCh0Vp2p <= ch0Vp2p; lastCh1Vp2p <= ch1Vp2p; lastCh2Vp2p <= ch2Vp2p; lastCh3Vp2p <= ch3Vp2p;
                            lastCh0Freq <= ch0Freq; lastCh1Freq <= ch1Freq; lastCh2Freq <= ch2Freq; lastCh3Freq <= ch3Freq;
                            lastCh0Period <= ch0Period; lastCh1Period <= ch1Period; lastCh2Period <= ch2Period; lastCh3Period <= ch3Period;
                        end
                    
                    case (measurementWriteIndex)
                            // ========== VMAX (rows 21-22) ==========
                            // ch0 Vmax at row 21, col 54 - format: X.XXX
                            8'd0: begin charRamAddr <= vmaxRow1Addr; charRamData <= digitToAscii((ch0Vmax / 16'd1000) % 16'd10); end
                            8'd1: begin charRamAddr <= vmaxRow1Addr + 13'd1; charRamData <= 7'd46; end
                            8'd2: begin charRamAddr <= vmaxRow1Addr + 13'd2; charRamData <= digitToAscii((ch0Vmax / 16'd100) % 16'd10); end
                            8'd3: begin charRamAddr <= vmaxRow1Addr + 13'd3; charRamData <= digitToAscii((ch0Vmax / 16'd10) % 16'd10); end
                            8'd4: begin charRamAddr <= vmaxRow1Addr + 13'd4; charRamData <= digitToAscii(ch0Vmax % 16'd10); end
                            8'd5: begin charRamAddr <= vmaxRow1Addr + 13'd5; charRamData <= 7'd32; end
                            // ch1 Vmax
                            8'd6: begin charRamAddr <= vmaxRow1Addr + 13'd7; charRamData <= digitToAscii((ch1Vmax / 16'd1000) % 16'd10); end
                            8'd7: begin charRamAddr <= vmaxRow1Addr + 13'd8; charRamData <= 7'd46; end
                            8'd8: begin charRamAddr <= vmaxRow1Addr + 13'd9; charRamData <= digitToAscii((ch1Vmax / 16'd100) % 16'd10); end
                            8'd9: begin charRamAddr <= vmaxRow1Addr + 13'd10; charRamData <= digitToAscii((ch1Vmax / 16'd10) % 16'd10); end
                            8'd10: begin charRamAddr <= vmaxRow1Addr + 13'd11; charRamData <= digitToAscii(ch1Vmax % 16'd10); end
                            // ch2 Vmax at row 22
                            8'd11: begin charRamAddr <= vmaxRow2Addr; charRamData <= digitToAscii((ch2Vmax / 16'd1000) % 16'd10); end
                            8'd12: begin charRamAddr <= vmaxRow2Addr + 13'd1; charRamData <= 7'd46; end
                            8'd13: begin charRamAddr <= vmaxRow2Addr + 13'd2; charRamData <= digitToAscii((ch2Vmax / 16'd100) % 16'd10); end
                            8'd14: begin charRamAddr <= vmaxRow2Addr + 13'd3; charRamData <= digitToAscii((ch2Vmax / 16'd10) % 16'd10); end
                            8'd15: begin charRamAddr <= vmaxRow2Addr + 13'd4; charRamData <= digitToAscii(ch2Vmax % 16'd10); end
                            8'd16: begin charRamAddr <= vmaxRow2Addr + 13'd5; charRamData <= 7'd32; end
                            // ch3 Vmax
                            8'd17: begin charRamAddr <= vmaxRow2Addr + 13'd7; charRamData <= digitToAscii((ch3Vmax / 16'd1000) % 16'd10); end
                            8'd18: begin charRamAddr <= vmaxRow2Addr + 13'd8; charRamData <= 7'd46; end
                            8'd19: begin charRamAddr <= vmaxRow2Addr + 13'd9; charRamData <= digitToAscii((ch3Vmax / 16'd100) % 16'd10); end
                            8'd20: begin charRamAddr <= vmaxRow2Addr + 13'd10; charRamData <= digitToAscii((ch3Vmax / 16'd10) % 16'd10); end
                            8'd21: begin charRamAddr <= vmaxRow2Addr + 13'd11; charRamData <= digitToAscii(ch3Vmax % 16'd10); end
                            
                            // ========== VMIN (rows 25-26) ==========
                            // ch0 Vmin
                            8'd22: begin charRamAddr <= vminRow1Addr; charRamData <= digitToAscii((ch0Vmin / 16'd1000) % 16'd10); end
                            8'd23: begin charRamAddr <= vminRow1Addr + 13'd1; charRamData <= 7'd46; end
                            8'd24: begin charRamAddr <= vminRow1Addr + 13'd2; charRamData <= digitToAscii((ch0Vmin / 16'd100) % 16'd10); end
                            8'd25: begin charRamAddr <= vminRow1Addr + 13'd3; charRamData <= digitToAscii((ch0Vmin / 16'd10) % 16'd10); end
                            8'd26: begin charRamAddr <= vminRow1Addr + 13'd4; charRamData <= digitToAscii(ch0Vmin % 16'd10); end
                            8'd27: begin charRamAddr <= vminRow1Addr + 13'd5; charRamData <= 7'd32; end
                            // ch1 Vmin
                            8'd28: begin charRamAddr <= vminRow1Addr + 13'd7; charRamData <= digitToAscii((ch1Vmin / 16'd1000) % 16'd10); end
                            8'd29: begin charRamAddr <= vminRow1Addr + 13'd8; charRamData <= 7'd46; end
                            8'd30: begin charRamAddr <= vminRow1Addr + 13'd9; charRamData <= digitToAscii((ch1Vmin / 16'd100) % 16'd10); end
                            8'd31: begin charRamAddr <= vminRow1Addr + 13'd10; charRamData <= digitToAscii((ch1Vmin / 16'd10) % 16'd10); end
                            8'd32: begin charRamAddr <= vminRow1Addr + 13'd11; charRamData <= digitToAscii(ch1Vmin % 16'd10); end
                            // ch2 Vmin
                            8'd33: begin charRamAddr <= vminRow2Addr; charRamData <= digitToAscii((ch2Vmin / 16'd1000) % 16'd10); end
                            8'd34: begin charRamAddr <= vminRow2Addr + 13'd1; charRamData <= 7'd46; end
                            8'd35: begin charRamAddr <= vminRow2Addr + 13'd2; charRamData <= digitToAscii((ch2Vmin / 16'd100) % 16'd10); end
                            8'd36: begin charRamAddr <= vminRow2Addr + 13'd3; charRamData <= digitToAscii((ch2Vmin / 16'd10) % 16'd10); end
                            8'd37: begin charRamAddr <= vminRow2Addr + 13'd4; charRamData <= digitToAscii(ch2Vmin % 16'd10); end
                            8'd38: begin charRamAddr <= vminRow2Addr + 13'd5; charRamData <= 7'd32; end
                            // ch3 Vmin
                            8'd39: begin charRamAddr <= vminRow2Addr + 13'd7; charRamData <= digitToAscii((ch3Vmin / 16'd1000) % 16'd10); end
                            8'd40: begin charRamAddr <= vminRow2Addr + 13'd8; charRamData <= 7'd46; end
                            8'd41: begin charRamAddr <= vminRow2Addr + 13'd9; charRamData <= digitToAscii((ch3Vmin / 16'd100) % 16'd10); end
                            8'd42: begin charRamAddr <= vminRow2Addr + 13'd10; charRamData <= digitToAscii((ch3Vmin / 16'd10) % 16'd10); end
                            8'd43: begin charRamAddr <= vminRow2Addr + 13'd11; charRamData <= digitToAscii(ch3Vmin % 16'd10); end
                            
                            // ========== VP2P (rows 29-30) ==========
                            // ch0 Vp2p
                            8'd44: begin charRamAddr <= vp2pRow1Addr; charRamData <= digitToAscii((ch0Vp2p / 16'd1000) % 16'd10); end
                            8'd45: begin charRamAddr <= vp2pRow1Addr + 13'd1; charRamData <= 7'd46; end
                            8'd46: begin charRamAddr <= vp2pRow1Addr + 13'd2; charRamData <= digitToAscii((ch0Vp2p / 16'd100) % 16'd10); end
                            8'd47: begin charRamAddr <= vp2pRow1Addr + 13'd3; charRamData <= digitToAscii((ch0Vp2p / 16'd10) % 16'd10); end
                            8'd48: begin charRamAddr <= vp2pRow1Addr + 13'd4; charRamData <= digitToAscii(ch0Vp2p % 16'd10); end
                            8'd49: begin charRamAddr <= vp2pRow1Addr + 13'd5; charRamData <= 7'd32; end
                            // ch1 Vp2p
                            8'd50: begin charRamAddr <= vp2pRow1Addr + 13'd7; charRamData <= digitToAscii((ch1Vp2p / 16'd1000) % 16'd10); end
                            8'd51: begin charRamAddr <= vp2pRow1Addr + 13'd8; charRamData <= 7'd46; end
                            8'd52: begin charRamAddr <= vp2pRow1Addr + 13'd9; charRamData <= digitToAscii((ch1Vp2p / 16'd100) % 16'd10); end
                            8'd53: begin charRamAddr <= vp2pRow1Addr + 13'd10; charRamData <= digitToAscii((ch1Vp2p / 16'd10) % 16'd10); end
                            8'd54: begin charRamAddr <= vp2pRow1Addr + 13'd11; charRamData <= digitToAscii(ch1Vp2p % 16'd10); end
                            // ch2 Vp2p
                            8'd55: begin charRamAddr <= vp2pRow2Addr; charRamData <= digitToAscii((ch2Vp2p / 16'd1000) % 16'd10); end
                            8'd56: begin charRamAddr <= vp2pRow2Addr + 13'd1; charRamData <= 7'd46; end
                            8'd57: begin charRamAddr <= vp2pRow2Addr + 13'd2; charRamData <= digitToAscii((ch2Vp2p / 16'd100) % 16'd10); end
                            8'd58: begin charRamAddr <= vp2pRow2Addr + 13'd3; charRamData <= digitToAscii((ch2Vp2p / 16'd10) % 16'd10); end
                            8'd59: begin charRamAddr <= vp2pRow2Addr + 13'd4; charRamData <= digitToAscii(ch2Vp2p % 16'd10); end
                            8'd60: begin charRamAddr <= vp2pRow2Addr + 13'd5; charRamData <= 7'd32; end
                            // ch3 Vp2p
                            8'd61: begin charRamAddr <= vp2pRow2Addr + 13'd7; charRamData <= digitToAscii((ch3Vp2p / 16'd1000) % 16'd10); end
                            8'd62: begin charRamAddr <= vp2pRow2Addr + 13'd8; charRamData <= 7'd46; end
                            8'd63: begin charRamAddr <= vp2pRow2Addr + 13'd9; charRamData <= digitToAscii((ch3Vp2p / 16'd100) % 16'd10); end
                            8'd64: begin charRamAddr <= vp2pRow2Addr + 13'd10; charRamData <= digitToAscii((ch3Vp2p / 16'd10) % 16'd10); end
                            8'd65: begin charRamAddr <= vp2pRow2Addr + 13'd11; charRamData <= digitToAscii(ch3Vp2p % 16'd10); end
                            
                            // ========== PERIOD (rows 33-34) ==========
                            // ch0 Period - format: XX.XXX (us or ms depending on value)
                            8'd66: begin charRamAddr <= periRow1Addr; charRamData <= digitToAscii((ch0Period / 32'd10000) % 32'd10); end
                            8'd67: begin charRamAddr <= periRow1Addr + 13'd1; charRamData <= digitToAscii((ch0Period / 32'd1000) % 32'd10); end
                            8'd68: begin charRamAddr <= periRow1Addr + 13'd2; charRamData <= 7'd46; end
                            8'd69: begin charRamAddr <= periRow1Addr + 13'd3; charRamData <= digitToAscii((ch0Period / 32'd100) % 32'd10); end
                            8'd70: begin charRamAddr <= periRow1Addr + 13'd4; charRamData <= digitToAscii((ch0Period / 32'd10) % 32'd10); end
                            8'd71: begin charRamAddr <= periRow1Addr + 13'd5; charRamData <= digitToAscii(ch0Period % 32'd10); end
                            // ch1 Period
                            8'd72: begin charRamAddr <= periRow1Addr + 13'd7; charRamData <= digitToAscii((ch1Period / 32'd10000) % 32'd10); end
                            8'd73: begin charRamAddr <= periRow1Addr + 13'd8; charRamData <= digitToAscii((ch1Period / 32'd1000) % 32'd10); end
                            8'd74: begin charRamAddr <= periRow1Addr + 13'd9; charRamData <= 7'd46; end
                            8'd75: begin charRamAddr <= periRow1Addr + 13'd10; charRamData <= digitToAscii((ch1Period / 32'd100) % 32'd10); end
                            8'd76: begin charRamAddr <= periRow1Addr + 13'd11; charRamData <= digitToAscii((ch1Period / 32'd10) % 32'd10); end
                            8'd77: begin charRamAddr <= periRow1Addr + 13'd12; charRamData <= digitToAscii(ch1Period % 32'd10); end
                            // ch2 Period
                            8'd78: begin charRamAddr <= periRow2Addr; charRamData <= digitToAscii((ch2Period / 32'd10000) % 32'd10); end
                            8'd79: begin charRamAddr <= periRow2Addr + 13'd1; charRamData <= digitToAscii((ch2Period / 32'd1000) % 32'd10); end
                            8'd80: begin charRamAddr <= periRow2Addr + 13'd2; charRamData <= 7'd46; end
                            8'd81: begin charRamAddr <= periRow2Addr + 13'd3; charRamData <= digitToAscii((ch2Period / 32'd100) % 32'd10); end
                            8'd82: begin charRamAddr <= periRow2Addr + 13'd4; charRamData <= digitToAscii((ch2Period / 32'd10) % 32'd10); end
                            8'd83: begin charRamAddr <= periRow2Addr + 13'd5; charRamData <= digitToAscii(ch2Period % 32'd10); end
                            // ch3 Period
                            8'd84: begin charRamAddr <= periRow2Addr + 13'd7; charRamData <= digitToAscii((ch3Period / 32'd10000) % 32'd10); end
                            8'd85: begin charRamAddr <= periRow2Addr + 13'd8; charRamData <= digitToAscii((ch3Period / 32'd1000) % 32'd10); end
                            8'd86: begin charRamAddr <= periRow2Addr + 13'd9; charRamData <= 7'd46; end
                            8'd87: begin charRamAddr <= periRow2Addr + 13'd10; charRamData <= digitToAscii((ch3Period / 32'd100) % 32'd10); end
                            8'd88: begin charRamAddr <= periRow2Addr + 13'd11; charRamData <= digitToAscii((ch3Period / 32'd10) % 32'd10); end
                            8'd89: begin charRamAddr <= periRow2Addr + 13'd12; charRamData <= digitToAscii(ch3Period % 32'd10); end
                            
                            // ========== FREQUENCY (rows 37-38) ==========
                            // ch0 Freq - format: XXXXX (Hz)
                            8'd90: begin charRamAddr <= freqRow1Addr; charRamData <= digitToAscii((ch0Freq / 32'd10000) % 32'd10); end
                            8'd91: begin charRamAddr <= freqRow1Addr + 13'd1; charRamData <= digitToAscii((ch0Freq / 32'd1000) % 32'd10); end
                            8'd92: begin charRamAddr <= freqRow1Addr + 13'd2; charRamData <= digitToAscii((ch0Freq / 32'd100) % 32'd10); end
                            8'd93: begin charRamAddr <= freqRow1Addr + 13'd3; charRamData <= digitToAscii((ch0Freq / 32'd10) % 32'd10); end
                            8'd94: begin charRamAddr <= freqRow1Addr + 13'd4; charRamData <= digitToAscii(ch0Freq % 32'd10); end
                            8'd95: begin charRamAddr <= freqRow1Addr + 13'd5; charRamData <= 7'd32; end
                            // ch1 Freq
                            8'd96: begin charRamAddr <= freqRow1Addr + 13'd7; charRamData <= digitToAscii((ch1Freq / 32'd10000) % 32'd10); end
                            8'd97: begin charRamAddr <= freqRow1Addr + 13'd8; charRamData <= digitToAscii((ch1Freq / 32'd1000) % 32'd10); end
                            8'd98: begin charRamAddr <= freqRow1Addr + 13'd9; charRamData <= digitToAscii((ch1Freq / 32'd100) % 32'd10); end
                            8'd99: begin charRamAddr <= freqRow1Addr + 13'd10; charRamData <= digitToAscii((ch1Freq / 32'd10) % 32'd10); end
                            8'd100: begin charRamAddr <= freqRow1Addr + 13'd11; charRamData <= digitToAscii(ch1Freq % 32'd10); end
                            // ch2 Freq
                            8'd101: begin charRamAddr <= freqRow2Addr; charRamData <= digitToAscii((ch2Freq / 32'd10000) % 32'd10); end
                            8'd102: begin charRamAddr <= freqRow2Addr + 13'd1; charRamData <= digitToAscii((ch2Freq / 32'd1000) % 32'd10); end
                            8'd103: begin charRamAddr <= freqRow2Addr + 13'd2; charRamData <= digitToAscii((ch2Freq / 32'd100) % 32'd10); end
                            8'd104: begin charRamAddr <= freqRow2Addr + 13'd3; charRamData <= digitToAscii((ch2Freq / 32'd10) % 32'd10); end
                            8'd105: begin charRamAddr <= freqRow2Addr + 13'd4; charRamData <= digitToAscii(ch2Freq % 32'd10); end
                            8'd106: begin charRamAddr <= freqRow2Addr + 13'd5; charRamData <= 7'd32; end
                            // ch3 Freq
                            8'd107: begin charRamAddr <= freqRow2Addr + 13'd7; charRamData <= digitToAscii((ch3Freq / 32'd10000) % 32'd10); end
                            8'd108: begin charRamAddr <= freqRow2Addr + 13'd8; charRamData <= digitToAscii((ch3Freq / 32'd1000) % 32'd10); end
                            8'd109: begin charRamAddr <= freqRow2Addr + 13'd9; charRamData <= digitToAscii((ch3Freq / 32'd100) % 32'd10); end
                            8'd110: begin charRamAddr <= freqRow2Addr + 13'd10; charRamData <= digitToAscii((ch3Freq / 32'd10) % 32'd10); end
                            8'd111: begin charRamAddr <= freqRow2Addr + 13'd11; charRamData <= digitToAscii(ch3Freq % 32'd10); end
                            
                            // ========== STATUS ROW 40: RUN/STOP + trigger level ==========
                            // format: " RUN" or "STOP" (4 chars at col 54-57)
                            8'd112: begin charRamAddr <= statusRow1Addr; charRamData <= paramRunState[0] ? 7'd32 : 7'd83; end // space or S
                            8'd113: begin charRamAddr <= statusRow1Addr + 13'd1; charRamData <= paramRunState[0] ? 7'd82 : 7'd84; end // R or T
                            8'd114: begin charRamAddr <= statusRow1Addr + 13'd2; charRamData <= paramRunState[0] ? 7'd85 : 7'd79; end // U or O
                            8'd115: begin charRamAddr <= statusRow1Addr + 13'd3; charRamData <= paramRunState[0] ? 7'd78 : 7'd80; end // N or P
                            8'd116: begin charRamAddr <= statusRow1Addr + 13'd4; charRamData <= 7'd32; end // space
                            8'd117: begin charRamAddr <= statusRow1Addr + 13'd5; charRamData <= 7'd32; end // space
                            // trigger level (4 digits)
                            8'd118: begin charRamAddr <= statusRow1Addr + 13'd7; charRamData <= digitToAscii((paramTriggerLevel[11:0] / 12'd1000) % 12'd10); end
                            8'd119: begin charRamAddr <= statusRow1Addr + 13'd8; charRamData <= digitToAscii((paramTriggerLevel[11:0] / 12'd100) % 12'd10); end
                            8'd120: begin charRamAddr <= statusRow1Addr + 13'd9; charRamData <= digitToAscii((paramTriggerLevel[11:0] / 12'd10) % 12'd10); end
                            8'd121: begin charRamAddr <= statusRow1Addr + 13'd10; charRamData <= digitToAscii(paramTriggerLevel[11:0] % 12'd10); end
                            
                            // ========== STATUS ROW 41: trigger mode + edge ==========
                            // trigger mode (AUTO/SING/NORM)
                            8'd122: begin 
                                charRamAddr <= statusRow2Addr;
                                case (paramTriggerMode[1:0])
                                    2'd0: charRamData <= 7'd78;  // N (NORM)
                                    2'd1: charRamData <= 7'd65;  // A (AUTO)
                                    2'd2: charRamData <= 7'd83;  // S (SING)
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            8'd123: begin
                                charRamAddr <= statusRow2Addr + 13'd1;
                                case (paramTriggerMode[1:0])
                                    2'd0: charRamData <= 7'd79;  // O
                                    2'd1: charRamData <= 7'd85;  // U
                                    2'd2: charRamData <= 7'd73;  // I
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            8'd124: begin
                                charRamAddr <= statusRow2Addr + 13'd2;
                                case (paramTriggerMode[1:0])
                                    2'd0: charRamData <= 7'd82;  // R
                                    2'd1: charRamData <= 7'd84;  // T
                                    2'd2: charRamData <= 7'd78;  // N
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            8'd125: begin
                                charRamAddr <= statusRow2Addr + 13'd3;
                                case (paramTriggerMode[1:0])
                                    2'd0: charRamData <= 7'd77;  // M
                                    2'd1: charRamData <= 7'd79;  // O
                                    2'd2: charRamData <= 7'd71;  // G
                                    default: charRamData <= 7'd32;
                                endcase
                            end
                            8'd126: begin charRamAddr <= statusRow2Addr + 13'd4; charRamData <= 7'd32; end // space
                            8'd127: begin charRamAddr <= statusRow2Addr + 13'd5; charRamData <= 7'd32; end // space
                            // trigger edge (RISE/FALL)
                            8'd128: begin charRamAddr <= statusRow2Addr + 13'd7; charRamData <= paramTriggerEdge[0] ? 7'd70 : 7'd82; end // F or R
                            8'd129: begin charRamAddr <= statusRow2Addr + 13'd8; charRamData <= paramTriggerEdge[0] ? 7'd65 : 7'd73; end // A or I
                            8'd130: begin charRamAddr <= statusRow2Addr + 13'd9; charRamData <= paramTriggerEdge[0] ? 7'd76 : 7'd83; end // L or S
                            8'd131: begin charRamAddr <= statusRow2Addr + 13'd10; charRamData <= paramTriggerEdge[0] ? 7'd76 : 7'd69; end // L or E
                            
                        default: begin
                            state <= IDLE;
                            charRamWrEn <= 1'b0;
                        end
                    endcase
                    
                        if (measurementWriteIndex < 8'd132) begin
                            measurementWriteIndex <= measurementWriteIndex + 8'd1;
                        end else begin
                            measurementWriteIndex <= 8'd0;
                            doingInitialUpdate <= 1'b0;  // clear flag after initial update sequence
                            state <= IDLE;
                        end
                    end
                end
                
                UPDATE_TRIGGER_MODE: begin
                    // update trigger mode text: "NORM", "AUTO", or "SING"
                    // located at row 41, col 54 (statusRow2Addr)
                    charRamWrEn <= 1'b1;
                    
                            case (triggerModeWriteIndex)
                                4'd0: begin
                            charRamAddr <= statusRow2Addr;
                            case (paramTriggerMode[1:0])
                                2'd0: charRamData <= 7'd78;  // N (NORM)
                                2'd1: charRamData <= 7'd65;  // A (AUTO)
                                2'd2: charRamData <= 7'd83;  // S (SING)
                                default: charRamData <= 7'd32;
                            endcase
                                end
                                4'd1: begin
                            charRamAddr <= statusRow2Addr + 13'd1;
                            case (paramTriggerMode[1:0])
                                2'd0: charRamData <= 7'd79;  // O
                                2'd1: charRamData <= 7'd85;  // U
                                2'd2: charRamData <= 7'd73;  // I
                                default: charRamData <= 7'd32;
                            endcase
                                end
                                4'd2: begin
                            charRamAddr <= statusRow2Addr + 13'd2;
                            case (paramTriggerMode[1:0])
                                2'd0: charRamData <= 7'd82;  // R
                                2'd1: charRamData <= 7'd84;  // T
                                2'd2: charRamData <= 7'd78;  // N
                                default: charRamData <= 7'd32;
                            endcase
                                end
                                4'd3: begin
                            charRamAddr <= statusRow2Addr + 13'd3;
                            case (paramTriggerMode[1:0])
                                2'd0: charRamData <= 7'd77;  // M
                                2'd1: charRamData <= 7'd79;  // O
                                2'd2: charRamData <= 7'd71;  // G
                                default: charRamData <= 7'd32;
                            endcase
                        end
                        default: begin
                            state <= IDLE;
                            charRamWrEn <= 1'b0;
                        end
                    endcase
                    
                    if (triggerModeWriteIndex < 4'd4) begin
                        triggerModeWriteIndex <= triggerModeWriteIndex + 4'd1;
                    end else begin
                        triggerModeWriteIndex <= 4'd0;
                        if (doingInitialUpdate) begin
                            state <= UPDATE_TRIGGER_EDGE;
                            triggerEdgeWriteIndex <= 4'd0;
                        end else begin
                        state <= IDLE;
                        end
                    end
                end
                
                UPDATE_TRIGGER_EDGE: begin
                    // update trigger edge text: "RISE" or "FALL"
                    // located at row 41, col 61 (statusRow2Addr + 7)
                    charRamWrEn <= 1'b1;
                    
                        case (triggerEdgeWriteIndex)
                            4'd0: begin
                            charRamAddr <= statusRow2Addr + 13'd7;
                            charRamData <= paramTriggerEdge[0] ? 7'd70 : 7'd82;  // F or R
                            end
                            4'd1: begin
                            charRamAddr <= statusRow2Addr + 13'd8;
                            charRamData <= paramTriggerEdge[0] ? 7'd65 : 7'd73;  // A or I
                            end
                            4'd2: begin
                            charRamAddr <= statusRow2Addr + 13'd9;
                            charRamData <= paramTriggerEdge[0] ? 7'd76 : 7'd83;  // L or S
                            end
                            4'd3: begin
                            charRamAddr <= statusRow2Addr + 13'd10;
                            charRamData <= paramTriggerEdge[0] ? 7'd76 : 7'd69;  // L or E
                            end
                            default: begin
                                state <= IDLE;
                                charRamWrEn <= 1'b0;
                            end
                        endcase
                    
                    if (triggerEdgeWriteIndex < 4'd4) begin
                        triggerEdgeWriteIndex <= triggerEdgeWriteIndex + 4'd1;
                    end else begin
                        triggerEdgeWriteIndex <= 4'd0;
                        if (doingInitialUpdate) begin
                            state <= UPDATE_TRIGGER_LEVEL;
                            triggerLevelWriteIndex <= 4'd0;
                        end else begin
                        state <= IDLE;
                        end
                    end
                end
                
                UPDATE_TRIGGER_LEVEL: begin
                    // update trigger level number (4 digits)
                    // located at row 40, col 61 (statusRow1Addr + 7)
                    charRamWrEn <= 1'b1;
                    
                    case (triggerLevelWriteIndex)
                        4'd0: begin
                            charRamAddr <= statusRow1Addr + 13'd7;
                            charRamData <= digitToAscii((paramTriggerLevel[11:0] / 12'd1000) % 12'd10);
                        end
                        4'd1: begin
                            charRamAddr <= statusRow1Addr + 13'd8;
                            charRamData <= digitToAscii((paramTriggerLevel[11:0] / 12'd100) % 12'd10);
                        end
                        4'd2: begin
                            charRamAddr <= statusRow1Addr + 13'd9;
                            charRamData <= digitToAscii((paramTriggerLevel[11:0] / 12'd10) % 12'd10);
                        end
                        4'd3: begin
                            charRamAddr <= statusRow1Addr + 13'd10;
                            charRamData <= digitToAscii(paramTriggerLevel[11:0] % 12'd10);
                        end
                        default: begin
                            state <= IDLE;
                            charRamWrEn <= 1'b0;
                        end
                    endcase
                    
                    if (triggerLevelWriteIndex < 4'd4) begin
                        triggerLevelWriteIndex <= triggerLevelWriteIndex + 4'd1;
                    end else begin
                        triggerLevelWriteIndex <= 4'd0;
                        if (doingInitialUpdate) begin
                            state <= UPDATE_AXIS_INFO;
                            axisInfoWriteIndex <= 6'd0;
                        end else begin
                        state <= IDLE;
                        end
                    end
                end
                
                UPDATE_UI_MENU: begin
                    // draw menu labels on right side under axis info
                    // row 9 col 60: "CHA: C1 C2 C3 C4"
                    // row 10 col 60: "CHR: X1 Y1 X2 Y2"
                    // rows 12-15 col 60: "CHn V:+xxx T:+yy"
                    if (screenMode != WAVEFORM_SCREEN) begin
                        state <= IDLE;
                        charRamWrEn <= 1'b0;
                    end else begin
                        charRamWrEn <= 1'b1;
                        if (uiWriteIndex <= 6'd15) begin
                            // row 9 base
                            charRamAddr <= chMenuBaseAddr + uiWriteIndex;
                            case (uiWriteIndex)
                                6'd0:  charRamData <= 7'd67;  // C
                                6'd1:  charRamData <= 7'd72;  // H
                                6'd2:  charRamData <= 7'd65;  // A
                                6'd3:  charRamData <= 7'd58;  // :
                                6'd4:  charRamData <= 7'd32;  // space
                                6'd5:  charRamData <= 7'd67;  // C
                                6'd6:  charRamData <= 7'd49;  // 1
                                6'd7:  charRamData <= 7'd32;  // space
                                6'd8:  charRamData <= 7'd67;  // C
                                6'd9:  charRamData <= 7'd50;  // 2
                                6'd10: charRamData <= 7'd32;  // space
                                6'd11: charRamData <= 7'd67;  // C
                                6'd12: charRamData <= 7'd51;  // 3
                                6'd13: charRamData <= 7'd32;  // space
                                6'd14: charRamData <= 7'd67;  // C
                                6'd15: charRamData <= 7'd52;  // 4
                                default: charRamData <= 7'd32;
                            endcase
                        end else if (uiWriteIndex <= 6'd31) begin
                            // row 10 base
                            charRamAddr <= curMenuBaseAddr + (uiWriteIndex - 6'd15);
                            case (uiWriteIndex - 6'd15)
                                6'd0:  charRamData <= 7'd67;  // C
                                6'd1:  charRamData <= 7'd85;  // U
                                6'd2:  charRamData <= 7'd82;  // R
                                6'd3:  charRamData <= 7'd58;  // :
                                6'd4:  charRamData <= 7'd32;  // space
                                6'd5:  charRamData <= 7'd88;  // X
                                6'd6:  charRamData <= 7'd49;  // 1
                                6'd7:  charRamData <= 7'd32;  // space
                                6'd8:  charRamData <= 7'd89;  // Y
                                6'd9:  charRamData <= 7'd49;  // 1
                                6'd10: charRamData <= 7'd32;  // space
                                6'd11: charRamData <= 7'd88;  // X
                                6'd12: charRamData <= 7'd50;  // 2
                                6'd13: charRamData <= 7'd32;  // space
                                6'd14: charRamData <= 7'd89;  // Y
                                6'd15: charRamData <= 7'd50;  // 2
                                default: charRamData <= 7'd32;
                            endcase
                        end else begin
                            // per-channel offsets lines: 4 lines * 16 chars
                            // prepare channel values
                            // compute which line and position
                            uiLine = (uiWriteIndex - 7'd31) / 7'd16; // 0..3
                            uiPos  = (uiWriteIndex - 7'd31) % 7'd16; // 0..15
                            case (uiLine)
                                2'd0: begin uiVOff = ch0VerticalOffset; uiHOff = ch0HorizontalOffset; uiBaseAddr = ch1OffBaseAddr; end
                                2'd1: begin uiVOff = ch1VerticalOffset; uiHOff = ch1HorizontalOffset; uiBaseAddr = ch2OffBaseAddr; end
                                2'd2: begin uiVOff = ch2VerticalOffset; uiHOff = ch2HorizontalOffset; uiBaseAddr = ch3OffBaseAddr; end
                                default: begin uiVOff = ch3VerticalOffset; uiHOff = ch3HorizontalOffset; uiBaseAddr = ch4OffBaseAddr; end
                            endcase
                            // abs and digits
                            uiVAbs = uiVOff[9] ? (~uiVOff + 10'd1) : uiVOff;
                            uiHAbs = uiHOff[9] ? (~uiHOff + 10'd1) : uiHOff;
                            uiVHund = (uiVAbs / 10'd100) % 10'd10;
                            uiVTens = (uiVAbs / 10'd10) % 10'd10;
                            uiVOnes = uiVAbs % 10'd10;
                            uiHHund = (uiHAbs / 10'd100) % 10'd10;
                            uiHTens = (uiHAbs / 10'd10) % 10'd10;
                            uiHOnes = uiHAbs % 10'd10;
                            charRamAddr <= uiBaseAddr + uiPos;
                            case (uiPos)
                                6'd0:  charRamData <= 7'd67;  // C
                                6'd1:  charRamData <= 7'd72;  // H
                                6'd2:  charRamData <= 7'd49 + {3'd0, uiLine}; // '1'+line
                                6'd3:  charRamData <= 7'd32;  // space
                                6'd4:  charRamData <= 7'd86;  // V
                                6'd5:  charRamData <= 7'd58;  // :
                                6'd6:  charRamData <= uiVOff[9] ? 7'd45 : 7'd43; // '-' or '+'
                                6'd7:  charRamData <= digitToAscii(uiVHund);
                                6'd8:  charRamData <= digitToAscii(uiVTens);
                                6'd9:  charRamData <= digitToAscii(uiVOnes);
                                6'd10: charRamData <= 7'd32;  // space
                                6'd11: charRamData <= 7'd84;  // T
                                6'd12: charRamData <= 7'd58;  // :
                                6'd13: charRamData <= uiHOff[9] ? 7'd45 : 7'd43; // '-' or '+'
                                6'd14: charRamData <= digitToAscii(uiHTens); // show up to 2 digits for time offset
                                6'd15: charRamData <= digitToAscii(uiHOnes);
                                default: charRamData <= 7'd32;
                            endcase
                        end
                        if (uiWriteIndex == 7'd95) begin
                            uiWriteIndex <= 7'd0;
                            if (doingInitialUpdate) begin
                                state <= UPDATE_CURSOR_VALUES;
                                cursorWriteIndex <= 7'd0;
                            end else begin
                            state <= IDLE;
                            end
                        end else begin
                            uiWriteIndex <= uiWriteIndex + 7'd1;
                        end
                    end
                end
                
                UPDATE_CURSOR_VALUES: begin
                    // display cursor positions and deltas
                    // row 14 col 60: "X1:xxx X2:xxx dx:xxx"
                    // row 15 col 60: "Y1:xxx Y2:xxx dy:xxx"
                    if (screenMode != WAVEFORM_SCREEN) begin
                        state <= IDLE;
                        charRamWrEn <= 1'b0;
                    end else begin
                        charRamWrEn <= 1'b1;
                        // compute deltas on first cycle
                        if (cursorWriteIndex == 7'd0) begin
                            cursorDeltaX <= (cursorX2 > cursorX1) ? (cursorX2 - cursorX1) : (cursorX1 - cursorX2);
                            cursorDeltaY <= (cursorY2 > cursorY1) ? (cursorY2 - cursorY1) : (cursorY1 - cursorY2);
                        end
                        
                        if (cursorWriteIndex < 7'd21) begin
                            // X line
                            charRamAddr <= cursorXBaseAddr + cursorWriteIndex;
                            case (cursorWriteIndex)
                                7'd0:  charRamData <= 7'd88;  // X
                                7'd1:  charRamData <= 7'd49;  // 1
                                7'd2:  charRamData <= 7'd58;  // :
                                7'd3:  charRamData <= digitToAscii((cursorX1 / 10'd100) % 10'd10);
                                7'd4:  charRamData <= digitToAscii((cursorX1 / 10'd10) % 10'd10);
                                7'd5:  charRamData <= digitToAscii(cursorX1 % 10'd10);
                                7'd6:  charRamData <= 7'd32;  // space
                                7'd7:  charRamData <= 7'd88;  // X
                                7'd8:  charRamData <= 7'd50;  // 2
                                7'd9:  charRamData <= 7'd58;  // :
                                7'd10: charRamData <= digitToAscii((cursorX2 / 10'd100) % 10'd10);
                                7'd11: charRamData <= digitToAscii((cursorX2 / 10'd10) % 10'd10);
                                7'd12: charRamData <= digitToAscii(cursorX2 % 10'd10);
                                7'd13: charRamData <= 7'd32;  // space
                                7'd14: charRamData <= 7'd100; // d (delta)
                                7'd15: charRamData <= 7'd120; // x
                                7'd16: charRamData <= 7'd58;  // :
                                7'd17: charRamData <= digitToAscii((cursorDeltaX / 10'd100) % 10'd10);
                                7'd18: charRamData <= digitToAscii((cursorDeltaX / 10'd10) % 10'd10);
                                7'd19: charRamData <= digitToAscii(cursorDeltaX % 10'd10);
                                default: charRamData <= 7'd32;
                            endcase
                        end else begin
                            // Y line
                            charRamAddr <= cursorYBaseAddr + (cursorWriteIndex - 7'd21);
                            case (cursorWriteIndex - 7'd21)
                                7'd0:  charRamData <= 7'd89;  // Y
                                7'd1:  charRamData <= 7'd49;  // 1
                                7'd2:  charRamData <= 7'd58;  // :
                                7'd3:  charRamData <= digitToAscii((cursorY1 / 10'd100) % 10'd10);
                                7'd4:  charRamData <= digitToAscii((cursorY1 / 10'd10) % 10'd10);
                                7'd5:  charRamData <= digitToAscii(cursorY1 % 10'd10);
                                7'd6:  charRamData <= 7'd32;  // space
                                7'd7:  charRamData <= 7'd89;  // Y
                                7'd8:  charRamData <= 7'd50;  // 2
                                7'd9:  charRamData <= 7'd58;  // :
                                7'd10: charRamData <= digitToAscii((cursorY2 / 10'd100) % 10'd10);
                                7'd11: charRamData <= digitToAscii((cursorY2 / 10'd10) % 10'd10);
                                7'd12: charRamData <= digitToAscii(cursorY2 % 10'd10);
                                7'd13: charRamData <= 7'd32;  // space
                                7'd14: charRamData <= 7'd100; // d (delta)
                                7'd15: charRamData <= 7'd121; // y
                                7'd16: charRamData <= 7'd58;  // :
                                7'd17: charRamData <= digitToAscii((cursorDeltaY / 10'd100) % 10'd10);
                                7'd18: charRamData <= digitToAscii((cursorDeltaY / 10'd10) % 10'd10);
                                7'd19: charRamData <= digitToAscii(cursorDeltaY % 10'd10);
                                default: charRamData <= 7'd32;
                            endcase
                        end
                        
                        if (cursorWriteIndex == 7'd41) begin
                            cursorWriteIndex <= 7'd0;
                            if (doingInitialUpdate) begin
                                state <= UPDATE_MEASUREMENTS;
                                measurementWriteIndex <= 8'd0;
                            end else begin
                            state <= IDLE;
                            end
                        end else begin
                            cursorWriteIndex <= cursorWriteIndex + 7'd1;
                        end
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end
endmodule

