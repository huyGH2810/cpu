module lsu (
					input 				clk_i, 
					input				rst_ni, 
					input				st_en,

					input 	[31:0]		addr, 
					input 	[31:0]		st_data, 
					input	[31:0]		io_sw,
					
					output 	[31:0]		ld_data,
					output	[31:0]		io_lcd, 
					output	[31:0]		io_ledr, 
					output	[31:0]		io_ledg, 
					output	[31:0]		io_hex7, 
					output	[31:0]		io_hex6, 
					output	[31:0]		io_hex5, 
					output	[31:0]		io_hex4,
					output	[31:0] 		io_hex3,
					output	[31:0] 		io_hex2,
					output	[31:0]		io_hex1,
					output	[31:0]		io_hex0);

logic  unused;
assign unused  = |addr[31:12];
assign ld_data = ld_data_out;

/* verilator lint_off UNUSED */
logic	[31:0]	st_data_res, st_data_out, st_data_dmem;
/* verilator lint_on UNUSED */

logic	[31:0]	ld_data_sw , ld_data_out, ld_data_dmem;
//logic 	[11:0]	addr_sel;
//assign addr_sel = addr [11:0];


input_periph	INPUT	(
								.clk_i	(clk_i), 
								.st_en	(st_en),
								.sw		(io_sw),
								.ld_data(ld_data_sw)
);

output_periph	OUTPUT 	(
								.clk_i	(clk_i), 
								.st_en	(st_en),
								.addr   (addr[7:0]), 
								.st_data(st_data_out), 
								.lcd	(io_lcd), 
								.ledr	(io_ledr), 
								.ledg	(io_ledg), 
								.hex7	(io_hex7),
								.hex6	(io_hex6),
								.hex5	(io_hex5),
								.hex4	(io_hex4),
								.hex3	(io_hex3),
								.hex2	(io_hex2),
								.hex1	(io_hex1),
								.hex0	(io_hex0)
);

dmem DMEM 		(
								.clk_i	(clk_i), 
								.st_en	(st_en),
								.addr   (addr[10:0]), 
								.st_data(st_data_dmem), 
								.ld_data(ld_data_dmem)
);

always@(*) begin
	if (rst_ni)	begin
		if (st_en) begin
			case (addr[11:10])
				2'b01: 
				begin
					case (addr[9:8])
						2'b00  :	st_data_out = st_data;				
						default:	st_data_res = st_data;	
					endcase
				end
				
				2'b00:	st_data_dmem = st_data;
				default:	st_data_res = st_data;
			endcase
		end
		
		else begin
			case (addr[11:10])
				2'b01:	
				begin
					case (addr[11:0])
						12'h500: ld_data_out = ld_data_sw;					
						12'h4A0: ld_data_out = io_lcd;
						12'h490: ld_data_out = io_ledg;
						12'h480: ld_data_out = io_ledr;
						12'h470: ld_data_out = io_hex7;
						12'h460: ld_data_out = io_hex6;
						12'h450: ld_data_out = io_hex5;
						12'h440: ld_data_out = io_hex4;
						12'h430: ld_data_out = io_hex3;
						12'h420: ld_data_out = io_hex2;
						12'h410: ld_data_out = io_hex1;
						12'h400: ld_data_out = io_hex0;
						default: ld_data_out = 0;
					endcase	
				end
			
				2'b00  : ld_data_out   = ld_data_dmem;
				default: ld_data_out = 0;
			endcase
		end
	end	
end
endmodule
