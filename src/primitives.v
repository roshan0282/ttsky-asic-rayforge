// ─────────────────────────────────────────────────────────────────────────────
// primitives_q16.sv  —  Q16.16 fixed-point arithmetic primitives
//
// All operations match c-implementation/fixed_point.h exactly for visual parity.
// 32-bit signed Q16.16: 16 integer bits, 16 fractional bits
// Range: [-32768.0, 32767.99998]  (1.0 = 65536)
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps
`default_nettype none

/* verilator lint_off DECLFILENAME */

// ── Addition ──────────────────────────────────────────────────────────────────
module q16_add (
    input  logic signed [31:0] a,
    input  logic signed [31:0] b,
    output logic signed [31:0] sum
);
    assign sum = a + b;  // Direct addition, overflow wraps
endmodule

// ── Subtraction ───────────────────────────────────────────────────────────────
module q16_sub (
    input  logic signed [31:0] a,
    input  logic signed [31:0] b,
    output logic signed [31:0] diff
);
    assign diff = a - b;
endmodule

// ── Multiplication (with rounding) ────────────────────────────────────────────
// (a * b + 32768) >> 16  — matches C++ exactly
module q16_mul (
    input  logic signed [31:0] a,
    input  logic signed [31:0] b,
    output logic signed [31:0] prod
);
    logic signed [63:0] full_prod;
    logic signed [63:0] rounded;
    
    assign full_prod = a * b;
    assign rounded   = full_prod + 64'sd32768;  // Round to nearest
    assign prod      = rounded[47:16];           // Extract Q16.16 result
endmodule

// ── Division ──────────────────────────────────────────────────────────────────
// (a << 16) / b
module q16_div (
    input  logic signed [31:0] a,
    input  logic signed [31:0] b,
    output logic signed [31:0] quot
);
    logic signed [63:0] dividend_shifted;
    logic signed [31:0] quotient;
    
    always_comb begin
        // IMPORTANT: keep signed semantics for negative values.
        // Using concatenation ({a,16'b0}) breaks sign-extension.
        dividend_shifted = $signed(a) <<< 16;  // a << 16
        quotient = 32'sd0;
        
        if (b == 32'sd0) begin
            quotient = (a >= 32'sd0) ? 32'sd2147483647 : -32'sd2147483647;
        end else begin
            quotient = dividend_shifted / b;
        end
    end
    
    assign quot = quotient;
endmodule

// ── Square Root (digit-by-digit binary) ───────────────────────────────────────
// Matches C++ q84_sqrt exactly: 24 iterations on (a << 16)
module q16_sqrt (
    input  logic signed [31:0] a,
    output logic signed [31:0] root
);
    logic [63:0] v, rem, r;
    logic [31:0] result;
    
    always_comb begin
        // Initialize ALL variables to avoid latches
        v = 64'd0;
        rem = 64'd0;
        r = 64'd0;
        result = 32'sd0;
        
        if (a <= 32'sd0) begin
            result = 32'sd0;
        end else begin
            v = {32'h0, a[31:0]} <<< 16;  // Scale up
            rem = 64'd0;
            r = 64'd0;
            
            // Process bits from MSB to LSB (bit 23 down to 0)
            for (int i = 23; i >= 0; i = i - 1) begin
                rem = (rem << 2) | ((v >>> (i * 2)) & 64'd3);
                if (rem >= ((r << 2) | 64'd1)) begin
                    rem = rem - ((r << 2) | 64'd1);
                    r = (r << 1) | 64'd1;
                end else begin
                    r = r << 1;
                end
            end
            
            result = r[31:0];
        end
    end
    
    assign root = result;
endmodule

// ── Dot Product (3D) ──────────────────────────────────────────────────────────
// ((ax*bx) >> 16) + ((ay*by) >> 16) + ((az*bz) >> 16)
module q16_dot3 (
    input  logic signed [31:0] ax, ay, az,
    input  logic signed [31:0] bx, by, bz,
    output logic signed [31:0] dot
);
    logic signed [63:0] px, py, pz;
    
    assign px = (ax * bx) >>> 16;
    assign py = (ay * by) >>> 16;
    assign pz = (az * bz) >>> 16;
    assign dot = px[31:0] + py[31:0] + pz[31:0];
endmodule

`default_nettype wire
