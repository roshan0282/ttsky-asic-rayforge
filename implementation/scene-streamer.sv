module scene_streamer (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        start,
    input  logic        ready,
    output logic        valid,
    output logic [7:0]  idx,
    output logic        last,
    output logic        done,

    output logic signed [11:0] cx,
    output logic signed [11:0] cy,
    output logic signed [11:0] cz,
    output logic signed [11:0] radius,
    output logic [7:0] colorR,
    output logic [7:0] colorG,
    output logic [7:0] colorB,
    output logic signed [11:0] reflectivity
);

`include "scene-lut.svh"

logic running;
logic [7:0] cur_idx;
logic startLatched;

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        running <= 1'b0;
        cur_idx <= '0;
        startLatched <= 1'b0;
        valid   <= 1'b0;
        last    <= 1'b0;
        done    <= 1'b0;
    end else begin
        startLatched <= start;
        valid <= 1'b0;
        last  <= 1'b0;
        done  <= 1'b0;

        if ((startLatched || start) && !running) begin
            if (SCENE_SPHERE_COUNT == 0) begin
                done <= 1'b1;
                running <= 1'b0;
            end else begin
                running <= 1'b1;
                cur_idx <= '0;
            end
        end else if (running) begin
            valid <= 1'b1;

            if (ready) begin
                if (cur_idx == SCENE_SPHERE_COUNT-1) begin
                    last <= 1'b1;
                    done <= 1'b1;
                    running <= 1'b0;
                end else begin
                    cur_idx <= cur_idx + 8'd1;
                end
            end
        end
    end
end

always_comb begin
    idx = cur_idx;
    sceneSphereGet(cur_idx, cx, cy, cz, radius, colorR, colorG, colorB, reflectivity);
end

endmodule