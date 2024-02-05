module CU(
	input	logic [10:0] 	control_signal	,
	output	logic [3:0]		ALUSel			,
	output	logic [2:0]		ImmSel			,
	output	logic [1:0]		WBSel			,
	output	logic			BrUn		,
	output	logic			PCSel			,
	output	logic			ASel		,
	output	logic			BSel		,
	output	logic			MemRW	,
	output	logic			RegWEn	
);


/* verilator lint_off UNOPTFLAT */
logic [14:0] dataout;
/* verilator lint_on UNOPTFLAT */

assign ImmSel	[2:0]	= dataout[12:10];
assign ALUSel	[3:0] 	= dataout[7:4]	;
assign WBSel	[1:0]	= dataout[1:0]	;

assign BrUn		= dataout[14]	;
assign PCSel			= dataout[13]	;

assign ASel	 		= dataout[9]	;
assign BSel	 		= dataout[8]	;

assign MemRW	 		= dataout[3]	;
assign RegWEn			= dataout[2]	;


always_latch begin
case(control_signal[9:2])

//		ADD
		8'b00001100: 
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0000000100;

//		SUB				
			else
				dataout = 15'b00xxx0000010100;
		end
		
//		SLT
		8'b01001100: 
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0001010100;
		end
		
//		SLTU
		8'b01101100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0001100100;
		end
		
//		XOR
		8'b10001100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0000100100;
		end
		
//		OR
		8'b11001100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0000110100;
		end
		
//		AND
		8'b11101100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0001000100;
		end
		
//		SLL
		8'b00101100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0001110100;
		end
		
//		SRL
		8'b10101100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b00xxx0010000100;
				
//		SRA
			else
				dataout = 15'b00xxx0010010100;
		end
		
//		ADDI
		8'b00000100: dataout = 15'b000000100000100;
		
//		SLTI
		8'b01000100: dataout = 15'b000000101010100;		

//		SLTUI
		8'b01100100: dataout = 15'b000000101100100;

//		XORI
		8'b10000100: dataout = 15'b000000100100100;

//		ORI
		8'b11000100: dataout = 15'b000000100110100;

//		ANDI
		8'b11100100: dataout = 15'b000000101000100;

//		SLLI
		8'b00100100:
		begin
			if (control_signal[10] == 0)
				dataout = 15'b000000101110100;
		end
		
//		SRLI
		8'b10100100: 
		begin
			if (control_signal[10] == 0)
				dataout = 15'b000000110000100;
				
//		SRAI
			else
				dataout = 15'b000000110010100;
		end

//		BEQ
		8'b00011000:
		begin
			if (control_signal[1:0] == 2'b10)
				dataout = 15'b0101011000000xx;
			if (control_signal[1:0] == 2'b00)
				dataout = 15'b0001011000000xx;
			if (control_signal[1:0] == 2'b01)
				dataout = 15'b0001011000000xx;
		end

//		BLT
		8'b10011000:
		begin
			if (control_signal[1:0] == 2'b01)
				dataout = 15'b0101011000000xx;
			if (control_signal[1:0] == 2'b00)
				dataout = 15'b0001011000000xx;
			if (control_signal[1:0] == 2'b10)
				dataout = 15'b0001011000000xx;
		end

//		BLTU
		8'b11011000:
		begin
			if (control_signal[1:0] == 2'b01)
				dataout = 15'b1101011000000xx;
			if (control_signal[1:0] == 2'b00)
				dataout = 15'b1001011000000xx;
			if (control_signal[1:0] == 2'b10)
				dataout = 15'b1001011000000xx;
		end

//		LW
		8'b01000000: dataout = 15'b000000100000101;
		
//		LB
		8'b00000000: dataout = 15'b000000100000101;

//		LH
		8'b00100000: dataout = 15'b000000100000101;

//		LBU
		8'b10000000: dataout = 15'b000000100000101;

//		LHU
		8'b10100000: dataout = 15'b000000100000101;		

//		SW
		8'b01001000: dataout = 15'b0000101000010xx;
		
//		SB
		8'b00001000: dataout = 15'b0000101000010xx;

//		SH
		8'b00101000: dataout = 15'b0000101000010xx;		
		
//		JAR		
		8'b00011001: dataout = 15'b010000100000110;
		
//		JAL		
		8'b00011011, 8'b00111011, 8'b01011011, 8'b01111011, 8'b10011011, 8'b10111011, 8'b11011011, 8'b11111011:	 dataout = 15'b011001100000110;
		
//		AUIPC		
		8'b00000101, 8'b00100101, 8'b01000101, 8'b01100101, 8'b10000101, 8'b10100101, 8'b11000101, 8'b11100101:	 dataout = 15'b000111100000100;
		default:dataout = 15'h0;
	endcase
end
endmodule
