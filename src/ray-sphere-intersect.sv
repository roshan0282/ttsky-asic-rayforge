// ─────────────────────────────────────────────────────────────────────────────
// ray_sphere_intersect.sv  —  Ray-sphere intersection (half-b formulation)
//
// Matches c-implementation/ray_sphere.h exactly
//
// Algorithm (half-b variant):
//   L     = O - C
//   a     = D · D
//   halfB = L · D
//   l2    = L · L
//   c     = l2 - r²
//   disc  = halfB² - a·c
//
//   if disc < 0 → no hit
//   t0 = (-halfB - √disc) / a
//   t1 = (-halfB + √disc) / a
//   pick smallest positive t
// ─────────────────────────────────────────────────────────────────────────────

`timescale 1ns/1ps
`default_nettype none

module ray_sphere_intersect (
    input  logic signed [31:0] ox, oy, oz,    // Ray origin
    input  logic signed [31:0] dx, dy, dz,    // Ray direction (normalized)
    input  logic signed [31:0] cx, cy, cz,    // Sphere center
    input  logic signed [31:0] radius,         // Sphere radius
    
    output logic               hit,
    output logic signed [31:0] t
);

    logic signed [31:0] lx, ly, lz;
    logic signed [31:0] a, halfB, l2, r2, c;
    logic signed [31:0] hb2, ac, disc, sqrtDisc;
    logic signed [31:0] negHalfB, num0, num1, t0, t1;

    // L = O - C
    vec3_sub u_lVec (
        .ax(ox), .ay(oy), .az(oz),
        .bx(cx), .by(cy), .bz(cz),
        .rx(lx), .ry(ly), .rz(lz)
    );

    // a = D · D
    vec3_dot u_aDot (
        .ax(dx), .ay(dy), .az(dz),
        .bx(dx), .by(dy), .bz(dz),
        .dot(a)
    );

    // halfB = L · D
    vec3_dot u_halfBDot (
        .ax(lx), .ay(ly), .az(lz),
        .bx(dx), .by(dy), .bz(dz),
        .dot(halfB)
    );

    // l2 = L · L
    vec3_dot u_l2Dot (
        .ax(lx), .ay(ly), .az(lz),
        .bx(lx), .by(ly), .bz(lz),
        .dot(l2)
    );

    // r2 = radius * radius
    q16_mul u_r2Mul (.a(radius), .b(radius), .prod(r2));

    // c = l2 - r2
    q16_sub u_cSub (.a(l2), .b(r2), .diff(c));

    // hb2 = halfB * halfB
    q16_mul u_hb2Mul (.a(halfB), .b(halfB), .prod(hb2));

    // ac = a * c
    q16_mul u_acMul (.a(a), .b(c), .prod(ac));

    // disc = hb2 - ac
    q16_sub u_discSub (.a(hb2), .b(ac), .diff(disc));

    // sqrtDisc = sqrt(disc)
    q16_sqrt u_sqrtDisc (.a(disc), .root(sqrtDisc));

    // negHalfB = -halfB
    assign negHalfB = -halfB;

    // num0 = negHalfB - sqrtDisc
    q16_sub u_num0 (.a(negHalfB), .b(sqrtDisc), .diff(num0));

    // num1 = negHalfB + sqrtDisc
    q16_add u_num1 (.a(negHalfB), .b(sqrtDisc), .sum(num1));

    // t0 = num0 / a
    q16_div u_divT0 (.a(num0), .b(a), .quot(t0));

    // t1 = num1 / a
    q16_div u_divT1 (.a(num1), .b(a), .quot(t1));

    // Select smallest positive root
    always_comb begin
        hit = 1'b0;
        t   = 32'sd0;

        if (disc >= 32'sd0 && a != 32'sd0) begin
            if (t0 > 32'sd0 && t1 > 32'sd0) begin
                hit = 1'b1;
                t   = (t0 < t1) ? t0 : t1;
            end else if (t0 > 32'sd0) begin
                hit = 1'b1;
                t   = t0;
            end else if (t1 > 32'sd0) begin
                hit = 1'b1;
                t   = t1;
            end
        end
    end

endmodule

`default_nettype wire
