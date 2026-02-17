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

// Minimal integration scaffold:
// - one fixed camera ray
// - iterate LUT spheres
// - evaluate intersection and apply LUT lights

`include "scene-lut.svh"

logic start_scene;
logic scene_valid;
logic scene_done;
logic [7:0] scene_idx;
logic signed [11:0] cx, cy, cz, radius, refl;
logic [7:0] colorR, colorG, colorB;

logic hit;
logic signed [11:0] t;

logic signed [11:0] ox, oy, oz, dx, dy, dz;
logic signed [11:0] hitX, hitY, hitZ;
logic signed [11:0] normalX, normalY, normalZ;

integer lightIndex;
logic signed [11:0] lightX, lightY, lightZ;
logic [7:0] lightColorR, lightColorG, lightColorB;
logic signed [11:0] lightIntensity;
logic signed [12:0] lightVecX, lightVecY, lightVecZ;
logic signed [15:0] nDotL;
logic signed [15:0] diffuseQ;
logic [17:0] shadeR, shadeG, shadeB;
logic [17:0] accumR, accumG, accumB;

assign ox = 12'sd0;
assign oy = 12'sd0;
assign oz = 12'sd0;
assign dx = 12'sd0;
assign dy = 12'sd0;
assign dz = 12'sd16; // +1.0 in Q8.4

assign start_scene = pixel_valid;

scene_streamer u_scene_streamer (
    .clk(clk),
    .rst_n(rst_n),
    .start(start_scene),
    .valid(scene_valid),
    .idx(scene_idx),
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
    .ox(ox), .oy(oy), .oz(oz),
    .dx(dx), .dy(dy), .dz(dz),
    .cx(cx), .cy(cy), .cz(cz),
    .radius(radius),
    .hit(hit),
    .t(t)
);

always_comb begin
    hitX = ox + ((dx * t) >>> 4);
    hitY = oy + ((dy * t) >>> 4);
    hitZ = oz + ((dz * t) >>> 4);

    normalX = hitX - cx;
    normalY = hitY - cy;
    normalZ = hitZ - cz;

    // Ambient base term (0.125 in Q8.4 -> 2)
    accumR = (colorR * 8'd2) >>> 4;
    accumG = (colorG * 8'd2) >>> 4;
    accumB = (colorB * 8'd2) >>> 4;

    for (lightIndex = 0; lightIndex < SCENE_LIGHT_COUNT; lightIndex = lightIndex + 1) begin
        sceneLightGet(lightIndex[7:0], lightX, lightY, lightZ, lightColorR, lightColorG, lightColorB, lightIntensity);

        lightVecX = lightX - hitX;
        lightVecY = lightY - hitY;
        lightVecZ = lightZ - hitZ;

        nDotL = ((normalX * lightVecX) >>> 4) + ((normalY * lightVecY) >>> 4) + ((normalZ * lightVecZ) >>> 4);
        if (nDotL > 0) begin
            diffuseQ = (nDotL * lightIntensity) >>> 4;
            if (diffuseQ > 16) begin
                diffuseQ = 16;
            end

            shadeR = ((((colorR * lightColorR) >> 8) * diffuseQ) >>> 4);
            shadeG = ((((colorG * lightColorG) >> 8) * diffuseQ) >>> 4);
            shadeB = ((((colorB * lightColorB) >> 8) * diffuseQ) >>> 4);

            accumR = accumR + shadeR;
            accumG = accumG + shadeG;
            accumB = accumB + shadeB;
        end
    end
end

always_comb begin
    if (hit && scene_valid) begin
        rgb_r = (accumR > 18'd255) ? 8'd255 : accumR[7:0];
        rgb_g = (accumG > 18'd255) ? 8'd255 : accumG[7:0];
        rgb_b = (accumB > 18'd255) ? 8'd255 : accumB[7:0];
    end else begin
        rgb_r = 8'd0;
        rgb_g = 8'd0;
        rgb_b = 8'd32;
    end
end

endmodule