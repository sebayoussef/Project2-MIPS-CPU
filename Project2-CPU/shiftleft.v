`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:43 05/05/2015 
// Design Name: 
// Module Name:    shiftleft 
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
module shiftleft(
    input [31:0] In,
    output [31:0] Out
    );
assign Out[31:30] = 2'b0;
assign Out[29:0] = In[29:0];

endmodule
