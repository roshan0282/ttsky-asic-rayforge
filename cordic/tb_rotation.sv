module tb_rotation;

    // Testbench signals
    logic clock;
    logic reset;
    logic signed [11:0] in_x;
    logic signed [11:0] in_y;
    logic signed [11:0] in_angle;
    logic [7:0] in_id;
    logic signed [11:0] out_x;
    logic signed [11:0] out_y;
    logic [7:0] out_id;
    
    // Test control
    int test_count;
    int pass_count;
    int fail_count;
    
    // Q4.8 conversion parameters
    parameter real FIXED_SCALE = 256.0;  // 2^8
    parameter real CORDIC_GAIN = 1.6467597;  // CORDIC gain factor K
    parameter real PI = 3.14159265359;
    parameter real TOLERANCE = 0.1;  // Tolerance for rotated coordinates (in Q4.8)
    
    // Pipeline latency (input stage + STAGES iterations)
    parameter int PIPELINE_LATENCY = 11;
    parameter int NUM_TESTS = 12;
    
    // Test vector storage
    typedef struct {
        real x_real;
        real y_real;
        real angle_real;
        string name;
        real expected_x;
        real expected_y;
    } test_vector_t;
    
    test_vector_t test_vectors[NUM_TESTS];
    
    // DUT instantiation
    rotation #(
        .ID_WIDTH(8)
    ) dut (
        .clock(clock),
        .reset(reset),
        .in_x(in_x),
        .in_y(in_y),
        .in_angle(in_angle),
        .in_id(in_id),
        .out_x(out_x),
        .out_y(out_y),
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
    
    // Helper function: Compute expected rotated coordinates
    // Input: (x, y) rotated by angle
    // Output: (x', y') scaled by CORDIC gain K
    function automatic void compute_expected_rotation(real x, real y, real angle, output real exp_x, output real exp_y);
        real cos_a, sin_a;
        cos_a = $cos(angle);
        sin_a = $sin(angle);
        // Standard rotation matrix, scaled by CORDIC gain
        exp_x = CORDIC_GAIN * (x * cos_a - y * sin_a);
        exp_y = CORDIC_GAIN * (x * sin_a + y * cos_a);
    endfunction
    
    // Helper function: Absolute value for real numbers
    function automatic real abs_real(real value);
        return (value < 0.0) ? -value : value;
    endfunction
    
    // Initialize test vectors
    initial begin
        // Test Case 1: No rotation (0 degrees)
        test_vectors[0].x_real = 1.0;
        test_vectors[0].y_real = 0.0;
        test_vectors[0].angle_real = 0.0;
        test_vectors[0].name = "Test 1: No rotation (0°)";
        
        // Test Case 2: 45 degrees
        test_vectors[1].x_real = 1.0;
        test_vectors[1].y_real = 0.0;
        test_vectors[1].angle_real = PI / 4.0;  // 45°
        test_vectors[1].name = "Test 2: 45° rotation";
        
        // Test Case 3: 90 degrees
        test_vectors[2].x_real = 1.0;
        test_vectors[2].y_real = 0.0;
        test_vectors[2].angle_real = PI / 2.0;  // 90°
        test_vectors[2].name = "Test 3: 90° rotation";
        
        // Test Case 4: 180 degrees
        test_vectors[3].x_real = 1.0;
        test_vectors[3].y_real = 0.0;
        test_vectors[3].angle_real = PI;  // 180°
        test_vectors[3].name = "Test 4: 180° rotation";
        
        // Test Case 5: -90 degrees
        test_vectors[4].x_real = 1.0;
        test_vectors[4].y_real = 0.0;
        test_vectors[4].angle_real = -PI / 2.0;  // -90°
        test_vectors[4].name = "Test 5: -90° rotation";
        
        // Test Case 6: -45 degrees
        test_vectors[5].x_real = 1.0;
        test_vectors[5].y_real = 0.0;
        test_vectors[5].angle_real = -PI / 4.0;  // -45°
        test_vectors[5].name = "Test 6: -45° rotation";
        
        // Test Case 7: 30 degrees with different vector
        test_vectors[6].x_real = 0.5;
        test_vectors[6].y_real = 0.5;
        test_vectors[6].angle_real = PI / 6.0;  // 30°
        test_vectors[6].name = "Test 7: 30° rotation (0.5, 0.5)";
        
        // Test Case 8: 60 degrees
        test_vectors[7].x_real = 1.0;
        test_vectors[7].y_real = 0.0;
        test_vectors[7].angle_real = PI / 3.0;  // 60°
        test_vectors[7].name = "Test 8: 60° rotation";
        
        // Test Case 9: Rotate vector already at 45°
        test_vectors[8].x_real = 0.707;
        test_vectors[8].y_real = 0.707;
        test_vectors[8].angle_real = PI / 4.0;  // 45°
        test_vectors[8].name = "Test 9: 45° rotation of (0.707, 0.707)";
        
        // Test Case 10: Small angle
        test_vectors[9].x_real = 1.0;
        test_vectors[9].y_real = 0.0;
        test_vectors[9].angle_real = PI / 12.0;  // 15°
        test_vectors[9].name = "Test 10: 15° rotation";
        
        // Test Case 11: Negative vector, positive rotation
        test_vectors[10].x_real = -1.0;
        test_vectors[10].y_real = 0.0;
        test_vectors[10].angle_real = PI / 4.0;  // 45°
        test_vectors[10].name = "Test 11: 45° rotation of (-1, 0)";
        
        // Test Case 12: Y-axis vector, 45° rotation
        test_vectors[11].x_real = 0.0;
        test_vectors[11].y_real = 1.0;
        test_vectors[11].angle_real = PI / 4.0;  // 45°
        test_vectors[11].name = "Test 12: 45° rotation of (0, 1)";
        
        // Compute expected values for all test vectors
        for (int i = 0; i < NUM_TESTS; i++) begin
            compute_expected_rotation(
                test_vectors[i].x_real,
                test_vectors[i].y_real,
                test_vectors[i].angle_real,
                test_vectors[i].expected_x,
                test_vectors[i].expected_y
            );
        end
    end
    
    // Input stimulus - Apply one test vector per clock cycle
    initial begin
        $display("TEST START");
        $display("=====================================");
        $display("CORDIC Rotation Testbench");
        $display("Q4.8 Fixed-Point Format");
        $display("Pipeline Latency: %0d cycles", PIPELINE_LATENCY);
        $display("ID Pipeline: 8-bit tracking");
        $display("Throughput: 1 rotation per clock");
        $display("CORDIC Gain K: %.7f", CORDIC_GAIN);
        $display("=====================================");
        
        test_count = 0;
        pass_count = 0;
        fail_count = 0;
        
        // Initialize inputs
        in_x = 12'sd0;
        in_y = 12'sd0;
        in_angle = 12'sd0;
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
            in_angle = real_to_q48(test_vectors[i].angle_real);
            in_id = i + 1;  // ID starts at 1
            
            $display("Clock %0d: Applying %s (ID=%0d)", $time/10, test_vectors[i].name, in_id);
            $display("  Input: (%.4f, %.4f) angle=%.4f rad (%.1f°)", 
                     test_vectors[i].x_real, test_vectors[i].y_real,
                     test_vectors[i].angle_real, test_vectors[i].angle_real * 180.0 / PI);
            
            @(posedge clock);
        end
        
        // After all inputs applied, set inputs to zero
        in_x = 12'sd0;
        in_y = 12'sd0;
        in_angle = 12'sd0;
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
            automatic real actual_x_real, actual_y_real;
            automatic real error_x, error_y, error_total;
            automatic logic pass;
            
            // Read outputs
            actual_x_real = q48_to_real(out_x);
            actual_y_real = q48_to_real(out_y);
            
            // Validate ID is in range
            if (test_id < 0 || test_id >= NUM_TESTS) begin
                $display("ERROR: Invalid output ID=%0d at clock %0d", out_id, $time/10);
                fail_count++;
                @(posedge clock);
                continue;
            end
            
            // Compute errors
            error_x = abs_real(actual_x_real - test_vectors[test_id].expected_x);
            error_y = abs_real(actual_y_real - test_vectors[test_id].expected_y);
            error_total = error_x + error_y;
            
            // Check tolerance
            pass = (error_x <= TOLERANCE) && (error_y <= TOLERANCE);
            
            // Display results
            $display("----------------------------------------");
            $display("Clock %0d: %s (ID=%0d)", $time/10, test_vectors[test_id].name, out_id);
            $display("Input:    (%.4f, %.4f) angle=%.4f rad (%.1f°)", 
                     test_vectors[test_id].x_real, test_vectors[test_id].y_real,
                     test_vectors[test_id].angle_real, test_vectors[test_id].angle_real * 180.0 / PI);
            $display("Expected: (%.4f, %.4f)", 
                     test_vectors[test_id].expected_x,
                     test_vectors[test_id].expected_y);
            $display("Actual:   (%.4f, %.4f) Q4.8: (%0d, %0d)", 
                     actual_x_real, actual_y_real, out_x, out_y);
            $display("Error:    x=%.4f, y=%.4f (total=%.4f)", error_x, error_y, error_total);
            
            // Log results
            if (pass) begin
                $display("Result:   PASS");
                pass_count++;
            end else begin
                $display("Result:   FAIL");
                fail_count++;
                
                if (error_x > TOLERANCE) begin
                    $display("LOG: %0t : ERROR : tb_rotation : dut.out_x : expected_value: %.4f actual_value: %.4f", 
                             $time, test_vectors[test_id].expected_x, actual_x_real);
                end
                
                if (error_y > TOLERANCE) begin
                    $display("LOG: %0t : ERROR : tb_rotation : dut.out_y : expected_value: %.4f actual_value: %.4f", 
                             $time, test_vectors[test_id].expected_y, actual_y_real);
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
