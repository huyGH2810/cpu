module mux_op_x
(
	input	logic		 op_x_sel,
	input 	logic [31:0] rsx_data,
	input	logic [31:0] imm_or_pc,
	output	logic [31:0] operand_x
);

always_comb begin
	if(!op_x_sel) 
		operand_x = rsx_data;
	else
		operand_x = imm_or_pc;
end

endmodule
