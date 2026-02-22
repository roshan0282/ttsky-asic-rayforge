// ─────────────────────────────────────────────────────────────────────────────
// tb_q16_basic.sv  —  Simple testbench for Q16.16 arithmetic primitives
//
// Tests basic operations against known C++ results
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps

module tb_q16_basic;

    // Test vectors
    logic signed [31:0] a, b;
    logic signed [31:0] sum, diff, prod, quot, root, dot_result;
    
    // Expected values (from C++)
    logic signed [31:0] expected;
    logic test_pass;
    
    // Instantiate modules
    q16_add u_add (.a(a), .b(b), .sum(sum));
    q16_sub u_sub (.a(a), .b(b), .diff(diff));
    q16_mul u_mul (.a(a), .b(b), .prod(prod));
    q16_div u_div (.a(a), .b(b), .quot(quot));
    q16_sqrt u_sqrt (.a(a), .root(root));
    q16_dot3 u_dot (
        .ax(a), .ay(b), .az(32'sd65536),  // (a, b, 1.0)
        .bx(32'sd65536), .by(32'sd0), .bz(32'sd65536),  // (1.0, 0, 1.0)
        .dot(dot_result)
    );
    
    initial begin
        $display("=== Q16.16 Arithmetic Tests ===\n");
        
        // ── Test 1: Addition ──────────────────────────────────────────────────
        a = 32'sd65536;   // 1.0
        b = 32'sd131072;  // 2.0
        expected = 32'sd196608;  // 3.0
        #10;
        test_pass = (sum == expected);
        $display("Test 1: Addition");
        $display("  1.0 + 2.0 = %0d (expected %0d) [%s]", 
                 sum, expected, test_pass ? "PASS" : "FAIL");
        
        // ── Test 2: Subtraction ───────────────────────────────────────────────
        a = 32'sd196608;  // 3.0
        b = 32'sd65536;   // 1.0
        expected = 32'sd131072;  // 2.0
        #10;
        test_pass = (diff == expected);
        $display("\nTest 2: Subtraction");
        $display("  3.0 - 1.0 = %0d (expected %0d) [%s]", 
                 diff, expected, test_pass ? "PASS" : "FAIL");
        
        // ── Test 3: Multiplication ────────────────────────────────────────────
        a = 32'sd98304;   // 1.5
        b = 32'sd131072;  // 2.0
        expected = 32'sd196608;  // 3.0
        #10;
        test_pass = (prod == expected);
        $display("\nTest 3: Multiplication");
        $display("  1.5 * 2.0 = %0d (expected %0d) [%s]", 
                 prod, expected, test_pass ? "PASS" : "FAIL");
        
        // ── Test 4: Division ──────────────────────────────────────────────────
        a = 32'sd196608;  // 3.0
        b = 32'sd131072;  // 2.0
        expected = 32'sd98304;  // 1.5
        #10;
        test_pass = (quot == expected);
        $display("\nTest 4: Division");
        $display("  3.0 / 2.0 = %0d (expected %0d) [%s]", 
                 quot, expected, test_pass ? "PASS" : "FAIL");
        
        // ── Test 5: Square Root ───────────────────────────────────────────────
        a = 32'sd262144;  // 4.0
        expected = 32'sd131072;  // 2.0
        #10;
        test_pass = (root == expected);
        $display("\nTest 5: Square Root");
        $display("  sqrt(4.0) = %0d (expected %0d) [%s]", 
                 root, expected, test_pass ? "PASS" : "FAIL");
        
        // ── Test 6: Dot Product ───────────────────────────────────────────────
        a = 32'sd131072;  // 2.0
        b = 32'sd65536;   // 1.0
        // (2.0, 1.0, 1.0) · (1.0, 0.0, 1.0) = 2.0 + 0.0 + 1.0 = 3.0
        expected = 32'sd196608;  // 3.0
        #10;
        test_pass = (dot_result == expected);
        $display("\nTest 6: Dot Product");
        $display("  (2.0, 1.0, 1.0) · (1.0, 0.0, 1.0) = %0d (expected %0d) [%s]", 
                 dot_result, expected, test_pass ? "PASS" : "FAIL");
        
        $display("\n=== Tests Complete ===\n");
        $finish;
    end

endmodule
