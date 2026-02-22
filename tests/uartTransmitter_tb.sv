`timescale 1ns/1ps
module uartTransmitter_tb;
    localparam CLK_FREQ   = 50_000_000;
    localparam BAUD_RATE  = 115200;
    localparam WIDTH      = 8;
    localparam CLK_PERIOD  = 1_000_000_000 / CLK_FREQ;   // 20 ns
    localparam BAUD_COUNT  = CLK_FREQ / BAUD_RATE;       // 434 cycles
    localparam BAUD_PERIOD = BAUD_COUNT * CLK_PERIOD;    // 434 * 20 = 8680 ns
    logic             clk;
    logic             resetn;
    logic [WIDTH-1:0] dataIn;
    logic             dataValid;
    logic             uartTx;
    logic             txBusy;
    logic             txDone;
    uartTransmitter #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH(WIDTH)
    ) dut (
        .clk(clk),
        .resetn(resetn),
        .dataIn(dataIn),
        .dataValid(dataValid),
        .uartTx(uartTx),
        .txBusy(txBusy),
        .txDone(txDone)
    );
    // Clock generation
    initial clk = 0;
    always #(CLK_PERIOD / 2) clk = ~clk;
    // Task to trigger a UART transmit and sample the line to verify
    task send_and_check(input logic [7:0] data);
        logic [7:0] received;
        integer i;
        begin
            // Load data and pulse dataValid for one clock
            @(negedge clk);
            dataIn    = data;
            dataValid = 1'b1;
            @(negedge clk);
            dataValid = 1'b0;
            // Wait for txBusy to assert
            @(posedge txBusy);
            // Sample start bit at midpoint
            #(BAUD_PERIOD / 2);
            if (uartTx !== 1'b0)
                $display("  *** Start bit ERROR: expected 0, got %b ***", uartTx);
            // Sample 8 data bits
            for (i = 0; i < 8; i++) begin
                #(BAUD_PERIOD);
                received[i] = uartTx;
            end
            // Sample stop bit
            #(BAUD_PERIOD);
            if (uartTx !== 1'b1)
                $display("  *** Stop bit ERROR: expected 1, got %b ***", uartTx);
            // Wait for txDone then small gap before next byte
            @(posedge clk iff txDone);
            repeat(10) @(posedge clk);
            $display("  Received: 0x%02X (expected 0x%02X) -- %s",
                received, data, received == data ? "PASS" : "FAIL");
        end
    endtask
    // State monitor - prints every clock cycle
    always @(posedge clk) begin
        $display("t=%0t | state=%0d | nextState=%0d | baudCounter=%0d | baudTick=%b | bitCounter=%0d | txShiftReg=%08b | uartTx=%b | txBusy=%b | txDone=%b",
            $time, dut.state, dut.nextState, dut.baudCounter, dut.baudTick,
            dut.bitCounter, dut.txShiftReg, dut.uartTx, dut.txBusy, dut.txDone);
    end
    // Main test sequence
    initial begin
        resetn    = 1'b0;
        dataIn    = 8'h00;
        dataValid = 1'b0;
        @(posedge clk);
        @(posedge clk);
        resetn = 1'b1;
        @(posedge clk);
        $display("=== UART Transmitter Testbench ===");
        $display("Test 1: Sending 0x55 (alternating 01010101)");
        send_and_check(8'h55);
        $display("=== Tests Complete ===");
        $finish;
    end
    // Timeout watchdog
    initial begin
        #(BAUD_PERIOD * 11);  // 5 full transmissions worth
        $display("TIMEOUT: Testbench exceeded max time");
        $finish;
    end
endmodule