// simplified PS/2 keyboard simulator for Verilator
// directly converts scancodes to ASCII and injects into ps2Driver bypass

module ps2KeyboardVerilator(
    input Clock,
    input Resetn,
    input key_action,       // pulse from C++ when new scancode arrives
    input [7:0] scan_code,  // scancode from C++
    inout ps2_clk,
    inout ps2_dat,
    // direct outputs for bypass mode
    output reg [7:0] ascii_out,
    output reg ascii_ready
);
    // pull ps2 lines high when idle (simulate open-drain idle state)
    assign ps2_clk = 1'b1;
    assign ps2_dat = 1'b1;
    
    // scancode to ASCII conversion (simple lookup)
    reg [7:0] ascii_code;
    
    always @(*) begin
        case (scan_code)
            8'h1C: ascii_code = 8'd97;   // a
            8'h32: ascii_code = 8'd98;   // b
            8'h21: ascii_code = 8'd99;   // c
            8'h23: ascii_code = 8'd100;  // d
            8'h24: ascii_code = 8'd101;  // e
            8'h2B: ascii_code = 8'd102;  // f
            8'h34: ascii_code = 8'd103;  // g
            8'h33: ascii_code = 8'd104;  // h
            8'h43: ascii_code = 8'd105;  // i
            8'h3B: ascii_code = 8'd106;  // j
            8'h42: ascii_code = 8'd107;  // k
            8'h4B: ascii_code = 8'd108;  // l
            8'h3A: ascii_code = 8'd109;  // m
            8'h31: ascii_code = 8'd110;  // n
            8'h44: ascii_code = 8'd111;  // o
            8'h4D: ascii_code = 8'd112;  // p
            8'h15: ascii_code = 8'd113;  // q
            8'h2D: ascii_code = 8'd114;  // r
            8'h1B: ascii_code = 8'd115;  // s
            8'h2C: ascii_code = 8'd116;  // t
            8'h3C: ascii_code = 8'd117;  // u
            8'h2A: ascii_code = 8'd118;  // v
            8'h1D: ascii_code = 8'd119;  // w
            8'h22: ascii_code = 8'd120;  // x
            8'h35: ascii_code = 8'd121;  // y
            8'h1A: ascii_code = 8'd122;  // z
            8'h29: ascii_code = 8'd32;   // space
            8'h5A: ascii_code = 8'd13;   // enter
            8'h76: ascii_code = 8'd27;   // escape
            default: ascii_code = 8'd0;
        endcase
    end
    
    // delay the ascii output by a few cycles to simulate processing
    reg [2:0] delay_counter;
    reg key_action_prev;
    
    always @(posedge Clock) begin
        if (!Resetn) begin
            ascii_out <= 8'd0;
            ascii_ready <= 1'b0;
            delay_counter <= 3'd0;
            key_action_prev <= 1'b0;
        end else begin
            key_action_prev <= key_action;
            
            // detect rising edge of key_action
            if (key_action && !key_action_prev) begin
                delay_counter <= 3'd4;  // 4 cycle delay
                ascii_out <= ascii_code;
                ascii_ready <= 1'b0;
            end else if (delay_counter > 3'd0) begin
                delay_counter <= delay_counter - 3'd1;
                if (delay_counter == 3'd1) begin
                    ascii_ready <= 1'b1;  // pulse ready
                end else begin
                    ascii_ready <= 1'b0;
                end
            end else begin
                ascii_ready <= 1'b0;
            end
        end
    end
endmodule
