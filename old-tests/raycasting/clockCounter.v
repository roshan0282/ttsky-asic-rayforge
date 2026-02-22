// clock counter - real-time clock (HH:MM:SS.SSSSS)
// counts time from reset with subsecond precision
module clockCounter(
    input clock50MHz,
    input resetn,
    output reg [5:0] hours,
    output reg [5:0] minutes,
    output reg [5:0] seconds,
    output reg [16:0] subSeconds  // 0-99999 (5 decimal digits)
);
    // counter for 50MHz clock: 50000000 cycles = 1 second
    // but we want 10us precision (100000 counts per second)
    // so we divide by 500 to get 10us ticks
    reg [8:0] tickCounter;  // 0-499
    
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            tickCounter <= 9'd0;
            subSeconds <= 17'd0;
            seconds <= 6'd0;
            minutes <= 6'd0;
            hours <= 6'd0;
        end else begin
            // count 50MHz cycles in groups of 500 (10us tick)
            if (tickCounter == 9'd499) begin
                tickCounter <= 9'd0;
                
                // increment subseconds (10us units, 0-99999)
                if (subSeconds == 17'd99999) begin
                    subSeconds <= 17'd0;
                    
                    // increment seconds
                    if (seconds == 6'd59) begin
                        seconds <= 6'd0;
                        
                        // increment minutes
                        if (minutes == 6'd59) begin
                            minutes <= 6'd0;
                            
                            // increment hours (wrap at 24)
                            if (hours == 6'd23) begin
                                hours <= 6'd0;
                            end else begin
                                hours <= hours + 6'd1;
                            end
                        end else begin
                            minutes <= minutes + 6'd1;
                        end
                    end else begin
                        seconds <= seconds + 6'd1;
                    end
                end else begin
                    subSeconds <= subSeconds + 17'd1;
                end
            end else begin
                tickCounter <= tickCounter + 9'd1;
            end
        end
    end
endmodule

