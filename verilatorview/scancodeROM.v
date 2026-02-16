// scancode ROM - converts PS/2 scancodes to ASCII
module scancodeROM(
    input [7:0] scancode,
    input shiftPressed,
    output reg [7:0] asciiCode,
    output reg validAscii
);
    // lookup table: 256 scancodes × 2 entries = 512 bytes
    reg [7:0] scancodeMemory [0:511];

    // initialize from .mem file (local to test-verilator)
    initial begin
        $readmemb("scancode.mem", scancodeMemory);
    end

    // combinational lookup
    always @(*) begin
        // address: {scancode, shiftPressed}
        asciiCode = scancodeMemory[{scancode, shiftPressed}];
        // valid if non-zero ASCII code
        validAscii = (asciiCode != 8'd0);
    end
endmodule

