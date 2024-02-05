module brcomp (    
    	input   logic        [31:0]  rs1_data	,
    	input   logic        [31:0]  rs2_data	,
    	input   logic                br_unsigned	,
    	output  logic	    	br_less		,
    	output  logic   	    br_equal
);

logic   [31:0]      result_signed	;
logic   [31:0]      result_unsigned	;
/* verilator lint_off UNOPTFLAT */
logic   [31:0]      result_eq		;
/* verilator lint_on UNOPTFLAT */
compare compare 		  (
                			.a(rs1_data),
                			.b(rs2_data),
                			.out_data(result_unsigned)
                		  );  


compare_eq compare_eq     (
                      		.a(rs1_data),
                      		.b(rs2_data),
                      		.out_data(result_eq)
                      	  );


compare_sign compare_sign (
                          	.a(rs1_data),
                          	.b(rs2_data),
                          	.out_data(result_signed)
                          );

                                                	  
logic unused;		      
logic unused1;		      
logic unused2;	
	      
assign unused  = |result_unsigned[31:1];
assign unused1 = |result_signed[31:1];
assign unused2 = |result_eq[31:1];

always @(*) begin
    if (br_unsigned == 1) begin
        br_less 	= result_unsigned[0];
    end 

    else begin
        br_less 	= result_signed[0]	;
    end
    
        br_equal 	= result_eq[0]		;
end

endmodule : brcomp

