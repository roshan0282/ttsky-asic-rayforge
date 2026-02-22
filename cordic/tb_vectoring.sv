module tb_vectoring;

    // Testbench signals
    logic clock;
    logic reset;
    logic signed [11:0] in_x;
    logic signed [11:0] in_y;
    logic [7:0] in_id;
    logic signed [11:0] mag;
    logic signed [11:0] ang;
    logic [7:0] out_id;
    
    // Test control
    int test_count;
    int pass_count;
    int fail_count;
    int output_count;
    
    // Q4.8 conversion parameters
    parameter real FIXED_SCALE = 256.0;  // 2^8
    parameter real CORDIC_GAIN = 1.647;  // CORDIC scaling factor K
    parameter real PI = 3.14159265359;
    parameter real TOLERANCE_MAG = 0.1;  // Tolerance for magnitude (in Q4.8)
    parameter real TOLERANCE_ANG = 0.05; // Tolerance for angle in radians (in Q4.8)
    
    // Pipeline latency (input stage + STAGES iterations)
    parameter int PIPELINE_LATENCY = 11;
    parameter int NUM_TESTS = 15;
    
    // Test vector storage
    typedef struct {
        real x_real;
        real y_real;
        string name;
        real expected_mag;
        real expected_ang;
    } test_vector_t;
    
    test_vector_t test_vectors[NUM_TESTS];
    
    // DUT instantiation
    vectoring #(
        .ID_WIDTH(8)
    ) dut (
        .clock(clock),
        .reset(reset),
        .in_x(in_x),
        .in_y(in_y),
        .in_id(in_id),
        .mag(mag),
        .ang(ang),
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
    
    // Helper function: Compute expected magnitude (with CORDIC gain)
    function automatic real compute_expected_mag(real x, real y);
        real true_mag;
        true_mag = $sqrt(x*x + y*y);
        return true_mag * CORDIC_GAIN;  // CORDIC output includes gain
    endfunction
    
    // Helper function: Compute expected angle (atan2)
    function automatic real compute_expected_ang(real x, real y);
        return $atan2(y, x);
    endfunction
    
    // Helper function: Absolute value for real numbers
    function automatic real abs_real(real value);
        return (value < 0.0) ? -value : value;
    endfunction
    
    // Initialize test vectors
    initial begin
        // Test Case 1: Positive X-axis (0 degrees)
        test_vectors[0].x_real = 1.0;
        test_vectors[0].y_real = 0.0;
        test_vectors[0].name = "Test 1: Positive X-axis (0°)";
        
        // Test Case 2: Positive Y-axis (90 degrees)
        test_vectors[1].x_real = 0.0;
        test_vectors[1].y_real = 1.0;
        test_vectors[1].name = "Test 2: Positive Y-axis (90°)";
        
        // Test Case 3: Negative X-axis (180 degrees)
        test_vectors[2].x_real = -1.0;
        test_vectors[2].y_real = 0.0;
        test_vectors[2].name = "Test 3: Negative X-axis (±180°)";
        
        // Test Case 4: Negative Y-axis (-90 degrees)
        test_vectors[3].x_real = 0.0;
        test_vectors[3].y_real = -1.0;
        test_vectors[3].name = "Test 4: Negative Y-axis (-90°)";
        
        // Test Case 5: First Quadrant (45 degrees)
        test_vectors[4].x_real = 1.0;
        test_vectors[4].y_real = 1.0;
        test_vectors[4].name = "Test 5: First Quadrant (45°)";
        
        // Test Case 6: Second Quadrant (135 degrees)
        test_vectors[5].x_real = -1.0;
        test_vectors[5].y_real = 1.0;
        test_vectors[5].name = "Test 6: Second Quadrant (135°)";
        
        // Test Case 7: Third Quadrant (-135 degrees)
        test_vectors[6].x_real = -1.0;
        test_vectors[6].y_real = -1.0;
        test_vectors[6].name = "Test 7: Third Quadrant (-135°)";
        
        // Test Case 8: Fourth Quadrant (-45 degrees)
        test_vectors[7].x_real = 1.0;
        test_vectors[7].y_real = -1.0;
        test_vectors[7].name = "Test 8: Fourth Quadrant (-45°)";
        
        // Test Case 9: Small magnitude
        test_vectors[8].x_real = 0.25;
        test_vectors[8].y_real = 0.0;
        test_vectors[8].name = "Test 9: Small magnitude";
        
        // Test Case 10: Larger magnitude
        test_vectors[9].x_real = 2.5;
        test_vectors[9].y_real = 1.5;
        test_vectors[9].name = "Test 10: Larger magnitude";
        
        // Test Case 11: Small angle
        test_vectors[10].x_real = 2.0;
        test_vectors[10].y_real = 0.1;
        test_vectors[10].name = "Test 11: Small angle";
        
        // Test Case 12: Arbitrary vector
        test_vectors[11].x_real = 1.5;
        test_vectors[11].y_real = 2.3;
        test_vectors[11].name = "Test 12: Arbitrary vector";
        
        // Test Case 13: Arbitrary vector (Q2)
        test_vectors[12].x_real = -2.0;
        test_vectors[12].y_real = 1.2;
        test_vectors[12].name = "Test 13: Arbitrary vector (Q2)";
        
        // Test Case 14: Arbitrary vector (Q4)
        test_vectors[13].x_real = 0.8;
        test_vectors[13].y_real = -1.7;
        test_vectors[13].name = "Test 14: Arbitrary vector (Q4)";
        
        // Test Case 15: Near max values
        test_vectors[14].x_real = 3.5;
        test_vectors[14].y_real = 2.8;
        test_vectors[14].name = "Test 15: Near max values";
        
        // Compute expected values for all test vectors
        for (int i = 0; i < NUM_TESTS; i++) begin
            test_vectors[i].expected_mag = compute_expected_mag(test_vectors[i].x_real, test_vectors[i].y_real);
            test_vectors[i].expected_ang = compute_expected_ang(test_vectors[i].x_real, test_vectors[i].y_real);
        end
    end
    
    // Input stimulus - Apply one test vector per clock cycle
    initial begin
        $display("TEST START");
        $display("=====================================");
        $display("Vectoring CORDIC Testbench");
        $display("Q4.8 Fixed-Point Format");
        $display("Pipeline Latency: %0d cycles", PIPELINE_LATENCY);
        $display("ID Pipeline: 8-bit tracking");
        $display("Throughput: 1 vector per clock");
        $display("=====================================");
        
        test_count = 0;
        pass_count = 0;
        fail_count = 0;
        output_count = 0;
        
        // Initialize inputs
        in_x = 12'sd0;
        in_y = 12'sd0;
        in_id = 8'd0;
        reset = 1;
        
        // Apply reset
        repeat(3) @(posedge clock);
        reset = 0;
        @(posedge clock);
        
        $display("\nApplying test vectors (1 per clock)...\n");
        
        // Apply all test vectors back-to-back (1 per clock cycle)
        for (int i = 0; i < NUM_TESTS; i++) begin
            in_x = real_to_q48(test_vectors[i].x_real);
            in_y = real_to_q48(test_vectors[i].y_real);
            in_id = i + 1;  // ID starts at 1
            
            $display("Clock %0d: Applying %s (ID=%0d)", $time/10, test_vectors[i].name, in_id);
            $display("  Input: x=%.4f, y=%.4f", test_vectors[i].x_real, test_vectors[i].y_real);
            
            @(posedge clock);
        end
        
        // After all inputs applied, set inputs to zero
        in_x = 12'sd0;
        in_y = 12'sd0;
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
            automatic real actual_mag_real, actual_ang_real;
            automatic real mag_error, ang_error;
            automatic logic mag_pass, ang_pass;
            
            // Read outputs
            actual_mag_real = q48_to_real(mag);
            actual_ang_real = q48_to_real(ang);
            
            // Validate ID is in range
            if (test_id < 0 || test_id >= NUM_TESTS) begin
                $display("ERROR: Invalid output ID=%0d at clock %0d", out_id, $time/10);
                fail_count++;
                @(posedge clock);
                continue;
            end
            
            // Compute errors
            mag_error = abs_real(actual_mag_real - test_vectors[test_id].expected_mag);
            ang_error = abs_real(actual_ang_real - test_vectors[test_id].expected_ang);
            
            // Handle angle wraparound
            if (ang_error > PI) begin
                ang_error = 2.0 * PI - ang_error;
            end
            
            // Check tolerances
            mag_pass = (mag_error <= TOLERANCE_MAG);
            ang_pass = (ang_error <= TOLERANCE_ANG);
            
            // Display results
            $display("----------------------------------------");
            $display("Clock %0d: %s (ID=%0d)", $time/10, test_vectors[test_id].name, out_id);
            $display("Expected: mag=%.4f, ang=%.4f rad (%.2f°)", 
                     test_vectors[test_id].expected_mag, 
                     test_vectors[test_id].expected_ang,
                     test_vectors[test_id].expected_ang * 180.0 / PI);
            $display("Actual:   mag=%.4f, ang=%.4f rad (%.2f°)", 
                     actual_mag_real, actual_ang_real, actual_ang_real * 180.0 / PI);
            $display("Error:    mag=%.4f, ang=%.4f rad", mag_error, ang_error);
            
            // Log results
            if (mag_pass && ang_pass) begin
                $display("Result:   PASS");
                pass_count++;
            end else begin
                $display("Result:   FAIL");
                fail_count++;
                
                if (!mag_pass) begin
                    $display("LOG: %0t : ERROR : tb_vectoring : dut.mag : expected_value: %.4f actual_value: %.4f", 
                             $time, test_vectors[test_id].expected_mag, actual_mag_real);
                end
                
                if (!ang_pass) begin
                    $display("LOG: %0t : ERROR : tb_vectoring : dut.ang : expected_value: %.4f actual_value: %.4f", 
                             $time, test_vectors[test_id].expected_ang, actual_ang_real);
                end
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
