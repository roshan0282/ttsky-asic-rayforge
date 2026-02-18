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
    output reg signed [WIDTH-1:0] prod
);
    localparam signed [WIDTH-1:0] MAX_Q = {1'b0, {(WIDTH-1){1'b1}}};
    localparam signed [WIDTH-1:0] MIN_Q = {1'b1, {(WIDTH-1){1'b0}}};

    wire signed [2*WIDTH-1:0] fullProd  = a * b;
    wire signed [2*WIDTH-1:0] roundBias = {{(2*WIDTH-5){1'b0}}, 4'b1000};
    wire signed [2*WIDTH-1:0] rounded   = fullProd + roundBias;
    wire signed [2*WIDTH-1:0] shifted   = rounded >>> 4;

    always @(*) begin
        if (shifted > $signed(MAX_Q)) begin
            prod = MAX_Q;
        end else if (shifted < $signed(MIN_Q)) begin
            prod = MIN_Q;
        end else begin
            prod = shifted[WIDTH-1:0];
        end
    end
endmodule

// Fixed Point Division
module fixed_point_div #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output reg signed [WIDTH-1:0] quot,
    output reg                errorFlag
);
    localparam signed [WIDTH-1:0] MAX_Q = {1'b0, {(WIDTH-1){1'b1}}};
    localparam signed [WIDTH-1:0] MIN_Q = {1'b1, {(WIDTH-1){1'b0}}};

    reg signed [2*WIDTH-1:0] dividendShifted;
    reg signed [2*WIDTH-1:0] quotientWide;

    always @(*) begin
        errorFlag = 1'b0;
        quot = {WIDTH{1'b0}};
        dividendShifted = a <<< 4;
        quotientWide = {2*WIDTH{1'b0}};

        if (b == 0) begin
            errorFlag = 1'b1;
            if (a >= 0) begin
                quot = MAX_Q;
            end else begin
                quot = MIN_Q;
            end
        end else begin
            quotientWide = dividendShifted / b;
            if (quotientWide > $signed(MAX_Q)) begin
                quot = MAX_Q;
            end else if (quotientWide < $signed(MIN_Q)) begin
                quot = MIN_Q;
            end else begin
                quot = quotientWide[WIDTH-1:0];
            end
        end
    end
endmodule

// Fixed Point Dot Product (3D)
module fixed_point_dot #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] ax, ay, az,
    input  signed [WIDTH-1:0] bx, by, bz,
    output signed [WIDTH-1:0] dot
);
    assign dot = ((ax * bx) >>> 4) + ((ay * by) >>> 4) + ((az * bz) >>> 4); // Q8.4
endmodule

// Fixed Point Square Root (Q8.4, combinational integer sqrt)
module fixed_point_sqrt #(
    parameter WIDTH = 12
    ) (
    input  signed [WIDTH-1:0] a,
    output reg signed [WIDTH-1:0] root
);
    integer i;
    reg [31:0] val;
    reg [31:0] rem;
    reg [15:0] intRoot;
    reg [17:0] trial;

    always @(*) begin
        if (a <= 0) begin
            root = {WIDTH{1'b0}};
        end else begin
            val = $unsigned(a) <<< 4;
            rem = 32'd0;
            intRoot = 16'd0;

            for (i = 0; i < 16; i = i + 1) begin
                rem = {rem[29:0], val[31 - 2*i -: 2]};
                trial = {intRoot, 2'b01};
                if (rem >= trial) begin
                    rem = rem - trial;
                    intRoot = {intRoot[14:0], 1'b1};
                end else begin
                    intRoot = {intRoot[14:0], 1'b0};
                end
            end

            if ($signed({1'b0, intRoot[10:0]}) > $signed({1'b0, {(WIDTH-1){1'b1}}})) begin
                root = {1'b0, {(WIDTH-1){1'b1}}};
            end else begin
                root = $signed({1'b0, intRoot[10:0]});
            end
        end
    end
endmodule

// Fixed Point Square Root Pipelined
module fixed_point_sqrt_pipe #(
        parameter WIDTH = 12,
        parameter STAGES = 4
    )(
        input                     clk,
        input  signed [WIDTH-1:0] a,
        output reg signed [WIDTH-1:0] root,
        output reg                valid
    );

    // Pipeline registers
    reg signed [2*WIDTH-1:0] guessReg [0:STAGES];
    reg signed [WIDTH-1:0]   valueReg [0:STAGES];
    reg                      validReg [0:STAGES];

    integer i;

    always @(posedge clk) begin
        // Stage 0: Input
        validReg[0] <= 1'b1;
        valueReg[0] <= a;
        guessReg[0] <= (a == 0) ? 0 : 160; // 160 = 10 in Q8.4

        // Stages 1-4
        for (i = 1; i <= STAGES; i = i + 1) begin
            validReg[i] <= validReg[i-1];
            valueReg[i] <= valueReg[i-1];

            if (validReg[i-1] && valueReg[i-1] != 0) begin
                guessReg[i] <= (guessReg[i-1] +
                            (valueReg[i-1] <<< 4) / guessReg[i-1]) >>> 1;
            end else begin
                guessReg[i] <= guessReg[i-1];
            end
        end

        // Sqrt valid only once last stage has valid = 1
        valid <= validReg[STAGES];
        root <= guessReg[STAGES][WIDTH-1:0];
    end

endmodule

// Fixed Point Negation
module fixed_point_neg #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    output signed [WIDTH-1:0] neg
);
    assign neg = -a;
endmodule

// Fixed Point Reciprocal (Q8.4)
module fixed_point_recip #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    output reg signed [WIDTH-1:0] recip
);
    localparam signed [WIDTH-1:0] MAX_Q = {1'b0, {(WIDTH-1){1'b1}}};
    localparam signed [WIDTH-1:0] MIN_Q = {1'b1, {(WIDTH-1){1'b0}}};
    reg signed [2*WIDTH-1:0] num;
    reg signed [2*WIDTH-1:0] qWide;

    always @(*) begin
        num = (1 <<< 8); // 1.0 in Q8.4 shifted by frac bits again
        if (a == 0) begin
            if (a[WIDTH-1] == 1'b0) begin
                recip = MAX_Q;
            end else begin
                recip = MIN_Q;
            end
        end else begin
            qWide = num / a;
            if (qWide > $signed(MAX_Q)) begin
                recip = MAX_Q;
            end else if (qWide < $signed(MIN_Q)) begin
                recip = MIN_Q;
            end else begin
                recip = qWide[WIDTH-1:0];
            end
        end
    end
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

// Fixed Vector Normalization (Q8.4)
module fixed_vec3_normalize #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] x, y, z,
    output signed [WIDTH-1:0] nx, ny, nz
);
    wire signed [WIDTH-1:0] mag2;
    wire signed [WIDTH-1:0] mag;
    wire signed [WIDTH-1:0] nxWire;
    wire signed [WIDTH-1:0] nyWire;
    wire signed [WIDTH-1:0] nzWire;
    wire divErrX;
    wire divErrY;
    wire divErrZ;

    fixed_point_dot #(.WIDTH(WIDTH)) u_mag2 (
        .ax(x), .ay(y), .az(z),
        .bx(x), .by(y), .bz(z),
        .dot(mag2)
    );

    fixed_point_sqrt #(.WIDTH(WIDTH)) u_magSqrt (
        .a(mag2),
        .root(mag)
    );

    fixed_point_div #(.WIDTH(WIDTH)) u_divX (
        .a(x), .b(mag), .quot(nxWire), .errorFlag(divErrX)
    );
    fixed_point_div #(.WIDTH(WIDTH)) u_divY (
        .a(y), .b(mag), .quot(nyWire), .errorFlag(divErrY)
    );
    fixed_point_div #(.WIDTH(WIDTH)) u_divZ (
        .a(z), .b(mag), .quot(nzWire), .errorFlag(divErrZ)
    );

    assign nx = (mag == 0) ? 0 : nxWire;
    assign ny = (mag == 0) ? 0 : nyWire;
    assign nz = (mag == 0) ? 0 : nzWire;
endmodule
