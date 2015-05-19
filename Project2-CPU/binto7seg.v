`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:59:19 05/17/2015 
// Design Name: 
// Module Name:    binto7seg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module binto7seg(
    input [1:0] decin,
    input [3:0] x,
	 input sel,    // displays upper/ lower 16 bits
    output reg [6:0] out,
    input en
    );
//reg [15:0] display; 
//reg [3:0] y;
//always @ (*) begin
//	if (sel)   // upper 16 bits
//		display = x[31:16];
//	else
//		display = x[15:0]; /
//end

//always @(*) begin
//case(decin)
//		2'b00: y = display [3:0];
//		2'b01: y = display [7:4];
//		2'b10: y = display [11:8]; 
//		2'b11: y = display [15:12];
//	endcase
//end

always@(*) begin if (en)
	case (x) 
		4'b0000: out = 7'b0000001;
		4'b0001: out = 7'b1001111;
		4'b0010: out = 7'b0010010;
		4'b0011: out = 7'b0000110;
		4'b0100: out = 7'b1001100;
		4'b0101: out = 7'b0100100;
		4'b0110: out = 7'b0100000;
		4'b0111: out = 7'b0001111;
		4'b1000: out = 7'b0000000;
		4'b1001: out = 7'b0000100;
		4'b1010: out = 7'b0001000;  
		4'b1011: out = 7'b1100000;
		4'b1100: out = 7'b0110001;
		4'b1101: out = 7'b1000001;
		4'b1110: out = 7'b0110000;
		4'b1111: out = 7'b0111000;
		default: out = 7'b0000001;
	endcase
else out = 7'b0000001;
end
endmodule 