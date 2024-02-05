module mux_fwd_b
(
	input logic 	[31:0] rs2_data,
	input logic 	[31:0] wb_data,
	input logic 	[31:0] ALUOut_reg,
	
	input logic 	[1:0]  fwd_b,
	output logic 	[31:0] RegReadData2
);

always_comb begin
	case (fwd_b)
		2'b00: RegReadData2 = rs2_data;
		2'b01: RegReadData2 = wb_data;
		2'b10: RegReadData2 = ALUOut_reg;
		default: RegReadData2 = rs2_data;
	endcase
end
endmodule
