module uartTransceiver #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115200,
    parameter WIDTH     = 8,
    parameter PARITY    = 1          // 0=None, 1=Even, 2=Odd
)(
    input  logic             clk,
    input  logic             resetn,
    
    // Transmitter interface
    input  logic [WIDTH-1:0] txDataIn,      // Parallel data to transmit
    input  logic             txStart,       // Pulse high to start transmission
    output logic             txBusy,        // High while transmitting
    output logic             txDone,        // Pulses high when transmission complete
    
    // Receiver interface
    output logic [WIDTH-1:0] rxDataOut,     // Parallel received data
    output logic             rxValid,       // Pulses high when byte received
    output logic             rxBusy,        // High while receiving
    output logic             rxParityError, // High when parity error detected
    
    // Serial interface
    input  logic             uartRx,        // Serial line in
    output logic             uartTx         // Serial line out
);

    // Instantiate UART Transmitter
    uartTransmitter #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH(WIDTH),
        .PARITY(PARITY)
    ) transmitter_inst (
        .clk(clk),
        .resetn(resetn),
        .dataIn(txDataIn),
        .dataValid(txStart),
        .uartTx(uartTx),
        .txBusy(txBusy),
        .txDone(txDone)
    );

    // Instantiate UART Receiver
    uartReceiver #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH(WIDTH),
        .PARITY(PARITY)
    ) receiver_inst (
        .clk(clk),
        .resetn(resetn),
        .uartRx(uartRx),
        .dataOut(rxDataOut),
        .dataValid(rxValid),
        .rxBusy(rxBusy),
        .parityError(rxParityError)
    );

endmodule
