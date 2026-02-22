module ps2Driver(
    input clock50MHz,
    input resetn,
    inout ps2Clk,
    inout ps2Dat,
    output reg [7:0] asciiOut,     // ASCII character output
    output reg asciiReady          // pulse high for one clock when new ASCII available
);

// PS/2 receiver
wire [7:0] rawData;
wire rawDataReady;
wire parityErr;

ps2Receiver receiver (
    .clock50MHz(clock50MHz),
    .resetn(resetn),
    .ps2Clk(ps2Clk),
    .ps2Dat(ps2Dat),
    .dataOut(rawData),
    .dataReady(rawDataReady),
    .parityError(parityErr)
);

// state machine for handling scancodes
// PS/2 sends: F0 = key release, E0 = extended key
reg [1:0] state;
reg shiftPressed;
localparam IDLE = 2'd0;
localparam RELEASE = 2'd1;
localparam EXTENDED = 2'd2;

// scancode to ASCII converter
wire [7:0] asciiFromScancode;
wire validAscii;

scancodeROM converter (
    .scancode(rawData),
    .shiftPressed(shiftPressed),
    .asciiCode(asciiFromScancode),
    .validAscii(validAscii)
);

always @(posedge clock50MHz) begin
    if (!resetn) begin
        state <= IDLE;
        shiftPressed <= 1'b0;
        asciiOut <= 8'd0;
        asciiReady <= 1'b0;
    end else begin
        asciiReady <= 1'b0;  // default: pulse for one clock
        
        if (rawDataReady && !parityErr) begin
            case (state)
                IDLE: begin
                    if (rawData == 8'hF0) begin
                        // next byte is a key release
                        state <= RELEASE;
                    end else if (rawData == 8'hE0) begin
                        // next byte is extended key (ignore for now)
                        state <= EXTENDED;
                    end else if (rawData == 8'h12 || rawData == 8'h59) begin
                        // left or right shift pressed
                        shiftPressed <= 1'b1;
                    end else if (validAscii) begin
                        // normal key press with valid ASCII
                        asciiOut <= asciiFromScancode;
                        asciiReady <= 1'b1;
                    end
                end
                
                RELEASE: begin
                    // handle key release
                    if (rawData == 8'h12 || rawData == 8'h59) begin
                        // shift key released
                        shiftPressed <= 1'b0;
                    end
                    state <= IDLE;
                end
                
                EXTENDED: begin
                    // ignore extended keys for now
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end
end
endmodule

module ps2Receiver(
    input clock50MHz,
    input resetn,
    inout ps2Clk,                  // PS/2 clock line (bidirectional)
    inout ps2Dat,                  // PS/2 data line (bidirectional)
    output reg [7:0] dataOut,      // 8-bit data byte received
    output reg dataReady,          // pulse high for one clock when new data received
    output reg parityError         // high if parity check failed
);

    // detect negedge of PS/2 clock
    reg prevPs2Clk;
    wire negedgePs2Clk;

    always @(posedge clock50MHz) begin
        prevPs2Clk <= ps2Clk;
    end

    assign negedgePs2Clk = (prevPs2Clk & !ps2Clk);

    // shift register to capture 11-bit packet
    // packet format: [START(0)] [D0] [D1] [D2] [D3] [D4] [D5] [D6] [D7] [PARITY] [STOP(1)]
    reg [10:0] shiftReg;
    reg [3:0] bitCount;              // count bits received (0-10)
    reg processData;                  // flag to process data on next cycle

    always @(posedge clock50MHz) begin
        if (!resetn) begin
            shiftReg <= 11'b0;
            bitCount <= 4'd0;
            dataOut <= 8'd0;
            dataReady <= 1'b0;
            parityError <= 1'b0;
            processData <= 1'b0;
        end else begin
            dataReady <= 1'b0;       // default: pulse for one clock only
            
            // process data from previous cycle if flag is set
            if (processData) begin
                processData <= 1'b0;
                // extract fields: shiftReg[0]=start, shiftReg[8:1]=data, 
                //                 shiftReg[9]=parity, shiftReg[10]=stop
                if (shiftReg[0] == 1'b0 && shiftReg[10] == 1'b1) begin
                    // valid start and stop bits
                    dataOut <= shiftReg[8:1];
                    dataReady <= 1'b1;
                    
                    // check odd parity: XOR of all data bits + parity bit should = 1
                    parityError <= ~(^shiftReg[9:1]);
                end
            end
            
            if (negedgePs2Clk) begin
                // shift in new bit
                shiftReg <= {ps2Dat, shiftReg[10:1]};
                bitCount <= bitCount + 1'd1;
                
                if (bitCount == 4'd10) begin
                    // received all 11 bits, process on next cycle
                    bitCount <= 4'd0;
                    processData <= 1'b1;
                end
            end
        end
    end
endmodule