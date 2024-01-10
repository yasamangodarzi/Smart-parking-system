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
---  Module Name: exit_park 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module exit_park(
 exit,
 token,
 pattern,
 park_location);
input exit;
input [2:0] token;
input [2:0] pattern;
output [7:0] park_location;
wire [2:0] Ddata;

always @(exit)
  begin
   case(exit)
   1'b1: 
     begin
          decrypt
			        a1(exit, token, pattern, Ddata);
			 exit_parking_lot
			                a2(Ddata, park_location);		 
     end
   endcase
  end

endmodule
