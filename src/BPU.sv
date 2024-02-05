/* verilator lint_off UNUSED */
module BPU (
	input  logic 		clk_i,
	input  logic [31:0] pc_IF,
	input  logic [31:0] instr_IF,

	input  logic [31:0] pc_EX,
	input  logic [31:0] instr_EX,

	input  logic 	   	pc_sel_EX,
	input  logic [31:0] aludata_EX,

	output logic 		flush_br,
	output logic 		hit,
	output logic [31:0] npc
);

logic predictor1_en, predictor2_en, predictor3_en, predictor4_en;

nottaken ALWAYS_NOT_TAKEN (
	.clk_i 			(clk_i),
	.predictor_en 	(predictor1_en),
	.pc_IF 			(pc_IF),
	.instr_IF 		(instr_IF),

	.pc_EX 			(pc_EX),
	.instr_EX 		(instr_EX),

	.pc_sel_EX 		(pc_sel_EX),
	.aludata_EX 	(aludata_EX),

	.flush_br 		(flush_br),
	.hit 			(hit),
	.npc 			(npc)
);

alwaystaken ALWAYS_TAKEN(
	.clk_i 			(clk_i),
	.predictor_en 	(predictor2_en),
	.pc_IF 			(pc_IF),
	.instr_IF 		(instr_IF),

	.pc_EX	 		(pc_EX),
	.instr_EX		(instr_EX),

	.pc_sel_EX 		(pc_sel_EX),
	.aludata_EX 	(aludata_EX),

	.flush_br 		(flush_br),
	.hit 			(hit),
	.npc 			(npc)
);		

onebit ONEBIT_PREDICTOR(
	.clk_i 			(clk_i),
	.predictor_en 	(predictor3_en),
	.pc_IF 			(pc_IF),
	.instr_IF 		(instr_IF),

	.pc_EX 			(pc_EX),
	.instr_EX 		(instr_EX),

	.pc_sel_EX 		(pc_sel_EX),
	.aludata_EX 	(aludata_EX),

	.flush_br 		(flush_br),
	.hit 			(hit),
	.npc 			(npc)
);	

twobit TWOBIT_PREDICTOR(
	.clk_i 			(clk_i),
	.predictor_en 	(predictor4_en),
	.pc_IF 			(pc_IF),
	.instr_IF 		(instr_IF),

	.pc_EX 			(pc_EX),
	.instr_EX 		(instr_EX),

	.pc_sel_EX 		(pc_sel_EX),
	.aludata_EX 	(aludata_EX),

	.flush_br 		(flush_br),
	.hit 			(hit),
	.npc 			(npc)
);	

	always_comb begin
		predictor1_en = 0;
		predictor2_en = 0;
		predictor3_en = 1;
		predictor4_en = 0;
	end
endmodule
/* verilator lint_on UNUSED */
