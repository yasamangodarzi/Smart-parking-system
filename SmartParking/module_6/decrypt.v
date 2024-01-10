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
--  Student Mail: erfanehhh@gmail.com- yass.godarzi@gmail.com
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: decrypt 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module decrypt(
 exit,
 token,
 pattern,
 park_number);
input exit;
input [2:0] token;
input [2:0] pattern;
output [2:0] park_number;
reg [2:0] park_number;


always @(exit or token or pattern)
 begin
  if(exit)
     begin

     park_number[0] = (pattern[0] ^ token[0]);
     park_number[1] = (pattern[1] ^ token[1]);
     park_number[2] = (pattern[2] ^ token[2]);

     end
  else
     park_number = 3'bxxx;	  
 end
endmodule
