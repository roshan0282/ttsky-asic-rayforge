// auto-generated scene LUT
// regenerate with: python tools/scene-compiler.py --in tools/scene-sample.json --out implementation/scene-lut.svh

localparam int SCENE_SPHERE_COUNT = 2;
localparam int SCENE_LIGHT_COUNT = 2;

function automatic void sceneSphereGet(
    input  logic [7:0] idx,
    output logic signed [11:0] cx,
    output logic signed [11:0] cy,
    output logic signed [11:0] cz,
    output logic signed [11:0] radius,
    output logic [7:0] colorR,
    output logic [7:0] colorG,
    output logic [7:0] colorB,
    output logic signed [11:0] reflectivity
);
begin
    unique case (idx)
        8'd0: begin
            cx = 12'sd0;
            cy = 12'sd0;
            cz = 12'sd64;
            radius = 12'sd16;
            colorR = 8'd255;
            colorG = 8'd64;
            colorB = 8'd64;
            reflectivity = 12'sd4;
        end
        8'd1: begin
            cx = 12'sd24;
            cy = -12'sd8;
            cz = 12'sd96;
            radius = 12'sd12;
            colorR = 8'd64;
            colorG = 8'd200;
            colorB = 8'd255;
            reflectivity = 12'sd2;
        end
        default: begin
            cx = '0; cy = '0; cz = '0; radius = '0;
            colorR = '0; colorG = '0; colorB = '0;
            reflectivity = '0;
        end
    endcase
end
endfunction

function automatic void sceneLightGet(
    input  logic [7:0] idx,
    output logic signed [11:0] lx,
    output logic signed [11:0] ly,
    output logic signed [11:0] lz,
    output logic [7:0] colorR,
    output logic [7:0] colorG,
    output logic [7:0] colorB,
    output logic signed [11:0] intensity
);
begin
    unique case (idx)
        8'd0: begin
            lx = 12'sd32;
            ly = 12'sd48;
            lz = 12'sd16;
            colorR = 8'd255;
            colorG = 8'd240;
            colorB = 8'd220;
            intensity = 12'sd16;
        end
        8'd1: begin
            lx = -12'sd48;
            ly = 12'sd32;
            lz = 12'sd40;
            colorR = 8'd180;
            colorG = 8'd200;
            colorB = 8'd255;
            intensity = 12'sd8;
        end
        default: begin
            lx = '0; ly = '0; lz = '0;
            colorR = '0; colorG = '0; colorB = '0;
            intensity = '0;
        end
    endcase
end
endfunction