module uartTransceiver #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115200,
    parameter WIDTH     = 8
)(
    input  logic             clk,
    input  logic             resetn,
    
    // Transmitter interface
    input  logic [WIDTH-1:0] txDataIn,
    input  logic             txStart,
    output logic             txBusy,
    output logic             txDone,
    
    // Receiver interface
    output logic [WIDTH-1:0] rxDataOut,
    output logic             rxValid,
    output logic             rxBusy,
    
    // Serial interface
    input  logic             uartRx,
    output logic             uartTx
);

    uartTransmitter #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH(WIDTH)
    ) transmitter_inst (
        .clk(clk),
        .resetn(resetn),
        .dataIn(txDataIn),
        .dataValid(txStart),
        .uartTx(uartTx),
        .txBusy(txBusy),
        .txDone(txDone)
    );

    uartReceiver #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH(WIDTH)
    ) receiver_inst (
        .clk(clk),
        .resetn(resetn),
        .uartRx(uartRx),
        .dataOut(rxDataOut),
        .dataValid(rxValid),
        .rxBusy(rxBusy)
    );

endmodule