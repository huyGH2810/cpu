module regfile (
    input           clk_i,
    input           rst_ni,
    input           rd_wren,
    input   [4:0]   rs1_addr,
    input   [4:0]   rs2_addr,
    input   [4:0]   rd_addr,
    input   [31:0]  rd_data,
    
    output  [31:0]  rs1_data,
    output  [31:0]  rs2_data
);

integer i;
logic [31:0] register [31:0];

initial begin
    register[31] = 0;
    for (i = 0; i < 32; i = i + 1) begin
        register[i] = 0;
    end
end

assign rs1_data = register[rs1_addr];
assign rs2_data = register[rs2_addr];

always @(negedge clk_i, negedge rst_ni) begin
    if (!rst_ni) begin
        for (i = 0; i < 32; i = i + 1) begin
            register[i] <= 0;
        end
    end
    
    else begin
    if (rd_wren && rd_addr != 0) begin
        register[rd_addr] <= rd_data;
    end
    end
end
endmodule : regfile
