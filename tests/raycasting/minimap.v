// Minimap Module - displays 16x16 map in bottom-left corner
// Shows walls as white, empty space as dark gray, player as red dot

module minimap(
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    input [15:0] playerX,    // Q8.8 format
    input [15:0] playerY,    // Q8.8 format
    input [8:0] playerAngle, // 0-359 degrees
    output reg [7:0] red,
    output reg [7:0] green,
    output reg [7:0] blue,
    output reg isMinimapPixel
);

    // Minimap position: bottom-left corner
    localparam MINIMAP_X = 10;
    localparam MINIMAP_Y = 330;
    localparam MINIMAP_SIZE = 128;  // 128x128 pixels (16x16 tiles * 8 pixels per tile)
    localparam TILE_SIZE = 8;       // 8 pixels per map tile
    
    // 16x16 map (same as raycaster)
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
    
    // Check if current pixel is in minimap region
    wire inMinimapRegion;
    assign inMinimapRegion = visible && 
                             (xOrd >= MINIMAP_X) && (xOrd < MINIMAP_X + MINIMAP_SIZE) &&
                             (yOrd >= MINIMAP_Y) && (yOrd < MINIMAP_Y + MINIMAP_SIZE);
    
    // Calculate minimap coordinates
    wire [7:0] minimapX;
    wire [7:0] minimapY;
    assign minimapX = xOrd - MINIMAP_X;
    assign minimapY = yOrd - MINIMAP_Y;
    
    // Which tile in the map
    wire [3:0] mapTileX;
    wire [3:0] mapTileY;
    assign mapTileX = minimapX / TILE_SIZE;
    assign mapTileY = minimapY / TILE_SIZE;
    
    // Get wall status for this tile
    wire isWall;
    assign isWall = worldMap[(mapTileY * 16) + mapTileX];
    
    // Calculate player position on minimap
    wire [7:0] playerMinimapX;
    wire [7:0] playerMinimapY;
    // Convert Q8.8 position to pixel position on minimap
    assign playerMinimapX = (playerX[15:8] * TILE_SIZE) + (playerX[7:5]);  // Use top 3 fractional bits for sub-tile
    assign playerMinimapY = (playerY[15:8] * TILE_SIZE) + (playerY[7:5]);
    
    // Check if this pixel is the player (3x3 dot)
    wire isPlayerPixel;
    assign isPlayerPixel = (minimapX >= playerMinimapX - 1) && (minimapX <= playerMinimapX + 1) &&
                           (minimapY >= playerMinimapY - 1) && (minimapY <= playerMinimapY + 1);
    
    // Draw direction indicator (2 pixels ahead of player)
    wire [7:0] dirX;
    wire [7:0] dirY;
    assign dirX = playerMinimapX + ((playerAngle < 45 || playerAngle >= 315) ? 2 :
                                     (playerAngle >= 45 && playerAngle < 135) ? 0 :
                                     (playerAngle >= 135 && playerAngle < 225) ? -2 : 0);
    assign dirY = playerMinimapY + ((playerAngle >= 45 && playerAngle < 135) ? 2 :
                                     (playerAngle >= 135 && playerAngle < 225) ? 0 :
                                     (playerAngle >= 225 && playerAngle < 315) ? -2 : 0);
    
    wire isDirectionPixel;
    assign isDirectionPixel = (minimapX == dirX) && (minimapY == dirY);
    
    // Output minimap colors
    always @(*) begin
        if (inMinimapRegion) begin
            isMinimapPixel = 1'b1;
            if (isPlayerPixel) begin
                // Player dot (red)
                red = 8'hFF;
                green = 8'h00;
                blue = 8'h00;
            end else if (isDirectionPixel) begin
                // Direction indicator (yellow)
                red = 8'hFF;
                green = 8'hFF;
                blue = 8'h00;
            end else if (isWall) begin
                // Wall (white)
                red = 8'hE0;
                green = 8'hE0;
                blue = 8'hE0;
            end else begin
                // Empty space (dark gray)
                red = 8'h20;
                green = 8'h20;
                blue = 8'h20;
            end
        end else begin
            isMinimapPixel = 1'b0;
            red = 8'h00;
            green = 8'h00;
            blue = 8'h00;
        end
    end

endmodule
