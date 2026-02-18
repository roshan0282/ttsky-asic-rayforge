module tb_vector_normalization;

    // Testbench signals
    logic clock;
    logic reset;
    logic signed [11:0] x_in;
    logic signed [11:0] y_in;
    logic signed [11:0] z_in;
    logic [7:0] in_id;
    logic signed [11:0] x_norm;
    logic signed [11:0] y_norm;
    logic signed [11:0] z_norm;
    logic [7:0] out_id;
    
    // Test control
    int test_count;
    int pass_count;
    int fail_count;
    
    // Q4.8 conversion parameters
    parameter real FIXED_SCALE = 256.0;  // 2^8
    parameter real PI = 3.14159265359;
    parameter real TOLERANCE_MAG = 0.15;  // Tolerance for magnitude deviation from 1.0
    parameter real TOLERANCE_DIR = 0.2;   // Tolerance for direction preservation
    
    // Pipeline latency: 33 cycles (3 stages × 11 cycles)
    parameter int PIPELINE_LATENCY = 33;
    parameter int NUM_TESTS = 10;
    
    // Test vector storage
    typedef struct {
        real x_real;
        real y_real;
        real z_real;
        string name;
        real expected_magnitude;  // Should be ≈ 1.0 after normalization
    } test_vector_t;
    
    test_vector_t test_vectors[NUM_TESTS];
    
    // DUT instantiation
    vector_normalization #(
        .ID_WIDTH(8)
    ) dut (
        .clock(clock),
        .reset(reset),
        .x_in(x_in),
        .y_in(y_in),
        .z_in(z_in),
        .in_id(in_id),
        .x_norm(x_norm),
        .y_norm(y_norm),
        .z_norm(z_norm),
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
    
    // Helper function: Compute vector magnitude
    function automatic real compute_magnitude(real x, real y, real z);
        return $sqrt(x*x + y*y + z*z);
    endfunction
    
    // Helper function: Absolute value for real numbers
    function automatic real abs_real(real value);
        return (value < 0.0) ? -value : value;
    endfunction
    
    // Initialize test vectors
    initial begin
        // Test Case 1: Unit vector along X-axis
        test_vectors[0].x_real = 1.0;
        test_vectors[0].y_real = 0.0;
        test_vectors[0].z_real = 0.0;
        test_vectors[0].name = "Test 1: X-axis (1,0,0)";
        test_vectors[0].expected_magnitude = 1.0;
        
        // Test Case 2: Unit vector along Y-axis
        test_vectors[1].x_real = 0.0;
        test_vectors[1].y_real = 1.0;
        test_vectors[1].z_real = 0.0;
        test_vectors[1].name = "Test 2: Y-axis (0,1,0)";
        test_vectors[1].expected_magnitude = 1.0;
        
        // Test Case 3: Unit vector along Z-axis
        test_vectors[2].x_real = 0.0;
        test_vectors[2].y_real = 0.0;
        test_vectors[2].z_real = 1.0;
        test_vectors[2].name = "Test 3: Z-axis (0,0,1)";
        test_vectors[2].expected_magnitude = 1.0;
        
        // Test Case 4: Diagonal vector (1,1,1)
        test_vectors[3].x_real = 1.0;
        test_vectors[3].y_real = 1.0;
        test_vectors[3].z_real = 1.0;
        test_vectors[3].name = "Test 4: Diagonal (1,1,1)";
        test_vectors[3].expected_magnitude = 1.0;
        
        // Test Case 5: Scaled vector (2,0,0)
        test_vectors[4].x_real = 2.0;
        test_vectors[4].y_real = 0.0;
        test_vectors[4].z_real = 0.0;
        test_vectors[4].name = "Test 5: Scaled X (2,0,0)";
        test_vectors[4].expected_magnitude = 1.0;
        
        // Test Case 6: General vector (1,2,3)
        test_vectors[5].x_real = 1.0;
        test_vectors[5].y_real = 2.0;
        test_vectors[5].z_real = 3.0;
        test_vectors[5].name = "Test 6: General (1,2,3)";
        test_vectors[5].expected_magnitude = 1.0;
        
        // Test Case 7: Negative components (-1,-1,-1)
        test_vectors[6].x_real = -1.0;
        test_vectors[6].y_real = -1.0;
        test_vectors[6].z_real = -1.0;
        test_vectors[6].name = "Test 7: Negative (-1,-1,-1)";
        test_vectors[6].expected_magnitude = 1.0;
        
        // Test Case 8: Mixed signs (1,-2,3)
        test_vectors[7].x_real = 1.0;
        test_vectors[7].y_real = -2.0;
        test_vectors[7].z_real = 3.0;
        test_vectors[7].name = "Test 8: Mixed (1,-2,3)";
        test_vectors[7].expected_magnitude = 1.0;
        
        // Test Case 9: Small vector (0.5,0.5,0.5)
        test_vectors[8].x_real = 0.5;
        test_vectors[8].y_real = 0.5;
        test_vectors[8].z_real = 0.5;
        test_vectors[8].name = "Test 9: Small (0.5,0.5,0.5)";
        test_vectors[8].expected_magnitude = 1.0;
        
        // Test Case 10: Large Z component (0.5,0.5,2)
        test_vectors[9].x_real = 0.5;
        test_vectors[9].y_real = 0.5;
        test_vectors[9].z_real = 2.0;
        test_vectors[9].name = "Test 10: Large Z (0.5,0.5,2)";
        test_vectors[9].expected_magnitude = 1.0;
    end
    
    // Input stimulus - Apply one test vector per clock cycle
    initial begin
        $display("TEST START");
        $display("=====================================");
        $display("3D Vector Normalization Testbench");
        $display("Q4.8 Fixed-Point Format");
        $display("Pipeline Latency: %0d cycles", PIPELINE_LATENCY);
        $display("ID Pipeline: 8-bit tracking");
        $display("Throughput: 1 vector per clock");
        $display("=====================================");
        
        test_count = 0;
        pass_count = 0;
        fail_count = 0;
        
        // Initialize inputs
        x_in = 12'sd0;
        y_in = 12'sd0;
        z_in = 12'sd0;
        in_id = 8'd0;
        reset = 1;
        
        // Apply reset
        repeat(3) @(posedge clock);
        reset = 0;
        @(posedge clock);
        
        $display("\nApplying test vectors (1 per clock)...\n");
        
        // Apply all test vectors back-to-back (1 per clock cycle)
        for (int i = 0; i < NUM_TESTS; i++) begin
            x_in = real_to_q48(test_vectors[i].x_real);
            y_in = real_to_q48(test_vectors[i].y_real);
            z_in = real_to_q48(test_vectors[i].z_real);
            in_id = i + 1;  // ID starts at 1
            
            $display("Clock %0d: Applying %s (ID=%0d)", $time/10, test_vectors[i].name, in_id);
            $display("  Input: (%.4f, %.4f, %.4f) magnitude=%.4f", 
                     test_vectors[i].x_real, test_vectors[i].y_real, test_vectors[i].z_real,
                     compute_magnitude(test_vectors[i].x_real, test_vectors[i].y_real, test_vectors[i].z_real));
            
            @(posedge clock);
        end
        
        // After all inputs applied, set inputs to zero
        x_in = 12'sd0;
        y_in = 12'sd0;
        z_in = 12'sd0;
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
            automatic real actual_x, actual_y, actual_z;
            automatic real actual_magnitude;
            automatic real input_magnitude;
            automatic real mag_error;
            automatic logic pass;
            
            // Read outputs
            actual_x = q48_to_real(x_norm);
            actual_y = q48_to_real(y_norm);
            actual_z = q48_to_real(z_norm);
            
            // Validate ID is in range
            if (test_id < 0 || test_id >= NUM_TESTS) begin
                $display("ERROR: Invalid output ID=%0d at clock %0d", out_id, $time/10);
                fail_count++;
                @(posedge clock);
                continue;
            end
            
            // Compute actual magnitude
            actual_magnitude = compute_magnitude(actual_x, actual_y, actual_z);
            input_magnitude = compute_magnitude(test_vectors[test_id].x_real, 
                                               test_vectors[test_id].y_real,
                                               test_vectors[test_id].z_real);
            
            // Compute magnitude error from unit length
            mag_error = abs_real(actual_magnitude - 1.0);
            
            // Check tolerance (magnitude should be ≈ 1.0)
            pass = (mag_error <= TOLERANCE_MAG);
            
            // Display results
            $display("----------------------------------------");
            $display("Clock %0d: %s (ID=%0d)", $time/10, test_vectors[test_id].name, out_id);
            $display("Input:    (%.4f, %.4f, %.4f) mag=%.4f", 
                     test_vectors[test_id].x_real,
                     test_vectors[test_id].y_real,
                     test_vectors[test_id].z_real,
                     input_magnitude);
            $display("Output:   (%.4f, %.4f, %.4f) mag=%.4f", 
                     actual_x, actual_y, actual_z, actual_magnitude);
            $display("Output Q4.8: x=%0d (0x%03h), y=%0d (0x%03h), z=%0d (0x%03h)", 
                     x_norm, x_norm, y_norm, y_norm, z_norm, z_norm);
            $display("Expected magnitude: 1.0000");
            $display("Error:    mag_error=%.4f (target < %.4f)", mag_error, TOLERANCE_MAG);
            
            // Log results
            if (pass) begin
                $display("Result:   PASS");
                pass_count++;
            end else begin
                $display("Result:   FAIL");
                fail_count++;
                
                $display("LOG: %0t : ERROR : tb_vector_normalization : dut.magnitude : expected_value: 1.0000 actual_value: %.4f", 
                         $time, actual_magnitude);
            end
            
            @(posedge clock);
        end
    end
    
    // Timeout watchdog
    initial begin
        #50000;  // 50us timeout (longer due to 33-cycle latency)
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
