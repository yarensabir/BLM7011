`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 21.05.2025 16:40:08
// Design Name: 
// Module Name: 28042025_LED_EXAMPLE
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module 28042025_LED_EXAMPLE(
input clk,
input rst,
input btn, // senaryoda buton var, buton varken ledler kaysın isteniyor
output reg [15:0] led
    );
    reg [15:0] led_next;
    
    always@(posedge clk) begin
        led <= led_next; 
        //clk ile tetiklenen led adında bir saklayıcı var.
        //bu saklayıcının sinyali led_next kablosundan alıyor
    end
    
    //always@(*) bloğum devrenin davranışını belirliyor
    always@(*) begin
        led_next = led; //başlangıçta amatörken sorunların önüne geçmeyi sağlayan bir yaklaşım
        
        if(rst) begin
            led_Next = 16'b000000000000001;
        end else
            if(btn)
                //led_next = led >> 1; bu işlem bit değerini 1 sağa kaydırır ama en sola geldiğimizde 1 biti uçar
                led_next = {led[0], led[15:1]}; // concat işlemi
                //en sağdaki biti al, en sola koy
                //ikisinin de donanımsal açıdan maliyeti yok
                
                
                
        end
        
    end
    
    
endmodule
