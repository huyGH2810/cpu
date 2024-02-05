module PC(
	input  logic			br_sel	,
	input  logic			clk		,
	input  logic	[31:0] 	alu_data,	
	
	input  logic 			stall_pc,
//	output logic	[31:0]	pc_four ,
	output logic	[31:0] 	pc
);

logic 	[31:0] nxt_pc;
logic  	[31:0] pc_four;

assign pc_four = pc + 4;

always_comb begin
	if (!br_sel)
		nxt_pc = pc_four;
	else
		nxt_pc = alu_data;	
end

always_ff @(posedge clk) begin
	if (!stall_pc) begin
		pc <= nxt_pc;
	end

end	

endmodule
