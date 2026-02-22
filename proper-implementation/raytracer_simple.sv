// ─────────────────────────────────────────────────────────────────────────────
// raytracer_simple.sv  —  Simple single-bounce raytracer with state machine
//
// State machine:  
//  - IDLE: Wait for valid pixel, latch coordinates
//  - COMPUTE: Calculate all intersections and shading (takes 1 cycle for combinational)
//  - OUTPUT: Write result
//
// Total: 2 cycles per pixel
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps
`default_nettype none

import scene_lut::*;

module raytracer_simple (
    input  logic        clk,
    input  logic        rst_n,
    
    input  logic [9:0]  pixel_x,
    input  logic [8:0]  pixel_y,
    input  logic        pixel_valid,
    
    output logic [7:0]  rgb_r,
    output logic [7:0]  rgb_g,
    output logic [7:0]  rgb_b,
    output logic        output_valid
);

    // ── State machine ─────────────────────────────────────────────────────────
    typedef enum logic [1:0] {
        IDLE    = 2'd0,
        COMPUTE = 2'd1,
        OUTPUT  = 2'd2
    } state_t;
    
    state_t state;
    
    // Latched pixel coordinates
    logic [9:0] px_reg;
    logic [8:0] py_reg;
    
    // State transition
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            px_reg <= 10'd0;
            py_reg <= 9'd0;
        end else begin
            case (state)
                IDLE: begin
                    if (pixel_valid) begin
                        px_reg <= pixel_x;
                        py_reg <= pixel_y;
                        state <= COMPUTE;
                    end
                end
                
                COMPUTE: begin
                    state <= OUTPUT;
                end
                
                OUTPUT: begin
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end
    
    // ── Camera ray generation (combinational, uses px_reg/py_reg) ────────────
    logic signed [31:0] centered_x, centered_y;
    logic signed [31:0] raw_dx, raw_dy, raw_dz;
    logic signed [31:0] norm_dx, norm_dy, norm_dz;
    
    always_comb begin
        centered_x = $signed({1'b0, px_reg}) - 32'sd320;
        centered_y = 32'sd240 - $signed({1'b0, py_reg});
        
        raw_dx = centered_x <<< 14;  // Q16.16: divide by 4
        raw_dy = centered_y <<< 14;
        raw_dz = 32'sd6553600;  // 100 << 16
    end
    
    vec3_normalize u_camera_norm (
        .x(raw_dx), .y(raw_dy), .z(raw_dz),
        .nx(norm_dx), .ny(norm_dy), .nz(norm_dz)
    );
    
    // ── Scene data ────────────────────────────────────────────────────────────
    logic signed [31:0] cx_arr [0:2];
    logic signed [31:0] cy_arr [0:2];
    logic signed [31:0] cz_arr [0:2];
    logic signed [31:0] radius_arr [0:2];
    logic [7:0]  colorR_arr [0:2];
    logic [7:0]  colorG_arr [0:2];
    logic [7:0]  colorB_arr [0:2];
    logic signed [31:0] refl_arr [0:2];
    
    always_comb begin
        getSphere0(cx_arr[0], cy_arr[0], cz_arr[0], radius_arr[0],
                   colorR_arr[0], colorG_arr[0], colorB_arr[0], refl_arr[0]);
        getSphere1(cx_arr[1], cy_arr[1], cz_arr[1], radius_arr[1],
                   colorR_arr[1], colorG_arr[1], colorB_arr[1], refl_arr[1]);
        getSphere2(cx_arr[2], cy_arr[2], cz_arr[2], radius_arr[2],
                   colorR_arr[2], colorG_arr[2], colorB_arr[2], refl_arr[2]);
    end
    
    // ── Parallel intersection with all 3 spheres ──────────────────────────────
    logic        hit_arr [0:2];
    logic signed [31:0] t_arr [0:2];
    
    genvar i;
    generate
        for (i = 0; i < 3; i++) begin : g_sphere
            ray_sphere_intersect u_intersect (
                .ox(32'sd0), .oy(32'sd0), .oz(32'sd0),  // Camera at origin
                .dx(norm_dx), .dy(norm_dy), .dz(norm_dz),
                .cx(cx_arr[i]), .cy(cy_arr[i]), .cz(cz_arr[i]),
                .radius(radius_arr[i]),
                .hit(hit_arr[i]),
                .t(t_arr[i])
            );
        end
    endgenerate
    
    // ── Find nearest hit ──────────────────────────────────────────────────────
    logic        nearest_hit;
    logic signed [31:0] nearest_t;
    logic [7:0]  nearest_colorR, nearest_colorG, nearest_colorB;
    logic signed [31:0] nearest_cx, nearest_cy, nearest_cz;
    
    always_comb begin
        nearest_hit = 1'b0;
        nearest_t = 32'sd2147483647;  // Max positive
        nearest_colorR = 8'd0;
        nearest_colorG = 8'd0;
        nearest_colorB = 8'd32;
        nearest_cx = 32'sd0;
        nearest_cy = 32'sd0;
        nearest_cz = 32'sd0;
        
        for (int j = 0; j < 3; j++) begin
            if (hit_arr[j] && t_arr[j] > 32'sd0) begin
                if (!nearest_hit || t_arr[j] < nearest_t) begin
                    nearest_hit = 1'b1;
                    nearest_t = t_arr[j];
                    nearest_colorR = colorR_arr[j];
                    nearest_colorG = colorG_arr[j];
                    nearest_colorB = colorB_arr[j];
                    nearest_cx = cx_arr[j];
                    nearest_cy = cy_arr[j];
                    nearest_cz = cz_arr[j];
                end
            end
        end
    end
    
    // ── Hit point and normal ──────────────────────────────────────────────────
    logic signed [31:0] hit_x, hit_y, hit_z;
    logic signed [31:0] norm_raw_x, norm_raw_y, norm_raw_z;
    logic signed [31:0] normal_x, normal_y, normal_z;
    
    q16_mul u_hit_x (.a(nearest_t), .b(norm_dx), .prod(hit_x));
    q16_mul u_hit_y (.a(nearest_t), .b(norm_dy), .prod(hit_y));
    q16_mul u_hit_z (.a(nearest_t), .b(norm_dz), .prod(hit_z));
    
    q16_sub u_norm_x (.a(hit_x), .b(nearest_cx), .diff(norm_raw_x));
    q16_sub u_norm_y (.a(hit_y), .b(nearest_cy), .diff(norm_raw_y));
    q16_sub u_norm_z (.a(hit_z), .b(nearest_cz), .diff(norm_raw_z));
    
    vec3_normalize u_normal (
        .x(norm_raw_x), .y(norm_raw_y), .z(norm_raw_z),
        .nx(normal_x), .ny(normal_y), .nz(normal_z)
    );
    
    // ── Lighting ──────────────────────────────────────────────────────────────
    logic signed [31:0] light_x, light_y, light_z;
    logic [7:0] light_colorR, light_colorG, light_colorB;
    logic signed [31:0] light_intensity;
    
    always_comb begin
        getLight0(light_x, light_y, light_z,
                  light_colorR, light_colorG, light_colorB,
                  light_intensity);
    end
    
    logic signed [31:0] to_light_x, to_light_y, to_light_z;
    q16_sub u_tl_x (.a(light_x), .b(hit_x), .diff(to_light_x));
    q16_sub u_tl_y (.a(light_y), .b(hit_y), .diff(to_light_y));
    q16_sub u_tl_z (.a(light_z), .b(hit_z), .diff(to_light_z));
    
    logic signed [31:0] ldir_x, ldir_y, ldir_z;
    vec3_normalize u_ldir (
        .x(to_light_x), .y(to_light_y), .z(to_light_z),
        .nx(ldir_x), .ny(ldir_y), .nz(ldir_z)
    );
    
    logic signed [31:0] ndotl;
    vec3_dot u_ndotl (
        .ax(normal_x), .ay(normal_y), .az(normal_z),
        .bx(ldir_x), .by(ldir_y), .bz(ldir_z),
        .dot(ndotl)
    );
    
    // ── Shading calculation ───────────────────────────────────────────────────
    logic [15:0] final_r, final_g, final_b;
    logic [7:0] ambient_r, ambient_g, ambient_b;
    logic signed [31:0] ndotl_clamped;
    logic [31:0] diffuse_r, diffuse_g, diffuse_b;
    
    always_comb begin
        final_r = 16'd0;
        final_g = 16'd0;
        final_b = 16'd32;
        ambient_r = 8'd0;
        ambient_g = 8'd0;
        ambient_b = 8'd0;
        ndotl_clamped = 32'sd0;
        diffuse_r = 32'd0;
        diffuse_g = 32'd0;
        diffuse_b = 32'd0;
        
        if (nearest_hit) begin
            ambient_r = nearest_colorR >>> 3;
            ambient_g = nearest_colorG >>> 3;
            ambient_b = nearest_colorB >>> 3;
            
            if (ndotl > 32'sd0) begin
                ndotl_clamped = (ndotl > 32'sd65536) ? 32'sd65536 : ndotl;
                
                diffuse_r = ({24'd0, nearest_colorR} * ndotl_clamped) >>> 16;
                diffuse_g = ({24'd0, nearest_colorG} * ndotl_clamped) >>> 16;
                diffuse_b = ({24'd0, nearest_colorB} * ndotl_clamped) >>> 16;
                
                final_r = {8'd0, ambient_r} + diffuse_r[15:0];
                final_g = {8'd0, ambient_g} + diffuse_g[15:0];
                final_b = {8'd0, ambient_b} + diffuse_b[15:0];
            end else begin
                final_r = {8'd0, ambient_r};
                final_g = {8'd0, ambient_g};
                final_b = {8'd0, ambient_b};
            end
        end else begin
            final_r = 16'd0;
            final_g = 16'd0;
            final_b = 16'd32;
        end
    end
    
    // ── Output ────────────────────────────────────────────────────────────────
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rgb_r <= 8'd0;
            rgb_g <= 8'd0;
            rgb_b <= 8'd32;
            output_valid <= 1'b0;
        end else begin
            output_valid <= (state == OUTPUT);
            
            if (state == OUTPUT) begin
                rgb_r <= (final_r > 16'd255) ? 8'd255 : final_r[7:0];
                rgb_g <= (final_g > 16'd255) ? 8'd255 : final_g[7:0];
                rgb_b <= (final_b > 16'd255) ? 8'd255 : final_b[7:0];
            end
        end
    end

endmodule

`default_nettype wire
