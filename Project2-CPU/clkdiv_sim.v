`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:19:41 05/17/2015
// Design Name:   clkdiv
// Module Name:   C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/clkdiv_sim.v
// Project Name:  Project2-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clkdiv
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clkdiv_sim;

	// Inputs
	reg in;
	reg sel;
	reg rst;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	clkdiv uut (
		.in(in), 
		.sel(sel), 
		.rst(rst), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		sel = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#5
      in = 1;
		sel = 1;
		rst = 0;
		#5
		in = 0;
		sel = 1;
		rst = 0;
		#5;
		// Add stimulus here

	end
      
endmodule

