/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: controller
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module controller(
input [2:0] system_token,
input request,
input [7:0] TimeData,
input reset,
input clock,
input confirm,
input [2:0] user_token,
output [7:0] data_Q,
output [7:0] data_P
);

  reg [2:0] Prstate, Nxtstate;
   reg     RegQ ;
   reg      RegP;
  parameter A = 3'b000 , B = 3'b001 , C = 3'b101 , E = 3'b111 , D = 3'b110 , P = 3'b011 , Q = 3'b100;
  
   always @ (posedge clock or negedge reset)
      if (reset==0) Prstate = A;   
      else Prstate = Nxtstate;  
		
   always @ (Prstate or confirm or request or user_token or TimeData or system_token )
         
         case (Prstate)
            A: if (~request) Nxtstate = A;
					 else Nxtstate = B;	 
					 
            B: if(~request) Nxtstate = A;  
					 else if (request & ~confirm) Nxtstate = B;  
                else if(request & confirm & system_token == user_token) Nxtstate = C;
                else if(request & confirm & system_token != user_token) Nxtstate = E;

            C: if(~request) Nxtstate = A;  
					 else if (request & ~confirm) Nxtstate = C;  
					 else if (request & confirm) Nxtstate = D;  
				
            E: if(~request) Nxtstate = A; 
					 //else Nxtstate = S3; 
					 else if (request & confirm) Nxtstate = D;
				D: if( request & (TimeData[4]&TimeData[5]&TimeData[6]&TimeData[7])== 1'b1)  Nxtstate = P; 
					 else if( request & (TimeData[4]&TimeData[5]&TimeData[6]&TimeData[7])== 1'b0)  Nxtstate = Q; 	
         endcase
			  
			
	always @ (Prstate or confirm or request or TimeData)       
         case (Prstate)
            A: 
				  begin  
				     RegQ =1'b0 ; 
				     RegP =1'b0 ; 
				  end
            B: 
				  begin  
				     RegQ =1'b0 ; 
					  RegP =1'b0 ;
				  end
            C: 
				  begin 
				    RegQ =1'b0 ;
				    RegP =1'b0 ;
				  end
            E:
				  begin 
				    RegQ =1'b0 ; 
				    RegP =1'b0 ;
				  end
            D:
				  begin 
				  if ((TimeData[4]&TimeData[5]&TimeData[6]&TimeData[7])==1'b0) 
				     begin 
					      RegQ =1'b1;
						   RegP =1'b0;
					 end
				  else if ((TimeData[4]&TimeData[5]&TimeData[6]&TimeData[7])==1'b1)
				     begin 
					    RegQ =1'b0;
					    RegP =1'b1;
					  end
				 end
         endcase
   register left_reg(TimeData, clock, reset,  RegP,  data_P);
	register right_reg(TimeData, clock, reset, RegQ,  data_Q);
endmodule