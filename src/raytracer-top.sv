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

logic start_scene;
logic scene_valid;
logic scene_ready;
logic scene_last;
logic scene_done;
logic [7:0] scene_idx;
logic signed [11:0] cx, cy, cz, radius, refl;
logic [7:0] colorR, colorG, colorB;

logic scanActive;
logic shadeValid;

logic signed [11:0] rayOx, rayOy, rayOz;
logic signed [11:0] rayDx, rayDy, rayDz;

logic signed [11:0] rawDx;
logic signed [11:0] rawDy;
logic signed [11:0] rawDz;
logic signed [11:0] normDx;
logic signed [11:0] normDy;
logic signed [11:0] normDz;

logic candidateValid;
logic candidateHit;
logic signed [11:0] candidateT;

logic bestHit;
logic signed [11:0] bestT;
logic signed [11:0] bestCx, bestCy, bestCz, bestRefl;
logic [7:0] bestColorR, bestColorG, bestColorB;

logic signed [11:0] hitX, hitY, hitZ;
logic signed [11:0] hitDxT, hitDyT, hitDzT;
logic signed [11:0] normalRawX, normalRawY, normalRawZ;
logic signed [11:0] normalX, normalY, normalZ;

logic signed [11:0] lightX [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightY [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightZ [0:SCENE_LIGHT_COUNT-1];
logic [7:0] lightColorR [0:SCENE_LIGHT_COUNT-1];
logic [7:0] lightColorG [0:SCENE_LIGHT_COUNT-1];
logic [7:0] lightColorB [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightIntensity [0:SCENE_LIGHT_COUNT-1];

logic signed [11:0] lightVecX [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightVecY [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] lightVecZ [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] ndotlQ [0:SCENE_LIGHT_COUNT-1];
logic signed [11:0] diffuseQ [0:SCENE_LIGHT_COUNT-1];
logic ndotlGt [0:SCENE_LIGHT_COUNT-1];
logic ndotlEq [0:SCENE_LIGHT_COUNT-1];
logic ndotlLt [0:SCENE_LIGHT_COUNT-1];

integer lightIndex;
integer accumRInt, accumGInt, accumBInt;
integer diffuseQInt;
integer contribR, contribG, contribB;
integer reflMix;
integer finalR, finalG, finalB;
genvar lightGen;

function automatic [7:0] clamp8(input integer value);
begin
    if (value < 0) begin
        clamp8 = 8'd0;
    end else if (value > 255) begin
        clamp8 = 8'd255;
    end else begin
        clamp8 = value[7:0];
    end
end
endfunction

assign scene_ready = 1'b1;
assign start_scene = pixel_valid && !scanActive;

always_comb begin
    rawDx = $signed({1'b0, pixel_x}) - 12'sd160;
    rawDy = 12'sd120 - $signed({1'b0, pixel_y});
    rawDz = 12'sd16;
end

fixed_vec3_normalize u_camNormalize (
    .x(rawDx), .y(rawDy), .z(rawDz),
    .nx(normDx), .ny(normDy), .nz(normDz)
);

scene_streamer u_scene_streamer (
    .clk(clk),
    .rst_n(rst_n),
    .start(start_scene),
    .ready(scene_ready),
    .valid(scene_valid),
    .idx(scene_idx),
    .last(scene_last),
    .done(scene_done),
    .cx(cx),
    .cy(cy),
    .cz(cz),
    .radius(radius),
    .colorR(colorR),
    .colorG(colorG),
    .colorB(colorB),
    .reflectivity(refl)
);

ray_sphere_intersect u_ray_sphere_intersect (
    .validIn(scene_valid),
    .ox(rayOx), .oy(rayOy), .oz(rayOz),
    .dx(rayDx), .dy(rayDy), .dz(rayDz),
    .cx(cx), .cy(cy), .cz(cz),
    .radius(radius),
    .validOut(candidateValid),
    .hit(candidateHit),
    .t(candidateT)
);

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        scanActive <= 1'b0;
        shadeValid <= 1'b0;
        rayOx <= 12'sd0;
        rayOy <= 12'sd0;
        rayOz <= 12'sd0;
        rayDx <= 12'sd0;
        rayDy <= 12'sd0;
        rayDz <= 12'sd16;
        bestHit <= 1'b0;
        bestT <= 12'sd2047;
        bestCx <= 12'sd0;
        bestCy <= 12'sd0;
        bestCz <= 12'sd0;
        bestRefl <= 12'sd0;
        bestColorR <= 8'd0;
        bestColorG <= 8'd0;
        bestColorB <= 8'd0;
    end else begin
        shadeValid <= 1'b0;

        if (start_scene) begin
            scanActive <= 1'b1;
            rayOx <= 12'sd0;
            rayOy <= 12'sd0;
            rayOz <= 12'sd0;
            rayDx <= normDx;
            rayDy <= normDy;
            rayDz <= normDz;

            bestHit <= 1'b0;
            bestT <= 12'sd2047;
            bestCx <= 12'sd0;
            bestCy <= 12'sd0;
            bestCz <= 12'sd0;
            bestRefl <= 12'sd0;
            bestColorR <= 8'd0;
            bestColorG <= 8'd0;
            bestColorB <= 8'd0;
        end

        if (candidateValid && candidateHit) begin
            if (!bestHit || (candidateT < bestT)) begin
                bestHit <= 1'b1;
                bestT <= candidateT;
                bestCx <= cx;
                bestCy <= cy;
                bestCz <= cz;
                bestRefl <= refl;
                bestColorR <= colorR;
                bestColorG <= colorG;
                bestColorB <= colorB;
            end
        end

        if (scene_done) begin
            scanActive <= 1'b0;
            shadeValid <= 1'b1;
        end
    end
end

fixed_point_mul u_mulDxT (.a(rayDx), .b(bestT), .prod(hitDxT));
fixed_point_mul u_mulDyT (.a(rayDy), .b(bestT), .prod(hitDyT));
fixed_point_mul u_mulDzT (.a(rayDz), .b(bestT), .prod(hitDzT));

fixed_point_add u_addHitX (.a(rayOx), .b(hitDxT), .sum(hitX));
fixed_point_add u_addHitY (.a(rayOy), .b(hitDyT), .sum(hitY));
fixed_point_add u_addHitZ (.a(rayOz), .b(hitDzT), .sum(hitZ));

fixed_point_sub u_subNormalX (.a(hitX), .b(bestCx), .diff(normalRawX));
fixed_point_sub u_subNormalY (.a(hitY), .b(bestCy), .diff(normalRawY));
fixed_point_sub u_subNormalZ (.a(hitZ), .b(bestCz), .diff(normalRawZ));

fixed_vec3_normalize u_normalizeNormal (
    .x(normalRawX), .y(normalRawY), .z(normalRawZ),
    .nx(normalX), .ny(normalY), .nz(normalZ)
);

always_comb begin
    for (lightIndex = 0; lightIndex < SCENE_LIGHT_COUNT; lightIndex = lightIndex + 1) begin
        sceneLightGet(
            lightIndex[7:0],
            lightX[lightIndex], lightY[lightIndex], lightZ[lightIndex],
            lightColorR[lightIndex], lightColorG[lightIndex], lightColorB[lightIndex],
            lightIntensity[lightIndex]
        );
    end
end

generate
for (lightGen = 0; lightGen < SCENE_LIGHT_COUNT; lightGen = lightGen + 1) begin : g_lightMath
    fixed_point_sub u_subLightVecX (
        .a(lightX[lightGen]), .b(hitX), .diff(lightVecX[lightGen])
    );
    fixed_point_sub u_subLightVecY (
        .a(lightY[lightGen]), .b(hitY), .diff(lightVecY[lightGen])
    );
    fixed_point_sub u_subLightVecZ (
        .a(lightZ[lightGen]), .b(hitZ), .diff(lightVecZ[lightGen])
    );

    fixed_point_dot u_dotNdotL (
        .ax(normalX), .ay(normalY), .az(normalZ),
        .bx(lightVecX[lightGen]), .by(lightVecY[lightGen]), .bz(lightVecZ[lightGen]),
        .dot(ndotlQ[lightGen])
    );

    fixed_point_compare u_cmpNdotL (
        .a(ndotlQ[lightGen]), .b(12'sd0),
        .gt(ndotlGt[lightGen]), .eq(ndotlEq[lightGen]), .lt(ndotlLt[lightGen])
    );

    fixed_point_mul u_mulDiffuse (
        .a(ndotlQ[lightGen]), .b(lightIntensity[lightGen]), .prod(diffuseQ[lightGen])
    );
end
endgenerate

always_comb begin
    diffuseQInt = '0;
    contribR    = '0;
    contribG    = '0;
    contribB    = '0;
    reflMix     = '0;
    finalR      = '0;
    finalG      = '0;
    finalB      = '0;
    red         = '0;
    green       = '0;
    blue        = '0;
    accumRInt = bestColorR >>> 3;
    accumGInt = bestColorG >>> 3;
    accumBInt = bestColorB >>> 3;

    for (lightIndex = 0; lightIndex < SCENE_LIGHT_COUNT; lightIndex = lightIndex + 1) begin
        if (ndotlGt[lightIndex]) begin
            diffuseQInt = diffuseQ[lightIndex];
            if (diffuseQInt > 16) diffuseQInt = 16;

            contribR = (((bestColorR * lightColorR[lightIndex]) >> 8) * diffuseQInt) >> 4;
            contribG = (((bestColorG * lightColorG[lightIndex]) >> 8) * diffuseQInt) >> 4;
            contribB = (((bestColorB * lightColorB[lightIndex]) >> 8) * diffuseQInt) >> 4;

            accumRInt = accumRInt + contribR;
            accumGInt = accumGInt + contribG;
            accumBInt = accumBInt + contribB;
        end
    end

    reflMix = bestRefl;
    if (reflMix < 0) reflMix = 0;
    if (reflMix > 16) reflMix = 16;

    finalR = ((accumRInt * (16 - reflMix)) + (255 * reflMix)) >> 4;
    finalG = ((accumGInt * (16 - reflMix)) + (255 * reflMix)) >> 4;
    finalB = ((accumBInt * (16 - reflMix)) + (255 * reflMix)) >> 4;

    if (shadeValid && bestHit) begin
        rgb_r = clamp8(finalR);
        rgb_g = clamp8(finalG);
        rgb_b = clamp8(finalB);
    end else begin
        rgb_r = 8'd0;
        rgb_g = 8'd0;
        rgb_b = 8'd32;
    end
end

endmodule