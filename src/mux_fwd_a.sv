module mux_fwd_a
(
	input logic 	[31:0] rs1_data,
	input logic 	[31:0] wb_data,
	input logic 	[31:0] ALUOut_reg,
	
	input logic 	[1:0]  fwd_a,
	output logic 	[31:0] RegReadData1
);

always_comb begin
	case (fwd_a)
		2'b00: RegReadData1 = rs1_data;
		2'b01: RegReadData1 = wb_data;
		2'b10: RegReadData1 = ALUOut_reg;
		default: RegReadData1 = rs1_data;
	endcase
end
endmodule
