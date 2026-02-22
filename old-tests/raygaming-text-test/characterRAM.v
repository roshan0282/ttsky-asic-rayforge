// character RAM - dual-port BRAM for text display (80x60 characters)
module characterRAM(
    input clkA,
    input [12:0] addrA,
    input wrEnA,
    input [6:0] dataWrA,
    input clkB,
    input [12:0] addrB,
    output reg [6:0] dataRdB
);
    // 4800 words x 7 bits (80 columns × 60 rows)
    reg [6:0] memory [0:4799];
    
    // port A: write
    always @(posedge clkA) begin
        if (wrEnA)
            memory[addrA] <= dataWrA;
    end
    
    // port B: read
    always @(posedge clkB) begin
        dataRdB <= memory[addrB];
    end
    
    // initialize to spaces
    integer i;
    initial begin
        for (i = 0; i < 4800; i = i + 1)
            memory[i] = 7'd32;  // ASCII space
    end
endmodule

