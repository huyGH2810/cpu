module dmem	(
		input 			clk_i	, 
		input			st_en	,
		input 	[10:0]	addr	, 
		input 	[31:0]	st_data	, 
		output 	[31:0]	ld_data
);

	integer i;	
	logic 	[3:0][7:0]	ram [511:0];
	
	logic unused;
	assign unused = |addr[1:0];
	  
	initial begin
	for (i = 0; i < 511; i++) 
		ram[i] = 32'd0;
	end

	always_ff @(posedge clk_i) begin
		$readmemh("dmem_data.txt", ram);
		if(st_en)	begin
			ram[addr[10:2]][0] <= st_data[7 : 0];
			ram[addr[10:2]][1] <= st_data[15: 8];
			ram[addr[10:2]][2] <= st_data[23:16];
			ram[addr[10:2]][3] <= st_data[31:24];	
		end
	end

	assign ld_data = (st_en == 0) ? ram[addr[10:2]] : 32'b0;
	
endmodule
