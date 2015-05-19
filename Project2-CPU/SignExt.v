`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:52:53 05/05/2015 
// Design Name: 
// Module Name:    SignExt 
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
module SignExt(
    input [15:0] In,
    output [31:0] ExtOut
    );

assign ExtOut[31:16] = (In[15]==0) ? 16'b0 : 16'b1;
assign ExtOut[15:0]= In[15:0];

endmodule
