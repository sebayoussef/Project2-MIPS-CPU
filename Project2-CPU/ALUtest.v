`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:53:04 05/12/2015
// Design Name:   ALU
// Module Name:   C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/ALUtest.v
// Project Name:  Project2-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUtest;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [5:0] ALUsel;
	reg clk;

	// Outputs
	wire [31:0] Result;
	wire ZFlag;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
	   .clk (clk),
		.A(A), 
		.B(B), 
		.Result(Result), 
		.ALUsel(ALUsel), 
		.ZFlag(ZFlag)
	);
	always #10 clk=~clk;

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALUsel = 0;
		clk=0;

		// Wait 100 ns for global reset to finish
		#100;
       ALUsel= 32'b100000;
		 A= 20;
		 B=10;
		 #100;
		 
		 ALUsel=32'b100010;
		 A= 20;
		 B=10;
		 #100;
		 
		 ALUsel=32'b100101;
		 A= 1;
		 B=0;
		 #100;
		 
		 ALUsel=32'b100100;
		 A= 1;
		 B=0;
		 #100;
		 
		 ALUsel=32'b101010;
		 A= 20;
		 B=10;
		 #100;
		 
		 ALUsel=32'b101010;
		 A= 20;
		 B=20;
		 #100;
		 ALUsel=32'b101;
		  A= 20;
		 B=10;
		 #100;
		  ALUsel=32'b101;
		  A= 20;
		 B=20;
		 #100;
		// Add stimulus here

	end      
endmodule

