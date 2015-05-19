`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:38:52 05/12/2015 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [5:0] opcode,
    input [5:0] funct,
	 input Zflag,
	 output reg Mem_wr,
	 output reg Mem_read,
    output reg datasource,
    output reg regsel,
	 output reg MemtoReg,
	 output reg branch,
    output reg [5:0] ALUsel, 
	 output reg jump,
	 output reg jal,
	 output reg regwr,
	 output reg jr
    );

 always @(*) begin
 regwr=1'b1;
 jump= 1'b0;
 jal=1'b0;
 branch=1'b0;
 MemtoReg=1'b0;
 Mem_wr= 1'b0;
 Mem_read=1'b0;
 jr=1'b0;
 	if (Zflag)
		 branch=1'b1;
		if (opcode == 6'b0) begin
			regsel=1'b1;
			datasource=0;
			ALUsel=funct;
			MemtoReg=1'b1;
		   if (funct==6'b1000)
				jr=1'b1;
			end
		else
		 if (opcode==6'b0010)   
		   jump=1'b1;  
			else
			  if (opcode==6'b0011)   //jal
			     jal=1'b1;
				  
		   else			
		 begin			
			ALUsel=opcode;
			if ((opcode!=6'b000100)&&(opcode!=6'b000101)) begin  //beq/bne
			datasource=1'b1;
			regsel=1'b0;
		end
			if (opcode==6'b101011) begin  //sw
			   Mem_wr=1'b1;
				Mem_read=1'b0;
				MemtoReg= 1'b1;
				end
			else
			  if (opcode==6'b100011)  //lw
			  begin
			    Mem_wr=1'b0;
				 Mem_read=1'b1;
				 MemtoReg= 1'b0;
				end
	       
			end     //j jr beq bne
			if ((opcode==6'b0010)|| (opcode==6'b1000)||(opcode== 6'b000100)||(opcode==6'b000101))
			regwr=1'b0;
			end
		
endmodule
