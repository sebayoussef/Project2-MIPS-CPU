`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:24:28 05/12/2015
// Design Name:   ReadInstr
// Module Name:   C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/readinst-sim.v
// Project Name:  Project2-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ReadInstr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module readinstsim;

	// Inputs
	reg [31:0] word;

	// Outputs
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [25:0] jaddress;
	wire [15:0] imm;

	// Instantiate the Unit Under Test (UUT)
	ReadInstr uut (
		.word(word), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.jaddress(jaddress), 
		.imm(imm)
	);

	initial begin
		// Initialize Inputs
		word = 0;

		// Wait 100 ns for global reset to finish
		#100;
        word=32'b00000010001100100100000000100000;
		  #100;
		  word=32'b00000010001100100100000000101010;
		  #100;
		// Add stimulus here

	end
      
endmodule

