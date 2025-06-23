`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.06.2025 02:35:50
// Design Name: 
// Module Name: devre
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


module devre(input a, input b, input e, output reg c);
always @(*) begin
	if(a)
	c=b^e;
	else
	c=a;
end
endmodule

