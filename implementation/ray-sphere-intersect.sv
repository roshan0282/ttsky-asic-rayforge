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

// Placeholder implementation.
// TODO: replace with full Q8.4 quadratic solve from pipeline.md

always_comb begin
    hit = 1'b0;
    t   = 12'sd0;
end

endmodule