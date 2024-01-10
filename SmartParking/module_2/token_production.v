 /*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************************************************
--  Student ID  : 9931067-9931100
--  Student Name: erfaneh khanmohammadi -yasaman godaezi
--  Student Mail: Erfanehhh@gmail.com- yass.godarzi@gmail.com
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: token_production 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module token_production(
 park_number,
 pattern,
 token);
input [2:0] park_number;
input [2:0] pattern;
output [2:0] token;
wire [2:0] my_token;

assign my_token = (pattern ^ park_number);
assign token = my_token;

endmodule