`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:30:41 01/05/2022 
// Design Name: 
// Module Name:    full_adder_onebit 
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
module full_adder_onebit(
     input A,
    input B,
    input Sel,
    input Cin,
    output Sum,
    output Cout
    );
    wire Bnew;
	  wire w1,w2,w3;
	    xor  (Bnew,B,Sel);
		 xor   (w1,A,Bnew);
		 xor   (Sum,w1,Cin);
	    and   (w2,A,Bnew);
		 and   (w3,Cin,w1);
	    or   (Cout,w3,w2);

endmodule
