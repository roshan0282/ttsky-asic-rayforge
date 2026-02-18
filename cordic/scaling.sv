module scaling #(
    parameter int ID_WIDTH = 8  // Width of ID tag
)(
    input logic clock,
    input logic reset,
    input logic signed [11:0] in_value,
    input logic [ID_WIDTH-1:0] in_id,
    output logic signed [11:0] out_value,
    output logic [ID_WIDTH-1:0] out_id
);

    // Q4.8 fixed-point format: 1 sign bit, 3 integer bits, 8 fractional bits
    // Number of pipeline stages to match CORDIC latency
    parameter int STAGES = 10;
    
    // CORDIC gain K ≈ 1.6467597
    // K = ∏(i=0 to 9) sqrt(1 + 2^(-2i))
    // 
    // At each CORDIC iteration i, the magnitude scales by sqrt(1 + 2^(-2i))
    // We replicate this using shift-and-add: result[i+1] = result[i] + (result[i] >> shift[i])
    // Which multiplies by (1 + 2^(-shift[i]))
    //
    // For accurate K, we use shifts that match CORDIC's magnitude growth:
    // sqrt(1 + 2^(-2i)) ≈ 1 + 2^(-(2i+1)) for i > 0
    // For i=0: sqrt(2) ≈ 1.414, but 1+2^(-1)=1.5 is too large
    //          Better: use shift=2 giving 1.25, closer to 1.414
    
    // Shift amounts for each stage (tuned to approximate K ≈ 1.647)
    // Product: 1.25 * 1.25 * 1.03125 * 1.0078 * 1.002 * ... ≈ 1.647
    int shift_lut [0:STAGES-1];
    initial begin
        shift_lut[0] = 2;   // Add input >> 2  (multiply by 1.25)
        shift_lut[1] = 2;   // Add result >> 2  (multiply by 1.25)
        shift_lut[2] = 5;   // Add result >> 5  (multiply by 1.03125)
        shift_lut[3] = 7;   // Add result >> 7  (multiply by 1.0078125)
        shift_lut[4] = 9;   // Add result >> 9  (multiply by 1.001953125)
        shift_lut[5] = 11;  // Add result >> 11
        shift_lut[6] = 13;  // Add result >> 13
        shift_lut[7] = 15;  // Add result >> 15
        shift_lut[8] = 17;  // Add result >> 17
        shift_lut[9] = 19;  // Add result >> 19
    end
    
    // Pipeline stage registers
    logic signed [11:0] value [0:STAGES];
    logic [ID_WIDTH-1:0] id [0:STAGES];
    
    // Stage 0: Input stage
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            value[0] <= 12'sd0;
            id[0] <= '0;
        end else begin
            value[0] <= in_value;
            id[0] <= in_id;
        end
    end
    
    // Scaling iterations (pipeline stages 1 to STAGES)
    // Progressively build up the product through shift-and-add
    genvar i;
    generate
        for (i = 0; i < STAGES; i++) begin : scale_stage
            logic signed [11:0] shifted_value;
            
            always_ff @(posedge clock or posedge reset) begin
                if (reset) begin
                    value[i+1] <= 12'sd0;
                    id[i+1] <= '0;
                end else begin
                    // Arithmetic right shift to preserve sign
                    shifted_value = value[i] >>> shift_lut[i];
                    
                    // Accumulate: result = result + (result >> shift)
                    // This approximates multiplication by K through shift-and-add
                    value[i+1] <= value[i] + shifted_value;
                    
                    // Pipeline the ID through
                    id[i+1] <= id[i];
                end
            end
        end
    endgenerate
    
    // Output assignment
    // After all scaling iterations, value[STAGES] ≈ K × in_value
    assign out_value = value[STAGES];
    assign out_id = id[STAGES];

endmodule
