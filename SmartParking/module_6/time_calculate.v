 /*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************************************************
--  Student ID  : 9931067-9931100
--  Student Name: erfaneh khanmohammadi -yasaman godarzi
--  Student Mail:erfanehhh@gmail.com- yass.godarzi@gmail.com
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: time_calculate
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module time_calculate(
 time_out,
 time_in,
 time_total);
input [7:0] time_out;
input [7:0] time_in;
output [7:0] time_total;
wire carry[7:0] ,Cout;
 
	full_adder_onebit  
	                               a1  (time_out[0],time_in[0],1'b1,1'b1, time_total[0],carry[0]),
									       a2  (time_out[1],time_in[1],1'b1,carry[0], time_total[1],carry[1]),
									       a3  (time_out[2],time_in[2],1'b1,carry[1], time_total[2],carry[2]),
									       a4  (time_out[3],time_in[3],1'b1,carry[2], time_total[3],carry[3]),  
											 a5  (time_out[4],time_in[4],1'b1,carry[3], time_total[4],carry[4]),
									       a6  (time_out[5],time_in[5],1'b1,carry[4], time_total[5],carry[5]),
									       a7  (time_out[6],time_in[6],1'b1,carry[5], time_total[6],carry[6]),
									       a8  (time_out[7],time_in[7],1'b1,carry[6], time_total[7],Cout);
											 and (Cout,1'b1,Cout);
endmodule
