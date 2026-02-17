module scene_streamer (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        start,
    output logic        valid,
    output logic [7:0]  idx,
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

// TODO(sceneStreamer): add ready/valid handshake (backpressure support).
// TODO(sceneStreamer): latch per-pixel context so object scan is decoupled from input timing.
// TODO(sceneStreamer): guard SCENE_SPHERE_COUNT==0 and assert done safely.
// TODO(sceneStreamer): optionally emit last flag per object for hitReducer integration.

logic running;
logic [7:0] cur_idx;

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        running <= 1'b0;
        cur_idx <= '0;
        valid   <= 1'b0;
        done    <= 1'b0;
    end else begin
        valid <= 1'b0;
        done  <= 1'b0;

        if (start && !running) begin
            running <= 1'b1;
            cur_idx <= '0;
        end else if (running) begin
            valid <= 1'b1;
            if (cur_idx == SCENE_SPHERE_COUNT-1) begin
                running <= 1'b0;
                done    <= 1'b1;
            end
            cur_idx <= cur_idx + 8'd1;
        end
    end
end

always_comb begin
    idx = cur_idx;
    sceneSphereGet(cur_idx, cx, cy, cz, radius, colorR, colorG, colorB, reflectivity);
end

endmodule