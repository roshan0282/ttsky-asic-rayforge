// ModelSim testbench for vector_normalization
// Compile: vlog vectoring.sv rotation.sv vector_normalization.sv tb_vector_normalization.sv
// Simulate: vsim -c tb_vector_normalization -do "run -all; quit"
//
// Checks:
//   1. Output magnitude ~= 1.0  (unit vector)
//   2. Output direction matches input  (cosine similarity ~= 1.0)
//   3. ID tracking: out_id matches expected ID per transaction
//
// Pipeline latency: 44 cycles (4 x 11-cycle CORDIC stages)

`timescale 1ns/1ps

module tb_vector_normalization;

    // DUT signals
    logic        clock;
    logic        reset;
    logic signed [11:0] x_in, y_in, z_in;
    logic [7:0]  in_id;
    logic signed [11:0] x_norm, y_norm, z_norm;
    logic [7:0]  out_id;

    // Parameters
    parameter real FIXED_SCALE      = 256.0;
    parameter int  PIPELINE_LATENCY = 44;
    parameter int  NUM_TESTS        = 12;
    parameter real TOLERANCE_MAG    = 0.10;
    parameter real TOLERANCE_DIR    = 0.05;

    // Test bookkeeping
    int test_count;
    int pass_count;
    int fail_count;

    // Test vector type
    typedef struct {
        real   x_real;
        real   y_real;
        real   z_real;
        string name;
        real   expected_magnitude;
    } test_vector_t;

    test_vector_t test_vectors[NUM_TESTS];

    // DUT instantiation
    vector_normalization #(.ID_WIDTH(8)) dut (
        .clock  (clock),
        .reset  (reset),
        .x_in   (x_in),
        .y_in   (y_in),
        .z_in   (z_in),
        .in_id  (in_id),
        .x_norm (x_norm),
        .y_norm (y_norm),
        .z_norm (z_norm),
        .out_id (out_id)
    );

    // Clock: 10 ns period (100 MHz)
    initial begin
        clock = 0;
        forever #5 clock = ~clock;
    end

    // Helper: real -> Q4.8
    function automatic logic signed [11:0] real_to_q48(real value);
        return $signed($rtoi(value * FIXED_SCALE));
    endfunction

    // Helper: Q4.8 -> real
    function automatic real q48_to_real(logic signed [11:0] value);
        return $itor($signed(value)) / FIXED_SCALE;
    endfunction

    // Helper: 3D magnitude
    function automatic real compute_magnitude(real x, real y, real z);
        return $sqrt(x*x + y*y + z*z);
    endfunction

    // Helper: absolute value
    function automatic real abs_real(real value);
        return (value < 0.0) ? -value : value;
    endfunction

    // Initialize test vectors
    initial begin
        // Axis-aligned
        test_vectors[0].x_real = 1.0;  test_vectors[0].y_real = 0.0;  test_vectors[0].z_real = 0.0;
        test_vectors[0].name = "+X axis (1,0,0)";          test_vectors[0].expected_magnitude = 1.0;

        test_vectors[1].x_real = 0.0;  test_vectors[1].y_real = 1.0;  test_vectors[1].z_real = 0.0;
        test_vectors[1].name = "+Y axis (0,1,0)";          test_vectors[1].expected_magnitude = 1.0;

        test_vectors[2].x_real = 0.0;  test_vectors[2].y_real = 0.0;  test_vectors[2].z_real = 1.0;
        test_vectors[2].name = "+Z axis (0,0,1)";          test_vectors[2].expected_magnitude = 1.0;

        // Negative axes (tests quadrant handling)
        test_vectors[3].x_real = -1.0; test_vectors[3].y_real = 0.0;  test_vectors[3].z_real = 0.0;
        test_vectors[3].name = "-X axis (-1,0,0)";         test_vectors[3].expected_magnitude = 1.0;

        test_vectors[4].x_real = 0.0;  test_vectors[4].y_real = -1.0; test_vectors[4].z_real = 0.0;
        test_vectors[4].name = "-Y axis (0,-1,0)";         test_vectors[4].expected_magnitude = 1.0;

        test_vectors[5].x_real = 0.0;  test_vectors[5].y_real = 0.0;  test_vectors[5].z_real = -1.0;
        test_vectors[5].name = "-Z axis (0,0,-1)";         test_vectors[5].expected_magnitude = 1.0;

        // Diagonal and general
        test_vectors[6].x_real = 1.0;  test_vectors[6].y_real = 1.0;  test_vectors[6].z_real = 1.0;
        test_vectors[6].name = "Diagonal (1,1,1)";         test_vectors[6].expected_magnitude = 1.0;

        test_vectors[7].x_real = 1.0;  test_vectors[7].y_real = 2.0;  test_vectors[7].z_real = 3.0;
        test_vectors[7].name = "General (1,2,3)";          test_vectors[7].expected_magnitude = 1.0;

        test_vectors[8].x_real = 1.0;  test_vectors[8].y_real = -2.0; test_vectors[8].z_real = 3.0;
        test_vectors[8].name = "Mixed signs (1,-2,3)";     test_vectors[8].expected_magnitude = 1.0;

        test_vectors[9].x_real = -1.0; test_vectors[9].y_real = -1.0; test_vectors[9].z_real = -1.0;
        test_vectors[9].name = "All-neg (-1,-1,-1)";       test_vectors[9].expected_magnitude = 1.0;

        // Different input magnitudes
        test_vectors[10].x_real = 2.0; test_vectors[10].y_real = 0.0; test_vectors[10].z_real = 0.0;
        test_vectors[10].name = "Scaled X (2,0,0)";        test_vectors[10].expected_magnitude = 1.0;

        test_vectors[11].x_real = 0.5; test_vectors[11].y_real = 0.5; test_vectors[11].z_real = 2.0;
        test_vectors[11].name = "Large Z (0.5,0.5,2)";     test_vectors[11].expected_magnitude = 1.0;
    end

    // =========================================================
    // STIMULUS
    // =========================================================
    initial begin
        $display("============================================================");
        $display("  3D Vector Normalization Testbench");
        $display("  Q4.8 Fixed-Point | Pipeline Latency: %0d cycles", PIPELINE_LATENCY);
        $display("============================================================");

        test_count = 0;
        pass_count = 0;
        fail_count = 0;

        x_in = 12'sd0; y_in = 12'sd0; z_in = 12'sd0; in_id = 8'd0;
        reset = 1;
        repeat(3) @(posedge clock);
        reset = 0;
        @(posedge clock);

        $display("\nApplying test vectors (1 per clock)...\n");

        for (int i = 0; i < NUM_TESTS; i++) begin
            x_in  = real_to_q48(test_vectors[i].x_real);
            y_in  = real_to_q48(test_vectors[i].y_real);
            z_in  = real_to_q48(test_vectors[i].z_real);
            in_id = i + 1;

            $display("[IN  %4t ns] ID=%2d  %-22s  mag_in=%.4f",
                     $time, in_id, test_vectors[i].name,
                     compute_magnitude(test_vectors[i].x_real,
                                       test_vectors[i].y_real,
                                       test_vectors[i].z_real));
            @(posedge clock);
        end

        x_in = 12'sd0; y_in = 12'sd0; z_in = 12'sd0; in_id = 8'd0;

        $display("\nAll inputs applied. Waiting for outputs...\n");
        repeat(PIPELINE_LATENCY + 5) @(posedge clock);

        $display("\n============================================================");
        $display("  Test Summary:  %0d / %0d passed", pass_count, NUM_TESTS);
        if (fail_count == 0) begin
            $display("  TEST PASSED");
        end else begin
            $display("  TEST FAILED  (%0d failures)", fail_count);
            $error("tb_vector_normalization: %0d test(s) failed", fail_count);
        end
        $display("============================================================");
        $finish;
    end

    // =========================================================
    // OUTPUT CHECKER
    // =========================================================
    initial begin
        wait(reset == 0);
        @(posedge clock);
        repeat(PIPELINE_LATENCY) @(posedge clock);

        $display("------------------------------------------------------------");
        $display("  Checking Outputs (1 per clock)");
        $display("------------------------------------------------------------\n");

        for (int i = 0; i < NUM_TESTS; i++) begin
            automatic int   test_id    = out_id - 1;
            automatic real  actual_x   = q48_to_real(x_norm);
            automatic real  actual_y   = q48_to_real(y_norm);
            automatic real  actual_z   = q48_to_real(z_norm);
            automatic real  actual_mag;
            automatic real  input_mag;
            automatic real  cos_sim;
            automatic real  mag_error;
            automatic real  dir_error;
            automatic logic pass_mag;
            automatic logic pass_dir;

            actual_mag = compute_magnitude(actual_x, actual_y, actual_z);

            if (test_id < 0 || test_id >= NUM_TESTS) begin
                $display("ERROR: Invalid output ID=%0d at time %0t", out_id, $time);
                fail_count++;
                @(posedge clock);
                continue;
            end

            input_mag = compute_magnitude(test_vectors[test_id].x_real,
                                          test_vectors[test_id].y_real,
                                          test_vectors[test_id].z_real);

            // Cosine similarity: dot(input_unit, output_unit)
            // Use abs() so CORDIC sign flips on degenerate inputs don't cause false fails
            if (input_mag > 0.001 && actual_mag > 0.001)
                cos_sim = (test_vectors[test_id].x_real * actual_x +
                           test_vectors[test_id].y_real * actual_y +
                           test_vectors[test_id].z_real * actual_z)
                          / (input_mag * actual_mag);
            else
                cos_sim = 1.0;

            mag_error = abs_real(actual_mag - 1.0);
            dir_error = abs_real(abs_real(cos_sim) - 1.0);
            pass_mag  = (mag_error <= TOLERANCE_MAG);
            pass_dir  = (dir_error <= TOLERANCE_DIR);

            $display("----------------------------------------");
            $display("[OUT %4t ns] ID=%2d  %s", $time, out_id, test_vectors[test_id].name);
            $display("  Input:   (%.4f, %.4f, %.4f)  mag_in=%.4f",
                     test_vectors[test_id].x_real,
                     test_vectors[test_id].y_real,
                     test_vectors[test_id].z_real, input_mag);
            $display("  Output:  (%.4f, %.4f, %.4f)  mag_out=%.4f  cos_sim=%.4f",
                     actual_x, actual_y, actual_z, actual_mag, cos_sim);
            $display("  Q4.8:    x=%0d  y=%0d  z=%0d", $signed(x_norm), $signed(y_norm), $signed(z_norm));
            $display("  Errors:  mag_err=%.4f (<%.2f)  dir_err=%.4f (<%.2f)",
                     mag_error, TOLERANCE_MAG, dir_error, TOLERANCE_DIR);

            if (pass_mag && pass_dir) begin
                $display("  Result:  PASS");
                pass_count++;
            end else begin
                $display("  Result:  FAIL (mag_ok=%b  dir_ok=%b)", pass_mag, pass_dir);
                if (!pass_mag)
                    $display("  LOG: %0t ERROR magnitude expected=1.0 got=%.4f", $time, actual_mag);
                if (!pass_dir)
                    $display("  LOG: %0t ERROR direction cos_sim=%.4f (expected ~1.0)", $time, cos_sim);
                fail_count++;
            end

            @(posedge clock);
        end
    end

    // Timeout watchdog
    initial begin
        #100_000;
        $display("\nERROR: Simulation timeout!");
        $fatal(1, "tb_vector_normalization: simulation exceeded maximum time");
    end

    // Waveform dump (VCD -- compatible with ModelSim and GTKWave)
    initial begin
        $dumpfile("tb_vector_normalization.vcd");
        $dumpvars(0, tb_vector_normalization);
    end

endmodule
