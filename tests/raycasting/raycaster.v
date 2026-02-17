// Simple Raycaster Module using Fixed-Point Math
// Uses Q8.8 fixed-point format (8 integer bits, 8 fractional bits)
// Renders a 3D view of a 2D tile-based map

module raycaster(
    input clock,
    input reset,
    input [9:0] xOrd,        // X coordinate (0-639)
    input [9:0] yOrd,        // Y coordinate (0-479)
    input visible,           // Pixel is in visible region
    output reg [7:0] red,
    output reg [7:0] green,
    output reg [7:0] blue
);

    // Fixed-point format: Q8.8 (8 integer bits, 8 fractional bits)
    // This gives us range of 0-255 with 1/256 precision
    
    // Player position (in Q8.8 fixed-point, represents position in 8x8 map)
    localparam signed [15:0] PLAYER_X = 16'h0280;  // 2.5 in Q8.8 (2*256 + 128)
    localparam signed [15:0] PLAYER_Y = 16'h0280;  // 2.5 in Q8.8
    
    // Player direction angle - now dynamic, rotates automatically
    reg [8:0] playerAngle;  // 0-359 degrees
    
    // Rotation counter - rotate every 0.01 seconds (500,000 cycles at 50MHz)
    reg [19:0] rotationCounter;
    localparam ROTATION_INTERVAL = 20'd500000;  // 0.01 seconds at 50MHz
    localparam ROTATION_STEP = 9'd5;  // 5 degrees per step
    
    always @(posedge clock) begin
        if (reset) begin
            playerAngle <= 9'd0;
            rotationCounter <= 20'd0;
        end else begin
            if (rotationCounter >= ROTATION_INTERVAL - 1) begin
                rotationCounter <= 20'd0;
                // Increment angle by 5 degrees, wrap at 360
                if (playerAngle >= 9'd355)
                    playerAngle <= 9'd0;
                else
                    playerAngle <= playerAngle + ROTATION_STEP;
            end else begin
                rotationCounter <= rotationCounter + 20'd1;
            end
        end
    end
    
    // View parameters
    localparam SCREEN_WIDTH = 640;
    localparam SCREEN_HEIGHT = 480;
    localparam HORIZON_LINE = 240;  // Middle of screen
    localparam MAX_RAY_DEPTH = 16;  // Maximum ray casting distance
    
    // Simple 8x8 map (1 = wall, 0 = empty)
    // Map stored as 64-bit value, indexed by [y*8 + x]
    reg [63:0] worldMap;
    
    initial begin
        // Define a simple maze
        worldMap[0]  = 1; worldMap[1]  = 1; worldMap[2]  = 1; worldMap[3]  = 1;
        worldMap[4]  = 1; worldMap[5]  = 1; worldMap[6]  = 1; worldMap[7]  = 1;
        
        worldMap[8]  = 1; worldMap[9]  = 0; worldMap[10] = 0; worldMap[11] = 0;
        worldMap[12] = 0; worldMap[13] = 0; worldMap[14] = 0; worldMap[15] = 1;
        
        worldMap[16] = 1; worldMap[17] = 0; worldMap[18] = 1; worldMap[19] = 1;
        worldMap[20] = 1; worldMap[21] = 0; worldMap[22] = 0; worldMap[23] = 1;
        
        worldMap[24] = 1; worldMap[25] = 0; worldMap[26] = 0; worldMap[27] = 0;
        worldMap[28] = 1; worldMap[29] = 0; worldMap[30] = 1; worldMap[31] = 1;
        
        worldMap[32] = 1; worldMap[33] = 0; worldMap[34] = 1; worldMap[35] = 0;
        worldMap[36] = 0; worldMap[37] = 0; worldMap[38] = 0; worldMap[39] = 1;
        
        worldMap[40] = 1; worldMap[41] = 0; worldMap[42] = 1; worldMap[43] = 1;
        worldMap[44] = 1; worldMap[45] = 1; worldMap[46] = 0; worldMap[47] = 1;
        
        worldMap[48] = 1; worldMap[49] = 0; worldMap[50] = 0; worldMap[51] = 0;
        worldMap[52] = 0; worldMap[53] = 0; worldMap[54] = 0; worldMap[55] = 1;
        
        worldMap[56] = 1; worldMap[57] = 1; worldMap[58] = 1; worldMap[59] = 1;
        worldMap[60] = 1; worldMap[61] = 1; worldMap[62] = 1; worldMap[63] = 1;
    end
    
    // Calculate ray direction for current x coordinate
    // Ray angle = player angle + FOV adjustment based on x position
    wire signed [10:0] rayAngleOffset;
    wire signed [10:0] rayAngle;
    
    // FOV of approximately 60 degrees
    // Offset ranges from -30 to +30 degrees
    // Scale: (x - 320) * 60 / 640 = (x - 320) * 3 / 32
    assign rayAngleOffset = ((xOrd - 320) * 3) >>> 5;  // Arithmetic shift for signed division
    assign rayAngle = playerAngle + rayAngleOffset;
    
    // Simplified ray direction vectors (using lookup for small angles)
    // For simplicity, we'll use 8 primary directions
    reg signed [15:0] rayDirX;
    reg signed [15:0] rayDirY;
    
    // Map angle to direction (simplified to 8 directions)
    // Each direction covers 45 degrees (360/8)
    wire [2:0] directionIndex;
    wire [10:0] normalizedAngle;
    // Normalize angle to 0-359 range
    assign normalizedAngle = (rayAngle < 0) ? (rayAngle + 11'd360) : 
                             (rayAngle >= 360) ? (rayAngle - 11'd360) : rayAngle;
    // Divide by 45 to get direction index (0-7)
    assign directionIndex = normalizedAngle / 11'd45;
    
    always @(*) begin
        case (directionIndex)
            3'b000: begin rayDirX = 16'h0100; rayDirY = 16'h0000; end  // East (1,0)
            3'b001: begin rayDirX = 16'h00B5; rayDirY = 16'h00B5; end  // NE (0.707,0.707)
            3'b010: begin rayDirX = 16'h0000; rayDirY = 16'h0100; end  // North (0,1)
            3'b011: begin rayDirX = -16'h00B5; rayDirY = 16'h00B5; end // NW (-0.707,0.707)
            3'b100: begin rayDirX = -16'h0100; rayDirY = 16'h0000; end // West (-1,0)
            3'b101: begin rayDirX = -16'h00B5; rayDirY = -16'h00B5; end// SW (-0.707,-0.707)
            3'b110: begin rayDirX = 16'h0000; rayDirY = -16'h0100; end // South (0,-1)
            3'b111: begin rayDirX = 16'h00B5; rayDirY = -16'h00B5; end // SE (0.707,-0.707)
        endcase
    end
    
    // Simplified ray casting: calculate approximate distance
    // For real-time rendering, we'll use a simplified distance calculation
    reg [7:0] wallDistance;
    reg hitWall;
    reg [5:0] mapX, mapY;  // Current map tile being checked
    
    always @(*) begin
        // Initialize
        hitWall = 0;
        wallDistance = 255;  // Max distance
        
        // Starting position
        mapX = PLAYER_X[15:8];  // Get integer part
        mapY = PLAYER_Y[15:8];
        
        // Simple distance calculation based on ray direction and position
        // Check immediate surroundings in ray direction
        if (rayDirX > 0 && mapX < 7) begin
            if (worldMap[(mapY * 8) + mapX + 1]) begin
                hitWall = 1;
                wallDistance = 64;  // Close distance
            end
        end else if (rayDirX < 0 && mapX > 0) begin
            if (worldMap[(mapY * 8) + mapX - 1]) begin
                hitWall = 1;
                wallDistance = 64;
            end
        end
        
        if (!hitWall) begin
            if (rayDirY > 0 && mapY < 7) begin
                if (worldMap[((mapY + 1) * 8) + mapX]) begin
                    hitWall = 1;
                    wallDistance = 64;
                end
            end else if (rayDirY < 0 && mapY > 0) begin
                if (worldMap[((mapY - 1) * 8) + mapX]) begin
                    hitWall = 1;
                    wallDistance = 64;
                end
            end
        end
        
        // Check diagonals if no hit yet
        if (!hitWall) begin
            if (rayDirX > 0 && rayDirY > 0 && mapX < 7 && mapY < 7) begin
                if (worldMap[((mapY + 1) * 8) + mapX + 1]) begin
                    hitWall = 1;
                    wallDistance = 90;  // Diagonal distance (sqrt(2) * 64)
                end
            end else if (rayDirX < 0 && rayDirY > 0 && mapX > 0 && mapY < 7) begin
                if (worldMap[((mapY + 1) * 8) + mapX - 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end else if (rayDirX < 0 && rayDirY < 0 && mapX > 0 && mapY > 0) begin
                if (worldMap[((mapY - 1) * 8) + mapX - 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end else if (rayDirX > 0 && rayDirY < 0 && mapX < 7 && mapY > 0) begin
                if (worldMap[((mapY - 1) * 8) + mapX + 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end
        end
        
        // If still no hit, far distance
        if (!hitWall) begin
            wallDistance = 200;
        end
    end
    
    // Calculate wall height based on distance
    // Wall height = (screen_height / 2) / distance
    wire [9:0] wallHeight;
    assign wallHeight = (wallDistance > 0) ? ((SCREEN_HEIGHT << 4) / wallDistance) : SCREEN_HEIGHT;
    
    // Calculate wall top and bottom on screen
    wire [9:0] wallTop;
    wire [9:0] wallBottom;
    assign wallTop = (wallHeight < HORIZON_LINE) ? (HORIZON_LINE - (wallHeight >> 1)) : 0;
    assign wallBottom = (wallHeight < HORIZON_LINE) ? (HORIZON_LINE + (wallHeight >> 1)) : SCREEN_HEIGHT;
    
    // Render pixel based on position
    always @(posedge clock) begin
        if (reset) begin
            red <= 8'h00;
            green <= 8'h00;
            blue <= 8'h00;
        end else if (visible) begin
            // Sky (top half)
            if (yOrd < wallTop) begin
                red <= 8'h40;
                green <= 8'h60;
                blue <= 8'hC0;
            end
            // Wall
            else if (yOrd >= wallTop && yOrd <= wallBottom && hitWall) begin
                // Wall color based on distance (fog effect)
                if (wallDistance < 80) begin
                    red <= 8'hC0;
                    green <= 8'h80;
                    blue <= 8'h40;
                end else if (wallDistance < 120) begin
                    red <= 8'h90;
                    green <= 8'h60;
                    blue <= 8'h30;
                end else begin
                    red <= 8'h60;
                    green <= 8'h40;
                    blue <= 8'h20;
                end
            end
            // Floor (bottom half)
            else begin
                red <= 8'h30;
                green <= 8'h40;
                blue <= 8'h30;
            end
        end else begin
            // Not visible - black
            red <= 8'h00;
            green <= 8'h00;
            blue <= 8'h00;
        end
    end

endmodule
