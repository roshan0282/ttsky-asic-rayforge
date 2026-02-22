// fontROM - 8x8 pixel font for ASCII characters 0-127
module fontROM(
    input [6:0] charCode,
    input [2:0] row,
    output reg [7:0] rowData
);
    // font memory: 128 characters × 8 rows = 1024 entries
    reg [7:0] fontMemory [0:1023];

    // initialize from .mem file
    initial begin
        $readmemb("font8x8.mem", fontMemory);
    end

    // combinational read
    always @(*) begin
        // address calculation: charCode * 8 + row
        rowData = fontMemory[{charCode, row}];
    end
endmodule
