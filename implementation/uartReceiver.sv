module uartReceiver #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115200,
    parameter WIDTH     = 8,
    parameter PARITY    = 1          // 0=None, 1=Even, 2=Odd
)(
    input  logic             clk,
    input  logic             resetn,
    input  logic             uartRx,        // Serial line in
    output logic [WIDTH-1:0] dataOut,       // Parallel data out
    output logic             dataValid,     // Pulses high when a full byte is ready
    output logic             rxBusy,        // High while receiving
    output logic             parityError    // High when parity error detected
);

    // Define internal baud signals
    localparam BAUD_COUNT = CLK_FREQ / BAUD_RATE;
    logic [$clog2(BAUD_COUNT)-1:0]  baudCounter;
    logic                           baudTick;

    // Define bit states for serial - parallel FSM
    localparam IDLE        = 4'd0;
    localparam START_BIT   = 4'd1;
    localparam DATA_BIT_0  = 4'd2;
    localparam DATA_BIT_1  = 4'd3;
    localparam DATA_BIT_2  = 4'd4;
    localparam DATA_BIT_3  = 4'd5;
    localparam DATA_BIT_4  = 4'd6;
    localparam DATA_BIT_5  = 4'd7;
    localparam DATA_BIT_6  = 4'd8;
    localparam DATA_BIT_7  = 4'd9;
    localparam PARITY_BIT  = 4'd10;
    localparam STOP_BIT    = 4'd11;
    localparam BYTE_DONE   = 4'd12;

    logic [3:0] state, nextState;

    // Baud counter and tick generation
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            baudCounter <= 0;
            baudTick    <= 0;
        end else begin
            if (state == IDLE) begin
                // Reset counter in IDLE to align with start bit
                baudCounter <= 0;
                baudTick    <= 0;
            end else if (baudCounter == BAUD_COUNT - 1) begin
                baudCounter <= 0;
                baudTick    <= 1;
            end else begin
                baudCounter <= baudCounter + 1;
                baudTick    <= 0;
            end
        end
    end

    // Data shift registers and bit count
    logic [7:0]         rxShiftReg;
    logic [2:0]         bitCounter;
    logic [WIDTH-1:0]   dataBuffer;
    logic               receivedParity;
    logic               calculatedParity;
    logic               parityErrorFlag;

    // Synchronize uartRx to avoid metastability
    logic uartRx_sync1, uartRx_sync2;
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            uartRx_sync1 <= 1'b1;
            uartRx_sync2 <= 1'b1;
        end else begin
            uartRx_sync1 <= uartRx;
            uartRx_sync2 <= uartRx_sync1;
        end
    end

    // State register
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            state <= IDLE;
        end else begin
            state <= nextState;
        end
    end

    // Next state logic
    always_comb begin
        nextState = state;
        
        case (state)
            IDLE: begin
                // Detect start bit (falling edge on RX line)
                if (uartRx_sync2 == 1'b0) begin
                    nextState = START_BIT;
                end
            end
            
            START_BIT: begin
                if (baudTick) begin
                    // Sample at middle of start bit
                    if (uartRx_sync2 == 1'b0) begin
                        nextState = DATA_BIT_0;
                    end else begin
                        // False start bit, return to IDLE
                        nextState = IDLE;
                    end
                end
            end
            
            DATA_BIT_0: begin
                if (baudTick) nextState = DATA_BIT_1;
            end
            
            DATA_BIT_1: begin
                if (baudTick) nextState = DATA_BIT_2;
            end
            
            DATA_BIT_2: begin
                if (baudTick) nextState = DATA_BIT_3;
            end
            
            DATA_BIT_3: begin
                if (baudTick) nextState = DATA_BIT_4;
            end
            
            DATA_BIT_4: begin
                if (baudTick) nextState = DATA_BIT_5;
            end
            
            DATA_BIT_5: begin
                if (baudTick) nextState = DATA_BIT_6;
            end
            
            DATA_BIT_6: begin
                if (baudTick) nextState = DATA_BIT_7;
            end
            
            DATA_BIT_7: begin
                if (baudTick) begin
                    if (PARITY != 0) begin
                        nextState = PARITY_BIT;
                    end else begin
                        nextState = STOP_BIT;
                    end
                end
            end
            
            PARITY_BIT: begin
                if (baudTick) nextState = STOP_BIT;
            end
            
            STOP_BIT: begin
                if (baudTick) begin
                    nextState = BYTE_DONE;
                end
            end
            
            BYTE_DONE: begin
                nextState = IDLE;
            end
            
            default: begin
                nextState = IDLE;
            end
        endcase
    end

    // Data sampling and shift register
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            rxShiftReg  <= 8'h00;
            bitCounter  <= 3'b0;
        end else begin
            if (state >= DATA_BIT_0 && state <= DATA_BIT_7 && baudTick) begin
                // Shift in data LSB first
                rxShiftReg <= {uartRx_sync2, rxShiftReg[7:1]};
                bitCounter <= bitCounter + 1;
            end else if (state == IDLE) begin
                bitCounter <= 3'b0;
            end
        end
    end

    // Capture parity bit when received
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            receivedParity <= 1'b0;
        end else begin
            if (state == PARITY_BIT && baudTick) begin
                receivedParity <= uartRx_sync2;
            end
        end
    end

    // Calculate expected parity
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            calculatedParity <= 1'b0;
        end else begin
            if (state == DATA_BIT_7 && baudTick) begin
                // Calculate parity after all data bits received
                if (PARITY == 1) begin
                    // Even parity: XOR of all data bits
                    calculatedParity <= ^rxShiftReg;
                end else if (PARITY == 2) begin
                    // Odd parity: inverted XOR of all data bits
                    calculatedParity <= ~(^rxShiftReg);
                end else begin
                    calculatedParity <= 1'b0;
                end
            end
        end
    end

    // Check for parity error
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            parityErrorFlag <= 1'b0;
        end else begin
            if (state == STOP_BIT && PARITY != 0) begin
                // Compare received parity with calculated parity
                parityErrorFlag <= (receivedParity != calculatedParity);
            end else if (state == IDLE) begin
                parityErrorFlag <= 1'b0;
            end
        end
    end

    // Output data buffer
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            dataBuffer <= '0;
        end else begin
            if (state == BYTE_DONE) begin
                dataBuffer <= rxShiftReg[WIDTH-1:0];
            end
        end
    end

    // Output assignments
    assign dataOut     = dataBuffer;
    assign dataValid   = (state == BYTE_DONE);
    assign rxBusy      = (state != IDLE);
    assign parityError = parityErrorFlag;

endmodule
