module IF_ID (
	input 					clk_i,
	input  logic 			flush_IF,
	input  logic 			stall_IF,
	
	input  logic [31:0] 	instr_IF	,
	input  logic [31:0]	pc_IF,
	
	output logic [31:0] 	instr_ID,
	output logic [31:0]	pc_ID
);

	always_ff @(posedge clk_i) begin
		if (!stall_IF && !flush_IF) begin
			instr_ID 	<= instr_IF;
			pc_ID 		<= pc_IF;
		end
		
		if (flush_IF) begin
			instr_ID 	<= 0;
			pc_ID 		<= 0;
		end
	end
endmodule
