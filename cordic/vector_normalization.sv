module vector_normalization #(
    parameter int ID_WIDTH = 8  // Width of ID tag
)(
    input logic clock,
    input logic reset,
    input logic signed [11:0] x_in,
    input logic signed [11:0] y_in,
    input logic signed [11:0] z_in,
    input logic [ID_WIDTH-1:0] in_id,
    output logic signed [11:0] x_norm,
    output logic signed [11:0] y_norm,
    output logic signed [11:0] z_norm,
    output logic [ID_WIDTH-1:0] out_id
);

    // Pipeline latency: 4 stages × 11 cycles = 44 cycles total
    //
    // Stage 1 (cycles  0-10): Vectoring on (x,y) → θ, K·r_xy
    //                         0° rotation on z   → K·z
    // Stage 2 (cycles 11-21): Vectoring on (K·r_xy, K·z) → φ
    // Stage 3 (cycles 22-32): Rotation (INV_K, 0) by φ   → (cos φ, sin φ)
    // Stage 4 (cycles 33-43): Rotation (cos φ · INV_K, 0) by θ
    //                         → (cos φ·cos θ,  cos φ·sin θ)
    //
    // Unit vector: x_norm = cos φ·cos θ,  y_norm = cos φ·sin θ,  z_norm = sin φ
    //
    // Bug fixes vs previous version:
    //   1. Removed the spurious theta_stage3_pipe (added an 11-cycle skew).
    //      theta is now delayed exactly 22 cycles (theta_pipe[21]) so it
    //      arrives at cycle 33 aligned with stage 3 outputs.
    //   2. Stage 4 is now a real CORDIC rotation that applies the cos φ factor
    //      to the x,y components.  Previously x_norm = cos θ (missing cos φ),
    //      giving magnitude sqrt(1 + sin²φ) instead of 1.

    // -------------------------------------------------------------------------
    // Stage 1 signals
    // -------------------------------------------------------------------------
    logic signed [11:0] theta;        // Azimuth angle  atan2(y, x)
    logic signed [11:0] mag_xy;       // K · sqrt(x² + y²)
    logic signed [11:0] z_scaled;     // K · z  (0° rotation scales by K)
    logic [ID_WIDTH-1:0] stage1_id;

    // -------------------------------------------------------------------------
    // Stage 2 signals
    // -------------------------------------------------------------------------
    logic signed [11:0] phi;          // Elevation angle  atan2(z, r_xy)
    logic signed [11:0] mag_total;    // K² · ||(x,y,z)||  (unused but kept for reference)
    logic [ID_WIDTH-1:0] stage2_id;

    // -------------------------------------------------------------------------
    // Stage 3 signals
    // -------------------------------------------------------------------------
    logic signed [11:0] cos_phi;      // ≈ cos φ  in Q4.8
    logic signed [11:0] sin_phi;      // ≈ sin φ  in Q4.8  →  z_norm after delay
    logic [ID_WIDTH-1:0] stage3_id;

    // Stage 4 x input: cos φ pre-divided by K so CORDIC gain K cancels:
    //   out = K · (cos φ / K) · (cos θ, sin θ) = cos φ · (cos θ, sin θ)
    logic signed [23:0] cos_phi_scaled;  // 24-bit intermediate for Q4.8 × Q4.8
    logic signed [11:0] stage4_x_in;

    // -------------------------------------------------------------------------
    // Theta delay pipeline
    //   theta valid at cycle 11; needed at cycle 33 → 22-cycle delay
    //   theta_pipe[k] holds theta_T starting at cycle 12+k
    //   theta_pipe[21] → valid at cycle 33  ✓
    // -------------------------------------------------------------------------
    logic signed [11:0] theta_pipe [0:21];

    // -------------------------------------------------------------------------
    // z_norm delay pipeline
    //   sin_phi valid at cycle 33; x_norm/y_norm valid at cycle 44 → 11-cycle delay
    // -------------------------------------------------------------------------
    logic signed [11:0] z_norm_pipe [0:10];

    // 1/K in Q4.8  (K ≈ 1.6468,  1/K ≈ 0.6073 ≈ 155/256)
    parameter logic signed [11:0] INV_K_Q48 = 12'sd155;

    // =========================================================================
    // STAGE 1: Vectoring on (x,y) and K-scale z
    // =========================================================================

    vectoring #(
        .ID_WIDTH(ID_WIDTH)
    ) vec_stage1 (
        .clock(clock),
        .reset(reset),
        .in_x(x_in),
        .in_y(y_in),
        .in_id(in_id),
        .mag(mag_xy),     // K · sqrt(x² + y²)
        .ang(theta),      // atan2(y, x)
        .out_id(stage1_id)
    );

    // 0° rotation on z: out_x = K · z_in  (CORDIC gain with no angular change)
    rotation #(
        .ID_WIDTH(ID_WIDTH)
    ) rot_z_scale (
        .clock(clock),
        .reset(reset),
        .in_x(z_in),
        .in_y(12'sd0),
        .in_angle(12'sd0),
        .in_id(in_id),
        .out_x(z_scaled),
        .out_y(),
        .out_id()
    );

    // =========================================================================
    // STAGE 2: Vectoring on (K·r_xy, K·z) to find elevation angle φ
    // =========================================================================

    vectoring #(
        .ID_WIDTH(ID_WIDTH)
    ) vec_stage2 (
        .clock(clock),
        .reset(reset),
        .in_x(mag_xy),
        .in_y(z_scaled),
        .in_id(stage1_id),
        .mag(mag_total),
        .ang(phi),
        .out_id(stage2_id)
    );

    // Delay theta by 22 cycles so it arrives aligned with stage 3 outputs (cycle 33)
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            for (int i = 0; i <= 21; i++) theta_pipe[i] <= 12'sd0;
        end else begin
            theta_pipe[0] <= theta;
            for (int i = 1; i <= 21; i++) theta_pipe[i] <= theta_pipe[i-1];
        end
    end
    // theta_pipe[21] is valid at cycle 33  ✓

    // =========================================================================
    // STAGE 3: Rotation (INV_K, 0) by φ  →  (cos φ,  sin φ)
    // =========================================================================

    rotation #(
        .ID_WIDTH(ID_WIDTH)
    ) rot_elevation (
        .clock(clock),
        .reset(reset),
        .in_x(INV_K_Q48),
        .in_y(12'sd0),
        .in_angle(phi),        // valid at cycle 22  ✓
        .in_id(stage2_id),
        .out_x(cos_phi),       // ≈ cos φ  (valid at cycle 33)
        .out_y(sin_phi),       // ≈ sin φ  (valid at cycle 33)  → z_norm via delay
        .out_id(stage3_id)
    );

    // Pre-scale cos_phi by 1/K (Q4.8 × Q4.8 → Q8.16, take Q4.8 slice)
    // This compensates for the CORDIC gain K introduced in stage 4.
    assign cos_phi_scaled = $signed(cos_phi) * $signed(INV_K_Q48);
    assign stage4_x_in    = cos_phi_scaled[19:8];  // bits [19:8] = Q4.8 result

    // =========================================================================
    // STAGE 4: Rotation (cos φ · INV_K, 0) by θ
    //          →  (cos φ·cos θ,  cos φ·sin θ)
    // =========================================================================

    rotation #(
        .ID_WIDTH(ID_WIDTH)
    ) rot_xy (
        .clock(clock),
        .reset(reset),
        .in_x(stage4_x_in),        // cos φ / K  (valid at cycle 33)  ✓
        .in_y(12'sd0),
        .in_angle(theta_pipe[21]), // θ delayed 22 cycles  (valid at cycle 33)  ✓
        .in_id(stage3_id),
        .out_x(x_norm),            // cos φ · cos θ
        .out_y(y_norm),            // cos φ · sin θ
        .out_id(out_id)
    );

    // =========================================================================
    // z_norm: sin φ delayed 11 cycles to align with stage 4 outputs (cycle 44)
    // =========================================================================

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            for (int i = 0; i <= 10; i++) z_norm_pipe[i] <= 12'sd0;
        end else begin
            z_norm_pipe[0] <= sin_phi;
            for (int i = 1; i <= 10; i++) z_norm_pipe[i] <= z_norm_pipe[i-1];
        end
    end
    assign z_norm = z_norm_pipe[10];

endmodule
