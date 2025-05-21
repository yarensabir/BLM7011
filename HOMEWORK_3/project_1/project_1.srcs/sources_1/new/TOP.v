 //avionchip fpga simulation lab'a uygun isimlendirilmiştir
module TOP(
    input clk, 
    input rst, 
    output reg [15:0] leds
    );
    
    reg [15:0] led_next;
    
    always@(posedge clk) begin
        leds <= led_next;
    end
       
    always@(*) begin
        led_next = leds;
    
    
    
        if(rst) begin
            led_next = 16'b000000000000001;
        end else
            led_next = {leds[15:14], leds[15:13]};
        end
    end
endmodule
