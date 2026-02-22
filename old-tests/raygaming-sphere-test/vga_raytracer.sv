// VGA Raytracer Top Module
// Renders a 3D sphere using ray-sphere intersection
// Outputs 640x480 @ 60Hz VGA timing

module vga_raytracer (
    input  logic clock,
    input  logic reset,
    
    // VGA outputs
    output logic hsync,
    output logic vsync,
    output logic visible,
    output logic [9:0] x_coord,
    output logic [9:0] y_coord,
    output logic [7:0] red,
    output logic [7:0] green,
    output logic [7:0] blue
);

    // VGA timing parameters for 640x480 @ 60Hz
    // Pixel clock: 25.175 MHz (we'll use 25 MHz approximation)
    localparam H_VISIBLE    = 640;
    localparam H_FRONT      = 16;
    localparam H_SYNC       = 96;
    localparam H_BACK       = 48;
    localparam H_TOTAL      = H_VISIBLE + H_FRONT + H_SYNC + H_BACK;
    
    localparam V_VISIBLE    = 480;
    localparam V_FRONT      = 10;
    localparam V_SYNC       = 2;
    localparam V_BACK       = 33;
    localparam V_TOTAL      = V_VISIBLE + V_FRONT + V_SYNC + V_BACK;
    
    // VGA counters
    logic [9:0] h_count;
    logic [9:0] v_count;
    
    // Pixel clock divider (50MHz -> 25MHz)
    logic pixel_clock;
    always_ff @(posedge clock or posedge reset) begin
        if (reset)
            pixel_clock <= 1'b0;
        else
            pixel_clock <= ~pixel_clock;
    end
    
    // Horizontal counter
    always_ff @(posedge pixel_clock or posedge reset) begin
        if (reset) begin
            h_count <= 10'd0;
        end else begin
            if (h_count == H_TOTAL - 1)
                h_count <= 10'd0;
            else
                h_count <= h_count + 10'd1;
        end
    end
    
    // Vertical counter
    always_ff @(posedge pixel_clock or posedge reset) begin
        if (reset) begin
            v_count <= 10'd0;
        end else begin
            if (h_count == H_TOTAL - 1) begin
                if (v_count == V_TOTAL - 1)
                    v_count <= 10'd0;
                else
                    v_count <= v_count + 10'd1;
            end
        end
    end
    
    // Generate sync signals
    assign hsync = ~((h_count >= (H_VISIBLE + H_FRONT)) && 
                     (h_count < (H_VISIBLE + H_FRONT + H_SYNC)));
    
    assign vsync = ~((v_count >= (V_VISIBLE + V_FRONT)) && 
                     (v_count < (V_VISIBLE + V_FRONT + V_SYNC)));
    
    assign visible = (h_count < H_VISIBLE) && (v_count < V_VISIBLE);
    assign x_coord = h_count;
    assign y_coord = v_count;
    
    // Ray generation for current pixel
    logic signed [15:0] ray_origin_x, ray_origin_y, ray_origin_z;
    logic signed [15:0] ray_dir_x, ray_dir_y, ray_dir_z;
    
    // Sphere parameters (Q8.8 fixed-point)
    logic signed [15:0] sphere_center_x, sphere_center_y, sphere_center_z;
    logic signed [15:0] sphere_radius;
    
    // Set up camera and sphere (in Q8.8 format)
    // Camera at origin (0, 0, -10)
    assign ray_origin_x = 16'sd0;           // 0.0
    assign ray_origin_y = 16'sd0;           // 0.0
    assign ray_origin_z = -16'sd2560;       // -10.0 in Q8.8
    
    // Sphere at (0, 0, 10) with radius 5
    assign sphere_center_x = 16'sd0;        // 0.0
    assign sphere_center_y = 16'sd0;        // 0.0
    assign sphere_center_z = 16'sd2560;     // 10.0 in Q8.8
    assign sphere_radius = 16'sd1280;       // 5.0 in Q8.8
    
    // Convert pixel coordinates to ray direction
    // Map screen space (-320 to 320, -240 to 240) to view plane
    logic signed [15:0] screen_x, screen_y;
    logic signed [15:0] screen_x_centered, screen_y_centered;
    
    assign screen_x = {6'd0, h_count};
    assign screen_y = {6'd0, v_count};
    
    // Center and scale (Q8.8: divide by 32 for reasonable FOV)
    assign screen_x_centered = (screen_x - 16'sd320) <<< 3;  // Scale to Q8.8
    assign screen_y_centered = (16'sd240 - screen_y) <<< 3;  // Invert Y and scale to Q8.8
    
    // Ray direction (normalized-ish): pointing forward with X,Y offset
    // For simplicity, we use non-normalized directions (good enough for intersection test)
    assign ray_dir_x = screen_x_centered >>> 3;  // Reduce magnitude
    assign ray_dir_y = screen_y_centered >>> 3;
    assign ray_dir_z = 16'sd256;  // 1.0 in Q8.8 (forward)
    
    // Ray-sphere intersection module
    logic valid_in;
    logic valid_out;
    logic hit;
    logic signed [15:0] t_value;
    
    // Generate valid signal for visible pixels
    logic visible_delayed;
    always_ff @(posedge clock or posedge reset) begin
        if (reset)
            visible_delayed <= 1'b0;
        else
            visible_delayed <= visible;
    end
    
    // Trigger intersection test for each pixel
    assign valid_in = visible && !visible_delayed;
    
    ray_sphere_intersect intersect_unit (
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
    
    // Simple geometric sphere rendering (no pipeline delay needed)
    // Calculate if pixel is inside sphere's projection
    logic signed [17:0] dx, dy;
    logic signed [31:0] dist_sq;
    logic in_sphere;
    
    // Sphere center in screen space (pixel coordinates * 256 for Q8.8)
    localparam signed [17:0] SPHERE_CENTER_X_SCREEN = 18'sd81920; // 320 * 256
    localparam signed [17:0] SPHERE_CENTER_Y_SCREEN = 18'sd61440; // 240 * 256
    localparam signed [17:0] SPHERE_RADIUS_SCREEN   = 18'sd25600; // 100 * 256 (pixels)
    
    always_comb begin
        // Calculate distance from pixel to sphere center
        dx = ({8'd0, h_count} <<< 8) - SPHERE_CENTER_X_SCREEN;
        dy = ({8'd0, v_count} <<< 8) - SPHERE_CENTER_Y_SCREEN;
        dist_sq = (dx * dx + dy * dy) >>> 8; // Q8.8
        
        // Check if inside sphere
        in_sphere = (dist_sq < (SPHERE_RADIUS_SCREEN * SPHERE_RADIUS_SCREEN) >>> 8);
    end
    
    // Color generation
    logic [7:0] pixel_red, pixel_green, pixel_blue;
    
    always_comb begin
        if (visible) begin
            if (in_sphere) begin
                // Inside sphere - create gradient shading from center
                logic [7:0] shade;
                // Use distance for shading (darker at edges)
                shade = 8'd255 - dist_sq[15:8];
                
                // Orange/red sphere
                pixel_red   = shade;
                pixel_green = shade >>> 1;
                pixel_blue  = shade >>> 2;
            end else begin
                // Background - dark blue
                pixel_red   = 8'd20;
                pixel_green = 8'd30;
                pixel_blue  = 8'd60;
            end
        end else begin
            // Blanking period
            pixel_red   = 8'd0;
            pixel_green = 8'd0;
            pixel_blue  = 8'd0;
        end
    end
    
    // Register outputs
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            red   <= 8'd0;
            green <= 8'd0;
            blue  <= 8'd0;
        end else begin
            red   <= pixel_red;
            green <= pixel_green;
            blue  <= pixel_blue;
        end
    end

endmodule
