module ray_sphere_intersect (
    input  logic               validIn,
    input  logic signed [11:0] ox,
    input  logic signed [11:0] oy,
    input  logic signed [11:0] oz,
    input  logic signed [11:0] dx,
    input  logic signed [11:0] dy,
    input  logic signed [11:0] dz,

    input  logic signed [11:0] cx,
    input  logic signed [11:0] cy,
    input  logic signed [11:0] cz,
    input  logic signed [11:0] radius,

    output logic               validOut,
    output logic               hit,
    output logic signed [11:0] t
);

logic signed [11:0] lx, ly, lz;
logic signed [11:0] aQ;
logic signed [11:0] halfB;
logic signed [11:0] l2;
logic signed [11:0] r2;
logic signed [11:0] cQ;
logic signed [11:0] hb2;       // halfB * halfB  (was b2 = bQ*bQ)
logic signed [11:0] ac;
logic signed [11:0] disc;      // hb2 - ac       (was b2 - fourAc)
logic signed [11:0] sqrtDisc;
logic signed [11:0] negHalfB;  // -halfB          (was negB = -bQ)
logic signed [11:0] num0;
logic signed [11:0] num1;
logic signed [11:0] t0;
logic signed [11:0] t1;
logic divErr0;
logic divErr1;

fixed_vec3_sub u_lVec (
    .ax(ox), .ay(oy), .az(oz),
    .bx(cx), .by(cy), .bz(cz),
    .rx(lx), .ry(ly), .rz(lz)
);

fixed_point_dot u_aDot (
    .ax(dx), .ay(dy), .az(dz),
    .bx(dx), .by(dy), .bz(dz),
    .dot(aQ)
);

fixed_point_dot u_halfBDot (
    .ax(lx), .ay(ly), .az(lz),
    .bx(dx), .by(dy), .bz(dz),
    .dot(halfB)
);

fixed_point_dot u_l2Dot (
    .ax(lx), .ay(ly), .az(lz),
    .bx(lx), .by(ly), .bz(lz),
    .dot(l2)
);

fixed_point_mul u_r2Mul (
    .a(radius), .b(radius), .prod(r2)
);

fixed_point_sub u_cSub (
    .a(l2), .b(r2), .diff(cQ)
);

fixed_point_mul u_hb2Mul (
    .a(halfB), .b(halfB), .prod(hb2)
);

fixed_point_mul u_acMul (
    .a(aQ), .b(cQ), .prod(ac)
);

fixed_point_sub u_discSub (
    .a(hb2), .b(ac), .diff(disc)
);

fixed_point_sqrt u_discSqrt (
    .a(disc), .root(sqrtDisc)
);

fixed_point_neg u_negHalfB (
    .a(halfB), .neg(negHalfB)
);

fixed_point_sub u_num0 (
    .a(negHalfB), .b(sqrtDisc), .diff(num0)
);

fixed_point_add u_num1 (
    .a(negHalfB), .b(sqrtDisc), .sum(num1)
);

fixed_point_div u_divT0 (
    .a(num0), .b(aQ), .quot(t0), .errorFlag(divErr0)
);

fixed_point_div u_divT1 (
    .a(num1), .b(aQ), .quot(t1), .errorFlag(divErr1)
);

always_comb begin
    validOut = validIn;
    hit = 1'b0;
    t = 12'sd0;

    if (validIn && (disc >= 0) && !divErr0 && !divErr1) begin
        if ((t0 > 0) && (t1 > 0)) begin
            hit = 1'b1;
            t = (t0 < t1) ? t0 : t1;
        end else if (t0 > 0) begin
            hit = 1'b1;
            t = t0;
        end else if (t1 > 0) begin
            hit = 1'b1;
            t = t1;
        end
    end
end

endmodule