`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:43:35 05/12/2015
// Design Name:   ControlUnit
// Module Name:   C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/ControlUnit_test.v
// Project Name:  Project2-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlUnit_test;

	// Inputs
	reg opcode;
	reg funct;

	// Outputs
	wire datasource;
	wire regsel;
	wire [5:0] ALUsel;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.opcode(opcode), 
		.funct(funct), 
		.datasource(datasource), 
		.regsel(regsel), 
		.ALUsel(ALUsel)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
      opcode = 0;
		funct = 6'b1;
		#100;
		opcode=6'b1;
		funct=6'b0;
		#100;
		// Add stimulus here

	end
      
endmodule

