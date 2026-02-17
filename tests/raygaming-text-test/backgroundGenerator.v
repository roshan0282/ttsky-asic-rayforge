// Background Generator - 4 quadrants with rotating colors
// Colors rotate every 0.5 seconds: red -> blue -> green -> yellow
module backgroundGenerator(
    input clock,
    input reset,
    input [9:0] xOrd,
    input [9:0] yOrd,
    input visible,
    output reg [7:0] red,
    output reg [7:0] green,
    output reg [7:0] blue
);
    // Counter for 0.5 second rotation (assuming 50MHz clock)
    // 50MHz * 0.5s = 25,000,000 cycles
    parameter CYCLES_PER_ROTATION = 25_000_000;
    reg [24:0] cycleCounter;
    reg [1:0] rotationState;  // 0-3 for 4 rotation positions
    
    // Screen dimensions (assuming 640x480)
    parameter H_CENTER = 320;
    parameter V_CENTER = 240;
    
    // Determine which quadrant we're in
    wire topHalf = (yOrd < V_CENTER);
    wire leftHalf = (xOrd < H_CENTER);
    wire [1:0] quadrant = {topHalf, leftHalf};
    
    // Counter for rotation
    always @(posedge clock or negedge reset) begin
        if (!reset) begin
            cycleCounter <= 0;
            rotationState <= 0;
        end else begin
            if (cycleCounter >= CYCLES_PER_ROTATION - 1) begin
                cycleCounter <= 0;
                rotationState <= rotationState + 1;
            end else begin
                cycleCounter <= cycleCounter + 1;
            end
        end
    end
    
    // Color assignment based on quadrant and rotation state
    // Base colors: red, blue, green, yellow
    // Quadrants: 00=top-left, 01=top-right, 10=bottom-left, 11=bottom-right
    // Compute color index (automatically wraps at 2 bits)
    wire [1:0] colorIndex = quadrant + rotationState;
    
    always @(*) begin
        if (!visible) begin
            red = 8'h00;
            green = 8'h00;
            blue = 8'h00;
        end else begin
            case (colorIndex)
                2'd0: begin  // Red
                    red = 8'hFF;
                    green = 8'h00;
                    blue = 8'h00;
                end
                2'd1: begin  // Blue
                    red = 8'h00;
                    green = 8'h00;
                    blue = 8'hFF;
                end
                2'd2: begin  // Green
                    red = 8'h00;
                    green = 8'hFF;
                    blue = 8'h00;
                end
                2'd3: begin  // Yellow
                    red = 8'hFF;
                    green = 8'hFF;
                    blue = 8'h00;
                end
                default: begin  // Shouldn't happen, but prevent latches
                    red = 8'h00;
                    green = 8'h00;
                    blue = 8'h00;
                end
            endcase
        end
    end
endmodule
