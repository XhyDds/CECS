`timescale 1ns/1ps
`include "./include/config.sv"
module Exp_Commit(
    input  logic [ 8:0] priv_vec,
    input  logic [ 0:0] is_user_mode,
    output logic [31:0] exp_code
);
    always_comb begin
        exp_code = 0;
        if(priv_vec[`INST_ALLIGN]) begin
            exp_code = 32'h1;
        end
        else if(priv_vec[`INST_INVALID]) begin
            exp_code = 32'h2;
        end
        else if(priv_vec[`LD_ALLIGN]) begin
            exp_code = 32'h3;
        end
        else if(priv_vec[`ST_ALLIGN]) begin
            exp_code = 32'h4;
        end
        else if(is_user_mode&&priv_vec[`CSR_RW]) begin
            exp_code = 32'h5;
        end
        else if(priv_vec[`ECALL]) begin
            exp_code = 32'hb;
        end
    end
endmodule
