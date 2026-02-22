// Enhanced Raycaster with Keyboard Controls and Larger Map
// Uses Q8.8 fixed-point format for position (8 integer bits, 8 fractional bits)
// 16x16 map with more detailed layout
// WASD controls: W=forward, S=backward, A=turn left, D=turn right

module raycasterKeyboard(
    input clock,
    input reset,
    input [9:0] xOrd,        // X coordinate (0-639)
    input [9:0] yOrd,        // Y coordinate (0-479)
    input visible,           // Pixel is in visible region
    input [7:0] asciiCode,   // ASCII code from keyboard
    input asciiReady,        // Pulse when new key pressed
    output reg [7:0] red,
    output reg [7:0] green,
    output reg [7:0] blue,
    // Outputs for minimap
    output [15:0] playerX,   // Q8.8 format
    output [15:0] playerY,   // Q8.8 format
    output [8:0] playerAngle // 0-359 degrees
);

    // Player position (in Q8.8 fixed-point, represents position in 16x16 map)
    reg signed [15:0] posX;
    reg signed [15:0] posY;
    
    // Player direction angle (0-359 degrees)
    reg [8:0] angle;
    
    // Movement parameters
    localparam signed [15:0] MOVE_SPEED = 16'h0040;  // 0.25 tiles per move
    localparam TURN_SPEED = 9'd15;  // 15 degrees per turn
    
    // Expose position for minimap
    assign playerX = posX;
    assign playerY = posY;
    assign playerAngle = angle;
    
    // 16x16 map (1 = wall, 0 = empty)
    // 256-bit map stored as array
    reg [255:0] worldMap;
    
    initial begin
        // Row 0
        worldMap[0]=1; worldMap[1]=1; worldMap[2]=1; worldMap[3]=1; worldMap[4]=1; worldMap[5]=1; worldMap[6]=1; worldMap[7]=1;
        worldMap[8]=1; worldMap[9]=1; worldMap[10]=1; worldMap[11]=1; worldMap[12]=1; worldMap[13]=1; worldMap[14]=1; worldMap[15]=1;
        // Row 1
        worldMap[16]=1; worldMap[17]=0; worldMap[18]=0; worldMap[19]=0; worldMap[20]=0; worldMap[21]=0; worldMap[22]=0; worldMap[23]=1;
        worldMap[24]=1; worldMap[25]=0; worldMap[26]=0; worldMap[27]=0; worldMap[28]=0; worldMap[29]=0; worldMap[30]=0; worldMap[31]=1;
        // Row 2
        worldMap[32]=1; worldMap[33]=0; worldMap[34]=1; worldMap[35]=1; worldMap[36]=1; worldMap[37]=0; worldMap[38]=1; worldMap[39]=1;
        worldMap[40]=1; worldMap[41]=0; worldMap[42]=1; worldMap[43]=0; worldMap[44]=0; worldMap[45]=0; worldMap[46]=1; worldMap[47]=1;
        // Row 3
        worldMap[48]=1; worldMap[49]=0; worldMap[50]=1; worldMap[51]=0; worldMap[52]=0; worldMap[53]=0; worldMap[54]=0; worldMap[55]=0;
        worldMap[56]=0; worldMap[57]=0; worldMap[58]=1; worldMap[59]=0; worldMap[60]=1; worldMap[61]=0; worldMap[62]=0; worldMap[63]=1;
        // Row 4
        worldMap[64]=1; worldMap[65]=0; worldMap[66]=1; worldMap[67]=1; worldMap[68]=1; worldMap[69]=0; worldMap[70]=1; worldMap[71]=0;
        worldMap[72]=1; worldMap[73]=0; worldMap[74]=1; worldMap[75]=1; worldMap[76]=1; worldMap[77]=0; worldMap[78]=0; worldMap[79]=1;
        // Row 5
        worldMap[80]=1; worldMap[81]=0; worldMap[82]=0; worldMap[83]=0; worldMap[84]=0; worldMap[85]=0; worldMap[86]=0; worldMap[87]=0;
        worldMap[88]=0; worldMap[89]=0; worldMap[90]=0; worldMap[91]=0; worldMap[92]=1; worldMap[93]=1; worldMap[94]=0; worldMap[95]=1;
        // Row 6
        worldMap[96]=1; worldMap[97]=0; worldMap[98]=1; worldMap[99]=1; worldMap[100]=1; worldMap[101]=1; worldMap[102]=1; worldMap[103]=1;
        worldMap[104]=1; worldMap[105]=1; worldMap[106]=1; worldMap[107]=0; worldMap[108]=0; worldMap[109]=1; worldMap[110]=0; worldMap[111]=1;
        // Row 7
        worldMap[112]=1; worldMap[113]=0; worldMap[114]=1; worldMap[115]=0; worldMap[116]=0; worldMap[117]=0; worldMap[118]=0; worldMap[119]=0;
        worldMap[120]=0; worldMap[121]=0; worldMap[122]=0; worldMap[123]=0; worldMap[124]=0; worldMap[125]=0; worldMap[126]=0; worldMap[127]=1;
        // Row 8
        worldMap[128]=1; worldMap[129]=0; worldMap[130]=1; worldMap[131]=0; worldMap[132]=1; worldMap[133]=1; worldMap[134]=1; worldMap[135]=0;
        worldMap[136]=1; worldMap[137]=1; worldMap[138]=1; worldMap[139]=0; worldMap[140]=1; worldMap[141]=1; worldMap[142]=1; worldMap[143]=1;
        // Row 9
        worldMap[144]=1; worldMap[145]=0; worldMap[146]=0; worldMap[147]=0; worldMap[148]=1; worldMap[149]=0; worldMap[150]=0; worldMap[151]=0;
        worldMap[152]=0; worldMap[153]=0; worldMap[154]=1; worldMap[155]=0; worldMap[156]=0; worldMap[157]=0; worldMap[158]=0; worldMap[159]=1;
        // Row 10
        worldMap[160]=1; worldMap[161]=1; worldMap[162]=1; worldMap[163]=0; worldMap[164]=1; worldMap[165]=0; worldMap[166]=1; worldMap[167]=1;
        worldMap[168]=1; worldMap[169]=0; worldMap[170]=1; worldMap[171]=0; worldMap[172]=1; worldMap[173]=0; worldMap[174]=1; worldMap[175]=1;
        // Row 11
        worldMap[176]=1; worldMap[177]=0; worldMap[178]=0; worldMap[179]=0; worldMap[180]=1; worldMap[181]=0; worldMap[182]=0; worldMap[183]=0;
        worldMap[184]=1; worldMap[185]=0; worldMap[186]=1; worldMap[187]=0; worldMap[188]=1; worldMap[189]=0; worldMap[190]=0; worldMap[191]=1;
        // Row 12
        worldMap[192]=1; worldMap[193]=0; worldMap[194]=1; worldMap[195]=1; worldMap[196]=1; worldMap[197]=1; worldMap[198]=1; worldMap[199]=0;
        worldMap[200]=1; worldMap[201]=0; worldMap[202]=1; worldMap[203]=0; worldMap[204]=1; worldMap[205]=1; worldMap[206]=1; worldMap[207]=1;
        // Row 13
        worldMap[208]=1; worldMap[209]=0; worldMap[210]=0; worldMap[211]=0; worldMap[212]=0; worldMap[213]=0; worldMap[214]=0; worldMap[215]=0;
        worldMap[216]=0; worldMap[217]=0; worldMap[218]=0; worldMap[219]=0; worldMap[220]=0; worldMap[221]=0; worldMap[222]=0; worldMap[223]=1;
        // Row 14
        worldMap[224]=1; worldMap[225]=0; worldMap[226]=1; worldMap[227]=1; worldMap[228]=1; worldMap[229]=1; worldMap[230]=1; worldMap[231]=1;
        worldMap[232]=1; worldMap[233]=1; worldMap[234]=1; worldMap[235]=1; worldMap[236]=1; worldMap[237]=1; worldMap[238]=0; worldMap[239]=1;
        // Row 15
        worldMap[240]=1; worldMap[241]=1; worldMap[242]=1; worldMap[243]=1; worldMap[244]=1; worldMap[245]=1; worldMap[246]=1; worldMap[247]=1;
        worldMap[248]=1; worldMap[249]=1; worldMap[250]=1; worldMap[251]=1; worldMap[252]=1; worldMap[253]=1; worldMap[254]=1; worldMap[255]=1;
    end
    
    // Initialize player position and angle
    initial begin
        posX = 16'h0280;  // 2.5 in Q8.8
        posY = 16'h0280;  // 2.5 in Q8.8
        angle = 9'd0;     // Facing east
    end
    
    // Handle keyboard input
    always @(posedge clock) begin
        if (reset) begin
            posX <= 16'h0280;
            posY <= 16'h0280;
            angle <= 9'd0;
        end else if (asciiReady) begin
            case (asciiCode)
                8'd119, 8'd87: begin  // 'w' or 'W' - move forward
                    // Calculate new position based on angle
                    case (angle / 45)
                        0: posX <= posX + MOVE_SPEED;  // East
                        1: begin posX <= posX + (MOVE_SPEED >>> 1); posY <= posY + (MOVE_SPEED >>> 1); end  // NE
                        2: posY <= posY + MOVE_SPEED;  // North
                        3: begin posX <= posX - (MOVE_SPEED >>> 1); posY <= posY + (MOVE_SPEED >>> 1); end  // NW
                        4: posX <= posX - MOVE_SPEED;  // West
                        5: begin posX <= posX - (MOVE_SPEED >>> 1); posY <= posY - (MOVE_SPEED >>> 1); end  // SW
                        6: posY <= posY - MOVE_SPEED;  // South
                        7: begin posX <= posX + (MOVE_SPEED >>> 1); posY <= posY - (MOVE_SPEED >>> 1); end  // SE
                    endcase
                end
                
                8'd115, 8'd83: begin  // 's' or 'S' - move backward
                    // Move opposite direction
                    case (angle / 45)
                        0: posX <= posX - MOVE_SPEED;  // West
                        1: begin posX <= posX - (MOVE_SPEED >>> 1); posY <= posY - (MOVE_SPEED >>> 1); end  // SW
                        2: posY <= posY - MOVE_SPEED;  // South
                        3: begin posX <= posX + (MOVE_SPEED >>> 1); posY <= posY - (MOVE_SPEED >>> 1); end  // SE
                        4: posX <= posX + MOVE_SPEED;  // East
                        5: begin posX <= posX + (MOVE_SPEED >>> 1); posY <= posY + (MOVE_SPEED >>> 1); end  // NE
                        6: posY <= posY + MOVE_SPEED;  // North
                        7: begin posX <= posX - (MOVE_SPEED >>> 1); posY <= posY + (MOVE_SPEED >>> 1); end  // NW
                    endcase
                end
                
                8'd97, 8'd65: begin  // 'a' or 'A' - turn left
                    if (angle < TURN_SPEED)
                        angle <= angle + 9'd360 - TURN_SPEED;
                    else
                        angle <= angle - TURN_SPEED;
                end
                
                8'd100, 8'd68: begin  // 'd' or 'D' - turn right
                    if (angle + TURN_SPEED >= 9'd360)
                        angle <= angle + TURN_SPEED - 9'd360;
                    else
                        angle <= angle + TURN_SPEED;
                end
            endcase
        end
    end
    
    // Ray casting logic (similar to original but using dynamic position/angle)
    wire signed [10:0] rayAngleOffset;
    wire signed [10:0] rayAngle;
    
    assign rayAngleOffset = ((xOrd - 320) * 3) >>> 5;
    assign rayAngle = angle + rayAngleOffset;
    
    reg signed [15:0] rayDirX;
    reg signed [15:0] rayDirY;
    
    wire [2:0] directionIndex;
    wire [10:0] normalizedAngle;
    assign normalizedAngle = (rayAngle < 0) ? (rayAngle + 11'd360) : 
                             (rayAngle >= 360) ? (rayAngle - 11'd360) : rayAngle;
    assign directionIndex = normalizedAngle / 11'd45;
    
    always @(*) begin
        case (directionIndex)
            3'b000: begin rayDirX = 16'h0100; rayDirY = 16'h0000; end  // East
            3'b001: begin rayDirX = 16'h00B5; rayDirY = 16'h00B5; end  // NE
            3'b010: begin rayDirX = 16'h0000; rayDirY = 16'h0100; end  // North
            3'b011: begin rayDirX = -16'h00B5; rayDirY = 16'h00B5; end // NW
            3'b100: begin rayDirX = -16'h0100; rayDirY = 16'h0000; end // West
            3'b101: begin rayDirX = -16'h00B5; rayDirY = -16'h00B5; end// SW
            3'b110: begin rayDirX = 16'h0000; rayDirY = -16'h0100; end // South
            3'b111: begin rayDirX = 16'h00B5; rayDirY = -16'h00B5; end // SE
        endcase
    end
    
    // Simplified ray casting
    reg [7:0] wallDistance;
    reg hitWall;
    reg [5:0] mapX, mapY;
    
    always @(*) begin
        hitWall = 0;
        wallDistance = 255;
        
        mapX = posX[15:8];
        mapY = posY[15:8];
        
        // Check adjacent tiles
        if (rayDirX > 0 && mapX < 15) begin
            if (worldMap[(mapY * 16) + mapX + 1]) begin
                hitWall = 1;
                wallDistance = 64;
            end
        end else if (rayDirX < 0 && mapX > 0) begin
            if (worldMap[(mapY * 16) + mapX - 1]) begin
                hitWall = 1;
                wallDistance = 64;
            end
        end
        
        if (!hitWall) begin
            if (rayDirY > 0 && mapY < 15) begin
                if (worldMap[((mapY + 1) * 16) + mapX]) begin
                    hitWall = 1;
                    wallDistance = 64;
                end
            end else if (rayDirY < 0 && mapY > 0) begin
                if (worldMap[((mapY - 1) * 16) + mapX]) begin
                    hitWall = 1;
                    wallDistance = 64;
                end
            end
        end
        
        // Check diagonals
        if (!hitWall) begin
            if (rayDirX > 0 && rayDirY > 0 && mapX < 15 && mapY < 15) begin
                if (worldMap[((mapY + 1) * 16) + mapX + 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end else if (rayDirX < 0 && rayDirY > 0 && mapX > 0 && mapY < 15) begin
                if (worldMap[((mapY + 1) * 16) + mapX - 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end else if (rayDirX < 0 && rayDirY < 0 && mapX > 0 && mapY > 0) begin
                if (worldMap[((mapY - 1) * 16) + mapX - 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end else if (rayDirX > 0 && rayDirY < 0 && mapX < 15 && mapY > 0) begin
                if (worldMap[((mapY - 1) * 16) + mapX + 1]) begin
                    hitWall = 1;
                    wallDistance = 90;
                end
            end
        end
        
        if (!hitWall) begin
            wallDistance = 200;
        end
    end
    
    // Calculate wall rendering
    localparam SCREEN_HEIGHT = 480;
    localparam HORIZON_LINE = 240;
    
    wire [9:0] wallHeight;
    assign wallHeight = (wallDistance > 0) ? ((SCREEN_HEIGHT << 4) / wallDistance) : SCREEN_HEIGHT;
    
    wire [9:0] wallTop;
    wire [9:0] wallBottom;
    assign wallTop = (wallHeight < HORIZON_LINE) ? (HORIZON_LINE - (wallHeight >> 1)) : 0;
    assign wallBottom = (wallHeight < HORIZON_LINE) ? (HORIZON_LINE + (wallHeight >> 1)) : SCREEN_HEIGHT;
    
    // Render pixel
    always @(posedge clock) begin
        if (reset) begin
            red <= 8'h00;
            green <= 8'h00;
            blue <= 8'h00;
        end else if (visible) begin
            if (yOrd < wallTop) begin
                // Sky
                red <= 8'h40;
                green <= 8'h60;
                blue <= 8'hC0;
            end else if (yOrd >= wallTop && yOrd <= wallBottom && hitWall) begin
                // Wall with fog
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
            end else begin
                // Floor
                red <= 8'h30;
                green <= 8'h40;
                blue <= 8'h30;
            end
        end else begin
            red <= 8'h00;
            green <= 8'h00;
            blue <= 8'h00;
        end
    end

endmodule
