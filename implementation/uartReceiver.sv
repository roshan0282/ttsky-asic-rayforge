module uartReceiver #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115200,
    parameter WIDTH     = 8
)(
    input  logic             clk,
    input  logic             resetn,
    input  logic             uartRx,
    output logic [WIDTH-1:0] dataOut,
    output logic             dataValid,
    output logic             rxBusy
);

    localparam BAUD_COUNT = CLK_FREQ / BAUD_RATE;
    logic [$clog2(BAUD_COUNT)-1:0] baudCounter;
    logic                          baudTick;

    localparam IDLE      = 3'd0;
    localparam START_BIT = 3'd1;
    localparam DATA_BITS = 3'd2;
    localparam STOP_BIT  = 3'd3;
    localparam BYTE_DONE = 3'd4;

    logic [2:0] state, nextState;

    logic [7:0] rxShiftReg;
    logic [2:0] bitCounter;
    logic [WIDTH-1:0] dataBuffer;

    // Synchronizer to stabilize asychronous input
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
            IDLE:      if (!uartRx_sync2)                        nextState = START_BIT;
            START_BIT: if (baudTick) begin
                           if (!uartRx_sync2)                    nextState = DATA_BITS;
                           else                                  nextState = IDLE;  // False start
                       end
            DATA_BITS: if (baudTick && bitCounter == 3'd7)       nextState = STOP_BIT;
            STOP_BIT:  if (baudTick)                             nextState = BYTE_DONE;
            BYTE_DONE:                                           nextState = IDLE;
            default:                                             nextState = IDLE;
        endcase
    end

    // Shift register and bit counter
    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            rxShiftReg <= 8'h00;
            bitCounter <= 3'd0;
        end else begin
            if (state == IDLE) begin
                bitCounter <= 3'd0;
            end else if (state == DATA_BITS && baudTick) begin
                rxShiftReg <= {uartRx_sync2, rxShiftReg[7:1]};
                bitCounter <= bitCounter + 1;
            end
        end
    end

    assign dataOut  = rxShiftReg[WIDTH-1:0];
    assign dataValid = (state == BYTE_DONE);
    assign rxBusy   = (state != IDLE);

endmodule