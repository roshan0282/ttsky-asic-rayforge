module tb_scaling;

    // Testbench signals
    logic clock;
    logic reset;
    logic signed [11:0] in_value;
    logic [7:0] in_id;
    logic signed [11:0] out_value;
    logic [7:0] out_id;
    
    // Test control
    int test_count;
    int pass_count;
    int fail_count;
    
    // Q4.8 conversion parameters
    parameter real FIXED_SCALE = 256.0;  // 2^8
    parameter real CORDIC_GAIN = 1.6467597;  // CORDIC gain factor K
    parameter real TOLERANCE = 0.05;  // Tolerance for scaled value
    
    // Pipeline latency (input stage + STAGES iterations)
    parameter int PIPELINE_LATENCY = 11;
    parameter int NUM_TESTS = 12;
    
    // Test vector storage
    typedef struct {
        real value_real;
        string name;
        real expected_scaled;
    } test_vector_t;
    
    test_vector_t test_vectors[NUM_TESTS];
    
    // DUT instantiation
    scaling #(
        .ID_WIDTH(8)
    ) dut (
        .clock(clock),
        .reset(reset),
        .in_value(in_value),
        .in_id(in_id),
        .out_value(out_value),
        .out_id(out_id)
    );
    
    // Clock generation: 10ns period (100 MHz)
    initial begin
        clock = 0;
        forever #5 clock = ~clock;
    end
    
    // Helper function: Convert real to Q4.8 fixed-point
    function automatic logic signed [11:0] real_to_q48(real value);
        return $signed($rtoi(value * FIXED_SCALE));
    endfunction
    
    // Helper function: Convert Q4.8 fixed-point to real
    function automatic real q48_to_real(logic signed [11:0] value);
        return $itor(value) / FIXED_SCALE;
    endfunction
    
    // Helper function: Compute expected scaled value
    function automatic real compute_expected(real value);
        return value * CORDIC_GAIN;
    endfunction
    
    // Helper function: Absolute value for real numbers
    function automatic real abs_real(real value);
        return (value < 0.0) ? -value : value;
    endfunction
    
    // Initialize test vectors
    initial begin
        // Test Case 1: Unity (1.0)
        test_vectors[0].value_real = 1.0;
        test_vectors[0].name = "Test 1: Unity (1.0)";
        
        // Test Case 2: Small positive value
        test_vectors[1].value_real = 0.5;
        test_vectors[1].name = "Test 2: Small positive (0.5)";
        
        // Test Case 3: Large positive value
        test_vectors[2].value_real = 3.0;
        test_vectors[2].name = "Test 3: Large positive (3.0)";
        
        // Test Case 4: Very small positive
        test_vectors[3].value_real = 0.125;
        test_vectors[3].name = "Test 4: Very small (0.125)";
        
        // Test Case 5: Negative unity
        test_vectors[4].value_real = -1.0;
        test_vectors[4].name = "Test 5: Negative unity (-1.0)";
        
        // Test Case 6: Small negative
        test_vectors[5].value_real = -0.5;
        test_vectors[5].name = "Test 6: Small negative (-0.5)";
        
        // Test Case 7: Large negative
        test_vectors[6].value_real = -2.5;
        test_vectors[6].name = "Test 7: Large negative (-2.5)";
        
        // Test Case 8: Zero
        test_vectors[7].value_real = 0.0;
        test_vectors[7].name = "Test 8: Zero (0.0)";
        
        // Test Case 9: Arbitrary value 1
        test_vectors[8].value_real = 1.75;
        test_vectors[8].name = "Test 9: Arbitrary (1.75)";
        
        // Test Case 10: Arbitrary value 2
        test_vectors[9].value_real = -1.25;
        test_vectors[9].name = "Test 10: Arbitrary (-1.25)";
        
        // Test Case 11: Near max positive
        test_vectors[10].value_real = 3.5;
        test_vectors[10].name = "Test 11: Near max (3.5)";
        
        // Test Case 12: Fractional
        test_vectors[11].value_real = 0.75;
        test_vectors[11].name = "Test 12: Fractional (0.75)";
        
        // Compute expected values for all test vectors
        for (int i = 0; i < NUM_TESTS; i++) begin
            test_vectors[i].expected_scaled = compute_expected(test_vectors[i].value_real);
        end
    end
    
    // Input stimulus - Apply one test vector per clock cycle
    initial begin
        $display("TEST START");
        $display("=====================================");
        $display("CORDIC Scaling Testbench");
        $display("Q4.8 Fixed-Point Format");
        $display("Pipeline Latency: %0d cycles", PIPELINE_LATENCY);
        $display("ID Pipeline: 8-bit tracking");
        $display("Throughput: 1 value per clock");
        $display("Target Gain K: %.7f", CORDIC_GAIN);
        $display("=====================================");
        
        test_count = 0;
        pass_count = 0;
        fail_count = 0;
        
        // Initialize inputs
        in_value = 12'sd0;
        in_id = 8'd0;
        reset = 1;
        
        // Apply reset
        repeat(3) @(posedge clock);
        reset = 0;
        @(posedge clock);
        
        $display("\nApplying test vectors (1 per clock)...\n");
        
        // Apply all test vectors back-to-back (1 per clock cycle)
        for (int i = 0; i < NUM_TESTS; i++) begin
            in_value = real_to_q48(test_vectors[i].value_real);
            in_id = i + 1;  // ID starts at 1
            
            $display("Clock %0d: Applying %s (ID=%0d)", $time/10, test_vectors[i].name, in_id);
            $display("  Input: %.4f (Q4.8: %0d)", test_vectors[i].value_real, in_value);
            
            @(posedge clock);
        end
        
        // After all inputs applied, set inputs to zero
        in_value = 12'sd0;
        in_id = 8'd0;
        
        $display("\nAll inputs applied. Waiting for outputs...\n");
        
        // Wait for all outputs to emerge
        repeat(PIPELINE_LATENCY + 5) @(posedge clock);
        
        // Print summary
        $display("\n=====================================");
        $display("Test Summary");
        $display("=====================================");
        $display("Total Tests: %0d", NUM_TESTS);
        $display("Passed:      %0d", pass_count);
        $display("Failed:      %0d", fail_count);
        $display("=====================================");
        
        if (fail_count == 0) begin
            $display("TEST PASSED");
        end else begin
            $display("TEST FAILED");
            $error("Some tests failed!");
        end
        
        $finish;
    end
    
    // Output checker - Check outputs as they arrive
    initial begin
        // Wait for reset to deassert
        wait(reset == 0);
        @(posedge clock);
        
        // Wait for pipeline latency
        repeat(PIPELINE_LATENCY) @(posedge clock);
        
        $display("=====================================");
        $display("Checking Outputs (1 per clock)");
        $display("=====================================\n");
        
        // Check outputs as they arrive (1 per clock)
        for (int i = 0; i < NUM_TESTS; i++) begin
            automatic int test_id = out_id - 1;  // Convert ID back to array index
            automatic real actual_real;
            automatic real error;
            automatic logic pass;
            
            // Read outputs
            actual_real = q48_to_real(out_value);
            
            // Validate ID is in range
            if (test_id < 0 || test_id >= NUM_TESTS) begin
                $display("ERROR: Invalid output ID=%0d at clock %0d", out_id, $time/10);
                fail_count++;
                @(posedge clock);
                continue;
            end
            
            // Compute error
            error = abs_real(actual_real - test_vectors[test_id].expected_scaled);
            
            // Check tolerance
            pass = (error <= TOLERANCE);
            
            // Display results
            $display("----------------------------------------");
            $display("Clock %0d: %s (ID=%0d)", $time/10, test_vectors[test_id].name, out_id);
            $display("Input:    %.4f", test_vectors[test_id].value_real);
            $display("Expected: %.4f (K × %.4f)", 
                     test_vectors[test_id].expected_scaled,
                     test_vectors[test_id].value_real);
            $display("Actual:   %.4f (Q4.8: %0d)", actual_real, out_value);
            $display("Error:    %.4f", error);
            $display("Gain:     %.4f (target: %.4f)", 
                     actual_real / test_vectors[test_id].value_real,
                     CORDIC_GAIN);
            
            // Log results
            if (pass) begin
                $display("Result:   PASS");
                pass_count++;
            end else begin
                $display("Result:   FAIL");
                fail_count++;
                
                $display("LOG: %0t : ERROR : tb_scaling : dut.out_value : expected_value: %.4f actual_value: %.4f", 
                         $time, test_vectors[test_id].expected_scaled, actual_real);
            end
            
            @(posedge clock);
        end
    end
    
    // Timeout watchdog
    initial begin
        #10000;  // 10us timeout
        $display("\nERROR: Simulation timeout!");
        $display("TEST FAILED");
        $fatal(1, "Simulation exceeded maximum time");
    end
    
    // Waveform dump
    initial begin
        $dumpfile("dumpfile.fst");
        $dumpvars(0);
    end

endmodule
