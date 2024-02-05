/* verilator lint_off UNUSED */
module alwaystaken (
	input logic			clk_i, 
	input logic 		predictor_en,
	input logic [31:0]  pc_IF,
	input logic [31:0] 	instr_IF,

	input logic [31:0] 	pc_EX,
	input logic [31:0] 	instr_EX,

	input logic 	   	pc_sel_EX,
	input logic [31:0] 	aludata_EX,

	output logic 		flush_br,
	output logic 		hit,
	output logic [31:0] npc
);

logic 		 update;
logic [19:0] tag;
logic [31:0] predictedPC;

BTB BTB(	
	.clk_i 		(clk_i),
	.pc_IF 		(pc_IF),

	.update 	(update),
	.pc_EX 		(pc_EX),
	.aludata_EX (aludata_EX),
		
	.tag 		(tag),
	.predictedPC(predictedPC)
);

	always_latch begin
		if (predictor_en) begin
			flush_br = 0;
			hit = 0;
		
			if (instr_IF[6:0] == 7'b1100011 && tag == pc_IF[31:12]) begin
				npc = predictedPC;
				hit = 1;
			end	
		
			if (instr_EX[6:0] == 7'b1100011 && pc_sel_EX == 1) begin	
				if(pc_EX != aludata_EX) begin
					flush_br = 1;
					update = 1;
					hit = 1; 
					npc = aludata_EX; 
				end
			end	
		
			else if (instr_EX[6:0] == 7'b1100011 && pc_sel_EX == 0) begin
				flush_br = 1;
				hit = 1;
				npc = pc_EX + 4;
			end
		end
	end		
endmodule
/* verilator lint_on UNUSED */
