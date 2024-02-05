module ID_EX (
	input  logic		 clk_i		,
	input  logic 		 flush_ID	,
	
	input  logic [31:0]  instr_ID	,
	input  logic [31:0]  pc_ID		,
	input  logic [31:0]  rs1data_ID  ,
	input  logic [31:0]  rs2data_ID  ,
	input  logic [31:0]  imm_ID		,
	
	input  logic [3:0]   ALUSel_ID	,
	input  logic [2:0]   ImmSel_ID	,
	input  logic [1:0]   WBSel_ID    ,
	input  logic		 BrUn_ID	,
	input  logic		 PCSel_ID	,
	input  logic		 ASel_ID	,
	input  logic		 BSel_ID	,
	input  logic		 MemRW_ID	,
	input  logic		 RegWEn_ID	,
	
	output logic [31:0]  instr_EX	,
	output logic [31:0]  pc_EX		,
	output logic [31:0]  rs1data_EX  ,
	output logic [31:0]  rs2data_EX  ,
	output logic [31:0]  imm_EX		,
	
	output logic [3:0]   ALUSel_EX	,
	output logic [2:0]   ImmSel_EX	,
	output logic [1:0]   WBSel_EX	,
	output logic		 BrUn_EX	,
	output logic		 PCSel_EX	,
	output logic		 ASel_EX	,
	output logic		 BSel_EX	,
	output logic		 MemRW_EX	,
	output logic		 RegWEn_EX	
);

	always_ff @(posedge clk_i) begin
		if(!flush_ID) begin
			instr_EX 	<= instr_ID;
			pc_EX	 		<= pc_ID;
			rs1data_EX 	<= rs1data_ID;
			rs2data_EX 	<= rs2data_ID;
			imm_EX		<= imm_ID;
			ALUSel_EX 	<= ALUSel_ID;
			ImmSel_EX 	<= ImmSel_ID;
			WBSel_EX 	<= WBSel_ID;
			BrUn_EX 		<= BrUn_ID;
			PCSel_EX 	<= PCSel_ID;
			ASel_EX 		<= ASel_ID;
			BSel_EX 		<= BSel_ID;
			MemRW_EX 	<= MemRW_ID; 
			RegWEn_EX 	<= RegWEn_ID;
		end
		
		else begin
			instr_EX 	<= 0;	
			pc_EX	 	<= 0;
			rs1data_EX 	<= 0;
			rs2data_EX 	<= 0;
			imm_EX		<= 0;
			ALUSel_EX 	<= 0;
			ImmSel_EX 	<= 0;
			WBSel_EX 	<= 0;
			BrUn_EX 	<= 0;
			PCSel_EX 	<= 0;
			ASel_EX 	<= 0;
			BSel_EX 	<= 0;
			MemRW_EX 	<= 0;
			RegWEn_EX 	<= 0;
		end	
	end
endmodule
