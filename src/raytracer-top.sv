// ─────────────────────────────────────────────────────────────────────────────
// raytracer_simple.sv  —  FSM raytracer with shadows + multi-bounce reflection
//
// Intentionally non-pipelined and non-latent for VGA bench streaming:
//  - Evaluate current pixel combinationally
//  - No cross-pixel state/latency
//
// Features:
//  - Q16.16 math throughout
//  - shadow ray test (multi-light, 3 spheres)
//  - up to 4 bounces, MAX_ITERATIONS budget like C++
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

    localparam int NUM_SPHERES     = scene_lut::NUM_SPHERES;
    localparam int NUM_LIGHTS      = scene_lut::NUM_LIGHTS;
    localparam int MAX_BOUNCES     = 4;
    localparam int MAX_ITERATIONS  = 8;
    localparam logic signed [31:0] Q16_ONE = 32'sd65536;
    localparam logic signed [31:0] Q16_EPS = 32'sd655;     // ~0.01
    localparam logic signed [31:0] BG_BLUE_Q8 = 32'sd32;

    // ── Scene data ────────────────────────────────────────────────────────────
    logic signed [31:0] cx_arr [0:NUM_SPHERES-1];
    logic signed [31:0] cy_arr [0:NUM_SPHERES-1];
    logic signed [31:0] cz_arr [0:NUM_SPHERES-1];
    logic signed [31:0] radius_arr [0:NUM_SPHERES-1];
    logic [7:0]  colorR_arr [0:NUM_SPHERES-1];
    logic [7:0]  colorG_arr [0:NUM_SPHERES-1];
    logic [7:0]  colorB_arr [0:NUM_SPHERES-1];
    logic signed [31:0] refl_arr [0:NUM_SPHERES-1];

    always_comb begin
        for (int i = 0; i < NUM_SPHERES; i++) begin
            cx_arr[i] = scene_lut::SPHERES[i].cx;
            cy_arr[i] = scene_lut::SPHERES[i].cy;
            cz_arr[i] = scene_lut::SPHERES[i].cz;
            radius_arr[i] = scene_lut::SPHERES[i].radius;
            colorR_arr[i] = scene_lut::SPHERES[i].colorR;
            colorG_arr[i] = scene_lut::SPHERES[i].colorG;
            colorB_arr[i] = scene_lut::SPHERES[i].colorB;
            refl_arr[i] = scene_lut::SPHERES[i].reflectivity;
        end
    end

    // ── Q16 helpers ───────────────────────────────────────────────────────────
    function automatic logic signed [31:0] q16_mul_fn(
        input logic signed [31:0] a,
        input logic signed [31:0] b
    );
        logic signed [63:0] full_prod;
        logic signed [63:0] rounded;
        begin
            full_prod = a * b;
            rounded = full_prod + 64'sd32768;
            q16_mul_fn = rounded[47:16];
        end
    endfunction

    function automatic logic signed [31:0] q16_div_fn(
        input logic signed [31:0] a,
        input logic signed [31:0] b
    );
        logic signed [63:0] dividend_shifted;
        logic signed [31:0] quotient;
        begin
            if (b == 32'sd0) begin
                quotient = (a >= 32'sd0) ? 32'sd2147483647 : -32'sd2147483647;
            end else begin
                dividend_shifted = $signed(a) <<< 16;
                quotient = dividend_shifted / b;
            end
            q16_div_fn = quotient;
        end
    endfunction

    function automatic logic signed [31:0] q16_dot3_fn(
        input logic signed [31:0] ax, ay, az,
        input logic signed [31:0] bx, by, bz
    );
        logic signed [63:0] px, py, pz;
        begin
            px = (ax * bx) >>> 16;
            py = (ay * by) >>> 16;
            pz = (az * bz) >>> 16;
            q16_dot3_fn = px[31:0] + py[31:0] + pz[31:0];
        end
    endfunction

    function automatic logic signed [31:0] q16_sqrt_fn(
        input logic signed [31:0] a
    );
        logic [63:0] v, rem, r;
        logic [31:0] result;
        begin
            if (a <= 32'sd0) begin
                q16_sqrt_fn = 32'sd0;
            end else begin
                v = {32'h0, a[31:0]} <<< 16;
                rem = 64'd0;
                r = 64'd0;
                for (int i = 23; i >= 0; i = i - 1) begin
                    rem = (rem << 2) | ((v >>> (i * 2)) & 64'd3);
                    if (rem >= ((r << 2) | 64'd1)) begin
                        rem = rem - ((r << 2) | 64'd1);
                        r = (r << 1) | 64'd1;
                    end else begin
                        r = r << 1;
                    end
                end
                result = r[31:0];
                q16_sqrt_fn = result;
            end
        end
    endfunction

    function automatic logic [7:0] clamp_u8_fn(input int v);
        begin
            if (v < 0) begin
                clamp_u8_fn = 8'd0;
            end else if (v > 255) begin
                clamp_u8_fn = 8'd255;
            end else begin
                clamp_u8_fn = v[7:0];
            end
        end
    endfunction

    task automatic normalize3_task(
        input  logic signed [31:0] x,
        input  logic signed [31:0] y,
        input  logic signed [31:0] z,
        output logic signed [31:0] nx,
        output logic signed [31:0] ny,
        output logic signed [31:0] nz
    );
        logic signed [31:0] mag2, mag;
        begin
            mag2 = q16_dot3_fn(x, y, z, x, y, z);
            mag = q16_sqrt_fn(mag2);
            if (mag <= 32'sd0) begin
                nx = 32'sd0;
                ny = 32'sd0;
                nz = 32'sd0;
            end else begin
                nx = q16_div_fn(x, mag);
                ny = q16_div_fn(y, mag);
                nz = q16_div_fn(z, mag);
            end
        end
    endtask

    task automatic ray_sphere_task(
        input  logic signed [31:0] ox, oy, oz,
        input  logic signed [31:0] dx, dy, dz,
        input  logic signed [31:0] cx, cy, cz,
        input  logic signed [31:0] radius,
        output logic               hit,
        output logic signed [31:0] t
    );
        logic signed [31:0] lx, ly, lz;
        logic signed [31:0] a, halfB, l2, r2, c;
        logic signed [31:0] hb2, ac, disc, sqrtDisc;
        logic signed [31:0] negHalfB, num0, num1, t0, t1;
        begin
            lx = ox - cx;
            ly = oy - cy;
            lz = oz - cz;

            a = q16_dot3_fn(dx, dy, dz, dx, dy, dz);
            halfB = q16_dot3_fn(lx, ly, lz, dx, dy, dz);
            l2 = q16_dot3_fn(lx, ly, lz, lx, ly, lz);
            r2 = q16_mul_fn(radius, radius);
            c = l2 - r2;

            hb2 = q16_mul_fn(halfB, halfB);
            ac = q16_mul_fn(a, c);
            disc = hb2 - ac;

            hit = 1'b0;
            t = 32'sd0;

            if (disc >= 32'sd0 && a != 32'sd0) begin
                sqrtDisc = q16_sqrt_fn(disc);
                negHalfB = -halfB;
                num0 = negHalfB - sqrtDisc;
                num1 = negHalfB + sqrtDisc;
                t0 = q16_div_fn(num0, a);
                t1 = q16_div_fn(num1, a);

                if (t0 > 32'sd0 && t1 > 32'sd0) begin
                    hit = 1'b1;
                    t = (t0 < t1) ? t0 : t1;
                end else if (t0 > 32'sd0) begin
                    hit = 1'b1;
                    t = t0;
                end else if (t1 > 32'sd0) begin
                    hit = 1'b1;
                    t = t1;
                end
            end
        end
    endtask

    logic [7:0] final_r_comb;
    logic [7:0] final_g_comb;
    logic [7:0] final_b_comb;

    // ── Full per-pixel trace (combinational, based on current pixel) ─────────
    always_comb begin
        logic signed [31:0] ray_ox, ray_oy, ray_oz;
        logic signed [31:0] ray_dx, ray_dy, ray_dz;
        logic signed [31:0] raw_dx, raw_dy, raw_dz;
        logic signed [31:0] centered_x, centered_y;

        logic nearest_hit;
        logic signed [31:0] nearest_t;
        int nearest_idx;

        logic hit_tmp;
        logic signed [31:0] t_tmp;

        logic signed [31:0] hit_x, hit_y, hit_z;
        logic signed [31:0] norm_x, norm_y, norm_z;
        logic signed [31:0] norm_raw_x, norm_raw_y, norm_raw_z;

        logic signed [31:0] to_light_x, to_light_y, to_light_z;
        logic signed [31:0] ldir_x, ldir_y, ldir_z;
        logic signed [31:0] ndotl;
        logic signed [31:0] dist_to_light;
        logic signed [31:0] light_x, light_y, light_z;
        logic signed [31:0] light_intensity;
        logic [7:0] light_colorR, light_colorG, light_colorB;

        logic signed [31:0] shad_ox, shad_oy, shad_oz;
        logic in_shadow;

        logic signed [31:0] ndotn, two_ndotn;
        logic signed [31:0] proj_x, proj_y, proj_z;
        logic signed [31:0] refl_raw_x, refl_raw_y, refl_raw_z;

        logic signed [31:0] eps_nx, eps_ny, eps_nz;

        int accum_r_i, accum_g_i, accum_b_i;
        int shade_r_i, shade_g_i, shade_b_i;
        int weight_i;
        int iter_i;
        int rMix_i;
        int difQInt_i;

        centered_x = $signed({1'b0, pixel_x}) - 32'sd320;
        centered_y = 32'sd240 - $signed({1'b0, pixel_y});
        raw_dx = centered_x <<< 14;
        raw_dy = centered_y <<< 14;
        raw_dz = 32'sd6553600;

        normalize3_task(raw_dx, raw_dy, raw_dz, ray_dx, ray_dy, ray_dz);
        ray_ox = 32'sd0;
        ray_oy = 32'sd0;
        ray_oz = 32'sd0;

        accum_r_i = 0;
        accum_g_i = 0;
        accum_b_i = 0;
        weight_i = 16; // Q4.4
        iter_i = 0;

        for (int bounce = 0; bounce < MAX_BOUNCES; bounce++) begin
            if (iter_i >= MAX_ITERATIONS) begin
                break;
            end

            iter_i = iter_i + 1;

            nearest_hit = 1'b0;
            nearest_t = 32'sd2147483647;
            nearest_idx = -1;

            for (int si = 0; si < NUM_SPHERES; si++) begin
                ray_sphere_task(ray_ox, ray_oy, ray_oz,
                                ray_dx, ray_dy, ray_dz,
                                cx_arr[si], cy_arr[si], cz_arr[si], radius_arr[si],
                                hit_tmp, t_tmp);
                if (hit_tmp && t_tmp > 32'sd0) begin
                    if (!nearest_hit || t_tmp < nearest_t) begin
                        nearest_hit = 1'b1;
                        nearest_t = t_tmp;
                        nearest_idx = si;
                    end
                end
            end

            if (!nearest_hit) begin
                accum_r_i = accum_r_i + ((0 * weight_i) >>> 4);
                accum_g_i = accum_g_i + ((0 * weight_i) >>> 4);
                accum_b_i = accum_b_i + ((BG_BLUE_Q8 * weight_i) >>> 4);
                break;
            end

            hit_x = ray_ox + q16_mul_fn(nearest_t, ray_dx);
            hit_y = ray_oy + q16_mul_fn(nearest_t, ray_dy);
            hit_z = ray_oz + q16_mul_fn(nearest_t, ray_dz);

            norm_raw_x = hit_x - cx_arr[nearest_idx];
            norm_raw_y = hit_y - cy_arr[nearest_idx];
            norm_raw_z = hit_z - cz_arr[nearest_idx];
            normalize3_task(norm_raw_x, norm_raw_y, norm_raw_z, norm_x, norm_y, norm_z);

            shade_r_i = int'(colorR_arr[nearest_idx]) >>> 3;
            shade_g_i = int'(colorG_arr[nearest_idx]) >>> 3;
            shade_b_i = int'(colorB_arr[nearest_idx]) >>> 3;

            for (int li = 0; li < NUM_LIGHTS; li++) begin
                if (iter_i >= MAX_ITERATIONS) begin
                    break;
                end

                light_x = scene_lut::LIGHTS[li].lx;
                light_y = scene_lut::LIGHTS[li].ly;
                light_z = scene_lut::LIGHTS[li].lz;
                light_colorR = scene_lut::LIGHTS[li].colorR;
                light_colorG = scene_lut::LIGHTS[li].colorG;
                light_colorB = scene_lut::LIGHTS[li].colorB;
                light_intensity = scene_lut::LIGHTS[li].intensity;

                to_light_x = light_x - hit_x;
                to_light_y = light_y - hit_y;
                to_light_z = light_z - hit_z;
                dist_to_light = q16_sqrt_fn(q16_dot3_fn(to_light_x, to_light_y, to_light_z,
                                                        to_light_x, to_light_y, to_light_z));
                normalize3_task(to_light_x, to_light_y, to_light_z, ldir_x, ldir_y, ldir_z);
                ndotl = q16_dot3_fn(norm_x, norm_y, norm_z, ldir_x, ldir_y, ldir_z);

                in_shadow = 1'b0;
                if (ndotl > 32'sd0) begin
                    eps_nx = q16_mul_fn(norm_x, Q16_EPS);
                    eps_ny = q16_mul_fn(norm_y, Q16_EPS);
                    eps_nz = q16_mul_fn(norm_z, Q16_EPS);

                    shad_ox = hit_x + eps_nx;
                    shad_oy = hit_y + eps_ny;
                    shad_oz = hit_z + eps_nz;

                    for (int si2 = 0; si2 < NUM_SPHERES; si2++) begin
                        if (iter_i >= MAX_ITERATIONS) begin
                            break;
                        end

                        iter_i = iter_i + 1;

                        ray_sphere_task(shad_ox, shad_oy, shad_oz,
                                        ldir_x, ldir_y, ldir_z,
                                        cx_arr[si2], cy_arr[si2], cz_arr[si2], radius_arr[si2],
                                        hit_tmp, t_tmp);

                        if (hit_tmp && t_tmp > 32'sd0 && t_tmp < dist_to_light) begin
                            in_shadow = 1'b1;
                            break;
                        end
                    end

                    if (!in_shadow) begin
                        difQInt_i = (q16_mul_fn(ndotl, light_intensity)) >>> 12;
                        if (difQInt_i > 16) begin
                            difQInt_i = 16;
                        end
                        if (difQInt_i < 0) begin
                            difQInt_i = 0;
                        end

                        shade_r_i = shade_r_i
                                  + ((((int'(colorR_arr[nearest_idx]) * int'(light_colorR)) >>> 8)
                                       * difQInt_i) >>> 4);
                        shade_g_i = shade_g_i
                                  + ((((int'(colorG_arr[nearest_idx]) * int'(light_colorG)) >>> 8)
                                       * difQInt_i) >>> 4);
                        shade_b_i = shade_b_i
                                  + ((((int'(colorB_arr[nearest_idx]) * int'(light_colorB)) >>> 8)
                                       * difQInt_i) >>> 4);
                    end
                end
            end

            accum_r_i = accum_r_i + ((shade_r_i * weight_i) >>> 4);
            accum_g_i = accum_g_i + ((shade_g_i * weight_i) >>> 4);
            accum_b_i = accum_b_i + ((shade_b_i * weight_i) >>> 4);

            rMix_i = int'(refl_arr[nearest_idx]) >>> 12;
            if (rMix_i < 0) begin
                rMix_i = 0;
            end
            if (rMix_i > 16) begin
                rMix_i = 16;
            end

            if (rMix_i == 0 || iter_i >= MAX_ITERATIONS) begin
                break;
            end

            weight_i = (weight_i * rMix_i) >>> 4;
            if (weight_i < 1) begin
                break;
            end

            ndotn = q16_dot3_fn(ray_dx, ray_dy, ray_dz, norm_x, norm_y, norm_z);
            two_ndotn = ndotn + ndotn;
            proj_x = q16_mul_fn(norm_x, two_ndotn);
            proj_y = q16_mul_fn(norm_y, two_ndotn);
            proj_z = q16_mul_fn(norm_z, two_ndotn);
            refl_raw_x = ray_dx - proj_x;
            refl_raw_y = ray_dy - proj_y;
            refl_raw_z = ray_dz - proj_z;
            normalize3_task(refl_raw_x, refl_raw_y, refl_raw_z, ray_dx, ray_dy, ray_dz);

            eps_nx = q16_mul_fn(norm_x, Q16_EPS);
            eps_ny = q16_mul_fn(norm_y, Q16_EPS);
            eps_nz = q16_mul_fn(norm_z, Q16_EPS);
            ray_ox = hit_x + eps_nx;
            ray_oy = hit_y + eps_ny;
            ray_oz = hit_z + eps_nz;
        end

        final_r_comb = clamp_u8_fn(accum_r_i);
        final_g_comb = clamp_u8_fn(accum_g_i);
        final_b_comb = clamp_u8_fn(accum_b_i);
    end
    
    // ── Output (aligned to current input pixel) ──────────────────────────────
    always_comb begin
        if (!rst_n || !pixel_valid) begin
            rgb_r = 8'd0;
            rgb_g = 8'd0;
            rgb_b = 8'd32;
            output_valid = 1'b0;
        end else begin
            rgb_r = final_r_comb;
            rgb_g = final_g_comb;
            rgb_b = final_b_comb;
            output_valid = 1'b1;
        end
    end

endmodule

`default_nettype wire
