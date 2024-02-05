module pc_sel_block (
	input logic 		BrEq,
	input logic 		BrLT,
	input logic [7:0]	opcode,
	output logic 		pc_sel
);

logic [1:0] combine;
assign combine = {BrEq, BrLT};

always_comb begin
		pc_sel = 0;
		if (opcode == 8'b00011000) begin
//		BEQ
			if (combine == 2'b10)
				pc_sel = 1;

			if (combine == 2'b00)
				pc_sel = 0;

			if (combine == 2'b01)
				pc_sel = 0;
		end

		if (opcode == 8'b10011000) begin
//		BLT
			if (combine == 2'b01)
				pc_sel = 1;

			if (combine == 2'b00)
				pc_sel = 0;

			if (combine == 2'b10)
				pc_sel = 0;
		end

		if (opcode == 8'b11011000) begin
//		BLTU
			if (combine == 2'b01)
				pc_sel = 1;

			if (combine == 2'b00)
				pc_sel = 0;

			if (combine == 2'b10)
				pc_sel = 0;
		end	

		if (opcode == 8'b00011001 && opcode == 8'bxxx11011) begin
				pc_sel = 1;
		end
end
endmodule
 
