`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:48:22 05/06/2015 
// Design Name: 
// Module Name:    ReadInstr 
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
module ReadInstr(
	 input [31:0] word,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
	 output [25:0] jaddress,
    output [15:0] imm
    );

assign rs = word [25:21];
assign rt = word [20:16];
assign rd = word [15:11];
assign imm = word [15:0];
assign jaddress= word [25:0];
endmodule
