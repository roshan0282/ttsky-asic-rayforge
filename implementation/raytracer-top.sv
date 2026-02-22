module raytracer_top (
    input  logic        clk,
    input  logic        rst_n,
    input  logic [9:0]  pixel_x,
    input  logic [9:0]  pixel_y,
    input  logic        pixel_valid,
    output logic [7:0]  rgb_r,
    output logic [7:0]  rgb_g,
    output logic [7:0]  rgb_b
);

`include "scene-lut.svh"

// ─────────────────────────────────────────────────────────────────────────────
// Camera ray generation per pixel
//
// Use rawDx = centeredX/4 for 4× finer band resolution vs the old /16.
// rawDz = 128  (8.0 world units focal depth, keeps same FOV as /16 + rawDz=32).
// Overflow check: dot((80,60,128),(80,60,128))/16 = 1649 < 2047 ✓
// ─────────────────────────────────────────────────────────────────────────────
logic signed [12:0] centeredX, centeredY;
logic signed [11:0] rawDx, rawDy, rawDz;
logic signed [11:0] normDx, normDy, normDz;

always_comb begin
    centeredX = $signed({1'b0, pixel_x}) - 13'sd320;
    centeredY = 13'sd240 - $signed({1'b0, pixel_y});
    // Arithmetic right-shift: centeredX is signed [12:0], so >>> preserves sign.
    // Do NOT use centeredX[11:0]>>>2 — part-selects are unsigned in SV and
    // would flip the sign of the left/bottom half of the screen.
    rawDx     = centeredX >>> 2;   // ÷4: 4-pixel precision, sign preserved
    rawDy     = centeredY >>> 2;
    rawDz     = 12'sd128;          // focal depth 8.0 world
end

fixed_vec3_normalize u_camNormalize (
    .x(rawDx), .y(rawDy), .z(rawDz),
    .nx(normDx), .ny(normDy), .nz(normDz)
);

// ─────────────────────────────────────────────────────────────────────────────
// Parallel sphere intersection for all spheres in the scene
// Fixes the serial scan: previously only 1-in-5 pixels rendered; now every pixel.
// ─────────────────────────────────────────────────────────────────────────────
logic                 sHitArr    [0:SCENE_SPHERE_COUNT-1];
logic signed [11:0]   sTArr      [0:SCENE_SPHERE_COUNT-1];
logic signed [11:0]   sCxArr     [0:SCENE_SPHERE_COUNT-1];
logic signed [11:0]   sCyArr     [0:SCENE_SPHERE_COUNT-1];
logic signed [11:0]   sCzArr     [0:SCENE_SPHERE_COUNT-1];
logic signed [11:0]   sReflArr   [0:SCENE_SPHERE_COUNT-1];
logic [7:0]           sColorRArr [0:SCENE_SPHERE_COUNT-1];
logic [7:0]           sColorGArr [0:SCENE_SPHERE_COUNT-1];
logic [7:0]           sColorBArr [0:SCENE_SPHERE_COUNT-1];

genvar si;
generate
    for (si = 0; si < SCENE_SPHERE_COUNT; si++) begin : g_sphere
        logic signed [11:0] sCx, sCy, sCz, sRadius, sRefl;
        logic [7:0] sColorR, sColorG, sColorB;

        always_comb
            sceneSphereGet(8'(si), sCx, sCy, sCz, sRadius, sColorR, sColorG, sColorB, sRefl);

        assign sCxArr[si]     = sCx;
        assign sCyArr[si]     = sCy;
        assign sCzArr[si]     = sCz;
        assign sReflArr[si]   = sRefl;
        assign sColorRArr[si] = sColorR;
        assign sColorGArr[si] = sColorG;
        assign sColorBArr[si] = sColorB;

        logic sHit;
        logic signed [11:0] sT;

        ray_sphere_intersect u_intersect (
            .validIn (pixel_valid),
            .ox(12'sd0), .oy(12'sd0), .oz(12'sd0),
            .dx(normDx),  .dy(normDy),  .dz(normDz),
            .cx(sCx),     .cy(sCy),     .cz(sCz),
            .radius(sRadius),
            .validOut(),
            .hit(sHit),
            .t(sT)
        );

        assign sHitArr[si] = sHit;
        assign sTArr[si]   = sT;
    end
endgenerate

// ─────────────────────────────────────────────────────────────────────────────
// Min-t reduction find the nearest hit
// ─────────────────────────────────────────────────────────────────────────────
logic                 bestHitComb;
logic signed [11:0]   bestTComb;
logic [7:0]           bestColorRComb, bestColorGComb, bestColorBComb;
logic signed [11:0]   bestCxComb, bestCyComb, bestCzComb, bestReflComb;

always_comb begin
    bestHitComb    = 1'b0;
    bestTComb      = 12'sd2047;
    bestColorRComb = 8'd0;
    bestColorGComb = 8'd0;
    bestColorBComb = 8'd0;
    bestCxComb     = '0;
    bestCyComb     = '0;
    bestCzComb     = '0;
    bestReflComb   = '0;
    for (int i = 0; i < SCENE_SPHERE_COUNT; i++) begin
        if (sHitArr[i] && (sTArr[i] > 12'sd0)) begin
            if (!bestHitComb || (sTArr[i] < bestTComb)) begin
                bestHitComb    = 1'b1;
                bestTComb      = sTArr[i];
                bestColorRComb = sColorRArr[i];
                bestColorGComb = sColorGArr[i];
                bestColorBComb = sColorBArr[i];
                bestCxComb     = sCxArr[i];
                bestCyComb     = sCyArr[i];
                bestCzComb     = sCzArr[i];
                bestReflComb   = sReflArr[i];
            end
        end
    end
end

// ─────────────────────────────────────────────────────────────────────────────
// Pipeline register  (1 cycle to allow deep combinational logic to settle)
// ─────────────────────────────────────────────────────────────────────────────
logic                 bestHit;
logic signed [11:0]   bestT;
logic [7:0]           bestColorR, bestColorG, bestColorB;
logic signed [11:0]   bestCx, bestCy, bestCz, bestRefl;
logic signed [11:0]   regNormDx, regNormDy, regNormDz;
logic                 regValid;

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        bestHit    <= 1'b0;
        bestT      <= '0;
        bestColorR <= 8'd0;
        bestColorG <= 8'd0;
        bestColorB <= 8'd0;
        bestCx     <= '0;
        bestCy     <= '0;
        bestCz     <= '0;
        bestRefl   <= '0;
        regNormDx  <= '0;
        regNormDy  <= '0;
        regNormDz  <= 12'sd16;
        regValid   <= 1'b0;
    end else begin
        regValid   <= pixel_valid;
        bestHit    <= pixel_valid && bestHitComb;
        bestT      <= bestTComb;
        bestColorR <= bestColorRComb;
        bestColorG <= bestColorGComb;
        bestColorB <= bestColorBComb;
        bestCx     <= bestCxComb;
        bestCy     <= bestCyComb;
        bestCz     <= bestCzComb;
        bestRefl   <= bestReflComb;
        regNormDx  <= normDx;
        regNormDy  <= normDy;
        regNormDz  <= normDz;
    end
end

// ─────────────────────────────────────────────────────────────────────────────
// Hit point and surface normal calculation for the nearest hit from the reduction stage
// Origin = (0,0,0)  →  hitP = t * D
// ─────────────────────────────────────────────────────────────────────────────
logic signed [11:0] hitDxT, hitDyT, hitDzT;
logic signed [11:0] hitX, hitY, hitZ;
logic signed [11:0] normalRawX, normalRawY, normalRawZ;
logic signed [11:0] normalX, normalY, normalZ;

fixed_point_mul u_mulDxT (.a(regNormDx), .b(bestT), .prod(hitDxT));
fixed_point_mul u_mulDyT (.a(regNormDy), .b(bestT), .prod(hitDyT));
fixed_point_mul u_mulDzT (.a(regNormDz), .b(bestT), .prod(hitDzT));

assign hitX = hitDxT;
assign hitY = hitDyT;
assign hitZ = hitDzT;

fixed_point_sub u_subNX (.a(hitX), .b(bestCx), .diff(normalRawX));
fixed_point_sub u_subNY (.a(hitY), .b(bestCy), .diff(normalRawY));
fixed_point_sub u_subNZ (.a(hitZ), .b(bestCz), .diff(normalRawZ));

fixed_vec3_normalize u_normalizeNormal (
    .x(normalRawX), .y(normalRawY), .z(normalRawZ),
    .nx(normalX), .ny(normalY), .nz(normalZ)
);

// ─────────────────────────────────────────────────────────────────────────────
// Per-light vectors and N·L, generate the loop
// ─────────────────────────────────────────────────────────────────────────────
logic signed [11:0] lightPosX   [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightPosY   [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightPosZ   [0:SCENE_LIGHT_COUNT-1];
logic [7:0]         lightColR   [0:SCENE_LIGHT_COUNT-1];
logic [7:0]         lightColG   [0:SCENE_LIGHT_COUNT-1];
logic [7:0]         lightColB   [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightIntens [0:SCENE_LIGHT_COUNT-1];

logic signed [11:0] lVecX  [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lVecY  [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lVecZ  [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] ndotlQ [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] difQ   [0:SCENE_LIGHT_COUNT-1];
logic               ndotlGt[0:SCENE_LIGHT_COUNT-1];
logic               ndotlEq[0:SCENE_LIGHT_COUNT-1];
logic               ndotlLt[0:SCENE_LIGHT_COUNT-1];

integer lightIndex;

always_comb begin
    for (lightIndex = 0; lightIndex < SCENE_LIGHT_COUNT; lightIndex = lightIndex + 1) begin
        sceneLightGet(
            lightIndex[7:0],
            lightPosX[lightIndex], lightPosY[lightIndex], lightPosZ[lightIndex],
            lightColR[lightIndex], lightColG[lightIndex], lightColB[lightIndex],
            lightIntens[lightIndex]
        );
    end
end

genvar lg;
generate
    for (lg = 0; lg < SCENE_LIGHT_COUNT; lg++) begin : g_light
        fixed_point_sub u_lvX (.a(lightPosX[lg]), .b(hitX), .diff(lVecX[lg]));
        fixed_point_sub u_lvY (.a(lightPosY[lg]), .b(hitY), .diff(lVecY[lg]));
        fixed_point_sub u_lvZ (.a(lightPosZ[lg]), .b(hitZ), .diff(lVecZ[lg]));

        fixed_point_dot u_ndotl (
            .ax(normalX),    .ay(normalY),    .az(normalZ),
            .bx(lVecX[lg]), .by(lVecY[lg]), .bz(lVecZ[lg]),
            .dot(ndotlQ[lg])
        );
        fixed_point_compare u_cmp (
            .a(ndotlQ[lg]), .b(12'sd0),
            .gt(ndotlGt[lg]), .eq(ndotlEq[lg]), .lt(ndotlLt[lg])
        );
        fixed_point_mul u_dif (
            .a(ndotlQ[lg]), .b(lightIntens[lg]), .prod(difQ[lg])
        );
    end
endgenerate

// ─────────────────────────────────────────────────────────────────────────────
// Color accumulation and raytracer pixel output
// ─────────────────────────────────────────────────────────────────────────────
integer difQInt, cR, cG, cB, aR, aG, aB, rMix, fR, fG, fB;

function automatic [7:0] clamp8(input integer v);
    if (v < 0) clamp8 = 8'd0;
    else if (v > 255) clamp8 = 8'd255;
    else clamp8 = v[7:0];
endfunction

logic [7:0] rayR, rayG, rayB;

always_comb begin
    aR = bestColorR >>> 3;   // ambient = 1/8 of surface colour
    aG = bestColorG >>> 3;
    aB = bestColorB >>> 3;

    for (lightIndex = 0; lightIndex < SCENE_LIGHT_COUNT; lightIndex = lightIndex + 1) begin
        if (ndotlGt[lightIndex]) begin
            difQInt = difQ[lightIndex];
            if (difQInt > 16) difQInt = 16;
            cR = (((bestColorR * lightColR[lightIndex]) >> 8) * difQInt) >> 4;
            cG = (((bestColorG * lightColG[lightIndex]) >> 8) * difQInt) >> 4;
            cB = (((bestColorB * lightColB[lightIndex]) >> 8) * difQInt) >> 4;
            aR = aR + cR;
            aG = aG + cG;
            aB = aB + cB;
        end
    end

    rMix = bestRefl;
    if (rMix < 0)  rMix = 0;
    if (rMix > 16) rMix = 16;

    fR = ((aR * (16 - rMix)) + (255 * rMix)) >> 4;
    fG = ((aG * (16 - rMix)) + (255 * rMix)) >> 4;
    fB = ((aB * (16 - rMix)) + (255 * rMix)) >> 4;

    if (regValid && bestHit) begin
        rayR = clamp8(fR);
        rayG = clamp8(fG);
        rayB = clamp8(fB);
    end else begin
        rayR = 8'd0;
        rayG = 8'd0;
        rayB = 8'd32;   // deep-space blue background
    end
end

// ─────────────────────────────────────────────────────────────────────────────
// Timer text overlay  (HH:MM:SS.SSSSS in top-right corner, row 0 cols 66-79)
// ─────────────────────────────────────────────────────────────────────────────
wire [5:0]  timerH, timerM, timerS;
wire [16:0] timerSub;

clockCounter u_clkCounter (
    .clock50MHz(clk), .resetn(rst_n),
    .hours(timerH), .minutes(timerM), .seconds(timerS), .subSeconds(timerSub)
);

wire        timerWrEn;
wire [12:0] timerAddr;
wire [6:0]  timerData;

timerDisplay u_timerDisp (
    .clock50MHz(clk), .resetn(rst_n),
    .hours(timerH), .minutes(timerM), .seconds(timerS), .subSeconds(timerSub),
    .charRamWrEn(timerWrEn), .charRamAddr(timerAddr), .charRamData(timerData)
);

wire [12:0] charRamAddrB;
wire [6:0]  charRamDataB;

characterRAM u_charRAM (
    .clkA(clk), .addrA(timerAddr), .wrEnA(timerWrEn), .dataWrA(timerData),
    .clkB(clk), .addrB(charRamAddrB), .dataRdB(charRamDataB)
);

wire [7:0] textR, textG, textB;

textGenerator u_textGen (
    .clock25MHz(clk),
    .xOrd(pixel_x), .yOrd(pixel_y), .visible(pixel_valid),
    .charRamData(charRamDataB),
    .pixelR(textR), .pixelG(textG), .pixelB(textB),
    .charRamAddrB(charRamAddrB)
);

// ─────────────────────────────────────────────────────────────────────────────
// Pixel arbiter  (white text over raytracer)
// ─────────────────────────────────────────────────────────────────────────────
wire textActive = (textR != 8'h00) || (textG != 8'h00) || (textB != 8'h00);

always_comb begin
    rgb_r = textActive ? textR : rayR;
    rgb_g = textActive ? textG : rayG;
    rgb_b = textActive ? textB : rayB;
end

endmodule