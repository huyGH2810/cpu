/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
module FU (
	input  logic [31:0] instr_EX,
	input  logic [31:0] instr_MEM,
	input  logic [31:0] instr_WB,
	
	//input  logic 		WBSel_MEM,
	//input  logic 		WBSel_WB,
	
	input  logic 		RegWEn_MEM,
	input  logic 		RegWEn_WB,
	
	output logic [1:0] 	fwd_a,
	output logic [1:0] 	fwd_b
);

	logic [4:0] rs1_addr_EX, rs2_addr_EX;
	logic [4:0] rd_addr_MEM, rd_addr_WB;
	
	assign rs1_addr_EX = instr_EX[19:15];
	assign rs2_addr_EX = instr_EX[24:20];
	
	assign rd_addr_MEM = instr_MEM[11:7];
	assign rd_addr_WB  = instr_WB[11:7];

	always_comb begin
		fwd_a = 2'b00;
		fwd_b = 2'b00;
		if (rs1_addr_EX != 0) begin
			if (rd_addr_MEM == rs1_addr_EX && RegWEn_MEM == 1) begin
				fwd_a = 2'b10;
			end	
		
			else if (rd_addr_WB == rs1_addr_EX && RegWEn_WB == 1) begin
				fwd_a = 2'b01;
			end
		end
	
		if (rs2_addr_EX != 0) begin
			if (rd_addr_MEM == rs2_addr_EX && RegWEn_MEM == 1) begin
				fwd_b = 2'b10;
			end	
		
			else if (rd_addr_WB == rs2_addr_EX && RegWEn_WB == 1) begin
				fwd_b = 2'b01;
			end
		end
	end
endmodule
/* verilator lint_on UNDRIVEN */
/* verilator lint_on UNUSED */
