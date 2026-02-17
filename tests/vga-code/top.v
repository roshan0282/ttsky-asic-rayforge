// oscilloscope - top module connects all components
module top(
    input CLOCK_50,
    input [9:0] SW,        // DE-series switches (used for mock ADC input)
    input [3:0] KEY,
    inout PS2_CLK,
    inout PS2_DAT,
    output [6:0] HEX0,     // DE-series HEX displays
    output [6:0] HEX1,
    output [6:0] HEX2,
    output [6:0] HEX3,
    output [6:0] HEX4,
    output [6:0] HEX5,
    output [9:0] LEDR,     // DE-series LEDs
    output VGA_HS,
    output VGA_VS,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output VGA_BLANK_N,
    output VGA_SYNC_N,
    output VGA_CLK,
    // ADC pins
    output ADC_SCLK,
    output ADC_CS_N,
    output ADC_DIN,
    input ADC_DOUT,
    // DESim VGA coordinates
    output [9:0] VGA_X,
    output [9:0] VGA_Y,
    output VGA_VISIBLE
);
    // mock ADC data from switches (12-bit)
    wire [11:0] mockAdcData = {SW[9:0], 2'b00};
    // reset signal (active low)
    wire resetn = KEY[0];
    
    //==============================================================
    // VGA and UI
    //==============================================================
    
    // VGA signals
    wire [9:0] vgaX;
    wire [9:0] vgaY;
    wire vgaVisible;
    wire vgaHSync;
    wire vgaVSync;
    wire vgaPixelClk;
    
    // PS/2 signals
    wire [7:0] ps2AsciiRaw;      // from ps2Driver
    wire ps2AsciiReadyRaw;       // from ps2Driver
    wire [7:0] ps2Ascii;         // muxed (bypass or real)
    wire ps2AsciiReady;          // muxed (bypass or real)
    
    // use real PS/2 (bypass mode removed)
    assign ps2Ascii = ps2AsciiRaw;
    assign ps2AsciiReady = ps2AsciiReadyRaw;
    
    // menu FSM signals
    wire [1:0] screenMode;
    wire paramWrEn;
    wire [7:0] paramAddr;
    wire [31:0] paramData;
    wire [1:0] displayTriggerMode;
    wire displayTriggerEdge;
    wire displayRunState;
    wire [11:0] displayTriggerLevel;
    wire [3:0] displayVoltsPerDiv;
    wire [3:0] displayTimePerDiv;
    wire signed [9:0] displayVerticalOffset;
    wire signed [9:0] displayHorizontalOffset;
    // per-channel offsets
    wire signed [9:0] ch0VerticalOffset;
    wire signed [9:0] ch1VerticalOffset;
    wire signed [9:0] ch2VerticalOffset;
    wire signed [9:0] ch3VerticalOffset;
    wire signed [9:0] ch0HorizontalOffset;
    wire signed [9:0] ch1HorizontalOffset;
    wire signed [9:0] ch2HorizontalOffset;
    wire signed [9:0] ch3HorizontalOffset;
    
    
    // parameter RAM signals
    wire [31:0] paramDataOut;
    
    // character RAM signals
    wire charRamWrEn;
    wire [12:0] charRamAddrA;
    wire [6:0] charRamDataWrA;
    wire [12:0] charRamAddrB;
    wire [6:0] charRamDataRdB;
    
    // text generator signals
    wire [7:0] textPixelR;
    wire [7:0] textPixelG;
    wire [7:0] textPixelB;
    
    // clock counter signals
    wire [5:0] clockHours;
    wire [5:0] clockMinutes;
    wire [5:0] clockSeconds;
    wire [13:0] clockSubSeconds;
    
    //==============================================================
    // ACQUISITION
    //==============================================================
    
    // ADC signals
    wire [11:0] adcData;
    
    // acquisition control signals
    wire runCommand;
    wire stopCommand;
    wire acquisitionClk;
    wire sampleValid;
    wire stateRunMode;
    wire [1:0] stateTrigger;
    wire armed;
    
    // ring buffer signals
    wire [9:0] ringBufferWrAddr;
    wire ringBufferWrEn;
    wire [11:0] ringBufferWrData;
    wire [9:0] ringBufferRdAddr;
    wire [11:0] ringBufferRdData;
    
    // display buffer signals (per-channel write addresses/enables in acquisition section)
    wire [11:0] displayBufferWrData;
    wire [9:0] displayBufferRdAddr;
    wire [11:0] displayBufferRdData;
    
    // trigger signals
    wire triggerEvent;
    wire [9:0] triggerPosition;
    wire [11:0] triggerLevel = displayTriggerLevel;
    wire triggerEdge = displayTriggerEdge;
    wire [11:0] noiseReject = 12'd50;
    
    // timing control
    // timeDivClkDivider controls sample acceptance rate in adcControl
    // 400 samples across 10 divisions = 40 samples/div
    // time_per_sample = time_per_div / 40
    // divider = time_per_sample * 50MHz
    // example: 1ms/div -> 25us/sample -> 1250 cycles
    reg [23:0] timeDivClkDivider;
    always @(*) begin
        case (displayTimePerDiv)
            // fast timebases (limited by ADC ~8.26µs/sample = 413 cycles minimum)
            4'd0:  timeDivClkDivider = 24'd63;       // 50us/div  -> 1.25us/sample -> 63 cycles (ADC limited)
            4'd1:  timeDivClkDivider = 24'd125;      // 100us/div -> 2.5us/sample  -> 125 cycles (ADC limited)
            4'd2:  timeDivClkDivider = 24'd250;      // 200us/div -> 5us/sample    -> 250 cycles (ADC limited)
            4'd3:  timeDivClkDivider = 24'd625;      // 500us/div -> 12.5us/sample -> 625 cycles
            // medium timebases
            4'd4:  timeDivClkDivider = 24'd1250;     // 1ms/div   -> 25us/sample   -> 1250 cycles
            4'd5:  timeDivClkDivider = 24'd2500;     // 2ms/div   -> 50us/sample   -> 2500 cycles
            4'd6:  timeDivClkDivider = 24'd6250;     // 5ms/div   -> 125us/sample  -> 6250 cycles
            4'd7:  timeDivClkDivider = 24'd12500;    // 10ms/div  -> 250us/sample  -> 12500 cycles
            // slow timebases
            4'd8:  timeDivClkDivider = 24'd25000;    // 20ms/div  -> 500us/sample  -> 25000 cycles
            4'd9:  timeDivClkDivider = 24'd62500;    // 50ms/div  -> 1.25ms/sample -> 62500 cycles
            4'd10: timeDivClkDivider = 24'd125000;   // 100ms/div -> 2.5ms/sample  -> 125000 cycles
            4'd11: timeDivClkDivider = 24'd250000;   // 200ms/div -> 5ms/sample    -> 250000 cycles
            4'd12: timeDivClkDivider = 24'd625000;   // 500ms/div -> 12.5ms/sample -> 625000 cycles
            4'd13: timeDivClkDivider = 24'd1250000;  // 1s/div    -> 25ms/sample   -> 1250000 cycles
            4'd14: timeDivClkDivider = 24'd2500000;  // 2s/div    -> 50ms/sample   -> 2500000 cycles
            4'd15: timeDivClkDivider = 24'd6250000;  // 5s/div    -> 125ms/sample  -> 6250000 cycles
            default: timeDivClkDivider = 24'd1250;   // default to 1ms/div
        endcase
    end
    wire [1:0] triggerMode = displayTriggerMode;
    
    //==============================================================
    // DISPLAY
    //==============================================================
    
    // packed parameters for text display
    wire [31:0] paramVoltsPerDiv = {28'd0, displayVoltsPerDiv};
    wire [31:0] paramTimePerDiv = {28'd0, displayTimePerDiv};
    wire [31:0] paramVerticalOffset = {{22{displayVerticalOffset[9]}}, displayVerticalOffset};
    wire [31:0] paramHorizontalOffset = {{22{displayHorizontalOffset[9]}}, displayHorizontalOffset};
    
    // waveform display buffer read
    wire [11:0] currentSample;
    wire [9:0] scaledY;
    wire [9:0] scaledX;
    // per-channel reads
    wire [11:0] ch0Sample = ch0RdData;
    wire [11:0] ch1Sample = ch1RdData;
    wire [11:0] ch2Sample = ch2RdData;
    wire [11:0] ch3Sample = ch3RdData;
    
    // pixel layer outputs
    wire [7:0] wavePixelR;
    wire [7:0] wavePixelG;
    wire [7:0] wavePixelB;
    wire [7:0] axisPixelR;
    wire [7:0] axisPixelG;
    wire [7:0] axisPixelB;
    
    // final VGA output from arbiter
    wire [7:0] finalVgaR;
    wire [7:0] finalVgaG;
    wire [7:0] finalVgaB;
    
    // measurement signals (per-channel)
    wire [15:0] ch0Vmax, ch1Vmax, ch2Vmax, ch3Vmax;
    wire [15:0] ch0Vmin, ch1Vmin, ch2Vmin, ch3Vmin;
    wire [15:0] ch0Vp2p, ch1Vp2p, ch2Vp2p, ch3Vp2p;
    wire [31:0] ch0Period, ch1Period, ch2Period, ch3Period;
    wire [31:0] ch0Freq, ch1Freq, ch2Freq, ch3Freq;
    wire calculationComplete;
    
    // trigger measurement calculation when acquisition completes
    reg lastStateTrigger1;
    reg calculateTrigger;
    always @(posedge CLOCK_50) begin
        if (!resetn) begin
            lastStateTrigger1 <= 1'b0;
            calculateTrigger <= 1'b0;
        end else begin
            lastStateTrigger1 <= stateTrigger[1];
            // pulse calculateTrigger when stateTrigger goes to 2 (complete)
            if (stateTrigger == 2'd2 && !lastStateTrigger1) begin
                calculateTrigger <= 1'b1;
            end else begin
                calculateTrigger <= 1'b0;
            end
        end
    end
    
    //==============================================================
    // MODULE INSTANTIATIONS
    //==============================================================
    // ---- VGA and UI ----
    // VGA driver
    vgaDriver vga (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .resolutionX(10'd640),
        .resolutionY(10'd480),
        .hSync(vgaHSync),
        .vSync(vgaVSync),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible),
        .pixelClkOut(vgaPixelClk)
    );
    
    // PS/2 driver
    wire arrowUp, arrowDown, arrowLeft, arrowRight;
    ps2Driver ps2 (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .ps2Clk(PS2_CLK),
        .ps2Dat(PS2_DAT),
        .asciiOut(ps2AsciiRaw),
        .asciiReady(ps2AsciiReadyRaw),
        .arrowUp(arrowUp),
        .arrowDown(arrowDown),
        .arrowLeft(arrowLeft),
        .arrowRight(arrowRight)
    );
    
    // menu FSM
    menuFSM menu (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .asciiIn(ps2Ascii),
        .asciiValid(ps2AsciiReady),
        .arrowUp(arrowUp),
        .arrowDown(arrowDown),
        .arrowLeft(arrowLeft),
        .arrowRight(arrowRight),
        .screenMode(screenMode),
        .paramWrEn(paramWrEn),
        .paramAddr(paramAddr),
        .paramData(paramData),
        .currentTriggerModeOut(displayTriggerMode),
        .currentTriggerEdgeOut(displayTriggerEdge),
        .currentRunStateOut(displayRunState),
        .currentTriggerLevelOut(displayTriggerLevel),
        .currentVoltsPerDivOut(displayVoltsPerDiv),
        .currentTimePerDivOut(displayTimePerDiv),
        .currentVerticalOffsetOut(displayVerticalOffset),
        .currentHorizontalOffsetOut(displayHorizontalOffset),
        .ch0VerticalOffsetOut(ch0VerticalOffset),
        .ch1VerticalOffsetOut(ch1VerticalOffset),
        .ch2VerticalOffsetOut(ch2VerticalOffset),
        .ch3VerticalOffsetOut(ch3VerticalOffset),
        .ch0HorizontalOffsetOut(ch0HorizontalOffset),
        .ch1HorizontalOffsetOut(ch1HorizontalOffset),
        .ch2HorizontalOffsetOut(ch2HorizontalOffset),
        .ch3HorizontalOffsetOut(ch3HorizontalOffset),
        .clearRequest(clearRequest),
        .channelsEnabled(channelsEnabledSel),
        .selectedChannel(selectedChannelSel),
        .selectedCursor(cursorSelected),
        .selectedCursorPair(selectedCursorPairSel),
        .cursorPairEnable(cursorPairEnableSel),
        .uiMode(uiMode)
    );
    
    // parameter RAM
    parameterRAM params (
        .clock(CLOCK_50),
        .wrEn(paramWrEn),
        .addr(paramAddr),
        .dataIn(paramData),
        .dataOut(paramDataOut)
    );
    
    // real-time clock counter
    clockCounter clkCounter (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .hours(clockHours),
        .minutes(clockMinutes),
        .seconds(clockSeconds),
        .subSeconds(clockSubSeconds)
    );
    
    // text composer
    textComposer textComp (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .screenMode(screenMode),
        .hours(clockHours),
        .minutes(clockMinutes),
        .seconds(clockSeconds),
        .subSeconds(clockSubSeconds),
        .paramRunState({31'd0, displayRunState}),
        .paramTriggerMode({30'd0, displayTriggerMode}),
        .paramTriggerEdge({31'd0, displayTriggerEdge}),
        .paramTriggerLevel({20'd0, displayTriggerLevel}),
        .paramVoltsPerDiv(paramVoltsPerDiv),
        .paramTimePerDiv(paramTimePerDiv),
        .paramVerticalOffset(paramVerticalOffset),
        .paramHorizontalOffset(paramHorizontalOffset),
        .channelsEnabled(channelsEnabledSel),
        .selectedChannel(selectedChannelSel),
        .selectedCursor(cursorSelected),
        .ch0VerticalOffset(ch0VerticalOffset),
        .ch1VerticalOffset(ch1VerticalOffset),
        .ch2VerticalOffset(ch2VerticalOffset),
        .ch3VerticalOffset(ch3VerticalOffset),
        .ch0HorizontalOffset(ch0HorizontalOffset),
        .ch1HorizontalOffset(ch1HorizontalOffset),
        .ch2HorizontalOffset(ch2HorizontalOffset),
        .ch3HorizontalOffset(ch3HorizontalOffset),
        .cursorX1(cursorX1),
        .cursorX2(cursorX2),
        .cursorY1(cursorY1),
        .cursorY2(cursorY2),
        .uiMode(uiMode),
        // per-channel measurements
        .ch0Vmax(ch0Vmax), .ch1Vmax(ch1Vmax), .ch2Vmax(ch2Vmax), .ch3Vmax(ch3Vmax),
        .ch0Vmin(ch0Vmin), .ch1Vmin(ch1Vmin), .ch2Vmin(ch2Vmin), .ch3Vmin(ch3Vmin),
        .ch0Vp2p(ch0Vp2p), .ch1Vp2p(ch1Vp2p), .ch2Vp2p(ch2Vp2p), .ch3Vp2p(ch3Vp2p),
        .ch0Period(ch0Period), .ch1Period(ch1Period), .ch2Period(ch2Period), .ch3Period(ch3Period),
        .ch0Freq(ch0Freq), .ch1Freq(ch1Freq), .ch2Freq(ch2Freq), .ch3Freq(ch3Freq),
        .calculationComplete(calculationComplete),
        .charRamWrEn(charRamWrEn),
        .charRamAddr(charRamAddrA),
        .charRamData(charRamDataWrA)
    );
    
    // character RAM (dual-port)
    characterRAM charRam (
        .clkA(CLOCK_50),
        .addrA(charRamAddrA),
        .wrEnA(charRamWrEn),
        .dataWrA(charRamDataWrA),
        .clkB(CLOCK_50),
        .addrB(charRamAddrB),
        .dataRdB(charRamDataRdB)
    );
    
    // text generator
    textGenerator textGen (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible),
        .charRamData(charRamDataRdB),
        .runState(displayRunState),  // connect run state for RUN/STOP coloring
        .pixelR(textPixelR),
        .pixelG(textPixelG),
        .pixelB(textPixelB),
        .charRamAddrB(charRamAddrB)
    );
    
    // ---- ACQUISITION ----
    // real adc - ltc2308 reader (external adc hardware)
    // burst mode: captures 512 samples per channel before switching
    wire [11:0] realAdcData;
    wire [1:0] realAdcChannelId;
    wire realAdcSampleReady;
    
    ltc2308Reader realAdc (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .adcConvst(ADC_CS_N),
        .adcSclk(ADC_SCLK),
        .adcSdi(ADC_DIN),
        .adcSdo(ADC_DOUT),
        .channelId(realAdcChannelId),
        .adcData(realAdcData),
        .sampleReady(realAdcSampleReady)
    );
    
    // use real adc (mock adc removed - use MOCK_ADC_DATA input directly if needed for simulation)
    // select between mock adc (from switches) and real ltc2308
    assign adcData = (SW[9]) ? mockAdcData : realAdcData;  // use SW[9] as enable for mock ADC
    
    // per-channel write signals from acquisition controller
    wire [9:0] ch0WrAddr, ch1WrAddr, ch2WrAddr, ch3WrAddr;
    wire ch0WrEn, ch1WrEn, ch2WrEn, ch3WrEn;
    wire [1:0] writeChanSel;
    
    // acquisition control
    adcControl acqCtrl (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .runCommand(runCommand),
        .stopCommand(stopCommand),
        .clearRequest(clearRequest),
        .timeDivClkDivider(timeDivClkDivider),
        .timePerDiv(displayTimePerDiv),
        .triggerMode(triggerMode),
        .triggerEvent(triggerEvent),
        .adcDataIn(adcData),
        .adcChannelId(realAdcChannelId),
        .sampleReady(realAdcSampleReady),
        .acquisitionClk(acquisitionClk),
        .sampleValid(sampleValid),
        .stateRunMode(stateRunMode),
        .stateTrigger(stateTrigger),
        .ringBufferAddr(ringBufferWrAddr),
        .ringBufferWrEn(ringBufferWrEn),
        .ringBufferData(ringBufferWrData),
        .ch0WrAddr(ch0WrAddr),
        .ch0WrEn(ch0WrEn),
        .ch1WrAddr(ch1WrAddr),
        .ch1WrEn(ch1WrEn),
        .ch2WrAddr(ch2WrAddr),
        .ch2WrEn(ch2WrEn),
        .ch3WrAddr(ch3WrAddr),
        .ch3WrEn(ch3WrEn),
        .displayBufferData(displayBufferWrData),
        .sampleChannel(writeChanSel),
        .ringBufferReadData(ringBufferRdData),
        .armed(armed)
    );
    
    // ring buffer (continuous acquisition)
    dualPortRAM ringBuf (
        .clkA(CLOCK_50),
        .addrA(ringBufferWrAddr),
        .wrEnA(ringBufferWrEn),
        .dataWrA(ringBufferWrData),
        .clkB(CLOCK_50),
        .addrB(ringBufferRdAddr),
        .dataRdB(ringBufferRdData)
    );
    
    // ring buffer read address for copying
    assign ringBufferRdAddr = ch0WrAddr;
    
    // trigger detector - only triggers on ch0 samples
    wire ch0SampleReady = realAdcSampleReady && (realAdcChannelId == 2'd0);
    trigger trig (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .currentSample(adcData),
        .sampleValid(ch0SampleReady),
        .triggerLevel(triggerLevel),
        .triggerEdge(triggerEdge),
        .noiseReject(noiseReject),
        .armed(armed),
        .triggerEvent(triggerEvent),
        .triggerPosition(triggerPosition)
    );
    
    // display buffers per channel (stable waveform for display)
    // each channel has its own write address and enable from adcControl
    
    // channel 0
    wire [11:0] ch0RdData;
    dualPortRAM dispBuf0 (
        .clkA(CLOCK_50),
        .addrA(ch0WrAddr),
        .wrEnA(ch0WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(ch0DisplayRdAddr),
        .dataRdB(ch0RdData)
    );
    // channel 1
    wire [11:0] ch1RdData;
    dualPortRAM dispBuf1 (
        .clkA(CLOCK_50),
        .addrA(ch1WrAddr),
        .wrEnA(ch1WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(ch1DisplayRdAddr),
        .dataRdB(ch1RdData)
    );
    // channel 2
    wire [11:0] ch2RdData;
    dualPortRAM dispBuf2 (
        .clkA(CLOCK_50),
        .addrA(ch2WrAddr),
        .wrEnA(ch2WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(ch2DisplayRdAddr),
        .dataRdB(ch2RdData)
    );
    // channel 3
    wire [11:0] ch3RdData;
    dualPortRAM dispBuf3 (
        .clkA(CLOCK_50),
        .addrA(ch3WrAddr),
        .wrEnA(ch3WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(ch3DisplayRdAddr),
        .dataRdB(ch3RdData)
    );
    
    // ---- DISPLAY ----
    // calculate sample index from x coordinate with per-channel horizontal offsets
    // display area is 400 pixels wide (32-432), 10 divisions x 40 pixels
    wire [9:0] relX = (vgaX >= 10'd32 && vgaX < 10'd432) ? (vgaX - 10'd32) : 10'd0;
    // ch0
    wire signed [10:0] x0IndexSigned = $signed({1'b0, relX}) + $signed(ch0HorizontalOffset);
    wire signed [10:0] x0WrappedPlus  = x0IndexSigned + 11'sd400;
    wire signed [10:0] x0WrappedMinus = x0IndexSigned - 11'sd400;
    wire [9:0] ch0WaveformSampleIndex = (x0IndexSigned < 0)               ? x0WrappedPlus[9:0]  :
                                        (x0IndexSigned > 11'sd399)        ? x0WrappedMinus[9:0] :
                                                                            x0IndexSigned[9:0];
    // ch1
    wire signed [10:0] x1IndexSigned = $signed({1'b0, relX}) + $signed(ch1HorizontalOffset);
    wire signed [10:0] x1WrappedPlus  = x1IndexSigned + 11'sd400;
    wire signed [10:0] x1WrappedMinus = x1IndexSigned - 11'sd400;
    wire [9:0] ch1WaveformSampleIndex = (x1IndexSigned < 0)               ? x1WrappedPlus[9:0]  :
                                        (x1IndexSigned > 11'sd399)        ? x1WrappedMinus[9:0] :
                                                                            x1IndexSigned[9:0];
    // ch2
    wire signed [10:0] x2IndexSigned = $signed({1'b0, relX}) + $signed(ch2HorizontalOffset);
    wire signed [10:0] x2WrappedPlus  = x2IndexSigned + 11'sd400;
    wire signed [10:0] x2WrappedMinus = x2IndexSigned - 11'sd400;
    wire [9:0] ch2WaveformSampleIndex = (x2IndexSigned < 0)               ? x2WrappedPlus[9:0]  :
                                        (x2IndexSigned > 11'sd399)        ? x2WrappedMinus[9:0] :
                                                                            x2IndexSigned[9:0];
    // ch3
    wire signed [10:0] x3IndexSigned = $signed({1'b0, relX}) + $signed(ch3HorizontalOffset);
    wire signed [10:0] x3WrappedPlus  = x3IndexSigned + 11'sd400;
    wire signed [10:0] x3WrappedMinus = x3IndexSigned - 11'sd400;
    wire [9:0] ch3WaveformSampleIndex = (x3IndexSigned < 0)               ? x3WrappedPlus[9:0]  :
                                        (x3IndexSigned > 11'sd399)        ? x3WrappedMinus[9:0] :
                                                                            x3IndexSigned[9:0];
    // use ch0 index for shared scaler trigger and defaults
    wire [9:0] waveformSampleIndex = ch0WaveformSampleIndex;
    // channel-specific display read addresses
    wire [9:0] ch0DisplayRdAddr = ch0WaveformSampleIndex;
    wire [9:0] ch1DisplayRdAddr = ch1WaveformSampleIndex;
    wire [9:0] ch2DisplayRdAddr = ch2WaveformSampleIndex;
    wire [9:0] ch3DisplayRdAddr = ch3WaveformSampleIndex;
    // default single current sample (ch0) for derived logic
    assign currentSample = ch0Sample;
    
    // time and voltage correction (scaling)
    timeVoltageCorrection scaler (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .rawSample(currentSample),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .verticalOffset(displayVerticalOffset),
        .horizontalOffset(displayHorizontalOffset),
        .sampleIndex(waveformSampleIndex),
        .scaledY(scaledY),
        .scaledX(scaledX)
    );
    
    // scaled position for trigger level (horizontal line)
    wire [9:0] triggerScaledY;
    wire [9:0] triggerScaledX_unused;
    timeVoltageCorrection scalerTrig (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .rawSample(triggerLevel),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .verticalOffset(displayVerticalOffset),
        .horizontalOffset(10'sd0),
        .sampleIndex(10'd0),
        .scaledY(triggerScaledY),
        .scaledX(triggerScaledX_unused)
    );
    
    // only show waveform/axis on waveform screen
    wire showWaveform = (screenMode == 2'd2);  // WAVEFORM_SCREEN = 2
    
    // per-channel scaling (use per-channel offsets)
    wire [9:0] ch0ScaledY, ch1ScaledY, ch2ScaledY, ch3ScaledY;
    wire [9:0] chScaledX_unused0, chScaledX_unused1, chScaledX_unused2, chScaledX_unused3;
    timeVoltageCorrection ch0Scaler (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .rawSample(ch0Sample),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .verticalOffset(ch0VerticalOffset),
        .horizontalOffset(ch0HorizontalOffset),
        .sampleIndex(waveformSampleIndex),
        .scaledY(ch0ScaledY),
        .scaledX(chScaledX_unused0)
    );
    timeVoltageCorrection ch1Scaler (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .rawSample(ch1Sample),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .verticalOffset(ch1VerticalOffset),
        .horizontalOffset(ch1HorizontalOffset),
        .sampleIndex(waveformSampleIndex),
        .scaledY(ch1ScaledY),
        .scaledX(chScaledX_unused1)
    );
    timeVoltageCorrection ch2Scaler (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .rawSample(ch2Sample),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .verticalOffset(ch2VerticalOffset),
        .horizontalOffset(ch2HorizontalOffset),
        .sampleIndex(waveformSampleIndex),
        .scaledY(ch2ScaledY),
        .scaledX(chScaledX_unused2)
    );
    timeVoltageCorrection ch3Scaler (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .rawSample(ch3Sample),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .verticalOffset(ch3VerticalOffset),
        .horizontalOffset(ch3HorizontalOffset),
        .sampleIndex(waveformSampleIndex),
        .scaledY(ch3ScaledY),
        .scaledX(chScaledX_unused3)
    );
    
    // channel/cursor selection wires (now from menuFSM)
    wire [3:0] channelsEnabledSel;
    wire [1:0] selectedChannelSel;
    wire [1:0] cursorSelected;
    wire selectedCursorPairSel;
    wire [1:0] cursorPairEnableSel;
    wire uiMode;
    
    // per-channel wave generators with distinct colors
    wire [7:0] ch0R, ch0G, ch0B;
    wire [7:0] ch1R, ch1G, ch1B;
    wire [7:0] ch2R, ch2G, ch2B;
    wire [7:0] ch3R, ch3G, ch3B;
    // colors: ch0 green, ch1 red, ch2 blue, ch3 yellow
    waveformGenerator waveGen0 (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform && channelsEnabledSel[0]),
        .displayBufferData(ch0Sample),
        .scaledY(ch0ScaledY),
        .colorR(8'h00), .colorG(8'h80), .colorB(8'h00),  // ch0 = muted green
        .pixelR(ch0R), .pixelG(ch0G), .pixelB(ch0B)
    );
    waveformGenerator waveGen1 (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform && channelsEnabledSel[1]),
        .displayBufferData(ch1Sample),
        .scaledY(ch1ScaledY),
        .colorR(8'h80), .colorG(8'h00), .colorB(8'h00),  // ch1 = muted red
        .pixelR(ch1R), .pixelG(ch1G), .pixelB(ch1B)
    );
    waveformGenerator waveGen2 (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform && channelsEnabledSel[2]),
        .displayBufferData(ch2Sample),
        .scaledY(ch2ScaledY),
        .colorR(8'h00), .colorG(8'h00), .colorB(8'h80),  // ch2 = muted blue
        .pixelR(ch2R), .pixelG(ch2G), .pixelB(ch2B)
    );
    waveformGenerator waveGen3 (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform && channelsEnabledSel[3]),
        .displayBufferData(ch3Sample),
        .scaledY(ch3ScaledY),
        .colorR(8'h80), .colorG(8'h80), .colorB(8'h00),  // ch3 = muted yellow
        .pixelR(ch3R), .pixelG(ch3G), .pixelB(ch3B)
    );
    // combine channel waves - take max per component
    wire [7:0] waveR0 = (ch0R > ch1R) ? ch0R : ch1R;
    wire [7:0] waveR1 = (ch2R > ch3R) ? ch2R : ch3R;
    assign wavePixelR = (waveR0 > waveR1) ? waveR0 : waveR1;
    wire [7:0] waveG0 = (ch0G > ch1G) ? ch0G : ch1G;
    wire [7:0] waveG1 = (ch2G > ch3G) ? ch2G : ch3G;
    assign wavePixelG = (waveG0 > waveG1) ? waveG0 : waveG1;
    wire [7:0] waveB0 = (ch0B > ch1B) ? ch0B : ch1B;
    wire [7:0] waveB1 = (ch2B > ch3B) ? ch2B : ch3B;
    assign wavePixelB = (waveB0 > waveB1) ? waveB0 : waveB1;
    
    // axis generator (grid and border) is only active on waveform screen
    axisGenerator axisGen (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform),
        .pixelR(axisPixelR),
        .pixelG(axisPixelG),
        .pixelB(axisPixelB)
    );
    
    // trigger overlay
    wire [7:0] trigPixelR;
    wire [7:0] trigPixelG;
    wire [7:0] trigPixelB;
    triggerOverlay trigOvly (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform),
        .triggerY(triggerScaledY),
        .pixelR(trigPixelR),
        .pixelG(trigPixelG),
        .pixelB(trigPixelB)
    );
    
    // cursor controller and overlay
    wire [9:0] cursorX1, cursorX2, cursorY1, cursorY2;
    cursorController cursCtrl (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .uiMode(uiMode),
        .selectedPair(selectedCursorPairSel),
        .asciiIn(ps2Ascii),
        .asciiValid(ps2AsciiReady),
        .cursorX1(cursorX1),
        .cursorX2(cursorX2),
        .cursorY1(cursorY1),
        .cursorY2(cursorY2)
    );
    wire [7:0] cursorPixelR, cursorPixelG, cursorPixelB;
    cursorOverlay cursOvly (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible && showWaveform),
        .cursorX1(cursorX1),
        .cursorX2(cursorX2),
        .cursorY1(cursorY1),
        .cursorY2(cursorY2),
        .enablePair0(cursorPairEnableSel[0]),
        .enablePair1(cursorPairEnableSel[1]),
        .pixelR(cursorPixelR),
        .pixelG(cursorPixelG),
        .pixelB(cursorPixelB)
    );
    
    // ui overlay for menu highlights
    wire [7:0] uiPixelR, uiPixelG, uiPixelB;
    uiOverlay ui (
        .clock25MHz(CLOCK_50),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible),
        .selectedChannel(selectedChannelSel),
        .selectedCursorPair(selectedCursorPairSel),
        .uiMode(uiMode),
        .pixelR(uiPixelR),
        .pixelG(uiPixelG),
        .pixelB(uiPixelB)
    );
    
    // pixel arbiter (combine all layers)
    pixelArbiter arbiter (
        .clock25MHz(CLOCK_50),
        .textR(textPixelR),
        .textG(textPixelG),
        .textB(textPixelB),
        .uiR(uiPixelR),
        .uiG(uiPixelG),
        .uiB(uiPixelB),
        .cursorR(cursorPixelR),
        .cursorG(cursorPixelG),
        .cursorB(cursorPixelB),
        .trigR(trigPixelR),
        .trigG(trigPixelG),
        .trigB(trigPixelB),
        .waveR(wavePixelR),
        .waveG(wavePixelG),
        .waveB(wavePixelB),
        .axisR(axisPixelR),
        .axisG(axisPixelG),
        .axisB(axisPixelB),
        .xOrd(vgaX),
        .yOrd(vgaY),
        .visible(vgaVisible),
        .vgaR(finalVgaR),
        .vgaG(finalVgaG),
        .vgaB(finalVgaB)
    );
    
    // measurement buffer read signals (shared address for all channels)
    wire [9:0] measureBufferRdAddr;
    wire [11:0] ch0MeasData, ch1MeasData, ch2MeasData, ch3MeasData;
    
    // measurement buffers - read from display buffers using measurement address
    // channel 0 measurement read
    dualPortRAM measBuf0 (
        .clkA(CLOCK_50),
        .addrA(ch0WrAddr),
        .wrEnA(ch0WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(measureBufferRdAddr),
        .dataRdB(ch0MeasData)
    );
    // channel 1 measurement read
    dualPortRAM measBuf1 (
        .clkA(CLOCK_50),
        .addrA(ch1WrAddr),
        .wrEnA(ch1WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(measureBufferRdAddr),
        .dataRdB(ch1MeasData)
    );
    // channel 2 measurement read
    dualPortRAM measBuf2 (
        .clkA(CLOCK_50),
        .addrA(ch2WrAddr),
        .wrEnA(ch2WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(measureBufferRdAddr),
        .dataRdB(ch2MeasData)
    );
    // channel 3 measurement read
    dualPortRAM measBuf3 (
        .clkA(CLOCK_50),
        .addrA(ch3WrAddr),
        .wrEnA(ch3WrEn),
        .dataWrA(displayBufferWrData),
        .clkB(CLOCK_50),
        .addrB(measureBufferRdAddr),
        .dataRdB(ch3MeasData)
    );
    
    // waveform properties calculator (4 channels)
    waveformProperties propCalc (
        .clock50MHz(CLOCK_50),
        .resetn(resetn),
        .ch0BufferData(ch0MeasData),
        .ch1BufferData(ch1MeasData),
        .ch2BufferData(ch2MeasData),
        .ch3BufferData(ch3MeasData),
        .voltsPerDiv(displayVoltsPerDiv),
        .timePerDiv(displayTimePerDiv),
        .calculateTrigger(calculateTrigger),
        .measureBufferAddr(measureBufferRdAddr),
        .ch0Vmax(ch0Vmax), .ch1Vmax(ch1Vmax), .ch2Vmax(ch2Vmax), .ch3Vmax(ch3Vmax),
        .ch0Vmin(ch0Vmin), .ch1Vmin(ch1Vmin), .ch2Vmin(ch2Vmin), .ch3Vmin(ch3Vmin),
        .ch0Vp2p(ch0Vp2p), .ch1Vp2p(ch1Vp2p), .ch2Vp2p(ch2Vp2p), .ch3Vp2p(ch3Vp2p),
        .ch0Period(ch0Period), .ch1Period(ch1Period), .ch2Period(ch2Period), .ch3Period(ch3Period),
        .ch0Freq(ch0Freq), .ch1Freq(ch1Freq), .ch2Freq(ch2Freq), .ch3Freq(ch3Freq),
        .calculationComplete(calculationComplete)
    );
    
    //==============================================================
    // OUTPUT ASSIGNMENTS
    //==============================================================
    
    // VGA output from arbiter
    assign VGA_HS = vgaHSync;
    assign VGA_VS = vgaVSync;
    assign VGA_R = finalVgaR;
    assign VGA_G = finalVgaG;
    assign VGA_B = finalVgaB;
    assign VGA_BLANK_N = vgaVisible;
    assign VGA_SYNC_N = 1'b0;       // not used
    assign VGA_CLK = vgaPixelClk;   // 25MHz VGA DAC clock from vgaDriver
    
    // DESim VGA coordinate outputs
    assign VGA_X = vgaX;
    assign VGA_Y = vgaY;
    assign VGA_VISIBLE = vgaVisible;
    
    // acquisition control respects run state from menu FSM
    assign runCommand = (screenMode == 2'd2) && displayRunState ? 1'b1 : 1'b0;  // run when in waveform screen AND run state is on
    assign stopCommand = (screenMode != 2'd2) || !displayRunState ? 1'b1 : 1'b0;  // stop when not in waveform screen OR run state is off
    
    // board-specific I/O
    // convert adc value (12-bit) to 4 decimal digits on HEX0-HEX3
    wire [3:0] thousands;
    wire [3:0] hundreds;
    wire [3:0] tens;
    wire [3:0] ones;
    
    bin_to_dec b2d(
        .bin(adcData),
        .thousands(thousands),
        .hundreds(hundreds),
        .tens(tens),
        .ones(ones)
    );
    
    // drive 7-seg displays with decimal digits
    hex7seg h0(ones,      HEX0);
    hex7seg h1(tens,      HEX1);
    hex7seg h2(hundreds,  HEX2);
    hex7seg h3(thousands, HEX3);
    
    // upper hex displays unused
    assign HEX4 = 7'h7F;
    assign HEX5 = 7'h7F;
    
    // display menuFSM state on LEDR[1:0]
    assign LEDR[1:0] = screenMode;
    // show top bits of adc value on leds for debug
    assign LEDR[9:2] = adcData[9:2];
endmodule

// binary to bcd - double-dabble (12 → 4 digits)
module bin_to_dec(
    input [11:0] bin,
    output reg [3:0] thousands,
    output reg [3:0] hundreds,
    output reg [3:0] tens,
    output reg [3:0] ones
);
    integer i;
    reg [27:0] shift;
    
    always @(*) begin
        shift = {16'd0, bin};
        for (i = 0; i < 12; i = i + 1) begin
            if (shift[15:12] >= 5) shift[15:12] = shift[15:12] + 3;
            if (shift[19:16] >= 5) shift[19:16] = shift[19:16] + 3;
            if (shift[23:20] >= 5) shift[23:20] = shift[23:20] + 3;
            if (shift[27:24] >= 5) shift[27:24] = shift[27:24] + 3;
            shift = shift << 1;
        end
        ones      = shift[15:12];
        tens      = shift[19:16];
        hundreds  = shift[23:20];
        thousands = shift[27:24];
    end
endmodule

// hex 7-seg decoder (0-9)
module hex7seg(
    input [3:0] bcd,
    output reg [6:0] seg
);
    always @(*) begin
        case (bcd)
            4'd0: seg = 7'b1000000;
            4'd1: seg = 7'b1111001;
            4'd2: seg = 7'b0100100;
            4'd3: seg = 7'b0110000;
            4'd4: seg = 7'b0011001;
            4'd5: seg = 7'b0010010;
            4'd6: seg = 7'b0000010;
            4'd7: seg = 7'b1111000;
            4'd8: seg = 7'b0000000;
            4'd9: seg = 7'b0010000;
            default: seg = 7'b1111111;
        endcase
    end
endmodule
