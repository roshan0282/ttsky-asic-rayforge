module uartTransmitter #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115200,
    parameter WIDTH     = 8
)(
    input  logic             clk,
    input  logic             resetn,
    input  logic [WIDTH-1:0] dataIn,
    input  logic             dataValid,
    output logic             uartTx,
    output logic             txBusy,
    output logic             txDone
);

    localparam BAUD_COUNT = CLK_FREQ / BAUD_RATE;
    logic [$clog2(BAUD_COUNT)-1:0] baudCounter;
    logic                          baudTick;

    localparam IDLE       = 3'd0;
    localparam START_BIT  = 3'd1;
    localparam DATA_BITS  = 3'd2;
    localparam STOP_BIT   = 3'd3;
    localparam TX_DONE    = 3'd4;

    logic [2:0] state, nextState;

    logic [7:0] txShiftReg;
    logic [2:0] bitCounter;

    // Baud counter and tick generation
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            baudCounter <= 0;
            baudTick    <= 0;
        end else begin
            if (state == IDLE) begin
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

    // State register
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) state <= IDLE;
        else         state <= nextState;
    end

    // Next state logic
    always_comb begin
        nextState = state;
        case (state)
            IDLE:      if (dataValid)                         nextState = START_BIT;
            START_BIT: if (baudTick)                          nextState = DATA_BITS;
            DATA_BITS: if (baudTick && bitCounter == 3'd7)    nextState = STOP_BIT;
            STOP_BIT:  if (baudTick)                          nextState = TX_DONE;
            TX_DONE:                                          nextState = IDLE;
            default:                                          nextState = IDLE;
        endcase
    end

    // Shift register and bit counter
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            txShiftReg <= 8'hFF;
            bitCounter <= 3'd0;
        end else begin
            if (state == IDLE && dataValid) begin
                txShiftReg <= dataIn;
                bitCounter <= 3'd0;
            end else if (state == DATA_BITS && baudTick) begin
                txShiftReg <= {1'b1, txShiftReg[7:1]};
                bitCounter <= bitCounter + 1;
            end
        end
    end

    // TX output logic
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            uartTx <= 1'b1;
        end else begin
            case (state)
                IDLE:      uartTx <= 1'b1;
                START_BIT: uartTx <= 1'b0;
                DATA_BITS: uartTx <= txShiftReg[0];
                STOP_BIT:  uartTx <= 1'b1;
                TX_DONE:   uartTx <= 1'b1;
                default:   uartTx <= 1'b1;
            endcase
        end
    end

    assign txBusy = (state != IDLE);
    assign txDone = (state == TX_DONE);

endmodule