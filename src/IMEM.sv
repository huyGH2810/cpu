module IMEM
(	
	input	logic	[31:0] 	address,
	output	logic	[31:0] 	data
);

	reg [31:0] Rdata [2043:0];

	initial begin
		$readmemh("regfile.txt", Rdata);
	end

	always_comb begin
		data = Rdata[address>>2];
	end
	
endmodule	
