module rotation #(
    parameter int ID_WIDTH = 8  // Width of ID tag
)(
    input logic clock,
    input logic reset,
    input logic signed [11:0] in_x,
    input logic signed [11:0] in_y,
    input logic signed [11:0] in_angle,  // Target rotation angle in radians (Q4.8)
    input logic [ID_WIDTH-1:0] in_id,
    output logic signed [11:0] out_x,
    output logic signed [11:0] out_y,
    output logic [ID_WIDTH-1:0] out_id
);

    // Q4.8 fixed-point format: 1 sign bit, 3 integer bits, 8 fractional bits
    // Number of CORDIC iterations (pipeline stages)
    parameter int STAGES = 10;
    
    // Constants in Q4.8 format for angle pre-reduction
    parameter logic signed [11:0] PI_2_Q48 = 12'sd402;   // π/2 ≈ 1.5708 in Q4.8
    parameter logic signed [11:0] NEG_PI_2_Q48 = -12'sd402;  // -π/2 in Q4.8
    
    // Arctangent lookup table in Q4.8 format (pre-computed)
    // atan(2^-i) for i = 0 to 9
    logic signed [11:0] atan_lut [0:STAGES-1];
    initial begin
        atan_lut[0] = 12'sd201;  // atan(1.0) = 0.7854 rad = 45°
        atan_lut[1] = 12'sd119;  // atan(0.5) = 0.4636 rad
        atan_lut[2] = 12'sd63;   // atan(0.25) = 0.2450 rad
        atan_lut[3] = 12'sd32;   // atan(0.125) = 0.1244 rad
        atan_lut[4] = 12'sd16;   // atan(0.0625) = 0.0624 rad
        atan_lut[5] = 12'sd8;    // atan(0.03125) = 0.0312 rad
        atan_lut[6] = 12'sd4;    // atan(0.015625) = 0.0156 rad
        atan_lut[7] = 12'sd2;    // atan(0.0078125) = 0.0078 rad
        atan_lut[8] = 12'sd1;    // atan(0.00390625) = 0.0039 rad
        atan_lut[9] = 12'sd1;    // atan(0.001953125) = 0.0020 rad
    end
    
    // Pipeline stage registers
    logic signed [11:0] x [0:STAGES];
    logic signed [11:0] y [0:STAGES];
    logic signed [11:0] z [0:STAGES];
    logic [ID_WIDTH-1:0] id [0:STAGES];  // ID tag pipeline
    
    // Stage 0: Input stage with angle pre-reduction
    // CORDIC rotation converges best for angles in range ±π/2
    // For angles outside this range, we pre-rotate the vector by ±90° multiples
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            x[0] <= 12'sd0;
            y[0] <= 12'sd0;
            z[0] <= 12'sd0;
            id[0] <= '0;
        end else begin
            id[0] <= in_id;
            
            // Check if angle is outside ±π/2 range
            if ($signed(in_angle) > $signed(PI_2_Q48)) begin
                // Angle > π/2: pre-rotate vector by 90° counter-clockwise
                // Rotation matrix for +90°: [x'] = [ 0 -1] [x] = [-y]
                //                           [y']   [ 1  0] [y]   [ x]
                x[0] <= -in_y;
                y[0] <= in_x;
                z[0] <= in_angle - PI_2_Q48;  // Reduce angle by π/2
            end else if ($signed(in_angle) < $signed(NEG_PI_2_Q48)) begin
                // Angle < -π/2: pre-rotate vector by 90° clockwise
                // Rotation matrix for -90°: [x'] = [ 0  1] [x] = [ y]
                //                           [y']   [-1  0] [y]   [-x]
                x[0] <= in_y;
                y[0] <= -in_x;
                z[0] <= in_angle - NEG_PI_2_Q48;  // Reduce angle by -π/2 (add π/2)
            end else begin
                // Angle within ±π/2: no pre-rotation needed
                x[0] <= in_x;
                y[0] <= in_y;
                z[0] <= in_angle;
            end
        end
    end
    
    // CORDIC rotation iterations (pipeline stages 1 to STAGES)
    genvar i;
    generate
        for (i = 0; i < STAGES; i++) begin : cordic_stage
            logic signed [11:0] x_shifted, y_shifted;
            logic d;  // Direction: 0 for negative rotation, 1 for positive rotation
            
            always_ff @(posedge clock or posedge reset) begin
                if (reset) begin
                    x[i+1] <= 12'sd0;
                    y[i+1] <= 12'sd0;
                    z[i+1] <= 12'sd0;
                    id[i+1] <= '0;
                end else begin
                    // Determine rotation direction based on sign of remaining angle z
                    // If z is positive, d=1 (rotate counter-clockwise)
                    // If z is negative, d=0 (rotate clockwise)
                    d = ~z[i][11];  // Inverted sign bit (1 if positive, 0 if negative)
                    
                    // Arithmetic right shift to preserve sign
                    x_shifted = x[i] >>> i;
                    y_shifted = y[i] >>> i;
                    
                    // CORDIC rotation mode equations
                    if (d) begin
                        // z is positive, rotate counter-clockwise
                        x[i+1] <= x[i] - y_shifted;
                        y[i+1] <= y[i] + x_shifted;
                        z[i+1] <= z[i] - atan_lut[i];
                    end else begin
                        // z is negative, rotate clockwise
                        x[i+1] <= x[i] + y_shifted;
                        y[i+1] <= y[i] - x_shifted;
                        z[i+1] <= z[i] + atan_lut[i];
                    end
                    
                    // Pipeline the ID through
                    id[i+1] <= id[i];
                end
            end
        end
    endgenerate
    
    // Output assignment
    // After CORDIC iterations:
    // - x[STAGES], y[STAGES] contain the rotated coordinates (scaled by K ≈ 1.647)
    // - The coordinates are scaled by the CORDIC gain factor
    // - id[STAGES] contains the ID tag from 11 cycles ago
    assign out_x = x[STAGES];
    assign out_y = y[STAGES];
    assign out_id = id[STAGES];

endmodule
