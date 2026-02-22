`timescale 1ns/1ps

module uartReceiver_tb;

    localparam CLK_FREQ   = 50_000_000;
    localparam BAUD_RATE  = 115200;
    localparam WIDTH      = 8;
    localparam CLK_PERIOD  = 1_000_000_000 / CLK_FREQ;   // 20 ns
    localparam BAUD_COUNT  = CLK_FREQ / BAUD_RATE;       // 434 cycles
    localparam BAUD_PERIOD = BAUD_COUNT * CLK_PERIOD;    // 434 * 20 = 8680 ns 

    logic             clk;
    logic             resetn;
    logic             uartRx;
    logic [WIDTH-1:0] dataOut;
    logic             dataValid;
    logic             rxBusy;

    uartReceiver #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH(WIDTH)
    ) dut (
        .clk(clk),
        .resetn(resetn),
        .uartRx(uartRx),
        .dataOut(dataOut),
        .dataValid(dataValid),
        .rxBusy(rxBusy)
    );

    // Clock generation
    initial clk = 0;
    always #(CLK_PERIOD / 2) clk = ~clk;

    // Task to send a UART byte
    task send_byte(input logic [7:0] data);
        integer i;
        begin
            #(CLK_PERIOD / 4);

            // Start bit - hold for 1.5 baud periods to ensure sampling in middle
            uartRx = 1'b0;
            #(BAUD_PERIOD + CLK_PERIOD * 3);  // Extra cycles for synchronizer delay

            // Data bits LSB first
            for (i = 0; i < 8; i++) begin
                uartRx = data[i];
                #(BAUD_PERIOD);
            end

            // Stop bit
            uartRx = 1'b1;
            #(BAUD_PERIOD);
        end
    endtask

    // State monitor - prints every clock cycle
    always @(posedge clk) begin
            $display("t=%0t | state=%0d | nextState=%0d | baudCounter=%0d | baudTick=%b | sync2=%b | bitCounter=%0d | dataOut=%b | dataValid=%b",
                $time, dut.state, dut.nextState, dut.baudCounter, dut.baudTick, dut.uartRx_sync2, dut.bitCounter, dut.dataOut, dut.dataValid);
    end

    // Main test sequence
    initial begin
        resetn = 1'b0;
        uartRx = 1'b1;
        @(posedge clk);
        @(posedge clk);
        resetn = 1'b1;
        @(posedge clk);

        $display("=== UART Receiver Testbench ===");
        $display("Test 1: Sending 0x55");
        send_byte(8'h55);
        @(posedge clk iff dataValid);
        $display("  Received: 0x%02X (expected 0x55) -- %s", dataOut, dataOut == 8'h55 ? "PASS" : "FAIL");
        #(BAUD_PERIOD);

        $display("=== Tests Complete ===");
        $finish;
    end

    // Timeout watchdog
    initial begin
        #(BAUD_PERIOD * 11);
        $display("TIMEOUT: Testbench exceeded max time");
        $finish;
    end

endmodule