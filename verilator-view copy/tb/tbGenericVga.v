// Generic testbench wrapper for VGA projects - Verilator compatible
// This testbench can work with any module that has VGA outputs
module tbGenericVga(
    // Clock and reset (exposed as ports for Verilator)
    input clock50MHz,
    input resetn,
    
    // VGA outputs (exposed for C++ to read)
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);
    // Internal wires for DUT outputs
    wire dutHSync, dutVSync;
    wire [7:0] dutRed, dutGreen, dutBlue;
    wire dutBlank;
    wire [9:0] dutX, dutY;
    
    // Instantiate the design under test
    // TOP_MODULE is defined via -DTOP_MODULE=... at compile time
    wire [7:0] dut_uo_out;
    `TOP_MODULE dut (
        .clk(clock50MHz),
        .rst_n(resetn),
        .ena(1'b1),
        .ui_in(8'b0),
        .uio_in(8'b0),
        .uo_out(dut_uo_out),
        .uio_out(),
        .uio_oe()
    );
    
    // Extract VGA signals from packed output
    // Format: uo_out[7]=HS, [6]=B0, [5]=G0, [4]=R0, [3]=VS, [2]=B1, [1]=G1, [0]=R1
    assign dutHSync = dut_uo_out[7];
    assign dutVSync = dut_uo_out[3];
    assign dutRed[7:6] = {dut_uo_out[0], dut_uo_out[4]};
    assign dutGreen[7:6] = {dut_uo_out[1], dut_uo_out[5]};
    assign dutBlue[7:6] = {dut_uo_out[2], dut_uo_out[6]};
    
    // Create a VGA driver to get coordinates
    // Standard VGA 640x480 timing scaled to project resolution
    reg [9:0] xCounter, yCounter;
    reg pixelVisible;
    reg hSyncReg, vSyncReg;
    
    // VGA timing parameters for 640x480 @ 60Hz with 25MHz pixel clock
    // We'll scale this based on the 50MHz input clock (divide by 2)
    localparam H_VISIBLE = 640;
    localparam H_FRONT = 16;
    localparam H_SYNC = 96;
    localparam H_BACK = 48;
    localparam H_TOTAL = 800;
    
    localparam V_VISIBLE = 480;
    localparam V_FRONT = 10;
    localparam V_SYNC = 2;
    localparam V_BACK = 33;
    localparam V_TOTAL = 525;
    
    reg pixelClk;
    
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            pixelClk <= 0;
        end else begin
            pixelClk <= ~pixelClk;
        end
    end
    
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            xCounter <= 0;
            yCounter <= 0;
            hSyncReg <= 1;
            vSyncReg <= 1;
            pixelVisible <= 0;
        end else if (pixelClk) begin
            // Horizontal counter
            if (xCounter == H_TOTAL - 1) begin
                xCounter <= 0;
                // Vertical counter
                if (yCounter == V_TOTAL - 1) begin
                    yCounter <= 0;
                end else begin
                    yCounter <= yCounter + 1;
                end
            end else begin
                xCounter <= xCounter + 1;
            end
            
            // Generate sync signals
            hSyncReg <= ~((xCounter >= (H_VISIBLE + H_FRONT)) && 
                          (xCounter < (H_VISIBLE + H_FRONT + H_SYNC)));
            vSyncReg <= ~((yCounter >= (V_VISIBLE + V_FRONT)) && 
                          (yCounter < (V_VISIBLE + V_FRONT + V_SYNC)));
            
            // Visible region
            pixelVisible <= (xCounter < H_VISIBLE) && (yCounter < V_VISIBLE);
        end
    end
    
    // Output assignments - extract VGA signals from DUT packed output
    assign hSync = dutHSync;
    assign vSync = dutVSync;
    
    // Expand 2-bit color to 8-bit for display
    assign red   = {dutRed[7:6], dutRed[7:6], dutRed[7:6], dutRed[7:6]};
    assign green = {dutGreen[7:6], dutGreen[7:6], dutGreen[7:6], dutGreen[7:6]};
    assign blue  = {dutBlue[7:6], dutBlue[7:6], dutBlue[7:6], dutBlue[7:6]};
    
    // Use internal coordinates
    assign xOrd = xCounter;
    assign yOrd = yCounter;
    assign visible = pixelVisible;

endmodule
