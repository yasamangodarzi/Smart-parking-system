`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:39:36 01/06/2022
// Design Name:   calculate_new_capacity
// Module Name:   C:/Users/Asus/Desktop/final/module_3/tes.v
// Project Name:  module_3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: calculate_new_capacity
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tes;

	// Inputs
	reg [7:0] park_location;
	reg [7:0] parking_capacity;

	// Outputs
	wire [7:0] new_capacity;

	// Instantiate the Unit Under Test (UUT)
	calculate_new_capacity uut (
		.park_location(park_location), 
		.parking_capacity(parking_capacity), 
		.new_capacity(new_capacity)
	);

	initial begin
		// Initialize Inputs
		park_location = 00000010;
		parking_capacity = 01000100;

		// Wait 100 ns for global reset to finish
		#100;
        
		  park_location = 00000010;
		parking_capacity = 01000100;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

