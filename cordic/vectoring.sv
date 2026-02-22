module vectoring #(
    parameter int ID_WIDTH = 8  // Width of ID tag
)(
    input logic clock,
    input logic reset,
    input logic signed [11:0] in_x,
    input logic signed [11:0] in_y,
    input logic [ID_WIDTH-1:0] in_id,
    output logic signed [11:0] mag,
    output logic signed [11:0] ang,
    output logic [ID_WIDTH-1:0] out_id
);

    // Q4.8 fixed-point format: 1 sign bit, 3 integer bits, 8 fractional bits
    // Number of CORDIC iterations (pipeline stages)
    parameter int STAGES = 10;
    
    // Constants in Q4.8 format
    parameter logic signed [11:0] PI_Q48 = 12'sd804;   // π ≈ 3.14159 in Q4.8
    parameter logic signed [11:0] NEG_PI_Q48 = -12'sd804;  // -π in Q4.8
    
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
    logic signed [11:0] quadrant_offset [0:STAGES];  // Angle offset for quadrant correction
    logic [ID_WIDTH-1:0] id [0:STAGES];  // ID tag pipeline
    
    // Stage 0: Input with quadrant pre-rotation
    // CORDIC vectoring only works for x > 0 (right half-plane)
    // For x < 0, rotate by ±180° to bring vector to right half-plane
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            x[0] <= 12'sd0;
            y[0] <= 12'sd0;
            z[0] <= 12'sd0;
            quadrant_offset[0] <= 12'sd0;
            id[0] <= '0;
        end else begin
            id[0] <= in_id;  // Capture input ID
            // Check if x is negative (quadrants 2 or 3)
            if (in_x[11] == 1'b1) begin  // x < 0
                // Rotate by 180° (negate both x and y)
                x[0] <= -in_x;
                y[0] <= -in_y;
                
                // Set quadrant offset based on y sign
                if (in_y[11] == 1'b1) begin  // y < 0 (Quadrant 3)
                    quadrant_offset[0] <= NEG_PI_Q48;  // -π
                end else begin  // y >= 0 (Quadrant 2)
                    quadrant_offset[0] <= PI_Q48;      // +π
                end
            end else begin  // x >= 0 (Quadrants 1 or 4)
                // No pre-rotation needed
                x[0] <= in_x;
                y[0] <= in_y;
                quadrant_offset[0] <= 12'sd0;
            end
            
            z[0] <= 12'sd0;  // Initial CORDIC angle is 0
        end
    end
    
    // CORDIC iterations (pipeline stages 1 to STAGES)
    genvar i;
    generate
        for (i = 0; i < STAGES; i++) begin : cordic_stage
            logic signed [11:0] x_shifted, y_shifted;
            logic d;  // Direction: 0 for positive rotation, 1 for negative rotation
            
            always_ff @(posedge clock or posedge reset) begin
                if (reset) begin
                    x[i+1] <= 12'sd0;
                    y[i+1] <= 12'sd0;
                    z[i+1] <= 12'sd0;
                    quadrant_offset[i+1] <= 12'sd0;
                    id[i+1] <= '0;
                end else begin
                    // Determine rotation direction based on sign of y
                    // If y is negative, d=1 (rotate clockwise)
                    // If y is positive or zero, d=0 (rotate counter-clockwise)
                    d = y[i][11];  // Sign bit
                    
                    // Arithmetic right shift to preserve sign
                    x_shifted = y[i] >>> i;
                    y_shifted = x[i] >>> i;
                    
                    // CORDIC vectoring mode equations
                    if (d) begin
                        // y is negative, rotate clockwise
                        x[i+1] <= x[i] - x_shifted;
                        y[i+1] <= y[i] + y_shifted;
                        z[i+1] <= z[i] - atan_lut[i];
                    end else begin
                        // y is positive or zero, rotate counter-clockwise
                        x[i+1] <= x[i] + x_shifted;
                        y[i+1] <= y[i] - y_shifted;
                        z[i+1] <= z[i] + atan_lut[i];
                    end
                    
                    // Pipeline the quadrant offset and ID through
                    quadrant_offset[i+1] <= quadrant_offset[i];
                    id[i+1] <= id[i];
                end
            end
        end
    endgenerate
    
    // Output assignment with quadrant post-correction
    // After CORDIC iterations:
    // - x[STAGES] contains the magnitude (scaled by K ≈ 1.647)
    // - z[STAGES] contains the angle relative to the rotated coordinate system
    // - Add quadrant_offset to get the true angle
    // - id[STAGES] contains the ID tag from 11 cycles ago
    assign mag = x[STAGES];
    assign ang = z[STAGES] + quadrant_offset[STAGES];
    assign out_id = id[STAGES];

endmodule
