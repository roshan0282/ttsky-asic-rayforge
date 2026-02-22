module uart_scene_receiver #(
    parameter MAX_SPHERES = 4,
    parameter MAX_LIGHTS  = 2,
    parameter CLK_FREQ    = 50_000_000,
    parameter BAUD_RATE   = 115200
)(
    input  logic        clk,
    input  logic        resetn,
    input  logic        uartRx,
    // Sphere arrays out
    output logic signed [31:0] cx_arr    [0:MAX_SPHERES-1],
    output logic signed [31:0] cy_arr    [0:MAX_SPHERES-1],
    output logic signed [31:0] cz_arr    [0:MAX_SPHERES-1],
    output logic signed [31:0] radius_arr[0:MAX_SPHERES-1],
    output logic        [7:0]  colorR_arr[0:MAX_SPHERES-1],
    output logic        [7:0]  colorG_arr[0:MAX_SPHERES-1],
    output logic        [7:0]  colorB_arr[0:MAX_SPHERES-1],
    output logic signed [31:0] refl_arr  [0:MAX_SPHERES-1],
    // Light arrays out
    output logic signed [31:0] light_x_arr        [0:MAX_LIGHTS-1],
    output logic signed [31:0] light_y_arr        [0:MAX_LIGHTS-1],
    output logic signed [31:0] light_z_arr        [0:MAX_LIGHTS-1],
    output logic        [7:0]  light_colorR_arr   [0:MAX_LIGHTS-1],
    output logic        [7:0]  light_colorG_arr   [0:MAX_LIGHTS-1],
    output logic        [7:0]  light_colorB_arr   [0:MAX_LIGHTS-1],
    output logic signed [31:0] light_intensity_arr[0:MAX_LIGHTS-1],
    // Count outputs
    output logic [$clog2(MAX_SPHERES+1)-1:0] num_spheres,
    output logic [$clog2(MAX_LIGHTS+1)-1:0]  num_lights,
    // Status
    output logic scene_ready
);

    // -------------------------------------------------------------------------
    // UART receiver wiring
    // -------------------------------------------------------------------------
    logic [7:0] uart_data;
    logic       uart_valid;

    uartReceiver #(
        .CLK_FREQ (CLK_FREQ),
        .BAUD_RATE(BAUD_RATE),
        .WIDTH    (8)
    ) u_rx (
        .clk      (clk),
        .resetn   (resetn),
        .uartRx   (uartRx),
        .dataOut  (uart_data),
        .dataValid(uart_valid),
        .rxBusy   ()
    );

    // -------------------------------------------------------------------------
    // FSM states
    // -------------------------------------------------------------------------
    typedef enum logic [4:0] {
        S_NUM_SPHERES,   // waiting for num_spheres byte
        S_NUM_LIGHTS,    // waiting for num_lights byte
        S_SPHERE_CX,     // 4 bytes: cx
        S_SPHERE_CY,
        S_SPHERE_CZ,
        S_SPHERE_RADIUS,
        S_SPHERE_COLORR,
        S_SPHERE_COLORG,
        S_SPHERE_COLORB,
        S_SPHERE_REFL,   // 4 bytes: reflectivity
        S_LIGHT_LX,      // 4 bytes: lx
        S_LIGHT_LY,
        S_LIGHT_LZ,
        S_LIGHT_COLORR,
        S_LIGHT_COLORG,
        S_LIGHT_COLORB,
        S_LIGHT_INTENSITY,
        S_DONE
    } state_t;

    state_t state;

    // -------------------------------------------------------------------------
    // Internal registers
    // -------------------------------------------------------------------------
    logic [$clog2(MAX_SPHERES+1)-1:0] sphere_count;  // decrements down to 0
    logic [$clog2(MAX_LIGHTS+1)-1:0]  light_count;
    logic [$clog2(MAX_SPHERES+1)-1:0] sphere_idx;    // current write index
    logic [$clog2(MAX_LIGHTS+1)-1:0]  light_idx;

    logic [1:0] byte_idx;   // tracks which byte of a 4-byte field we're on
    logic [31:0] shift_reg; // assembles 4 bytes into a 32-bit word (MSB first)

    // -------------------------------------------------------------------------
    // Helper: next state after finishing all bytes of a 32-bit field
    // -------------------------------------------------------------------------
    // 4-byte fields use byte_idx 0-3. Single-byte fields skip byte_idx.

    always_ff @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            state        <= S_NUM_SPHERES;
            sphere_count <= '0;
            light_count  <= '0;
            sphere_idx   <= '0;
            light_idx    <= '0;
            byte_idx     <= '0;
            shift_reg    <= '0;
            num_spheres  <= '0;
            num_lights   <= '0;
            scene_ready  <= 1'b0;
        end else begin
            if (uart_valid) begin
                case (state)

                    // ----------------------------------------------------------
                    // Header: number of spheres and lights
                    // ----------------------------------------------------------
                    S_NUM_SPHERES: begin
                        num_spheres  <= uart_data[$clog2(MAX_SPHERES+1)-1:0];
                        sphere_count <= uart_data[$clog2(MAX_SPHERES+1)-1:0];
                        sphere_idx   <= '0;
                        state        <= S_NUM_LIGHTS;
                    end

                    S_NUM_LIGHTS: begin
                        num_lights  <= uart_data[$clog2(MAX_LIGHTS+1)-1:0];
                        light_count <= uart_data[$clog2(MAX_LIGHTS+1)-1:0];
                        light_idx   <= '0;
                        // If no spheres just go straight to lights
                        state <= (uart_data > 0 || sphere_count > 0)
                                 ? S_SPHERE_CX : S_LIGHT_LX;
                        byte_idx <= '0;
                    end

                    // ----------------------------------------------------------
                    // Sphere fields (32-bit, 4 bytes MSB first, except colors)
                    // ----------------------------------------------------------
                    S_SPHERE_CX: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            cx_arr[sphere_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_SPHERE_CY;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_SPHERE_CY: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            cy_arr[sphere_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_SPHERE_CZ;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_SPHERE_CZ: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            cz_arr[sphere_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_SPHERE_RADIUS;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_SPHERE_RADIUS: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            radius_arr[sphere_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_SPHERE_COLORR;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    // Colors are single bytes
                    S_SPHERE_COLORR: begin
                        colorR_arr[sphere_idx] <= uart_data;
                        state <= S_SPHERE_COLORG;
                    end

                    S_SPHERE_COLORG: begin
                        colorG_arr[sphere_idx] <= uart_data;
                        state <= S_SPHERE_COLORB;
                    end

                    S_SPHERE_COLORB: begin
                        colorB_arr[sphere_idx] <= uart_data;
                        state <= S_SPHERE_REFL;
                    end

                    S_SPHERE_REFL: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            refl_arr[sphere_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx     <= '0;
                            sphere_idx   <= sphere_idx + 1;
                            sphere_count <= sphere_count - 1;
                            // Move to next sphere or on to lights
                            state <= (sphere_count == 1) ? S_LIGHT_LX : S_SPHERE_CX;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    // ----------------------------------------------------------
                    // Light fields
                    // ----------------------------------------------------------
                    S_LIGHT_LX: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            light_x_arr[light_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_LIGHT_LY;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_LIGHT_LY: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            light_y_arr[light_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_LIGHT_LZ;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_LIGHT_LZ: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            light_z_arr[light_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx <= '0;
                            state    <= S_LIGHT_COLORR;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_LIGHT_COLORR: begin
                        light_colorR_arr[light_idx] <= uart_data;
                        state <= S_LIGHT_COLORG;
                    end

                    S_LIGHT_COLORG: begin
                        light_colorG_arr[light_idx] <= uart_data;
                        state <= S_LIGHT_COLORB;
                    end

                    S_LIGHT_COLORB: begin
                        light_colorB_arr[light_idx] <= uart_data;
                        state <= S_LIGHT_INTENSITY;
                    end

                    S_LIGHT_INTENSITY: begin
                        shift_reg <= {shift_reg[23:0], uart_data};
                        if (byte_idx == 2'd3) begin
                            light_intensity_arr[light_idx] <= {shift_reg[23:0], uart_data};
                            byte_idx    <= '0;
                            light_idx   <= light_idx + 1;
                            light_count <= light_count - 1;
                            state <= (light_count == 1) ? S_DONE : S_LIGHT_LX;
                        end else begin
                            byte_idx <= byte_idx + 1;
                        end
                    end

                    S_DONE: begin
                        scene_ready <= 1'b1;
                    end

                    default: state <= S_NUM_SPHERES;
                endcase
            end
        end
    end

endmodule