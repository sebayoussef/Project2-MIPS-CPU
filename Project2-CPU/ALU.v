`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:44 05/05/2015 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    output reg [31:0] Result,
    input [5:0] ALUsel,
    output reg ZFlag
    );
always@(*) begin
	case(ALUsel)
		32'b101: ZFlag = (A!=B);
		32'b100: ZFlag = (A==B);
		default ZFlag = 0;
	endcase
end
always @ (*) begin
case (ALUsel)
32'b100000: Result = A+B;
32'b100010: Result = A-B;
32'b100101: Result = A|B;
32'b100100: Result = A&B;
32'b101010: Result = (A<B) ? 32'b1 : 32'b0;
32'b001000: Result = A+B;  // addi
32'b001101: Result = A|B;  // ori
32'b001100: Result = A&B;  // andi
32'b100011: Result = A+B;  // B = lw
32'b101011: Result = A+B; // sw
default: Result = 0;
endcase
end
endmodule

