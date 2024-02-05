/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
module HDU (
	input  logic [31:0] instr_ID,
	input  logic [31:0]	instr_EX,
	//input  logic 		RegWEn_EX,
	input  logic 		flush_br,
	output logic		stall_pc,
	output logic		stall_IF,
	output logic 		flush_IF,
	output logic 		flush_ID
);
	
	logic [4:0] rs1_addr_ID, rs2_addr_ID, rd_addr_EX, opcode_EX;
	logic 		isload_EX;

	assign rs1_addr_ID = instr_ID[19:15];
	assign rs2_addr_ID = instr_ID[24:20];
	assign rd_addr_EX  = instr_EX[11:7];
	assign opcode_EX   = instr_EX[6:2];
	assign isload_EX   = ~(|opcode_EX);  
	
	always_comb begin
		flush_ID = flush_br;
		flush_IF = flush_br;

		if(isload_EX && (rd_addr_EX != 5'd0) && (rd_addr_EX == rs1_addr_ID || rd_addr_EX == rs2_addr_ID)) begin
			flush_ID = 1'b1;
			stall_IF = 1'b1;
			stall_pc = 1'b1;
		end 
		
		else begin
			stall_IF = 1'b0;
			stall_pc = 1'b0;
		end
	end
endmodule
/* verilator lint_on UNDRIVEN */
/* verilator lint_on UNUSED */
