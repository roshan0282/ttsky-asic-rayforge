module scancodeROM(
    input [7:0] scancode,          // PS/2 scancode
    input shiftPressed,            // high if shift key is pressed
    output reg [7:0] asciiCode,    // ASCII output
    output reg validAscii          // high if scancode maps to ASCII
);
    // lookup table memory: 256 scancodes × 2 entries = 512 bytes
    // address = scancode * 2 + shift
    reg [7:0] scancodeMemory [0:511];

    // initialize memory from .mem file
    initial begin
        $readmemb("../scancode.mem", scancodeMemory);
    end

    // combinational lookup
    always @(*) begin
        // calculate address: {scancode, shiftPressed}
        asciiCode = scancodeMemory[{scancode, shiftPressed}];
        
        // valid if ASCII is non-zero
        validAscii = (asciiCode != 8'd0);
    end
endmodule