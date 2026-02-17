// Fixed Point Comparison
module fixed_point_compare #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output gt, eq, lt
);
    assign gt = (a > b);
    assign eq = (a == b);
    assign lt = (a < b);
endmodule

// Fixed Point Addition
module fixed_point_add #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output signed [WIDTH-1:0] sum
);
    assign sum = a + b;
endmodule

// Fixed Point Subtraction
module fixed_point_sub #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output signed [WIDTH-1:0] diff
);
    assign diff = a - b;
endmodule

// Fixed Point Multiplication
module fixed_point_mul #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output signed [WIDTH-1:0] prod
);
    // TODO(primitives): add rounding and saturation options (currently truncates and may overflow).
    assign prod = (a * b) >>> 4; // Q8.4: shift by 4 to keep Q8.4
endmodule

// Fixed Point Division
module fixed_point_div #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output signed [WIDTH-1:0] quot
);
    // TODO(primitives): define divide-by-zero policy (saturate/zero/error flag).
    assign quot = (b != 0) ? ((a <<< 4) / b) : 0; // Q8.4: shift numerator by 4
endmodule

// Fixed Point Dot Product (3D)
module fixed_point_dot #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] ax, ay, az,
    input  signed [WIDTH-1:0] bx, by, bz,
    output signed [WIDTH-1:0] dot
);
    assign dot = ((ax * bx) >>> 4) + ((ay * by) >>> 4) + ((az * bz) >>> 4); // Q8.4
endmodule

// Fixed Point Square Root (Newton-Raphson, placeholder)
module fixed_point_sqrt #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    output signed [WIDTH-1:0] root
);
    // TODO(primitives): implement Q8.4 sqrt with non-negative input handling.
    // TODO(primitives): add optional pipelined iterative version for timing closure.
    assign root = 0;
endmodule

// Fixed Point Negation
module fixed_point_neg #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    output signed [WIDTH-1:0] neg
);
    assign neg = -a;
endmodule

// Fixed Point Reciprocal (placeholder)
module fixed_point_recip #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    output signed [WIDTH-1:0] recip
);
    // TODO(primitives): implement reciprocal approximation + refinement in Q8.4.
    assign recip = 0;
endmodule

// Fixed Vector Subtraction (3D)
module fixed_vec3_sub #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] ax, ay, az,
    input  signed [WIDTH-1:0] bx, by, bz,
    output signed [WIDTH-1:0] rx, ry, rz
);
    assign rx = ax - bx;
    assign ry = ay - by;
    assign rz = az - bz;
endmodule

// Fixed Vector Addition (3D)
module fixed_vec3_add #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] ax, ay, az,
    input  signed [WIDTH-1:0] bx, by, bz,
    output signed [WIDTH-1:0] rx, ry, rz
);
    assign rx = ax + bx;
    assign ry = ay + by;
    assign rz = az + bz;
endmodule

// Fixed Scalar Multiplication (3D)
module fixed_vec3_scalar_mul #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] s,
    input  signed [WIDTH-1:0] x, y, z,
    output signed [WIDTH-1:0] rx, ry, rz
);
    assign rx = (s * x) >>> 4; // Q8.4
    assign ry = (s * y) >>> 4;
    assign rz = (s * z) >>> 4;
endmodule

// Fixed Cross Product (3D)
module fixed_vec3_cross #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] ax, ay, az,
    input  signed [WIDTH-1:0] bx, by, bz,
    output signed [WIDTH-1:0] rx, ry, rz
);
    assign rx = (ay * bz - az * by) >>> 4; // Q8.4
    assign ry = (az * bx - ax * bz) >>> 4;
    assign rz = (ax * by - ay * bx) >>> 4;
endmodule

// Fixed Vector Normalization (placeholder)
module fixed_vec3_normalize #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] x, y, z,
    output signed [WIDTH-1:0] nx, ny, nz
);
    // TODO(primitives): implement normalize(v)=v/|v| using fixed_point_sqrt + fixed_point_div.
    // TODO(primitives): handle zero-length vector safely.
    assign nx = 0;
    assign ny = 0;
    assign nz = 0;
endmodule
