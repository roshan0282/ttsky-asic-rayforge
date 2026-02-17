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

// this will contain the following
// - one fixed camera ray
// - iterate LUT spheres
// - evaluate intersection and apply LUT lights
//
// NOTE: this file intentionally stays placeholder-level.
// arithmetic is routed through primitives.v modules to lock datapath style.
// TODO(raytracerTop): replace fixed forward ray with cameraRayGen from pixel_x/pixel_y.
// TODO(raytracerTop): add hitReducer so nearest sphere hit is selected across SCENE_SPHERE_COUNT.
// TODO(raytracerTop): convert single-light path to streamed loop over SCENE_LIGHT_COUNT.
// TODO(raytracerTop): add proper normal normalization via fixed_vec3_normalize.
// TODO(raytracerTop): add clamp/saturation path with deterministic fixed-point behavior.
// TODO(raytracerTop): add valid/stall handshake between stages.

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
logic signed [11:0] mulDxT, mulDyT, mulDzT;

logic signed [11:0] lightX, lightY, lightZ;
logic [7:0] lightColorR, lightColorG, lightColorB;
logic signed [11:0] lightIntensity;
logic signed [11:0] lightVecX, lightVecY, lightVecZ;
logic signed [11:0] nDotL;
logic signed [11:0] diffuseQ;
logic [7:0] accumR, accumG, accumB;

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

// Placeholder single-light fetch (index 0).
// TODO: replace with full light streaming + accumulation.
always_comb begin
    sceneLightGet(8'd0, lightX, lightY, lightZ, lightColorR, lightColorG, lightColorB, lightIntensity);
end

// hitPoint = O + t*D
fixed_point_mul u_mulDxT (.a(dx), .b(t), .prod(mulDxT));
fixed_point_mul u_mulDyT (.a(dy), .b(t), .prod(mulDyT));
fixed_point_mul u_mulDzT (.a(dz), .b(t), .prod(mulDzT));

fixed_point_add u_addHitX (.a(ox), .b(mulDxT), .sum(hitX));
fixed_point_add u_addHitY (.a(oy), .b(mulDyT), .sum(hitY));
fixed_point_add u_addHitZ (.a(oz), .b(mulDzT), .sum(hitZ));

// normal = hitPoint - center (unnormalized placeholder)
fixed_point_sub u_subNormalX (.a(hitX), .b(cx), .diff(normalX));
fixed_point_sub u_subNormalY (.a(hitY), .b(cy), .diff(normalY));
fixed_point_sub u_subNormalZ (.a(hitZ), .b(cz), .diff(normalZ));

// lightVec = lightPos - hitPoint
fixed_point_sub u_subLightVecX (.a(lightX), .b(hitX), .diff(lightVecX));
fixed_point_sub u_subLightVecY (.a(lightY), .b(hitY), .diff(lightVecY));
fixed_point_sub u_subLightVecZ (.a(lightZ), .b(hitZ), .diff(lightVecZ));

// nDotL and diffuse factor (placeholder, no normalization/clamp pipeline yet)
fixed_point_dot u_dotNdotL (
    .ax(normalX), .ay(normalY), .az(normalZ),
    .bx(lightVecX), .by(lightVecY), .bz(lightVecZ),
    .dot(nDotL)
);

fixed_point_mul u_mulDiffuseQ (
    .a(nDotL),
    .b(lightIntensity),
    .prod(diffuseQ)
);

always_comb begin
    // Placeholder shading output while math chain is in primitive form.
    // TODO(shading): use lightColorR/G/B and reflectivity in physically meaningful blend.
    if (diffuseQ > 0) begin
        accumR = colorR;
        accumG = colorG;
        accumB = colorB;
    end else begin
        accumR = colorR >> 3;
        accumG = colorG >> 3;
        accumB = colorB >> 3;
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