`timescale 1ns/1ps
`default_nettype none

// ============================================================================
// VGA Wrapper for Voxel Raytracer
// 
// This wrapper adapts the job-based voxel raytracer to a VGA pixel interface.
// It performs the following functions:
// 1. Loads a test voxel scene into RAM at startup
// 2. Generates ray parameters for each VGA pixel based on camera setup
// 3. Manages the ray job pipeline to render each pixel
// 4. Outputs RGB colors for the VGA display
//
// The voxel raytracer uses DDA (Digital Differential Analyzer) to march through
// a 32x32x32 voxel grid. This wrapper creates a simple test scene and renders
// it from a fixed camera position.
// ============================================================================

module voxel_raytracer_vga_wrapper (
    input  logic        clk,
    input  logic        rst_n,
    input  logic [9:0]  pixel_x,
    input  logic [9:0]  pixel_y,
    input  logic        pixel_valid,
    output logic [7:0]  rgb_r,
    output logic [7:0]  rgb_g,
    output logic [7:0]  rgb_b
);

    // ========================================================================
    // Parameters
    // ========================================================================
    localparam int ADDR_BITS = 15;
    localparam int COORD_BITS = 6;
    localparam int TIMER_WIDTH = 32;
    localparam int MAX_STEPS_BITS = 10;
    
    // Camera parameters (fixed-point Q16.16 format for timer values)
    // Camera at position (-16, -16, -16) looking toward (+1, +1, +1)
    localparam logic signed [31:0] CAM_X = -32'sd1048576;  // -16.0 in Q16.16
    localparam logic signed [31:0] CAM_Y = -32'sd1048576;  // -16.0 in Q16.16
    localparam logic signed [31:0] CAM_Z = -32'sd1048576;  // -16.0 in Q16.16
    
    // Ray direction scale (FOV control)
    localparam int FOV_SHIFT = 7;  // Divide screen coords by 128 for FOV
    
    // ========================================================================
    // State Machine States
    // ========================================================================
    typedef enum logic [2:0] {
        ST_INIT,           // Initial state
        ST_LOAD_SCENE,     // Loading voxel scene
        ST_WAIT_PIXEL,     // Waiting for valid pixel
        ST_COMPUTE_RAY,    // Computing ray parameters
        ST_SEND_JOB,       // Sending ray job
        ST_WAIT_RESULT     // Waiting for ray result
    } state_t;
    
    state_t state_q, state_d;
    
    // ========================================================================
    // Scene Loading
    // ========================================================================
    logic                  load_mode_q;
    logic                  load_valid;
    logic                  load_ready;
    logic [ADDR_BITS-1:0]  load_addr;
    logic                  load_data;
    logic [ADDR_BITS:0]    write_count;
    logic                  load_complete;
    
    // Scene loading counter
    logic [ADDR_BITS-1:0]  scene_addr_q;
    logic                  scene_load_done_q;
    
    // ========================================================================
    // Ray Job Interface
    // ========================================================================
    logic                     job_valid;
    logic                     job_ready;
    logic [COORD_BITS-1:0]    job_ix0;
    logic [COORD_BITS-1:0]    job_iy0;
    logic [COORD_BITS-1:0]    job_iz0;
    logic                     job_sx;
    logic                     job_sy;
    logic                     job_sz;
    logic [TIMER_WIDTH-1:0]   job_next_x;
    logic [TIMER_WIDTH-1:0]   job_next_y;
    logic [TIMER_WIDTH-1:0]   job_next_z;
    logic [TIMER_WIDTH-1:0]   job_inc_x;
    logic [TIMER_WIDTH-1:0]   job_inc_y;
    logic [TIMER_WIDTH-1:0]   job_inc_z;
    logic [MAX_STEPS_BITS-1:0] job_max_steps;
    
    // ========================================================================
    // Ray Results
    // ========================================================================
    logic                  ray_done;
    logic                  ray_hit;
    logic                  ray_timeout;
    logic [15:0]           hit_voxel_x;
    logic [15:0]           hit_voxel_y;
    logic [15:0]           hit_voxel_z;
    logic [2:0]            hit_face_id;
    logic [15:0]           steps_taken;
    
    // ========================================================================
    // Pixel buffering
    // ========================================================================
    logic [9:0] pixel_x_q, pixel_y_q;
    logic       pixel_valid_q;
    
    // Ray computation intermediates
    logic signed [10:0] centered_x, centered_y;  // Screen space: -320 to +319, -240 to +239
    logic signed [31:0] ray_dx, ray_dy, ray_dz;  // Ray direction (fixed-point)
    logic signed [31:0] step_x, step_y, step_z;  // DDA step increments
    
    // ========================================================================
    // Color palette based on hit position and face
    // ========================================================================
    function automatic logic [7:0] get_color_r(logic hit, logic [2:0] face);
        if (!hit) return 8'd20;  // Background
        case (face)
            3'd0: return 8'd200; // +X face: red
            3'd1: return 8'd100; // -X face: dark red
            3'd2: return 8'd100; // +Y face: dark green
            3'd3: return 8'd50;  // -Y face: darker green
            3'd4: return 8'd50;  // +Z face: dark blue
            3'd5: return 8'd25;  // -Z face: darker blue
            default: return 8'd128;
        endcase
    endfunction
    
    function automatic logic [7:0] get_color_g(logic hit, logic [2:0] face);
        if (!hit) return 8'd20;
        case (face)
            3'd0: return 8'd50;
            3'd1: return 8'd25;
            3'd2: return 8'd200;
            3'd3: return 8'd100;
            3'd4: return 8'd50;
            3'd5: return 8'd25;
            default: return 8'd128;
        endcase
    endfunction
    
    function automatic logic [7:0] get_color_b(logic hit, logic [2:0] face);
        if (!hit) return 8'd40;
        case (face)
            3'd0: return 8'd50;
            3'd1: return 8'd25;
            3'd2: return 8'd50;
            3'd3: return 8'd25;
            3'd4: return 8'd200;
            3'd5: return 8'd150;
            default: return 8'd128;
        endcase
    endfunction
    
    // ========================================================================
    // Scene Data Generation
    // Create a simple test scene: hollow cube from (8,8,8) to (23,23,23)
    // ========================================================================
    function automatic logic get_voxel_data(logic [ADDR_BITS-1:0] addr);
        logic [4:0] x, y, z;
        logic x_wall, y_wall, z_wall;
        logic in_range_x, in_range_y, in_range_z;
        
        // Decode linear address to 3D coordinates (5 bits each for 32^3)
        x = addr[14:10];
        y = addr[9:5];
        z = addr[4:0];
        
        // Hollow cube: walls at x,y,z = 8 or 23, and 8 <= other coords <= 23
        x_wall = (x == 5'd8 || x == 5'd23);
        y_wall = (y == 5'd8 || y == 5'd23);
        z_wall = (z == 5'd8 || z == 5'd23);
        in_range_x = (x >= 5'd8 && x <= 5'd23);
        in_range_y = (y >= 5'd8 && y <= 5'd23);
        in_range_z = (z >= 5'd8 && z <= 5'd23);
        
        // Voxel is solid if on a wall and in range for other dimensions
        return (x_wall && in_range_y && in_range_z) ||
               (y_wall && in_range_x && in_range_z) ||
               (z_wall && in_range_x && in_range_y);
    endfunction
    
    // ========================================================================
    // State Machine
    // ========================================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= ST_INIT;
            scene_addr_q <= '0;
            scene_load_done_q <= 1'b0;
            load_mode_q <= 1'b0;
            pixel_x_q <= '0;
            pixel_y_q <= '0;
            pixel_valid_q <= 1'b0;
        end else begin
            state_q <= state_d;
            
            // Scene loading logic
            if (state_q == ST_INIT) begin
                load_mode_q <= 1'b1;
                scene_addr_q <= '0;
                scene_load_done_q <= 1'b0;
            end else if (state_q == ST_LOAD_SCENE && load_ready) begin
                if (scene_addr_q == {ADDR_BITS{1'b1}}) begin
                    scene_load_done_q <= 1'b1;
                    load_mode_q <= 1'b0;
                end else begin
                    scene_addr_q <= scene_addr_q + 1'b1;
                end
            end
            
            // Pixel capture
            if (state_q == ST_WAIT_PIXEL && pixel_valid) begin
                pixel_x_q <= pixel_x;
                pixel_y_q <= pixel_y;
                pixel_valid_q <= 1'b1;
            end else if (state_q == ST_SEND_JOB) begin
                pixel_valid_q <= 1'b0;
            end
        end
    end
    
    // State transitions
    always_comb begin
        state_d = state_q;
        
        case (state_q)
            ST_INIT: begin
                state_d = ST_LOAD_SCENE;
            end
            
            ST_LOAD_SCENE: begin
                if (scene_load_done_q && load_complete)
                    state_d = ST_WAIT_PIXEL;
            end
            
            ST_WAIT_PIXEL: begin
                if (pixel_valid)
                    state_d = ST_COMPUTE_RAY;
            end
            
            ST_COMPUTE_RAY: begin
                state_d = ST_SEND_JOB;
            end
            
            ST_SEND_JOB: begin
                if (job_ready)
                    state_d = ST_WAIT_RESULT;
            end
            
            ST_WAIT_RESULT: begin
                if (ray_done)
                    state_d = ST_WAIT_PIXEL;
            end
            
            default: state_d = ST_INIT;
        endcase
    end
    
    // ========================================================================
    // Ray Parameter Computation
    // ========================================================================
    always_comb begin
        // Center the pixel coordinates
        centered_x = $signed({1'b0, pixel_x_q}) - 11'sd320;
        centered_y = 11'sd240 - $signed({1'b0, pixel_y_q});
        
        // Ray direction (normalized-ish, pointing from camera toward pixel)
        // Scale down screen coordinates for FOV
        ray_dx = {{21{centered_x[10]}}, centered_x} << (16 - FOV_SHIFT);
        ray_dy = {{21{centered_y[10]}}, centered_y} << (16 - FOV_SHIFT);
        ray_dz = 32'sd65536;  // Forward (1.0 in Q16.16)
        
        // DDA step increments (reciprocal of direction for stepping)
        // Simplified: use small fixed steps based on dominant direction
        // For this demo, use unit steps in the dominant direction
        step_x = (ray_dx[31] ? -32'sd65536 : 32'sd65536);  // ±1.0
        step_y = (ray_dy[31] ? -32'sd65536 : 32'sd65536);
        step_z = (ray_dz[31] ? -32'sd65536 : 32'sd65536);
    end
    
    // ========================================================================
    // Job Control
    // ========================================================================
    always_comb begin
        // Scene loading
        load_valid = (state_q == ST_LOAD_SCENE) && !scene_load_done_q;
        load_addr = scene_addr_q;
        load_data = get_voxel_data(scene_addr_q);
        
        // Job submission
        job_valid = (state_q == ST_SEND_JOB);
        
        // Ray starting position (camera position + small offset to enter grid)
        job_ix0 = 6'd0;   // Start at grid origin
        job_iy0 = 6'd0;
        job_iz0 = 6'd0;
        
        // Ray direction signs
        job_sx = !ray_dx[31];  // 0 if negative, 1 if positive
        job_sy = !ray_dy[31];
        job_sz = !ray_dz[31];
        
        // DDA timer values (when to step in each dimension)
        // Start at 0 and increment by reciprocals
        job_next_x = step_x;
        job_next_y = step_y;
        job_next_z = step_z;
        
        // Step increments (how much to add each time we step)
        job_inc_x = step_x;
        job_inc_y = step_y;
        job_inc_z = step_z;
        
        // Maximum steps before timeout
        job_max_steps = 10'd200;
    end
    
    // ========================================================================
    // Output Color Logic
    // ========================================================================
    logic [7:0] output_r, output_g, output_b;
    
    always_comb begin
        if (state_q == ST_WAIT_PIXEL || state_q == ST_COMPUTE_RAY) begin
            // Show last result or background
            output_r = get_color_r(ray_hit, hit_face_id);
            output_g = get_color_g(ray_hit, hit_face_id);
            output_b = get_color_b(ray_hit, hit_face_id);
        end else begin
            // Loading or processing
            output_r = 8'd40;
            output_g = 8'd40;
            output_b = 8'd60;
        end
    end
    
    // Register outputs
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rgb_r <= 8'd0;
            rgb_g <= 8'd0;
            rgb_b <= 8'd0;
        end else begin
            rgb_r <= output_r;
            rgb_g <= output_g;
            rgb_b <= output_b;
        end
    end
    
    // ========================================================================
    // Raytracer Instantiation
    // ========================================================================
    raytracer_top #(
        .COORD_WIDTH(16),
        .COORD_W(COORD_BITS),
        .TIMER_WIDTH(TIMER_WIDTH),
        .W(TIMER_WIDTH),
        .MAX_VAL(31),
        .ADDR_BITS(ADDR_BITS),
        .X_BITS(COORD_BITS),
        .Y_BITS(COORD_BITS),
        .Z_BITS(COORD_BITS),
        .MAX_STEPS_BITS(MAX_STEPS_BITS),
        .STEP_COUNT_WIDTH(16)
    ) u_raytracer (
        .clk(clk),
        .rst_n(rst_n),
        
        // Ray job interface
        .job_valid(job_valid),
        .job_ready(job_ready),
        .job_ix0(job_ix0),
        .job_iy0(job_iy0),
        .job_iz0(job_iz0),
        .job_sx(job_sx),
        .job_sy(job_sy),
        .job_sz(job_sz),
        .job_next_x(job_next_x),
        .job_next_y(job_next_y),
        .job_next_z(job_next_z),
        .job_inc_x(job_inc_x),
        .job_inc_y(job_inc_y),
        .job_inc_z(job_inc_z),
        .job_max_steps(job_max_steps),
        
        // Scene loading interface
        .load_mode(load_mode_q),
        .load_valid(load_valid),
        .load_ready(load_ready),
        .load_addr(load_addr),
        .load_data(load_data),
        .write_count(write_count),
        .load_complete(load_complete),
        
        // Results
        .ray_done(ray_done),
        .ray_hit(ray_hit),
        .ray_timeout(ray_timeout),
        .hit_voxel_x(hit_voxel_x),
        .hit_voxel_y(hit_voxel_y),
        .hit_voxel_z(hit_voxel_z),
        .hit_face_id(hit_face_id),
        .steps_taken(steps_taken)
    );

endmodule

`default_nettype wire
