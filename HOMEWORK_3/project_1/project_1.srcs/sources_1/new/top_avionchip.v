`timescale 1ns / 1ps
/*

çözüm 1

module top (
    input clk, // 10Hz
    input rst,
    input [15:0] switches,
    input btnU,
    input btnD,
    input btnL,
    input btnR,
    input btnM,
    output reg [15:0] leds,
    output reg [7:0] ss3, ss2, ss1, ss0,
    output reg red, green, blue
);
    reg [15:0] led_next; //bir sonraki yanacak led’i tuttuğum veri yapısı
    reg [31:0] timer, timerNext; // simülatörde gözlem yapabilmek için toplayıcı devresi oluşturuyoruz. 
    
    always@(posedge clk) begin  // clk sinyalimin yükselen kenarında next sinyallerim ilgili sinyallere yükleniyor
        leds <= led_next;
        timer <= timerNext;
    end
       
    always@(*) begin
        led_next = leds;
        timerNext = timer;
        
        if(rst) begin  //rst sinyalim geldiğinde hem timer hem de led_lext sıfırlanarak sistemin sıfırlanması sağlanıyor
            led_next = 16'b000000000000001;
            timerNext = 0;
        end else begin 
//rst sinyalim yoksa önce timer kontrolü yapıyorum yeterince bekledim mi diye
//yeterince beklediysem timer saklayıcımı sıfırlıyorum ki baştan saymaya başlasın. 
//sonrasında yeni led değerimi atıyorum
//yeterince beklememişsem timerNext’i arttırmaya devam ediyorum
            if(timer == 10) begin
                timerNext = 0;
                //concat işlemi yapıyoruz
                //en soldaki biti aldım, en sağa koydum
                led_next = {leds[14:0], leds[15:15]};
            end else begin
                timerNext = timer + 1;
            end
        end
    end
endmodule
*/

/*
Kodlar bu şekilde simülasyon ortamında davranması gerektiği gibi davranmış, ledler sağdan sola doğru değişmiştir. 
Fakat bu süreçte rst sinyalini tetikleyemediğimi fark ettim. 
Bunun için rst sinyalini kaldırıp butondan bu tetiği aldım. 
Fakat butona bir kere basılmadıkça tetiklenme sağlanmadı ve led akışı başlamadı. 
Initial bloğu ile sorunu çözmeyi denedim fakat bu bloğun FPGA kartta sentezlenmediği için burada çalışmayacağını öğrendim. 
İlk tetiği rst sinyali ile clk sinyali bloğuna ekledim. 
*/


module top_avionchip(
    input clk, 
    input rst,
    input [15:0] switches,
    input btnU,
    input btnD,
    input btnL,
    input btnR,
    input btnM,
    output reg [15:0] leds,
    output reg [7:0] ss3, ss2, ss1, ss0,
    output reg red, green, blue
);
    reg [15:0] led_next;
    reg [31:0] timer, timerNext;

    always@(posedge clk) begin
        leds <= led_next;
        timer <= timerNext;
        if (rst) begin
          leds <= 16'b0000000000000001;
          timer <= 0;
        end
    end
       
    always@(*) begin
        led_next = leds;
        timerNext = timer;
        if(btnU) begin
            led_next = 16'b000000000000001;
            timerNext = 0;
        end else begin
            if(timer == 10) begin
                timerNext = 0;
                
                led_next = {leds[14:0], leds[15:15]};
            end else begin
                timerNext = timer + 1;
            end
        end
    end
endmodule

