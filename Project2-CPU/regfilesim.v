`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:28:05 05/12/2015
// Design Name:   regfile
// Module Name:   C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/regfilesim.v
// Project Name:  Project2-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regfile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regfilesim;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] w_data;
	reg [4:0] A_addr;
	reg [4:0] B_addr;
	reg [4:0] w_addr;
	reg ra_wr;
	reg Reg_wr;

	// Outputs
	wire [31:0] A_data;
	wire [31:0] B_data;

	// Instantiate the Unit Under Test (UUT)
	regfile uut (
		.clk(clk), 
		.rst(rst), 
		.A_data(A_data), 
		.B_data(B_data), 
		.w_data(w_data), 
		.A_addr(A_addr), 
		.B_addr(B_addr), 
		.w_addr(w_addr), 
		.ra_wr(ra_wr), 
		.Reg_wr(Reg_wr)
	);
always #10 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		w_data = 0;
		A_addr = 0;
		B_addr = 0;
		w_addr = 0;
		ra_wr = 0;
		Reg_wr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		w_data = 32'b1;
		A_addr = 32'b10001;
		B_addr = 32'b10010;
		w_addr = 32'b1;
		ra_wr = 0;
		Reg_wr = 1;
        
		// Add stimulus here

	end
      
endmodule

