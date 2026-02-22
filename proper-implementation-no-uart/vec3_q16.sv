// ─────────────────────────────────────────────────────────────────────────────
// vec3_q16.sv  —  Q16.16 3D vector operations
//
// Matches c-implementation/vec3.h exactly
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps
`default_nettype none

// ── Vector Addition ───────────────────────────────────────────────────────────
module vec3_add (
    input  logic signed [31:0] ax, ay, az,
    input  logic signed [31:0] bx, by, bz,
    output logic signed [31:0] rx, ry, rz
);
    q16_add u_addX (.a(ax), .b(bx), .sum(rx));
    q16_add u_addY (.a(ay), .b(by), .sum(ry));
    q16_add u_addZ (.a(az), .b(bz), .sum(rz));
endmodule

// ── Vector Subtraction ────────────────────────────────────────────────────────
module vec3_sub (
    input  logic signed [31:0] ax, ay, az,
    input  logic signed [31:0] bx, by, bz,
    output logic signed [31:0] rx, ry, rz
);
    q16_sub u_subX (.a(ax), .b(bx), .diff(rx));
    q16_sub u_subY (.a(ay), .b(by), .diff(ry));
    q16_sub u_subZ (.a(az), .b(bz), .diff(rz));
endmodule

// ── Scalar Multiplication ─────────────────────────────────────────────────────
module vec3_scale (
    input  logic signed [31:0] x, y, z,
    input  logic signed [31:0] s,
    output logic signed [31:0] rx, ry, rz
);
    q16_mul u_mulX (.a(x), .b(s), .prod(rx));
    q16_mul u_mulY (.a(y), .b(s), .prod(ry));
    q16_mul u_mulZ (.a(z), .b(s), .prod(rz));
endmodule

// ── Dot Product ───────────────────────────────────────────────────────────────
module vec3_dot (
    input  logic signed [31:0] ax, ay, az,
    input  logic signed [31:0] bx, by, bz,
    output logic signed [31:0] dot
);
    q16_dot3 u_dot (.ax(ax), .ay(ay), .az(az),
                    .bx(bx), .by(by), .bz(bz),
                    .dot(dot));
endmodule

// ── Normalization ─────────────────────────────────────────────────────────────
// mag = sqrt(x² + y² + z²),  result = (x/mag, y/mag, z/mag)
module vec3_normalize (
    input  logic signed [31:0] x, y, z,
    output logic signed [31:0] nx, ny, nz
);
    logic signed [31:0] mag2, mag;
    
    vec3_dot u_mag2 (.ax(x), .ay(y), .az(z),
                     .bx(x), .by(y), .bz(z),
                     .dot(mag2));
    
    q16_sqrt u_sqrt (.a(mag2), .root(mag));
    
    q16_div u_divX (.a(x), .b(mag), .quot(nx));
    q16_div u_divY (.a(y), .b(mag), .quot(ny));
    q16_div u_divZ (.a(z), .b(mag), .quot(nz));
endmodule

`default_nettype wire
