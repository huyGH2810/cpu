/* verilator lint_off UNUSED */
module BTB (	
		input  logic 		clk_i,
		input  logic [31:0] pc_IF,

		input  logic		update,
		input  logic [31:0]	pc_EX,
		input  logic [31:0] aludata_EX,
		
		output logic [19:0] tag,
		output logic [31:0] predictedPC
);

	//tag[51:32] _ predictedPC[31:0]
	integer i;
	logic [51:0] buffer [1023:0]; 

	initial begin
		for (i = 0; i <= 1023; i++)
			buffer[i] = 0;
	end	

	assign tag         = buffer[pc_IF[11:2]][51:32];
	assign predictedPC = buffer[pc_IF[11:2]][31:0 ];
	
	always_ff @(posedge clk_i) begin
		if (update) begin
			buffer[pc_EX[11:2]] <= {pc_EX[31:12], aludata_EX};
		end
	end
endmodule	
/* verilator lint_on UNUSED */
