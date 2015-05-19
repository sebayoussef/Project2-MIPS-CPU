`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:37:19 05/18/2015
// Design Name:   regfile
// Module Name:   C:/Users/sebayoussef.AUC/Desktop/Project2-CPU/Project2-CPU/regsim.v
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

module regsim;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] w_data;
	reg [4:0] A_addr;
	reg [4:0] B_addr;
	reg [4:0] w_addr;
	reg Reg_wr;
	reg [31:0] ALUresult;
	reg jal;
	reg [7:0] jrreg;

	// Outputs
	wire [31:0] A_data;
	wire [31:0] B_data;
	wire [31:0] displaydata;

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
		.Reg_wr(Reg_wr), 
		.ALUresult(ALUresult), 
		.jal(jal), 
		.jrreg(jrreg), 
		.displaydata(displaydata)
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
		//Reg_wr = 0;
		ALUresult = 0;
		//jal = 0;
		//jrreg = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rst = 1;
		w_data = 32'b1;
		A_addr = 32'b10001;
		B_addr = 32'b10010;
		w_addr = 32'b1;
		Reg_wr = 1;
		// Add stimulus here

	end
      
endmodule

