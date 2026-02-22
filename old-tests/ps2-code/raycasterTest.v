// testbench for raycaster module
`timescale 1ns / 1ps

module raycasterTest;
    reg clock50MHz;
    reg resetn;
    wire ps2Clk;
    wire ps2Dat;
    wire hSync;
    wire vSync;
    wire [9:0] xOrd;
    wire [9:0] yOrd;
    wire visible;
    wire [3:0] red;
    wire [3:0] green;
    wire [3:0] blue;
    
    // instantiate raycaster
    raycaster uut (
        .clock50MHz(clock50MHz),
        .resetn(resetn),
        .ps2Clk(ps2Clk),
        .ps2Dat(ps2Dat),
        .hSync(hSync),
        .vSync(vSync),
        .xOrd(xOrd),
        .yOrd(yOrd),
        .visible(visible),
        .red(red),
        .green(green),
        .blue(blue)
    );
    
    // clock generation: 50MHz = 20ns period
    initial begin
        clock50MHz = 0;
        forever #10 clock50MHz = ~clock50MHz;
    end
    
    // test stimulus
    initial begin
        // initialize
        resetn = 0;
        
        // wait for a few clock cycles
        #100;
        
        // release reset
        resetn = 1;
        
        // run for several frames
        // one frame at 640x525 @ 25MHz pixel clock = ~33ms
        // let's run for 100ms to see multiple frames
        #100_000_000;
        
        $display("Test completed successfully");
        $finish;
    end
    
    // monitor VGA signals
    initial begin
        $display("Time\t\txOrd\tyOrd\tVisible\tRed\tGreen\tBlue");
        $monitor("%t\t%d\t%d\t%b\t%h\t%h\t%h", 
                 $time, xOrd, yOrd, visible, red, green, blue);
    end
    
    // pull-up for PS/2 lines (not driven in this test)
    assign ps2Clk = 1'b1;
    assign ps2Dat = 1'b1;
    
endmodule

