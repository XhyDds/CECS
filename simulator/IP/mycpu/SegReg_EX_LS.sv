module SegReg_EX_LS#(
    parameter PC_RESET_VAL = 32'h0
)(
    input  logic [ 0:0] clk,
    input  logic [ 0:0] rstn,
    input  logic [ 0:0] stall,
    input  logic [ 0:0] flush,

    input  logic [31:0] pc_ex,
    input  logic [31:0] inst_ex,
    input  logic [31:0] alu_result_ex,
    input  logic [ 4:0] mem_access_ex,
    input  logic [ 0:0] wb_rf_sel_ex,
    input  logic [ 0:0] rf_we_ex,
    input  logic [ 0:0] csr_we_ex,
    input  logic [11:0] csr_waddr_ex,
    input  logic [31:0] csr_wdata_ex,
    input  logic [15:0] exp_code_ex,
    input  logic [ 0:0] exp_en_ex,
    input  logic [ 0:0] mret_en_ex,
    input  logic [ 0:0] commit_ex,

    output logic [31:0] pc_ls,
    output logic [31:0] inst_ls,
    output logic [31:0] alu_result_ls,
    output logic [ 4:0] mem_access_ls,
    output logic [ 0:0] wb_rf_sel_ls,
    output logic [ 0:0] rf_we_ls,
    output logic [ 0:0] csr_we_ls,
    output logic [11:0] csr_waddr_ls,
    output logic [31:0] csr_wdata_ls,
    output logic [15:0] exp_code_ls,
    output logic [ 0:0] exp_en_ls,
    output logic [ 0:0] mret_en_ls,
    output logic [ 0:0] commit_ls
);
    always_ff @(posedge clk) begin
        if(!rstn || flush) begin
            pc_ls           <= PC_RESET_VAL;
            inst_ls         <= 32'h13;
            alu_result_ls   <= 32'h0;
            mem_access_ls   <=  5'h0;
            wb_rf_sel_ls    <=  1'h0;
            rf_we_ls        <=  1'h0;
            csr_we_ls       <=  1'h0;
            csr_waddr_ls    <=  12'h0;
            csr_wdata_ls    <=  32'h0;
            exp_code_ls     <=  16'h0;
            exp_en_ls       <=  1'h0;
            mret_en_ls      <=  1'h0;
            commit_ls       <=  1'h0;
        end 
        else if(!stall) begin
            pc_ls           <= pc_ex;
            inst_ls         <= inst_ex;
            alu_result_ls   <= alu_result_ex;
            mem_access_ls   <= mem_access_ex;
            wb_rf_sel_ls    <= wb_rf_sel_ex;
            rf_we_ls        <= rf_we_ex;
            csr_we_ls       <= csr_we_ex;
            csr_waddr_ls    <= csr_waddr_ex;
            csr_wdata_ls    <= csr_wdata_ex;
            exp_code_ls     <= exp_code_ex;
            exp_en_ls       <= exp_en_ex;
            mret_en_ls      <= mret_en_ex;
            commit_ls       <= commit_ex;
        end
    end
endmodule