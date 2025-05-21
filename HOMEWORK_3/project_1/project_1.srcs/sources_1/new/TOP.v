 //avionchip fpga simulation lab'a uygun isimlendirilmiştir
module TOP(
    input clk, 
    input rst, 
    output reg [15:0] leds
    );
    
    reg [15:0] led_next;
    reg [31:0] timer, timerNext;
    
    always@(posedge clk) begin
        leds <= led_next;
        timer <= timerNext;
    end
       
    always@(*) begin
        led_next = leds;
        timerNext = timer;
        if(rst) begin
            led_next = 16'b000000000000001;
            timerNext = 0;
        end else begin
            if(timer == 10) begin //simülatör 10Hz olduğu için 10 kere toplama 1 saniyeye denk geliyor
                timerNext = 0;
                
                //concat işemi yapıyoruz
                //en soldaki biti aldım, en sağa koydum
                led_next = {leds[14:0], leds[15:15]};
            end else begin
                timerNext = timer + 1;
            end
        end
    end
endmodule
