// Testbench for Fixed-point Ray-Sphere Intersection Unit
// Q8.8 fixed-point format testbench

module tb_ray_sphere_intersect;

    // Clock and reset
    logic clock;
    logic reset;
    
    // DUT inputs
    logic valid_in;
    logic signed [15:0] ray_origin_x;
    logic signed [15:0] ray_origin_y;
    logic signed [15:0] ray_origin_z;
    logic signed [15:0] ray_dir_x;
    logic signed [15:0] ray_dir_y;
    logic signed [15:0] ray_dir_z;
    logic signed [15:0] sphere_center_x;
    logic signed [15:0] sphere_center_y;
    logic signed [15:0] sphere_center_z;
    logic signed [15:0] sphere_radius;
    
    // DUT outputs
    logic valid_out;
    logic hit;
    logic signed [15:0] t_value;
    
    // Test control
    int test_count;
    int pass_count;
    int fail_count;
    
    // DUT instantiation
    ray_sphere_intersect dut (
        .clock(clock),
        .reset(reset),
        .valid_in(valid_in),
        .ray_origin_x(ray_origin_x),
        .ray_origin_y(ray_origin_y),
        .ray_origin_z(ray_origin_z),
        .ray_dir_x(ray_dir_x),
        .ray_dir_y(ray_dir_y),
        .ray_dir_z(ray_dir_z),
        .sphere_center_x(sphere_center_x),
        .sphere_center_y(sphere_center_y),
        .sphere_center_z(sphere_center_z),
        .sphere_radius(sphere_radius),
        .valid_out(valid_out),
        .hit(hit),
        .t_value(t_value)
    );
    
    // Clock generation (10ns period = 100MHz)
    initial begin
        clock = 0;
        forever #5 clock = ~clock;
    end
    
    // Helper function to convert float to Q8.8
    function signed [15:0] to_q88(real value);
        return $rtoi(value * 256.0);
    endfunction
    
    // Helper function to convert Q8.8 to float for display
    function real from_q88(logic signed [15:0] value);
        return $itor(value) / 256.0;
    endfunction
    
    // Task to apply test vector
    task apply_test(
        input string test_name,
        input real orig_x, orig_y, orig_z,
        input real dir_x, dir_y, dir_z,
        input real cent_x, cent_y, cent_z,
        input real radius,
        input logic expected_hit,
        input real expected_t_min,
        input real expected_t_max
    );
        begin
            test_count++;
            $display("\n=== Test %0d: %s ===", test_count, test_name);
            $display("Time: %0t", $time);
            
            // Convert to Q8.8 and apply inputs
            ray_origin_x = to_q88(orig_x);
            ray_origin_y = to_q88(orig_y);
            ray_origin_z = to_q88(orig_z);
            ray_dir_x = to_q88(dir_x);
            ray_dir_y = to_q88(dir_y);
            ray_dir_z = to_q88(dir_z);
            sphere_center_x = to_q88(cent_x);
            sphere_center_y = to_q88(cent_y);
            sphere_center_z = to_q88(cent_z);
            sphere_radius = to_q88(radius);
            
            $display("Ray Origin: (%f, %f, %f)", orig_x, orig_y, orig_z);
            $display("Ray Direction: (%f, %f, %f)", dir_x, dir_y, dir_z);
            $display("Sphere Center: (%f, %f, %f)", cent_x, cent_y, cent_z);
            $display("Sphere Radius: %f", radius);
            
            valid_in = 1'b1;
            @(posedge clock);
            valid_in = 1'b0;
            
            // Wait for pipeline (6 cycles) plus a few extra for safety
            repeat(10) @(posedge clock);
            
            // Check results
            if (valid_out) begin
                $display("Result: Hit=%b, t=%f", hit, from_q88(t_value));
                
                if (hit == expected_hit) begin
                    if (!expected_hit) begin
                        // Miss case - just check hit flag
                        $display("PASS: Correctly detected miss");
                        pass_count++;
                    end else begin
                        // Hit case - check t value is in reasonable range
                        automatic real t_real = from_q88(t_value);
                        if (t_real >= expected_t_min && t_real <= expected_t_max) begin
                            $display("PASS: Hit detected with t in expected range [%f, %f]", expected_t_min, expected_t_max);
                            pass_count++;
                        end else begin
                            $display("LOG: %0t : ERROR : tb_ray_sphere_intersect : dut.t_value : expected_value: [%f,%f] actual_value: %f", 
                                     $time, expected_t_min, expected_t_max, t_real);
                            $display("FAIL: t value out of expected range");
                            fail_count++;
                        end
                    end
                end else begin
                    $display("LOG: %0t : ERROR : tb_ray_sphere_intersect : dut.hit : expected_value: %b actual_value: %b", 
                             $time, expected_hit, hit);
                    $display("FAIL: Hit flag mismatch");
                    fail_count++;
                end
            end else begin
                $display("LOG: %0t : ERROR : tb_ray_sphere_intersect : dut.valid_out : expected_value: 1'b1 actual_value: 1'b0", $time);
                $display("FAIL: valid_out not asserted");
                fail_count++;
            end
        end
    endtask
    
    // Main test sequence
    initial begin
        $display("TEST START");
        $display("==============================================");
        $display("Ray-Sphere Intersection Testbench");
        $display("Q8.8 Fixed-Point Format");
        $display("==============================================\n");
        
        // Initialize
        test_count = 0;
        pass_count = 0;
        fail_count = 0;
        valid_in = 1'b0;
        ray_origin_x = 16'sd0;
        ray_origin_y = 16'sd0;
        ray_origin_z = 16'sd0;
        ray_dir_x = 16'sd0;
        ray_dir_y = 16'sd0;
        ray_dir_z = 16'sd0;
        sphere_center_x = 16'sd0;
        sphere_center_y = 16'sd0;
        sphere_center_z = 16'sd0;
        sphere_radius = 16'sd0;
        
        // Reset sequence
        reset = 1'b1;
        repeat(5) @(posedge clock);
        reset = 1'b0;
        repeat(2) @(posedge clock);
        
        // Test 1: Ray from origin pointing toward sphere at (0,0,10) with radius 2
        // Should hit at approximately t=8
        apply_test(
            "Hit - Ray along Z-axis toward sphere",
            0.0, 0.0, 0.0,      // origin
            0.0, 0.0, 1.0,      // direction (normalized, pointing +Z)
            0.0, 0.0, 10.0,     // sphere center
            2.0,                // radius
            1'b1,               // expected hit
            7.0, 9.0            // expected t range
        );
        
        // Test 2: Ray missing the sphere (parallel, offset)
        apply_test(
            "Miss - Ray parallel but offset",
            5.0, 0.0, 0.0,      // origin (offset in X)
            0.0, 0.0, 1.0,      // direction (pointing +Z)
            0.0, 0.0, 10.0,     // sphere center
            2.0,                // radius
            1'b0,               // expected miss
            0.0, 0.0            // t range (don't care for miss)
        );
        
        // Test 3: Ray from negative Z toward sphere at origin
        apply_test(
            "Hit - Ray from behind toward origin sphere",
            0.0, 0.0, -10.0,    // origin
            0.0, 0.0, 1.0,      // direction (pointing +Z)
            0.0, 0.0, 0.0,      // sphere at origin
            3.0,                // radius
            1'b1,               // expected hit
            6.0, 8.0            // expected t range
        );
        
        // Test 4: Ray pointing away from sphere
        apply_test(
            "Miss - Ray pointing away",
            0.0, 0.0, 0.0,      // origin
            0.0, 0.0, -1.0,     // direction (pointing -Z)
            0.0, 0.0, 10.0,     // sphere at +Z
            2.0,                // radius
            1'b0,               // expected miss
            0.0, 0.0            // t range (don't care)
        );
        
        // Test 5: Ray from side hitting sphere
        apply_test(
            "Hit - Ray from side (X-axis)",
            -10.0, 0.0, 0.0,    // origin
            1.0, 0.0, 0.0,      // direction (pointing +X)
            0.0, 0.0, 0.0,      // sphere at origin
            2.5,                // radius
            1'b1,               // expected hit
            7.0, 8.0            // expected t range
        );
        
        // Test 6: Small sphere, should still detect
        apply_test(
            "Hit - Small sphere",
            0.0, 0.0, 0.0,      // origin
            0.0, 0.0, 1.0,      // direction
            0.0, 0.0, 5.0,      // sphere center
            1.0,                // small radius
            1'b1,               // expected hit
            3.5, 5.0            // expected t range
        );
        
        // Test 7: Diagonal ray
        apply_test(
            "Hit - Diagonal ray",
            0.0, 0.0, 0.0,      // origin
            0.707, 0.0, 0.707,  // direction (45 degrees in XZ plane, approx normalized)
            5.0, 0.0, 5.0,      // sphere center
            2.0,                // radius
            1'b1,               // expected hit
            4.0, 8.0            // expected t range (wider due to diagonal)
        );
        
        // Test 8: Very close miss
        apply_test(
            "Miss - Near miss",
            0.0, 3.0, 0.0,      // origin (offset in Y, just outside radius)
            0.0, 0.0, 1.0,      // direction
            0.0, 0.0, 10.0,     // sphere center
            2.0,                // radius
            1'b0,               // expected miss
            0.0, 0.0            // t range (don't care)
        );
        
        // Allow time for final results to propagate
        repeat(10) @(posedge clock);
        
        // Print summary
        $display("\n==============================================");
        $display("TEST SUMMARY");
        $display("==============================================");
        $display("Total Tests: %0d", test_count);
        $display("Passed:      %0d", pass_count);
        $display("Failed:      %0d", fail_count);
        $display("==============================================\n");
        
        if (fail_count == 0) begin
            $display("TEST PASSED");
        end else begin
            $display("TEST FAILED");
            $error("Some tests failed!");
        end
        
        $finish(0);
    end
    
    // Timeout watchdog
    initial begin
        #100000; // 100us timeout
        $display("\nLOG: %0t : ERROR : tb_ray_sphere_intersect : timeout : expected_value: completion actual_value: timeout", $time);
        $fatal(1, "ERROR: Simulation timeout!");
    end
    
    // Waveform dump
    initial begin
        $dumpfile("dumpfile.fst");
        $dumpvars(0);
    end

endmodule
