module asic(
    input [7:0] in,
    output [7:0] out
);

wire [7:0] red, green, blue;

raytracer_top tracer0(
    .clk(in[0]),
    .rst_n(in[1]),
    .pixel_x({10{in[2]}}),
    .pixel_y({10{in[3]}}),
    .pixel_valid(in[4]),
    .rgb_r(red),
    .rgb_g(green),
    .rgb_b(blue),
    .outputvalid()
);

assign out = red & green & blue;
endmodule