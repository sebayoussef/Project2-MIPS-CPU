`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:17:02 05/12/2015
// Design Name:   CPU
// Module Name:   C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/CPUsim.v
// Project Name:  Project2-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

	 
module CPUsim;

	// Inputs
	reg clk;
	reg rst;
	reg sel;
	// Outputs
   wire [6:0] out;
	wire [3:0] decoderout;

		// Instantiate the Unit Under Test (UUT)
	CPU uut (
      .clk(clk),
		.rst(rst),
		.sel(sel),
		.out(out),
		.decoderout(decoderout)
	);
always #10 clk=~clk;
	initial begin
		// Initialize Inputs
		
		clk=0;
		rst=1;
		sel=0;

		// Wait 100 ns for global reset to finish
		#100;
rst=0;
sel=0;
#100;

	end
      
endmodule

