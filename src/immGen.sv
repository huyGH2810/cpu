module immGen(
	input 	[31:7] imm_in,
	input 	[2:0]	 imm_sel,
	output	[31:0] imm_out
);

always @(*) begin

/* verilator lint_off CASEINCOMPLETE */
case(imm_sel)
	//I-type
	3'b000: begin
			 	if (imm_in [31] == 0) 
					imm_out [31:12] = {4'b0000,16'h0000};
			 	else
					imm_out [31:12] = {4'b1111,16'hFFFF};
					
			 	imm_out [11] 		= imm_in [31]	;
			 	imm_out [10:5] 		= imm_in [30:25];
			 	imm_out [4:0]		= imm_in [24:20];
			end
			 
	//S-type		 
	3'b001: begin
			 	if (imm_in [31] == 0) 
					imm_out [31:12] = {4'b0000,16'h0000};
			 	else
					imm_out [31:12] = {4'b1111,16'hFFFF};
					
			 	imm_out [11] 		= imm_in [31]	;
			 	imm_out [10:5] 		= imm_in [30:25];
			 	imm_out [4:0]		= imm_in [11:7]	;
			end
			 
	//B-type		 
	3'b010: begin
			 	if (imm_in [31] == 0) 
					imm_out [31:12] = {4'b0000,16'h0000};
			 	else
					imm_out [31:12] = {4'b1111,16'hFFFF};
					
			 	imm_out [10:5] 		= imm_in [30:25];
			 	imm_out [4:1] 		= imm_in [11:8]	;					
			 	imm_out [12]		= imm_in [31]	;
			 	imm_out [11] 		= imm_in [7]	;
			 	imm_out [0]			= 0				;
			end
	
	//U-type
	3'b011: begin
			 	imm_out [31:12]		= imm_in [31:12];
			 	imm_out [11:0] 		= 12'h0000		;
			end
	
	//J-type
	3'b100: begin
			 	if (imm_in [31] == 0) 
					imm_out [31:21] = 11'b0;
			 	else
					imm_out [31:21] = 11'b1;
					
			 	imm_out [20] 		= imm_in [31]	;
			 	imm_out [19:12] 	= imm_in [19:12];
			 	imm_out [11] 		= imm_in [20]	;
			 	imm_out [10:5] 		= imm_in [30:25];
			 	imm_out [4:1]		= imm_in [24:21];
			 	imm_out [0]			= 0				;
			end
/* verilator lint_on CASEINCOMPLETE */

endcase
end
endmodule
