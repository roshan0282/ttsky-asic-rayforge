module uartTransmitter #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115200,
    parameter WIDTH     = 8,
    parameter PARITY    = 1          // 0=None, 1=Even, 2=Odd
)(
    input  logic             clk,
    input  logic             resetn,
    input  logic [WIDTH-1:0] dataIn,        // Parallel data in
    input  logic             dataValid,     // Pulse high to start transmission
    output logic             uartTx,        // Serial line out
    output logic             txBusy,        // High while transmitting
    output logic             txDone         // Pulses high when transmission complete
);

    // Define internal baud signals
    localparam BAUD_COUNT = CLK_FREQ / BAUD_RATE;
    logic [$clog2(BAUD_COUNT)-1:0]  baudCounter;
    logic                           baudTick;

    // Define bit states for parallel - serial FSM
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
    localparam TX_DONE     = 4'd12;

    logic [3:0] state, nextState;

    // Baud counter and tick generation
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            baudCounter <= 0;
            baudTick    <= 0;
        end else begin
            if (state == IDLE) begin
                // Reset counter in IDLE
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

    // Data shift register and bit counter
    logic [7:0]         txShiftReg;
    logic [2:0]         bitCounter;
    logic [WIDTH-1:0]   dataBuffer;
    logic               parityBit;

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
                // Start transmission when dataValid is asserted
                if (dataValid) begin
                    nextState = START_BIT;
                end
            end
            
            START_BIT: begin
                if (baudTick) begin
                    nextState = DATA_BIT_0;
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
                    nextState = TX_DONE;
                end
            end
            
            TX_DONE: begin
                nextState = IDLE;
            end
            
            default: begin
                nextState = IDLE;
            end
        endcase
    end

    // Load data buffer when starting transmission
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            dataBuffer <= '0;
        end else begin
            if (state == IDLE && dataValid) begin
                dataBuffer <= dataIn;
            end
        end
    end

    // Calculate parity bit
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            parityBit <= 1'b0;
        end else begin
            if (state == IDLE && dataValid) begin
                // Calculate parity for the data
                if (PARITY == 1) begin
                    // Even parity: XOR of all data bits
                    parityBit <= ^dataIn;
                end else if (PARITY == 2) begin
                    // Odd parity: inverted XOR of all data bits
                    parityBit <= ~(^dataIn);
                end else begin
                    parityBit <= 1'b0;
                end
            end
        end
    end

    // Shift register for serial transmission
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            txShiftReg  <= 8'hFF;
            bitCounter  <= 3'b0;
        end else begin
            if (state == IDLE && dataValid) begin
                // Load shift register with data to transmit
                txShiftReg <= dataBuffer;
                bitCounter <= 3'b0;
            end else if (state >= DATA_BIT_0 && state <= DATA_BIT_7 && baudTick) begin
                // Shift out data LSB first
                txShiftReg <= {1'b1, txShiftReg[7:1]};
                bitCounter <= bitCounter + 1;
            end
        end
    end

    // UART TX output logic
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            uartTx <= 1'b1;  // Idle high
        end else begin
            case (state)
                IDLE:       uartTx <= 1'b1;  // Line idle high
                START_BIT:  uartTx <= 1'b0;  // Start bit low
                DATA_BIT_0,
                DATA_BIT_1,
                DATA_BIT_2,
                DATA_BIT_3,
                DATA_BIT_4,
                DATA_BIT_5,
                DATA_BIT_6,
                DATA_BIT_7: uartTx <= txShiftReg[0];  // Data bits LSB first
                PARITY_BIT: uartTx <= parityBit;       // Parity bit
                STOP_BIT:   uartTx <= 1'b1;  // Stop bit high
                TX_DONE:    uartTx <= 1'b1;  // Return to idle high
                default:    uartTx <= 1'b1;
            endcase
        end
    end

    // Output assignments
    assign txBusy = (state != IDLE);
    assign txDone = (state == TX_DONE);

endmodule
