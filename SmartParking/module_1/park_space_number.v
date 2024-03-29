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
--  Student Mail:Erfanehhh@gmail.com- yass.godarzi@gmail.com 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: park_space_number 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module park_space_number(
 enable,
 parking_capacity,
 park_number);
input enable;
input [7:0] parking_capacity;
output [2:0] park_number;
reg [2:0] park_number;
always @ (parking_capacity,enable)
begin 
if((enable==1'b1)) 
casex (parking_capacity)
8'b00000001: park_number = 3'b000;
8'b0000001x: park_number= 3'b001;
8'b000001xx: park_number= 3'b010;
8'b00001xxx: park_number= 3'b011;
8'b0001xxxx: park_number= 3'b100;
8'b001xxxxx: park_number= 3'b101;
8'b01xxxxxx: park_number= 3'b110;
8'b1xxxxxxx: park_number= 3'b111;
endcase
 
 

end
endmodule