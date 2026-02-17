module ray_sphere_intersect (
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

    output logic               hit,
    output logic signed [11:0] t
);

// placeholder implementation.
// TODO: replace with full Q8.4 quadratic solve from pipeline.md
// TODO(raySphereIntersect): compute L = O - C using fixed_vec3_sub.
// TODO(raySphereIntersect): compute a,b,c with fixed_point_dot and fixed_point_mul.
// TODO(raySphereIntersect): compute discriminant and miss/tangent/two-hit branching.
// TODO(raySphereIntersect): use fixed_point_sqrt for sqrt(discriminant).
// TODO(raySphereIntersect): compute roots with fixed_point_div and select smallest t>0.
// TODO(raySphereIntersect): add validIn/validOut for pipeline alignment.
// TODO(raySphereIntersect): add unit tests for miss/tangent/two-hit/behind-ray cases.

always_comb begin
    hit = 1'b0;
    t   = 12'sd0;
end

endmodule