`timescale 1ns / 1ps
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
---  Module Name: smart_parking
-----------------------------------------------------------*/
module smart_parking(
input entry,
input [7:0] parking_capacity,
input exit,
input [2:0] pattern,
input [7:0] time_out,
input [7:0] time_in,
output [7:0] new_capacity,
output [7:0] time_total,
output [3:0] parked,
output [3:0] empty
);
wire [2:0]park_number;
wire [2:0]token;
wire [7:0] park_location;
wire [7:0] parking_capacity_new;

entry_park  EntryPark(entry, parking_capacity, park_number);			 
token_production  TProduction(park_number, pattern, token);     			 
exit_park  ExitPark(exit, token, pattern, park_location);
update_capacity  UCapacity(entry, parking_capacity, parking_capacity_new);
calculate_new_capacity  CNCapacity(park_location, parking_capacity_new, new_capacity); 
time_calculate  TCalculate(time_out, time_in, time_total); 		 		 
endmodule
