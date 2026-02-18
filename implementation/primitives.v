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
    wire signed [2*WIDTH-1:0] fullProd = a * b;
    wire signed [2*WIDTH-1:0] withRound = fullProd + 20'h8; // Add 0.5 for half round up

    // Check saturation on the rounded value
    localparam MAX_POS = 20'h7FF;
    localparam MIN_NEG = 20'h800;
    localparam MAX_SHIFTED = (MAX_POS << 4) + 20'hF;
    localparam MIN_SHIFTED = (MIN_NEG << 4);

    always @(*) begin
        if (withRound > MAX_SHIFTED)
            prod = MAX_POS;
        else if (withRound < MIN_SHIFTED)
            prod = MIN_NEG;
        else
            prod = withRound >>> 4; 
    end
endmodule

// Fixed Point Division
module fixed_point_div #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] a,
    input  signed [WIDTH-1:0] b,
    output signed [WIDTH-1:0] quot,
    output reg                errorFlag
);
    // Check divide by zero
    localparam MAX_POS = 20'h7FF;
    localparam MIN_NEG = 20'h800;    

    reg signed [2*WIDTH-1:0] dividend_shifted;

    always @(*) begin
        // Default assignments
        errorFlag = 1'b0;
        quot = 0;
        dividedShifted = a <<< 4;

        if (b == 0) begin
            errorFlag = 1'b1;

            // Saturate based on dividend sign
            if (a >= 0)
                quot = MAX_POS;
            else
                quot = MIN_NEG;
        end else
            quot  = dividedShifted / b
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

// Fixed Point Square Root (Newton-Raphson, placeholder)
module fixed_point_sqrt #(
    parameter WIDTH = 12,
    parameter ITERATIONS = 4
    ) (
    input  signed [WIDTH-1:0] a,
    output signed [WIDTH-1:0] root
);
    // Internal registers
    reg signed [2*WIDTH-1:0] guess;
    reg signed [2*WIDTH-1:0] newGuess;
    reg signed [2*WIDTH-1:0] quot;
    integer i;

    // Constants
    localparam INIT_GUESS = 160;    // 10 in Q8.4
    localparam ZERO = {WIDTH{1'b0}};

    always @(*) begin
        if (a == 0) begin
            root = 0;
        end else begin
            guess = INIT_GUESS;

            // Newton-Raphson iterations
            for (i = 0; i < ITERATIONS; i = i + 1) begin
                // Maintain precision by (a <<< 4) / guess
                quot = (a <<< 4) / guess;

                // newGuess = (guess + quot) / 2
                newGuess = (guess + quot) >>> 1;
                guess = newGuess;

            end

            // Final result after ITERATIONS
            root = guess[WIDTH-1:0];
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
        output signed [WIDTH-1:0] root,
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
        valid <= valid_reg[STAGES];
        sqrt <= guessReg[STAGES];
    end

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
