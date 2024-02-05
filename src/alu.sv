module alu (
    	input   [31:0]  operand_a, 
   	 	input   [31:0]  operand_b,
    	input   [3 :0]  alu_op	 ,
    	output  [31:0]  alu_data
);

logic	signed 	[31:0]	signed_operand_a;
logic   		[31:0]  ALU_Result		;
logic   		[31:0]  un_output_less	;
logic   		[31:0]  output_less		;

assign alu_data = ALU_Result;

compare compare0 		   (
                			.a(operand_a),
                			.b(operand_b),
                			.out_data(un_output_less)
               		 	   );

compare_sign compare_sign0 (
                          	.a(operand_a),
                          	.b(operand_b),
                          	.out_data(output_less)
                           );

always @(*)
    begin
	signed_operand_a = operand_a;
        case (alu_op)
            4'b0000: ALU_Result = operand_a + operand_b			;
            4'b0001: ALU_Result = operand_a + (~operand_b + 1)	;
            4'b0010: ALU_Result = operand_a ^ operand_b			;
            4'b0011: ALU_Result = operand_a | operand_b			;
            4'b0100: ALU_Result = operand_a & operand_b			;
            
            4'b0101: ALU_Result = output_less					;
            4'b0110: ALU_Result = un_output_less				;
            
            4'b0111: ALU_Result = operand_a << operand_b[4:0]	;
            4'b1000: ALU_Result = operand_a >> operand_b[4:0]	;
            
            4'b1001: ALU_Result = signed_operand_a >>> operand_b[4:0];

            default: ALU_Result = 32'h00000000;
        endcase
    end
endmodule        
