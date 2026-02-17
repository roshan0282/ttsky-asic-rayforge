// Fixed-point Ray-Sphere Intersection Unit
// Q8.8 fixed-point format (8 integer bits, 8 fractional bits)
// Ray: P(t) = origin + t * direction
// Sphere: |P - center|^2 = radius^2

module ray_sphere_intersect (
    input  logic        clock,
    input  logic        reset,
    input  logic        valid_in,
    
    // Ray parameters (Q8.8 format)
    input  logic signed [15:0] ray_origin_x,
    input  logic signed [15:0] ray_origin_y,
    input  logic signed [15:0] ray_origin_z,
    input  logic signed [15:0] ray_dir_x,
    input  logic signed [15:0] ray_dir_y,
    input  logic signed [15:0] ray_dir_z,
    
    // Sphere parameters (Q8.8 format)
    input  logic signed [15:0] sphere_center_x,
    input  logic signed [15:0] sphere_center_y,
    input  logic signed [15:0] sphere_center_z,
    input  logic signed [15:0] sphere_radius,
    
    // Outputs
    output logic        valid_out,
    output logic        hit,
    output logic signed [15:0] t_value  // Q8.8 intersection distance
);

    // Pipeline stage 1: Compute oc = origin - center
    logic signed [15:0] oc_x_s1, oc_y_s1, oc_z_s1;
    logic valid_s1;
    
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            oc_x_s1 <= 16'sd0;
            oc_y_s1 <= 16'sd0;
            oc_z_s1 <= 16'sd0;
            valid_s1 <= 1'b0;
        end else begin
            oc_x_s1 <= ray_origin_x - sphere_center_x;
            oc_y_s1 <= ray_origin_y - sphere_center_y;
            oc_z_s1 <= ray_origin_z - sphere_center_z;
            valid_s1 <= valid_in;
        end
    end
    
    // Pipeline stage 2: Compute dot products
    // a = dir·dir
    // b = 2(oc·dir)
    // c = oc·oc - radius^2
    
    logic signed [31:0] dir_x_sq, dir_y_sq, dir_z_sq;
    logic signed [31:0] oc_x_sq, oc_y_sq, oc_z_sq;
    logic signed [31:0] oc_dir_x, oc_dir_y, oc_dir_z;
    logic signed [31:0] radius_sq;
    logic valid_s2;
    logic signed [15:0] ray_dir_x_s2, ray_dir_y_s2, ray_dir_z_s2;
    
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            dir_x_sq <= 32'sd0;
            dir_y_sq <= 32'sd0;
            dir_z_sq <= 32'sd0;
            oc_x_sq <= 32'sd0;
            oc_y_sq <= 32'sd0;
            oc_z_sq <= 32'sd0;
            oc_dir_x <= 32'sd0;
            oc_dir_y <= 32'sd0;
            oc_dir_z <= 32'sd0;
            radius_sq <= 32'sd0;
            valid_s2 <= 1'b0;
            ray_dir_x_s2 <= 16'sd0;
            ray_dir_y_s2 <= 16'sd0;
            ray_dir_z_s2 <= 16'sd0;
        end else begin
            // Q8.8 * Q8.8 = Q16.16
            dir_x_sq <= ray_dir_x * ray_dir_x;
            dir_y_sq <= ray_dir_y * ray_dir_y;
            dir_z_sq <= ray_dir_z * ray_dir_z;
            oc_x_sq <= oc_x_s1 * oc_x_s1;
            oc_y_sq <= oc_y_s1 * oc_y_s1;
            oc_z_sq <= oc_z_s1 * oc_z_s1;
            oc_dir_x <= oc_x_s1 * ray_dir_x;
            oc_dir_y <= oc_y_s1 * ray_dir_y;
            oc_dir_z <= oc_z_s1 * ray_dir_z;
            radius_sq <= sphere_radius * sphere_radius;
            valid_s2 <= valid_s1;
            ray_dir_x_s2 <= ray_dir_x;
            ray_dir_y_s2 <= ray_dir_y;
            ray_dir_z_s2 <= ray_dir_z;
        end
    end
    
    // Pipeline stage 3: Sum dot products to get a, b, c
    logic signed [31:0] a_s3;     // Q16.16
    logic signed [31:0] b_s3;     // Q16.16
    logic signed [31:0] c_s3;     // Q16.16
    logic valid_s3;
    logic signed [15:0] a_q88_s3; // Q8.8
    
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            a_s3 <= 32'sd0;
            b_s3 <= 32'sd0;
            c_s3 <= 32'sd0;
            a_q88_s3 <= 16'sd0;
            valid_s3 <= 1'b0;
        end else begin
            // a = dir·dir (Q16.16)
            a_s3 <= dir_x_sq + dir_y_sq + dir_z_sq;
            
            // b = 2(oc·dir) (Q16.16)
            b_s3 <= (oc_dir_x + oc_dir_y + oc_dir_z) <<< 1;
            
            // c = oc·oc - radius^2 (Q16.16)
            c_s3 <= (oc_x_sq + oc_y_sq + oc_z_sq) - radius_sq;
            
            // Convert a to Q8.8 for later division
            a_q88_s3 <= (dir_x_sq + dir_y_sq + dir_z_sq) >>> 8;
            
            valid_s3 <= valid_s2;
        end
    end
    
    // Pipeline stage 4: Compute discriminant
    logic signed [63:0] b_squared;
    logic signed [63:0] four_ac;
    logic signed [63:0] discriminant;
    logic valid_s4;
    logic signed [31:0] b_s4;
    logic signed [15:0] a_q88_s4;
    
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            b_squared <= 64'sd0;
            four_ac <= 64'sd0;
            discriminant <= 64'sd0;
            valid_s4 <= 1'b0;
            b_s4 <= 32'sd0;
            a_q88_s4 <= 16'sd0;
        end else begin
            // b^2 (Q16.16 * Q16.16 = Q32.32)
            b_squared <= b_s3 * b_s3;
            
            // 4ac (Q32.32)
            four_ac <= (a_s3 * c_s3) <<< 2;
            
            // disc = b^2 - 4ac (Q32.32)
            discriminant <= (b_s3 * b_s3) - ((a_s3 * c_s3) <<< 2);
            
            valid_s4 <= valid_s3;
            b_s4 <= b_s3;
            a_q88_s4 <= a_q88_s3;
        end
    end
    
    // Pipeline stage 5: Check discriminant and compute sqrt (simplified)
    logic signed [31:0] sqrt_disc_s5;  // Q16.16
    logic valid_s5;
    logic hit_s5;
    logic signed [31:0] b_s5;
    logic signed [15:0] a_q88_s5;
    
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            sqrt_disc_s5 <= 32'sd0;
            valid_s5 <= 1'b0;
            hit_s5 <= 1'b0;
            b_s5 <= 32'sd0;
            a_q88_s5 <= 16'sd0;
        end else begin
            if (discriminant >= 64'sd0) begin
                // Simplified sqrt: use upper 32 bits and approximate
                // For a real design, use a proper sqrt module
                // This is a placeholder approximation
                sqrt_disc_s5 <= discriminant[47:16];
                hit_s5 <= 1'b1;
            end else begin
                sqrt_disc_s5 <= 32'sd0;
                hit_s5 <= 1'b0;
            end
            valid_s5 <= valid_s4;
            b_s5 <= b_s4;
            a_q88_s5 <= a_q88_s4;
        end
    end
    
    // Pipeline stage 6: Compute t = (-b - sqrt(disc)) / (2a)
    logic signed [31:0] numerator;
    logic signed [31:0] t_result;
    
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            valid_out <= 1'b0;
            hit <= 1'b0;
            t_value <= 16'sd0;
        end else begin
            valid_out <= valid_s5;
            hit <= hit_s5;
            
            if (hit_s5) begin
                // numerator = -b - sqrt(disc) (Q16.16)
                numerator = -b_s5 - sqrt_disc_s5;
                
                // t = numerator / (2a)
                // numerator is Q16.16, a is Q8.8
                // Shift numerator right by 8 to get Q8.8, then divide
                // Simplified division - in real design use a divider
                if (a_q88_s5 != 16'sd0) begin
                    t_result = (numerator >>> 8) / (a_q88_s5 <<< 1);
                    t_value <= t_result[15:0];
                end else begin
                    t_value <= 16'sd0;
                end
            end else begin
                t_value <= 16'sd0;
            end
        end
    end

endmodule
