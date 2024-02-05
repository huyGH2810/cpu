module top_lsu(
	input			clk_i, 
	input			rst_ni, 
	input			st_en,
	input 	[2 :0] 	func3,
	input	[31:0] 	addr,
	input 	[31:0] 	st_data,
	input	[31:0]	io_sw,
	output 	[31:0] 	ld_data,
	output	[31:0]	io_lcd, 
	output	[31:0]	io_ledr, 
	output	[31:0]	io_ledg, 
	output	[31:0]	io_hex7,
	output	[31:0]	io_hex6, 
	output	[31:0]	io_hex5, 
	output	[31:0]	io_hex4, 	
	output	[31:0]	io_hex3, 
	output	[31:0]	io_hex2, 
	output	[31:0]	io_hex1, 
	output	[31:0]	io_hex0
);

logic [31:0]	lsu_in, lsu_out;

lsu LSU(
					.clk_i	(clk_i)	 , 
					.rst_ni (rst_ni) , 
					.st_en	(st_en)	 , 		
					.addr	(addr)   , 		
					.st_data(lsu_in) , 
					.io_sw	(io_sw)	 ,	
					.ld_data(lsu_out),
					.io_lcd (io_lcd) , 
					.io_ledr(io_ledr), 
					.io_ledg(io_ledg), 
					.io_hex7(io_hex7), 
					.io_hex6(io_hex6), 
					.io_hex5(io_hex5), 
					.io_hex4(io_hex4), 
					.io_hex3(io_hex3), 
					.io_hex2(io_hex2), 
					.io_hex1(io_hex1), 
					.io_hex0(io_hex0)
);

	sub_lsu_store STORE(
		.func3(func3),
		.data_in(st_data),				
		.data_out(lsu_in)
	);

	sub_lsu_load LOAD(
		.func3(func3),
		.data_in(lsu_out),
		.data_out(ld_data)
	);
	
endmodule
