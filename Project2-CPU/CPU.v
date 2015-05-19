`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:13:58 05/12/2015 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
    input clk,
	 input rst,
	 input sel,
    output reg [6:0] out,
	 output [3:0] decoderout
    );
    wire [27:0] displayout;	 
	 wire [31:0] A_data, B_data;
	 wire [4:0] rs, rt, rd;
	 wire [25:0] joffset;
	 wire [15:0] imm;
	 wire regsel, datasource, memwr, memread, memtoreg, Zflag, jr; 
	 wire branch, jump, jal, regwr, clk1;
	 //wire [31:0] A_data, B_data;
	 wire [5:0] ALUsel;
	 wire [31:0] immediate;
	 wire [7:0] counterout,jreg;
	 wire [31:0] instr, mem2out;
	 wire [31:0] ALUresult;
	 wire [31:0] displaydata;
	 wire [1:0] decin; 
	 wire [3:0] decout1;


Memory M (
  .clka(clk1), // input clka
  .addra(counterout), // input [7 : 0] addra
  .douta(instr) // output [31 : 0] douta
);

clkdiv c2(clk,1'b1,rst,clk1);
ALU a1(A_data, datasource ? immediate :  B_data, ALUresult, ALUsel, Zflag);
ControlUnit c1(instr[31:26], instr[5:0], Zflag, memwr, memread, datasource, regsel, memtoreg, branch, ALUsel, jump, jal, regwr, jr); 
ReadInstr r1 (instr, rs, rt, rd, joffset, imm);
counter c (~clk, rst, branch, imm, joffset, jump, jal, jr, jreg, counterout);	
regfile reg1 (clk, rst, A_data, B_data, memtoreg? ALUresult: mem2out, rs, rt, regsel ? rd : rt, regwr, ALUresult, jal, jreg, displaydata);
SignExt s1 (imm, immediate);
counter2 c3 (rst,clk1, decin);
bindecoder b2 (decin, 1, decout1);


binto7seg b3 (decin,displaydata[3:0] ,sel, displayout [6:0], 1'b1); 
binto7seg b4 (decin,displaydata[7:4],sel, displayout[13:7], 1'b1); 
binto7seg b5 (decin,displaydata[11:8],sel, displayout[20:14], 1'b1); 
binto7seg b6 (decin,displaydata[15:12],sel, displayout[27:21], 1'b1); 




always @(*) begin
case(decin)
		2'b00: out = displayout [6:0];
		2'b01: out = displayout [13:7];
		2'b10: out = displayout [20:14]; 
		2'b11: out = displayout [27:21];
	endcase
end
assign decoderout = ~decout1;


Memory_2 M2 (
  .clka(clk1), // input clka
  .wea(memwr), // input [0 : 0] wea
  .addra(ALUresult[7:0]), // input [7 : 0] addra
  .dina(B_data), // input [31 : 0] dina
  .clkb(clk1), // input clkb
  .addrb(ALUresult[7:0]), // input [7 : 0] addrb
  .doutb(mem2out) // output [31 : 0] doutb
);
endmodule



