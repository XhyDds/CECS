// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+678,"araddr", false,-1, 31,0);
    tracep->declBus(c+679,"arvalid", false,-1, 0,0);
    tracep->declBus(c+680,"arready", false,-1, 0,0);
    tracep->declBus(c+681,"arlen", false,-1, 7,0);
    tracep->declBus(c+682,"arsize", false,-1, 2,0);
    tracep->declBus(c+683,"arburst", false,-1, 1,0);
    tracep->declBus(c+684,"rdata", false,-1, 31,0);
    tracep->declBus(c+685,"rresp", false,-1, 1,0);
    tracep->declBus(c+686,"rvalid", false,-1, 0,0);
    tracep->declBus(c+687,"rready", false,-1, 0,0);
    tracep->declBus(c+688,"rlast", false,-1, 0,0);
    tracep->declBus(c+689,"awaddr", false,-1, 31,0);
    tracep->declBus(c+690,"awvalid", false,-1, 0,0);
    tracep->declBus(c+691,"awready", false,-1, 0,0);
    tracep->declBus(c+692,"awlen", false,-1, 7,0);
    tracep->declBus(c+693,"awsize", false,-1, 2,0);
    tracep->declBus(c+694,"awburst", false,-1, 1,0);
    tracep->declBus(c+695,"wdata", false,-1, 31,0);
    tracep->declBus(c+696,"wstrb", false,-1, 3,0);
    tracep->declBus(c+697,"wvalid", false,-1, 0,0);
    tracep->declBus(c+698,"wready", false,-1, 0,0);
    tracep->declBus(c+699,"wlast", false,-1, 0,0);
    tracep->declBus(c+700,"bresp", false,-1, 1,0);
    tracep->declBus(c+701,"bvalid", false,-1, 0,0);
    tracep->declBus(c+702,"bready", false,-1, 0,0);
    tracep->declBus(c+703,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+704,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+705,"inst", false,-1, 31,0);
    tracep->declBus(c+706,"pc_cur", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBus(c+707,"PC_RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+708,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+709,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+678,"araddr", false,-1, 31,0);
    tracep->declBus(c+679,"arvalid", false,-1, 0,0);
    tracep->declBus(c+680,"arready", false,-1, 0,0);
    tracep->declBus(c+681,"arlen", false,-1, 7,0);
    tracep->declBus(c+682,"arsize", false,-1, 2,0);
    tracep->declBus(c+683,"arburst", false,-1, 1,0);
    tracep->declBus(c+684,"rdata", false,-1, 31,0);
    tracep->declBus(c+685,"rresp", false,-1, 1,0);
    tracep->declBus(c+686,"rvalid", false,-1, 0,0);
    tracep->declBus(c+687,"rready", false,-1, 0,0);
    tracep->declBus(c+688,"rlast", false,-1, 0,0);
    tracep->declBus(c+689,"awaddr", false,-1, 31,0);
    tracep->declBus(c+690,"awvalid", false,-1, 0,0);
    tracep->declBus(c+691,"awready", false,-1, 0,0);
    tracep->declBus(c+692,"awlen", false,-1, 7,0);
    tracep->declBus(c+693,"awsize", false,-1, 2,0);
    tracep->declBus(c+694,"awburst", false,-1, 1,0);
    tracep->declBus(c+695,"wdata", false,-1, 31,0);
    tracep->declBus(c+696,"wstrb", false,-1, 3,0);
    tracep->declBus(c+697,"wvalid", false,-1, 0,0);
    tracep->declBus(c+698,"wready", false,-1, 0,0);
    tracep->declBus(c+699,"wlast", false,-1, 0,0);
    tracep->declBus(c+700,"bresp", false,-1, 1,0);
    tracep->declBus(c+701,"bvalid", false,-1, 0,0);
    tracep->declBus(c+702,"bready", false,-1, 0,0);
    tracep->declBus(c+703,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+704,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+705,"inst", false,-1, 31,0);
    tracep->declBus(c+706,"pc_cur", false,-1, 31,0);
    tracep->declBus(c+22,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+28,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+32,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+33,"pc_target", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+35,"imm_id", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+37,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+39,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+40,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+42,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+43,"rf_rdata1_id", false,-1, 31,0);
    tracep->declBus(c+44,"rf_rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+45,"rf_rdata2_id", false,-1, 31,0);
    tracep->declBus(c+46,"rf_rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+47,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+48,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+49,"alu_rf_data1", false,-1, 31,0);
    tracep->declBus(c+50,"alu_rf_data2", false,-1, 31,0);
    tracep->declBus(c+51,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+52,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBus(c+57,"mem_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+60,"dcache_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+684,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+684,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+689,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+695,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_global", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_global", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_global", false,-1, 31,0);
    tracep->declBus(c+710,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+692,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+692,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+66,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+67,"alu_op_ex", false,-1, 4,0);
    tracep->declBus(c+68,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+70,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+71,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+72,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+73,"priv_vec_if2", false,-1, 0,0);
    tracep->declBus(c+74,"priv_vec_id_", false,-1, 0,0);
    tracep->declBus(c+75,"priv_vec_id", false,-1, 6,0);
    tracep->declBus(c+76,"priv_vec_ex", false,-1, 6,0);
    tracep->declBus(c+77,"priv_vec_ls_", false,-1, 6,0);
    tracep->declBus(c+78,"priv_vec_ls", false,-1, 8,0);
    tracep->declBus(c+79,"priv_vec_wb", false,-1, 8,0);
    tracep->declBus(c+80,"is_user_mode", false,-1, 0,0);
    tracep->declBus(c+81,"wstrb_ex", false,-1, 3,0);
    tracep->declBus(c+696,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+711,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+82,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+711,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+83,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+84,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+85,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+86,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+87,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+88,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+89,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+90,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+91,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+92,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+93,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+94,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+677,"ip_rvalid_if1", false,-1, 0,0);
    tracep->declBus(c+95,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+96,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+97,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+98,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+99,"d_bready", false,-1, 0,0);
    tracep->declBus(c+100,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+101,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+102,"jump", false,-1, 0,0);
    tracep->declBus(c+103,"pc_set", false,-1, 0,0);
    tracep->declBus(c+104,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+104,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+103,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+105,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+106,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+107,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+108,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+107,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+109,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+107,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+109,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+105,"icache_stall", false,-1, 0,0);
    tracep->declBus(c+103,"icache_flush", false,-1, 0,0);
    tracep->declBus(c+110,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+107,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+677,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+111,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+112,"commit_id", false,-1, 0,0);
    tracep->declBus(c+113,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+114,"commit_ls", false,-1, 0,0);
    tracep->pushNamePrefix("ALU_inst ");
    tracep->declBus(c+51,"sr1", false,-1, 31,0);
    tracep->declBus(c+52,"sr2", false,-1, 31,0);
    tracep->declBus(c+67,"alu_op", false,-1, 4,0);
    tracep->declBus(c+53,"result", false,-1, 31,0);
    tracep->declQuad(c+115,"result_64", false,-1, 63,0);
    tracep->declBus(c+117,"result_div", false,-1, 31,0);
    tracep->declBus(c+118,"result_rem", false,-1, 31,0);
    tracep->declBus(c+119,"sign", false,-1, 1,0);
    tracep->declBus(c+120,"sr1_abs", false,-1, 31,0);
    tracep->declBus(c+121,"sr2_abs", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data1_mux ");
    tracep->declBus(c+712,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"din1", false,-1, 31,0);
    tracep->declBus(c+47,"din2", false,-1, 31,0);
    tracep->declBus(c+100,"sel", false,-1, 0,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data2_mux ");
    tracep->declBus(c+712,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"din1", false,-1, 31,0);
    tracep->declBus(c+48,"din2", false,-1, 31,0);
    tracep->declBus(c+101,"sel", false,-1, 0,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs1_mux ");
    tracep->declBus(c+712,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"din1", false,-1, 31,0);
    tracep->declBus(c+25,"din2", false,-1, 31,0);
    tracep->declBus(c+713,"din3", false,-1, 31,0);
    tracep->declBus(c+713,"din4", false,-1, 31,0);
    tracep->declBus(c+84,"sel", false,-1, 1,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs2_mux ");
    tracep->declBus(c+712,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"din1", false,-1, 31,0);
    tracep->declBus(c+36,"din2", false,-1, 31,0);
    tracep->declBus(c+714,"din3", false,-1, 31,0);
    tracep->declBus(c+39,"din4", false,-1, 31,0);
    tracep->declBus(c+86,"sel", false,-1, 1,0);
    tracep->declBus(c+52,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_inst ");
    tracep->declBus(c+72,"br_type", false,-1, 4,0);
    tracep->declBus(c+49,"sr1", false,-1, 31,0);
    tracep->declBus(c+50,"sr2", false,-1, 31,0);
    tracep->declBus(c+25,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+102,"jump", false,-1, 0,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBit(c+122,"is_branch", false,-1);
    tracep->declBit(c+123,"is_jal", false,-1);
    tracep->declBit(c+124,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR_inst ");
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+125,"raddr", false,-1, 11,0);
    tracep->declBus(c+126,"waddr", false,-1, 11,0);
    tracep->declBus(c+127,"we_", false,-1, 0,0);
    tracep->declBus(c+42,"wdata", false,-1, 31,0);
    tracep->declBus(c+38,"rdata", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+79,"priv_vec_wb", false,-1, 8,0);
    tracep->declBus(c+80,"is_user_mode", false,-1, 0,0);
    tracep->declBit(c+128,"we", false,-1);
    tracep->declBit(c+109,"has_exp", false,-1);
    tracep->declBus(c+129,"mstatus", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec", false,-1, 31,0);
    tracep->declBus(c+130,"mcause", false,-1, 31,0);
    tracep->declBus(c+63,"mepc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Read_Ctrl_inst ");
    tracep->declBus(c+60,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+70,"mem_access", false,-1, 4,0);
    tracep->declBus(c+58,"rdata", false,-1, 31,0);
    tracep->declBus(c+131,"load_type", false,-1, 2,0);
    tracep->declBus(c+132,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Write_Ctrl_inst ");
    tracep->declBus(c+50,"wdata", false,-1, 31,0);
    tracep->declBus(c+53,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access", false,-1, 4,0);
    tracep->declBus(c+81,"wstrb", false,-1, 3,0);
    tracep->declBus(c+57,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+133,"is_store", false,-1);
    tracep->declBus(c+134,"store_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_inst ");
    tracep->declBus(c+708,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+709,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+53,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"rvalid", false,-1, 0,0);
    tracep->declBus(c+60,"rdata", false,-1, 31,0);
    tracep->declBus(c+134,"rsize", false,-1, 2,0);
    tracep->declBus(c+133,"wvalid", false,-1, 0,0);
    tracep->declBus(c+57,"wdata", false,-1, 31,0);
    tracep->declBus(c+81,"wstrb", false,-1, 3,0);
    tracep->declBus(c+107,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+136,"fencei_valid", false,-1, 0,0);
    tracep->declBus(c+137,"fence_valid", false,-1, 0,0);
    tracep->declBus(c+96,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+684,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+82,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+692,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+97,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+689,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+695,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+696,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+98,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+711,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+692,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+99,"d_bready", false,-1, 0,0);
    tracep->declBus(c+78,"priv_vec_ls", false,-1, 8,0);
    tracep->declBus(c+708,"BYTE_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+715,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+716,"SET_NUM", false,-1, 31,0);
    tracep->declBus(c+708,"WORD_NUM", false,-1, 31,0);
    tracep->declBus(c+716,"BYTE_NUM", false,-1, 31,0);
    tracep->declBus(c+717,"BIT_NUM", false,-1, 31,0);
    tracep->declBus(c+138,"req_buf_we", false,-1, 0,0);
    tracep->declBus(c+139,"wdata_pipe", false,-1, 31,0);
    tracep->declBus(c+140,"addr_pipe", false,-1, 31,0);
    tracep->declBus(c+141,"wstrb_pipe", false,-1, 3,0);
    tracep->declBus(c+142,"rsize_pipe", false,-1, 2,0);
    tracep->declBus(c+143,"fence_valid_pipe", false,-1, 0,0);
    tracep->declBus(c+144,"valid_flush", false,-1, 0,0);
    tracep->declBus(c+145,"we_pipe", false,-1, 0,0);
    tracep->declBus(c+146,"rvalid_pipe", false,-1, 0,0);
    tracep->declBus(c+147,"wvalid_pipe", false,-1, 0,0);
    tracep->declArray(c+148,"ret_buf", false,-1, 127,0);
    tracep->declBus(c+152,"r_index", false,-1, 3,0);
    tracep->declBus(c+153,"w_index", false,-1, 3,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+154+i*1,"mem_we", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+156+i*4,"mem_rdata", true,(i+0), 127,0);
    }
    tracep->declArray(c+164,"mem_wdata", false,-1, 127,0);
    tracep->declBus(c+168,"tagv_we", false,-1, 1,0);
    tracep->declBus(c+169,"w_tag", false,-1, 23,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+170+i*1,"tag_rdata", true,(i+0), 23,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+172+i*1,"valid_bit_mem", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+174+i*1,"valid_bit_rdata", true,(i+0), 0,0);
    }
    tracep->declBus(c+176,"hit", false,-1, 1,0);
    tracep->declBit(c+177,"cache_hit", false,-1);
    tracep->declBus(c+169,"tag", false,-1, 23,0);
    tracep->declBit(c+178,"hit_way", false,-1);
    tracep->declArray(c+179,"wdata_pipe_512", false,-1, 127,0);
    tracep->declArray(c+183,"wstrb_pipe_512", false,-1, 127,0);
    tracep->declBit(c+187,"wdata_from_pipe", false,-1);
    tracep->declBit(c+188,"data_from_mem", false,-1);
    tracep->declBit(c+189,"lru_sel", false,-1);
    tracep->declBit(c+190,"lru_hit_update", false,-1);
    tracep->declBit(c+191,"lru_refill_update", false,-1);
    tracep->declBus(c+192,"lru", false,-1, 15,0);
    tracep->declBit(c+193,"dirty_info", false,-1);
    tracep->declBit(c+194,"dirty_refill", false,-1);
    tracep->declBit(c+195,"dirty_we", false,-1);
    tracep->declBit(c+196,"dirty_clean_all", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+197+i*1,"dirty_table", true,(i+0), 15,0);
    }
    tracep->declArray(c+199,"wbuf", false,-1, 127,0);
    tracep->declBit(c+203,"wbuf_we", false,-1);
    tracep->declBus(c+204,"maddr_buf", false,-1, 31,0);
    tracep->declBit(c+205,"mbuf_we", false,-1);
    tracep->declBit(c+206,"wfsm_en", false,-1);
    tracep->declBit(c+207,"wfsm_reset", false,-1);
    tracep->declBit(c+208,"wrt_finish", false,-1);
    tracep->declBus(c+209,"write_counter", false,-1, 2,0);
    tracep->declBit(c+210,"write_counter_reset", false,-1);
    tracep->declBit(c+16,"write_counter_en", false,-1);
    tracep->declBus(c+211,"addr_cnt", false,-1, 4,0);
    tracep->declBit(c+212,"addr_cnt_add", false,-1);
    tracep->declBit(c+213,"uncache", false,-1);
    tracep->declBit(c+214,"allign_error", false,-1);
    tracep->declBit(c+215,"read_from_cnt", false,-1);
    tracep->declArray(c+216,"rdata_mem", false,-1, 127,0);
    tracep->declArray(c+220,"rdata_ret", false,-1, 127,0);
    tracep->declBus(c+224,"state", false,-1, 1,0);
    tracep->declBus(c+17,"next_state", false,-1, 1,0);
    tracep->declBus(c+225,"wfsm_state", false,-1, 1,0);
    tracep->declBus(c+18,"wfsm_next_state", false,-1, 1,0);
    tracep->declBus(c+226,"write_num", false,-1, 2,0);
    tracep->pushNamePrefix("data_mem0 ");
    tracep->declBus(c+717,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+152,"raddr", false,-1, 3,0);
    tracep->declBus(c+153,"waddr", false,-1, 3,0);
    tracep->declArray(c+164,"din", false,-1, 127,0);
    tracep->declBus(c+227,"we", false,-1, 15,0);
    tracep->declArray(c+228,"dout", false,-1, 127,0);
    tracep->declBus(c+232,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+233+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem1 ");
    tracep->declBus(c+717,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+152,"raddr", false,-1, 3,0);
    tracep->declBus(c+153,"waddr", false,-1, 3,0);
    tracep->declArray(c+164,"din", false,-1, 127,0);
    tracep->declBus(c+297,"we", false,-1, 15,0);
    tracep->declArray(c+298,"dout", false,-1, 127,0);
    tracep->declBus(c+302,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+303+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem0 ");
    tracep->declBus(c+715,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+152,"raddr", false,-1, 3,0);
    tracep->declBus(c+153,"waddr", false,-1, 3,0);
    tracep->declBus(c+169,"din", false,-1, 23,0);
    tracep->declBit(c+367,"we", false,-1);
    tracep->declBus(c+368,"dout", false,-1, 23,0);
    tracep->declBus(c+369,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+370+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem1 ");
    tracep->declBus(c+715,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+152,"raddr", false,-1, 3,0);
    tracep->declBus(c+153,"waddr", false,-1, 3,0);
    tracep->declBus(c+169,"din", false,-1, 23,0);
    tracep->declBit(c+386,"we", false,-1);
    tracep->declBus(c+387,"dout", false,-1, 23,0);
    tracep->declBus(c+388,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+389+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Decode_inst ");
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+66,"alu_op", false,-1, 4,0);
    tracep->declBus(c+68,"mem_access", false,-1, 4,0);
    tracep->declBus(c+35,"imm", false,-1, 31,0);
    tracep->declBus(c+91,"rf_we", false,-1, 0,0);
    tracep->declBus(c+83,"alu_rs1_sel", false,-1, 1,0);
    tracep->declBus(c+85,"alu_rs2_sel", false,-1, 1,0);
    tracep->declBus(c+87,"wb_rf_sel", false,-1, 0,0);
    tracep->declBus(c+71,"br_type", false,-1, 4,0);
    tracep->declBus(c+75,"priv_vec", false,-1, 6,0);
    tracep->declBit(c+405,"is_not_common_ir", false,-1);
    tracep->declBus(c+406,"rd", false,-1, 4,0);
    tracep->declBus(c+407,"funct3", false,-1, 2,0);
    tracep->declBit(c+408,"is_not_other_priv", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Exp_Commit_inst ");
    tracep->declBus(c+79,"priv_vec", false,-1, 8,0);
    tracep->declBus(c+80,"is_user_mode", false,-1, 0,0);
    tracep->declBus(c+65,"exp_code", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Hazard_inst ");
    tracep->declBus(c+409,"rf_rd_ls", false,-1, 4,0);
    tracep->declBus(c+410,"rf_rd_wb", false,-1, 4,0);
    tracep->declBus(c+93,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+94,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+411,"rf_rs1_ex", false,-1, 4,0);
    tracep->declBus(c+412,"rf_rs2_ex", false,-1, 4,0);
    tracep->declBus(c+54,"rf_wdata_tmp_ls", false,-1, 31,0);
    tracep->declBus(c+37,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+100,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+101,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+47,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+48,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+413,"rf_rd_ex", false,-1, 4,0);
    tracep->declBus(c+414,"rf_rs1_id", false,-1, 4,0);
    tracep->declBus(c+415,"rf_rs2_id", false,-1, 4,0);
    tracep->declBus(c+110,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+107,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+102,"jump", false,-1, 0,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_ex", false,-1, 6,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+79,"priv_vec_wb", false,-1, 8,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_global", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_global", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_global", false,-1, 31,0);
    tracep->declBus(c+103,"pc_set", false,-1, 0,0);
    tracep->declBus(c+103,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+106,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+108,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+109,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+109,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+103,"icache_flush", false,-1, 0,0);
    tracep->declBus(c+104,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+104,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+105,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+107,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+107,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+107,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+105,"icache_stall", false,-1, 0,0);
    tracep->declBus(c+33,"pc_set_target", false,-1, 31,0);
    tracep->declBit(c+416,"stall_by_load_use", false,-1);
    tracep->declBit(c+417,"flush_by_load_use", false,-1);
    tracep->declBit(c+135,"is_load_ex", false,-1);
    tracep->declBit(c+110,"stall_by_icache", false,-1);
    tracep->declBit(c+110,"flush_by_icache", false,-1);
    tracep->declBit(c+107,"stall_by_dcache", false,-1);
    tracep->declBit(c+102,"flush_by_jump", false,-1);
    tracep->declBit(c+418,"flush_by_priv_ex", false,-1);
    tracep->declBit(c+109,"flush_by_exp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICache_inst ");
    tracep->declBus(c+708,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+709,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+677,"rvalid", false,-1, 0,0);
    tracep->declBus(c+22,"raddr", false,-1, 31,0);
    tracep->declBus(c+28,"rdata", false,-1, 31,0);
    tracep->declBus(c+136,"fencei_valid", false,-1, 0,0);
    tracep->declBus(c+137,"fence_valid", false,-1, 0,0);
    tracep->declBus(c+103,"flush", false,-1, 0,0);
    tracep->declBus(c+105,"stall", false,-1, 0,0);
    tracep->declBus(c+110,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+95,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+684,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+711,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+710,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+73,"allign", false,-1, 0,0);
    tracep->declBus(c+708,"BYTE_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+715,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+716,"SET_NUM", false,-1, 31,0);
    tracep->declBus(c+708,"WORD_NUM", false,-1, 31,0);
    tracep->declBus(c+716,"BYTE_NUM", false,-1, 31,0);
    tracep->declBus(c+717,"BIT_NUM", false,-1, 31,0);
    tracep->declBus(c+419,"addr_pipe", false,-1, 31,0);
    tracep->declBit(c+420,"rvalid_pipe", false,-1);
    tracep->declBit(c+421,"req_buf_we", false,-1);
    tracep->declArray(c+422,"ret_buf", false,-1, 127,0);
    tracep->declBus(c+426,"r_index", false,-1, 3,0);
    tracep->declBus(c+427,"w_index", false,-1, 3,0);
    tracep->declBus(c+428,"mem_we", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+429+i*4,"mem_rdata", true,(i+0), 127,0);
    }
    tracep->declBus(c+437,"tagv_we", false,-1, 1,0);
    tracep->declBus(c+438,"w_tag", false,-1, 23,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+439+i*1,"tag_rdata", true,(i+0), 24,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+441+i*1,"valid_bit_mem", true,(i+0), 15,0);
    }
    tracep->declBus(c+443,"hit", false,-1, 1,0);
    tracep->declBit(c+444,"hit_way", false,-1);
    tracep->declBit(c+445,"cache_hit", false,-1);
    tracep->declBus(c+438,"tag", false,-1, 23,0);
    tracep->declBit(c+446,"lru_sel", false,-1);
    tracep->declBit(c+447,"lru_hit_update", false,-1);
    tracep->declBit(c+448,"lru_refill_update", false,-1);
    tracep->declBit(c+449,"data_from_mem", false,-1);
    tracep->declBit(c+450,"flush_buf", false,-1);
    tracep->declArray(c+451,"rdata_mem", false,-1, 127,0);
    tracep->declArray(c+455,"rdata_ret", false,-1, 127,0);
    tracep->declBus(c+459,"lru", false,-1, 15,0);
    tracep->declBus(c+460,"state", false,-1, 1,0);
    tracep->declBus(c+19,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("data_mem0 ");
    tracep->declBus(c+717,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+426,"raddr", false,-1, 3,0);
    tracep->declBus(c+427,"waddr", false,-1, 3,0);
    tracep->declArray(c+422,"din", false,-1, 127,0);
    tracep->declBit(c+461,"we", false,-1);
    tracep->declArray(c+462,"dout", false,-1, 127,0);
    tracep->declBus(c+466,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+467+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem1 ");
    tracep->declBus(c+717,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+426,"raddr", false,-1, 3,0);
    tracep->declBus(c+427,"waddr", false,-1, 3,0);
    tracep->declArray(c+422,"din", false,-1, 127,0);
    tracep->declBit(c+531,"we", false,-1);
    tracep->declArray(c+532,"dout", false,-1, 127,0);
    tracep->declBus(c+536,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+537+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+6,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem0 ");
    tracep->declBus(c+715,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+426,"raddr", false,-1, 3,0);
    tracep->declBus(c+427,"waddr", false,-1, 3,0);
    tracep->declBus(c+438,"din", false,-1, 23,0);
    tracep->declBit(c+601,"we", false,-1);
    tracep->declBus(c+602,"dout", false,-1, 23,0);
    tracep->declBus(c+603,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+604+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+7,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem1 ");
    tracep->declBus(c+715,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+676,"clk", false,-1);
    tracep->declBus(c+426,"raddr", false,-1, 3,0);
    tracep->declBus(c+427,"waddr", false,-1, 3,0);
    tracep->declBus(c+438,"din", false,-1, 23,0);
    tracep->declBit(c+620,"we", false,-1);
    tracep->declBus(c+621,"dout", false,-1, 23,0);
    tracep->declBus(c+622,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+623+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("NPC_Mux_inst ");
    tracep->declBus(c+22,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"pc_set", false,-1, 0,0);
    tracep->declBus(c+33,"pc_target", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBus(c+707,"RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+104,"stall", false,-1, 0,0);
    tracep->declBus(c+103,"pc_set", false,-1, 0,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+22,"pc", false,-1, 31,0);
    tracep->declBus(c+22,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Priv_inst ");
    tracep->declBus(c+639,"csr_op", false,-1, 2,0);
    tracep->declBus(c+39,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+49,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+640,"zimm", false,-1, 31,0);
    tracep->declBus(c+40,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+718,"CSRRW", false,-1, 2,0);
    tracep->declBus(c+711,"CSRRS", false,-1, 2,0);
    tracep->declBus(c+719,"CSRRC", false,-1, 2,0);
    tracep->declBus(c+720,"CSRRWI", false,-1, 2,0);
    tracep->declBus(c+721,"CSRRSI", false,-1, 2,0);
    tracep->declBus(c+722,"CSRRCI", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile_inst ");
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+414,"raddr1", false,-1, 4,0);
    tracep->declBus(c+415,"raddr2", false,-1, 4,0);
    tracep->declBus(c+410,"waddr", false,-1, 4,0);
    tracep->declBus(c+37,"wdata", false,-1, 31,0);
    tracep->declBit(c+94,"we", false,-1);
    tracep->declBus(c+43,"rdata1", false,-1, 31,0);
    tracep->declBus(c+45,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+641+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SegReg_EX_LS_inst ");
    tracep->declBus(c+707,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+107,"stall", false,-1, 0,0);
    tracep->declBus(c+109,"flush", false,-1, 0,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_ex", false,-1, 6,0);
    tracep->declBus(c+40,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+88,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+92,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+77,"priv_vec_ls", false,-1, 6,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+70,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+89,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+93,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+113,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+114,"commit_ls", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_ID_EX_inst ");
    tracep->declBus(c+707,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+107,"stall", false,-1, 0,0);
    tracep->declBus(c+108,"flush", false,-1, 0,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+43,"rdata1_id", false,-1, 31,0);
    tracep->declBus(c+45,"rdata2_id", false,-1, 31,0);
    tracep->declBus(c+35,"imm_id", false,-1, 31,0);
    tracep->declBus(c+68,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+66,"op_id", false,-1, 4,0);
    tracep->declBus(c+71,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+87,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+83,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+85,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+91,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+75,"priv_vec_id", false,-1, 6,0);
    tracep->declBus(c+74,"priv_vec_id_", false,-1, 0,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+39,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+44,"rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+46,"rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+67,"op_ex", false,-1, 4,0);
    tracep->declBus(c+72,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+88,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+84,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+86,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+92,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+76,"priv_vec_ex", false,-1, 6,0);
    tracep->declBus(c+112,"commit_id", false,-1, 0,0);
    tracep->declBus(c+113,"commit_ex", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF1_IF2_inst ");
    tracep->declBus(c+707,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+104,"stall", false,-1, 0,0);
    tracep->declBus(c+103,"flush", false,-1, 0,0);
    tracep->declBus(c+22,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+677,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+111,"commit_if2", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF2_ID_inst ");
    tracep->declBus(c+707,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+105,"stall", false,-1, 0,0);
    tracep->declBus(c+106,"flush", false,-1, 0,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+28,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+111,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+112,"commit_id", false,-1, 0,0);
    tracep->declBus(c+73,"priv_vec_if2", false,-1, 0,0);
    tracep->declBus(c+74,"priv_vec_id", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_LS_WB_inst ");
    tracep->declBus(c+707,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+107,"stall", false,-1, 0,0);
    tracep->declBus(c+109,"flush", false,-1, 0,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+77,"priv_vec_ls_", false,-1, 6,0);
    tracep->declBus(c+78,"priv_vec_ls", false,-1, 8,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+89,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+93,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+32,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+79,"priv_vec_wb", false,-1, 8,0);
    tracep->declBus(c+42,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+90,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+94,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+673,"read_ls", false,-1, 0,0);
    tracep->declBus(c+704,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+114,"commit_ls", false,-1, 0,0);
    tracep->declBus(c+703,"commit_wb", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_rf_wdata_mux ");
    tracep->declBus(c+712,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"din1", false,-1, 31,0);
    tracep->declBus(c+59,"din2", false,-1, 31,0);
    tracep->declBus(c+90,"sel", false,-1, 0,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arbiter_inst ");
    tracep->declBus(c+676,"clk", false,-1, 0,0);
    tracep->declBus(c+677,"rstn", false,-1, 0,0);
    tracep->declBus(c+95,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+684,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+711,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+710,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+96,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+684,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+82,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+692,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+97,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+689,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+695,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+696,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+98,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+711,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+692,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+99,"d_bready", false,-1, 0,0);
    tracep->declBus(c+678,"araddr", false,-1, 31,0);
    tracep->declBus(c+679,"arvalid", false,-1, 0,0);
    tracep->declBus(c+680,"arready", false,-1, 0,0);
    tracep->declBus(c+681,"arlen", false,-1, 7,0);
    tracep->declBus(c+682,"arsize", false,-1, 2,0);
    tracep->declBus(c+683,"arburst", false,-1, 1,0);
    tracep->declBus(c+684,"rdata", false,-1, 31,0);
    tracep->declBus(c+685,"rresp", false,-1, 1,0);
    tracep->declBus(c+686,"rvalid", false,-1, 0,0);
    tracep->declBus(c+687,"rready", false,-1, 0,0);
    tracep->declBus(c+688,"rlast", false,-1, 0,0);
    tracep->declBus(c+689,"awaddr", false,-1, 31,0);
    tracep->declBus(c+690,"awvalid", false,-1, 0,0);
    tracep->declBus(c+691,"awready", false,-1, 0,0);
    tracep->declBus(c+692,"awlen", false,-1, 7,0);
    tracep->declBus(c+693,"awsize", false,-1, 2,0);
    tracep->declBus(c+694,"awburst", false,-1, 1,0);
    tracep->declBus(c+695,"wdata", false,-1, 31,0);
    tracep->declBus(c+696,"wstrb", false,-1, 3,0);
    tracep->declBus(c+697,"wvalid", false,-1, 0,0);
    tracep->declBus(c+698,"wready", false,-1, 0,0);
    tracep->declBus(c+699,"wlast", false,-1, 0,0);
    tracep->declBus(c+700,"bresp", false,-1, 1,0);
    tracep->declBus(c+701,"bvalid", false,-1, 0,0);
    tracep->declBus(c+702,"bready", false,-1, 0,0);
    tracep->declBus(c+674,"r_crt", false,-1, 2,0);
    tracep->declBus(c+20,"r_nxt", false,-1, 2,0);
    tracep->declBus(c+675,"w_crt", false,-1, 1,0);
    tracep->declBus(c+21,"w_nxt", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h14324bb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h38679573__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c51f178__0;
    VlWide<4>/*127:0*/ __Vtemp_hab5a02e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b694aeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd40e0d09__0;
    VlWide<4>/*127:0*/ __Vtemp_h4fc542b6__0;
    VlWide<4>/*127:0*/ __Vtemp_hab5a02e1__1;
    VlWide<4>/*127:0*/ __Vtemp_h495dcf24__0;
    VlWide<4>/*127:0*/ __Vtemp_hd40e0d09__1;
    VlWide<4>/*127:0*/ __Vtemp_h4fc542b6__1;
    VlWide<4>/*127:0*/ __Vtemp_hf2137323__0;
    VlWide<4>/*127:0*/ __Vtemp_h47c5a587__0;
    VlWide<4>/*127:0*/ __Vtemp_h5ce51087__0;
    VlWide<4>/*127:0*/ __Vtemp_h14324bb5__1;
    VlWide<4>/*127:0*/ __Vtemp_h1ef5202c__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c51f178__1;
    VlWide<4>/*127:0*/ __Vtemp_h3ba5ccd0__0;
    VlWide<4>/*127:0*/ __Vtemp_he624d3e8__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j),32);
    bufp->fullIData(oldp+2,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j),32);
    bufp->fullIData(oldp+3,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i),32);
    bufp->fullIData(oldp+9,(vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+10,(vlSelf->CPU__DOT__i_rready));
    bufp->fullBit(oldp+11,(vlSelf->CPU__DOT__i_rlast));
    bufp->fullBit(oldp+12,(vlSelf->CPU__DOT__d_rready));
    bufp->fullBit(oldp+13,(vlSelf->CPU__DOT__d_rlast));
    bufp->fullBit(oldp+14,(vlSelf->CPU__DOT__d_wready));
    bufp->fullBit(oldp+15,(vlSelf->CPU__DOT__d_bvalid));
    bufp->fullBit(oldp+16,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en));
    bufp->fullCData(oldp+17,(((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                               ? ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                   ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)
                                       ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                           ? ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt))
                                               ? 0U
                                               : 1U)
                                           : 0U) : 3U)
                                   : 3U) : ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                             ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                 ? 3U
                                                 : 
                                                (((IData)(vlSelf->CPU__DOT__d_rready) 
                                                  & (IData)(vlSelf->CPU__DOT__d_rlast))
                                                  ? 
                                                 ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                                   ? 3U
                                                   : 2U)
                                                  : 1U))
                                             : (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                                                 | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))
                                                 ? 
                                                ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__allign_error)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                                   ? 
                                                  ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe)
                                                    ? 3U
                                                    : 1U)
                                                   : 
                                                  ((0U 
                                                    != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))
                                                    ? 0U
                                                    : 1U)))
                                                 : 
                                                ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                  ? 1U
                                                  : 0U))))),2);
    bufp->fullCData(oldp+18,(((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                               ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en)
                                   ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                       ? ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe))
                                           ? 1U : 2U)
                                       : ((1U & (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                                 [(1U 
                                                   & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                       ? 
                                                      ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                                       >> 4U)
                                                       : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                                 >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))
                                           ? 1U : 2U))
                                   : 0U) : ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                             ? ((IData)(vlSelf->CPU__DOT__d_bvalid)
                                                 ? 2U
                                                 : 1U)
                                             : ((2U 
                                                 == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                                 ? 
                                                ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U)))),2);
    bufp->fullCData(oldp+19,(((0U == (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state))
                               ? ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe)
                                   ? ((0U == (3U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe))
                                       ? ((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))
                                           ? 0U : 1U)
                                       : 0U) : 0U) : 
                              ((1U == (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state))
                                ? (((IData)(vlSelf->CPU__DOT__i_rready) 
                                    & (IData)(vlSelf->CPU__DOT__i_rlast))
                                    ? 2U : 1U) : 0U))),2);
    bufp->fullCData(oldp+20,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt),3);
    bufp->fullCData(oldp+21,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt),2);
    bufp->fullIData(oldp+22,(vlSelf->CPU__DOT__PC_inst__DOT__pc_reg),32);
    bufp->fullIData(oldp+23,(vlSelf->CPU__DOT__pc_if2),32);
    bufp->fullIData(oldp+24,(vlSelf->CPU__DOT__pc_id),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU__DOT__pc_ex),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU__DOT__pc_ls),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU__DOT__pc_wb),32);
    __Vtemp_h14324bb5__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][0U];
    __Vtemp_h14324bb5__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][1U];
    __Vtemp_h14324bb5__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][2U];
    __Vtemp_h14324bb5__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h38679573__0, __Vtemp_h14324bb5__0, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h1c51f178__0, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullIData(oldp+28,((((IData)(vlSelf->CPU__DOT__pc_set) 
                               | ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf) 
                                  | (0U != (3U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe))))
                               ? 0x13U : ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem)
                                           ? __Vtemp_h38679573__0[0U]
                                           : __Vtemp_h1c51f178__0[0U]))),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU__DOT__inst_id),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU__DOT__inst_ex),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU__DOT__inst_ls),32);
    bufp->fullIData(oldp+32,(vlSelf->CPU__DOT__inst_wb),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU__DOT__pc_target),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->CPU__DOT__pc_set)
                               ? vlSelf->CPU__DOT__pc_target
                               : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg))),32);
    bufp->fullIData(oldp+35,(vlSelf->CPU__DOT__imm_id),32);
    bufp->fullIData(oldp+36,(vlSelf->CPU__DOT__imm_ex),32);
    bufp->fullIData(oldp+37,(vlSelf->CPU__DOT__rf_wdata_wb),32);
    bufp->fullIData(oldp+38,(((0x300U == (vlSelf->CPU__DOT__inst_id 
                                          >> 0x14U))
                               ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                               : ((0x305U == (vlSelf->CPU__DOT__inst_id 
                                              >> 0x14U))
                                   ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                   : ((0x342U == (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U))
                                       ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                       : ((0x341U == 
                                           (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))
                                           ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                           : 0U))))),32);
    bufp->fullIData(oldp+39,(vlSelf->CPU__DOT__csr_rdata_ex),32);
    bufp->fullIData(oldp+40,(((0x4000U & vlSelf->CPU__DOT__inst_ex)
                               ? ((0x2000U & vlSelf->CPU__DOT__inst_ex)
                                   ? ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (vlSelf->CPU__DOT__csr_rdata_ex 
                                          & (~ (0x1fU 
                                                & (vlSelf->CPU__DOT__inst_ex 
                                                   >> 0xfU))))
                                       : (vlSelf->CPU__DOT__csr_rdata_ex 
                                          | (0x1fU 
                                             & (vlSelf->CPU__DOT__inst_ex 
                                                >> 0xfU))))
                                   : ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                                   >> 0xfU))
                                       : 0U)) : ((0x2000U 
                                                  & vlSelf->CPU__DOT__inst_ex)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   & (~ vlSelf->CPU__DOT__alu_rf_data1))
                                                   : 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   | vlSelf->CPU__DOT__alu_rf_data1))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? vlSelf->CPU__DOT__alu_rf_data1
                                                   : 0U)))),32);
    bufp->fullIData(oldp+41,(vlSelf->CPU__DOT__csr_wdata_ls),32);
    bufp->fullIData(oldp+42,(vlSelf->CPU__DOT__csr_wdata_wb),32);
    bufp->fullIData(oldp+43,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+44,(vlSelf->CPU__DOT__rf_rdata1_ex),32);
    bufp->fullIData(oldp+45,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+46,(vlSelf->CPU__DOT__rf_rdata2_ex),32);
    bufp->fullIData(oldp+47,(vlSelf->CPU__DOT__forward1_data),32);
    bufp->fullIData(oldp+48,(vlSelf->CPU__DOT__forward2_data),32);
    bufp->fullIData(oldp+49,(vlSelf->CPU__DOT__alu_rf_data1),32);
    bufp->fullIData(oldp+50,(vlSelf->CPU__DOT__alu_rf_data2),32);
    bufp->fullIData(oldp+51,(vlSelf->CPU__DOT__alu_rs1),32);
    bufp->fullIData(oldp+52,(vlSelf->CPU__DOT__alu_rs2),32);
    bufp->fullIData(oldp+53,(vlSelf->CPU__DOT__alu_result_ex),32);
    bufp->fullIData(oldp+54,(vlSelf->CPU__DOT__alu_result_ls),32);
    bufp->fullIData(oldp+55,(vlSelf->CPU__DOT__alu_result_wb),32);
    bufp->fullIData(oldp+56,(vlSelf->CPU__DOT__jump_target),32);
    bufp->fullIData(oldp+57,(((0x10U & (IData)(vlSelf->CPU__DOT__mem_access_ex))
                               ? ((0U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                   ? (vlSelf->CPU__DOT__alu_rf_data2 
                                      << (0x18U & (vlSelf->CPU__DOT__alu_result_ex 
                                                   << 3U)))
                                   : ((1U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                       ? (vlSelf->CPU__DOT__alu_rf_data2 
                                          << (0x18U 
                                              & (vlSelf->CPU__DOT__alu_result_ex 
                                                 << 3U)))
                                       : ((2U == (7U 
                                                  & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                           ? vlSelf->CPU__DOT__alu_rf_data2
                                           : 0U))) : 0U)),32);
    bufp->fullIData(oldp+58,(((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                               ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? 0U : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                            ? (0xffffU 
                                               & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                            : (0xffU 
                                               & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))
                               : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? 0U : vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                   : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))))),32);
    bufp->fullIData(oldp+59,(vlSelf->CPU__DOT__mem_rdata_wb),32);
    __Vtemp_hab5a02e1__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][0U];
    __Vtemp_hab5a02e1__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][1U];
    __Vtemp_hab5a02e1__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][2U];
    __Vtemp_hab5a02e1__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h9b694aeb__0, __Vtemp_hab5a02e1__0, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hd40e0d09__0, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 0x60U);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4fc542b6__0, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullIData(oldp+60,(((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__allign_error)
                               ? 0U : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem)
                                        ? __Vtemp_h9b694aeb__0[0U]
                                        : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                            ? __Vtemp_hd40e0d09__0[0U]
                                            : __Vtemp_h4fc542b6__0[0U])))),32);
    bufp->fullIData(oldp+61,((0xfffffff0U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe)),32);
    bufp->fullIData(oldp+62,(vlSelf->CPU__DOT__d_raddr),32);
    bufp->fullIData(oldp+63,(vlSelf->CPU__DOT__CSR_inst__DOT__mepc),32);
    bufp->fullIData(oldp+64,(vlSelf->CPU__DOT__CSR_inst__DOT__mtvec),32);
    bufp->fullIData(oldp+65,(vlSelf->CPU__DOT__mcause_global),32);
    bufp->fullCData(oldp+66,(vlSelf->CPU__DOT__alu_op_id),5);
    bufp->fullCData(oldp+67,(vlSelf->CPU__DOT__alu_op_ex),5);
    bufp->fullCData(oldp+68,(vlSelf->CPU__DOT__mem_access_id),5);
    bufp->fullCData(oldp+69,(vlSelf->CPU__DOT__mem_access_ex),5);
    bufp->fullCData(oldp+70,(vlSelf->CPU__DOT__mem_access_ls),5);
    bufp->fullCData(oldp+71,(vlSelf->CPU__DOT__br_type_id),5);
    bufp->fullCData(oldp+72,(vlSelf->CPU__DOT__br_type_ex),5);
    bufp->fullBit(oldp+73,(vlSelf->CPU__DOT__priv_vec_if2));
    bufp->fullBit(oldp+74,(vlSelf->CPU__DOT__priv_vec_id_));
    bufp->fullCData(oldp+75,(vlSelf->CPU__DOT__priv_vec_id),7);
    bufp->fullCData(oldp+76,(vlSelf->CPU__DOT__priv_vec_ex),7);
    bufp->fullCData(oldp+77,(vlSelf->CPU__DOT__priv_vec_ls_),7);
    bufp->fullSData(oldp+78,(vlSelf->CPU__DOT__priv_vec_ls),9);
    bufp->fullSData(oldp+79,(vlSelf->CPU__DOT__priv_vec_wb),9);
    bufp->fullBit(oldp+80,((0U == (3U & (vlSelf->CPU__DOT__CSR_inst__DOT__mstatus 
                                         >> 1U)))));
    bufp->fullCData(oldp+81,(vlSelf->CPU__DOT__wstrb_ex),4);
    bufp->fullCData(oldp+82,(vlSelf->CPU__DOT__d_rsize),3);
    bufp->fullCData(oldp+83,(vlSelf->CPU__DOT__alu_rs1_sel_id),2);
    bufp->fullCData(oldp+84,(vlSelf->CPU__DOT__alu_rs1_sel_ex),2);
    bufp->fullCData(oldp+85,(vlSelf->CPU__DOT__alu_rs2_sel_id),2);
    bufp->fullCData(oldp+86,(vlSelf->CPU__DOT__alu_rs2_sel_ex),2);
    bufp->fullBit(oldp+87,(vlSelf->CPU__DOT__wb_rf_sel_id));
    bufp->fullBit(oldp+88,(vlSelf->CPU__DOT__wb_rf_sel_ex));
    bufp->fullBit(oldp+89,(vlSelf->CPU__DOT__wb_rf_sel_ls));
    bufp->fullBit(oldp+90,(vlSelf->CPU__DOT__wb_rf_sel_wb));
    bufp->fullBit(oldp+91,(vlSelf->CPU__DOT__rf_we_id));
    bufp->fullBit(oldp+92,(vlSelf->CPU__DOT__rf_we_ex));
    bufp->fullBit(oldp+93,(vlSelf->CPU__DOT__rf_we_ls));
    bufp->fullBit(oldp+94,(vlSelf->CPU__DOT__rf_we_wb));
    bufp->fullBit(oldp+95,(vlSelf->CPU__DOT__i_rvalid));
    bufp->fullBit(oldp+96,(vlSelf->CPU__DOT__d_rvalid));
    bufp->fullBit(oldp+97,(vlSelf->CPU__DOT__d_wvalid));
    bufp->fullBit(oldp+98,(vlSelf->CPU__DOT__d_wlast));
    bufp->fullBit(oldp+99,(vlSelf->CPU__DOT__d_bready));
    bufp->fullBit(oldp+100,(vlSelf->CPU__DOT__forward1_en));
    bufp->fullBit(oldp+101,(vlSelf->CPU__DOT__forward2_en));
    bufp->fullBit(oldp+102,(vlSelf->CPU__DOT__jump));
    bufp->fullBit(oldp+103,(vlSelf->CPU__DOT__pc_set));
    bufp->fullBit(oldp+104,(vlSelf->CPU__DOT__pc_stall));
    bufp->fullBit(oldp+105,(vlSelf->CPU__DOT__IF2_ID_stall));
    bufp->fullBit(oldp+106,(vlSelf->CPU__DOT__IF2_ID_flush));
    bufp->fullBit(oldp+107,(vlSelf->CPU__DOT__dcache_miss));
    bufp->fullBit(oldp+108,(vlSelf->CPU__DOT__ID_EX_flush));
    bufp->fullBit(oldp+109,((0U != vlSelf->CPU__DOT__mcause_global)));
    bufp->fullBit(oldp+110,(vlSelf->CPU__DOT__icache_miss));
    bufp->fullBit(oldp+111,(vlSelf->CPU__DOT__commit_if2));
    bufp->fullBit(oldp+112,(vlSelf->CPU__DOT__commit_id));
    bufp->fullBit(oldp+113,(vlSelf->CPU__DOT__commit_ex));
    bufp->fullBit(oldp+114,(vlSelf->CPU__DOT__commit_ls));
    bufp->fullQData(oldp+115,(vlSelf->CPU__DOT__ALU_inst__DOT__result_64),64);
    bufp->fullIData(oldp+117,(vlSelf->CPU__DOT__ALU_inst__DOT__result_div),32);
    bufp->fullIData(oldp+118,(vlSelf->CPU__DOT__ALU_inst__DOT__result_rem),32);
    bufp->fullCData(oldp+119,((((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0) 
                                << 1U) | (vlSelf->CPU__DOT__alu_rs1 
                                          >> 0x1fU))),2);
    bufp->fullIData(oldp+120,(vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs),32);
    bufp->fullIData(oldp+121,(vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs),32);
    bufp->fullBit(oldp+122,((IData)((0x10U == (0x18U 
                                               & (IData)(vlSelf->CPU__DOT__br_type_ex))))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0) 
                             & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                >> 2U))));
    bufp->fullBit(oldp+124,(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr));
    bufp->fullSData(oldp+125,((vlSelf->CPU__DOT__inst_id 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+126,((vlSelf->CPU__DOT__inst_wb 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+127,((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))));
    bufp->fullBit(oldp+128,(vlSelf->CPU__DOT__CSR_inst__DOT__we));
    bufp->fullIData(oldp+129,(vlSelf->CPU__DOT__CSR_inst__DOT__mstatus),32);
    bufp->fullIData(oldp+130,(vlSelf->CPU__DOT__CSR_inst__DOT__mcause),32);
    bufp->fullCData(oldp+131,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ls))),3);
    bufp->fullIData(oldp+132,(vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data),32);
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 4U))));
    bufp->fullCData(oldp+134,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ex))),3);
    bufp->fullBit(oldp+135,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+137,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                   >> 4U))));
    bufp->fullBit(oldp+138,(vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we));
    bufp->fullIData(oldp+139,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe),32);
    bufp->fullIData(oldp+140,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe),32);
    bufp->fullCData(oldp+141,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe),4);
    bufp->fullCData(oldp+142,(vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe),3);
    bufp->fullBit(oldp+143,(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe));
    bufp->fullBit(oldp+144,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush));
    bufp->fullBit(oldp+145,(vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe));
    bufp->fullBit(oldp+146,(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe));
    bufp->fullBit(oldp+147,(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe));
    bufp->fullWData(oldp+148,(vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf),128);
    bufp->fullCData(oldp+152,(vlSelf->CPU__DOT__DCache_inst__DOT__r_index),4);
    bufp->fullCData(oldp+153,(vlSelf->CPU__DOT__DCache_inst__DOT__w_index),4);
    bufp->fullSData(oldp+154,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[0]),16);
    bufp->fullSData(oldp+155,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[1]),16);
    bufp->fullWData(oldp+156,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0]),128);
    bufp->fullWData(oldp+160,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1]),128);
    bufp->fullWData(oldp+164,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata),128);
    bufp->fullCData(oldp+168,(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we),2);
    bufp->fullIData(oldp+169,((vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                               >> 8U)),24);
    bufp->fullIData(oldp+170,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[0]),24);
    bufp->fullIData(oldp+171,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[1]),24);
    bufp->fullSData(oldp+172,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[0]),16);
    bufp->fullSData(oldp+173,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[1]),16);
    bufp->fullBit(oldp+174,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[0]));
    bufp->fullBit(oldp+175,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[1]));
    bufp->fullCData(oldp+176,(vlSelf->CPU__DOT__DCache_inst__DOT__hit),2);
    bufp->fullBit(oldp+177,((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))));
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))));
    bufp->fullWData(oldp+179,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512),128);
    bufp->fullWData(oldp+183,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512),128);
    bufp->fullBit(oldp+187,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe));
    bufp->fullBit(oldp+188,(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem));
    bufp->fullBit(oldp+189,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel));
    bufp->fullBit(oldp+190,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update));
    bufp->fullBit(oldp+191,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update));
    bufp->fullSData(oldp+192,(vlSelf->CPU__DOT__DCache_inst__DOT__lru),16);
    bufp->fullBit(oldp+193,((1U & (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                   [(1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                            ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                               >> 4U)
                                            : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                   >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))));
    bufp->fullBit(oldp+194,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill));
    bufp->fullBit(oldp+195,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we));
    bufp->fullBit(oldp+196,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all));
    bufp->fullSData(oldp+197,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[0]),16);
    bufp->fullSData(oldp+198,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[1]),16);
    bufp->fullWData(oldp+199,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf),128);
    bufp->fullBit(oldp+203,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we));
    bufp->fullIData(oldp+204,(vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf),32);
    bufp->fullBit(oldp+205,(vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we));
    bufp->fullBit(oldp+206,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en));
    bufp->fullBit(oldp+207,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset));
    bufp->fullBit(oldp+208,(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
    bufp->fullCData(oldp+209,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter),3);
    bufp->fullBit(oldp+210,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset));
    bufp->fullCData(oldp+211,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt),5);
    bufp->fullBit(oldp+212,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add));
    bufp->fullBit(oldp+213,(vlSelf->CPU__DOT__DCache_inst__DOT__uncache));
    bufp->fullBit(oldp+214,(vlSelf->CPU__DOT__DCache_inst__DOT__allign_error));
    bufp->fullBit(oldp+215,(vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt));
    __Vtemp_hab5a02e1__1[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][0U];
    __Vtemp_hab5a02e1__1[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][1U];
    __Vtemp_hab5a02e1__1[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][2U];
    __Vtemp_hab5a02e1__1[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h495dcf24__0, __Vtemp_hab5a02e1__1, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+216,(__Vtemp_h495dcf24__0),128);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hd40e0d09__1, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 0x60U);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4fc542b6__1, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
        __Vtemp_hf2137323__0[0U] = __Vtemp_hd40e0d09__1[0U];
        __Vtemp_hf2137323__0[1U] = __Vtemp_hd40e0d09__1[1U];
        __Vtemp_hf2137323__0[2U] = __Vtemp_hd40e0d09__1[2U];
        __Vtemp_hf2137323__0[3U] = __Vtemp_hd40e0d09__1[3U];
    } else {
        __Vtemp_hf2137323__0[0U] = __Vtemp_h4fc542b6__1[0U];
        __Vtemp_hf2137323__0[1U] = __Vtemp_h4fc542b6__1[1U];
        __Vtemp_hf2137323__0[2U] = __Vtemp_h4fc542b6__1[2U];
        __Vtemp_hf2137323__0[3U] = __Vtemp_h4fc542b6__1[3U];
    }
    bufp->fullWData(oldp+220,(__Vtemp_hf2137323__0),128);
    bufp->fullCData(oldp+224,(vlSelf->CPU__DOT__DCache_inst__DOT__state),2);
    bufp->fullCData(oldp+225,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state),2);
    bufp->fullCData(oldp+226,(((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                ? 0U : 3U)),3);
    bufp->fullSData(oldp+227,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                              [0U]),16);
    __Vtemp_h47c5a587__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][0U];
    __Vtemp_h47c5a587__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][1U];
    __Vtemp_h47c5a587__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][2U];
    __Vtemp_h47c5a587__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][3U];
    bufp->fullWData(oldp+228,(__Vtemp_h47c5a587__0),128);
    bufp->fullCData(oldp+232,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r),4);
    bufp->fullWData(oldp+233,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0]),128);
    bufp->fullWData(oldp+237,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1]),128);
    bufp->fullWData(oldp+241,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2]),128);
    bufp->fullWData(oldp+245,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3]),128);
    bufp->fullWData(oldp+249,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4]),128);
    bufp->fullWData(oldp+253,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5]),128);
    bufp->fullWData(oldp+257,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6]),128);
    bufp->fullWData(oldp+261,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7]),128);
    bufp->fullWData(oldp+265,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8]),128);
    bufp->fullWData(oldp+269,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9]),128);
    bufp->fullWData(oldp+273,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[10]),128);
    bufp->fullWData(oldp+277,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[11]),128);
    bufp->fullWData(oldp+281,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[12]),128);
    bufp->fullWData(oldp+285,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[13]),128);
    bufp->fullWData(oldp+289,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[14]),128);
    bufp->fullWData(oldp+293,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[15]),128);
    bufp->fullSData(oldp+297,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                              [1U]),16);
    __Vtemp_h5ce51087__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][0U];
    __Vtemp_h5ce51087__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][1U];
    __Vtemp_h5ce51087__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][2U];
    __Vtemp_h5ce51087__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][3U];
    bufp->fullWData(oldp+298,(__Vtemp_h5ce51087__0),128);
    bufp->fullCData(oldp+302,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r),4);
    bufp->fullWData(oldp+303,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0]),128);
    bufp->fullWData(oldp+307,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1]),128);
    bufp->fullWData(oldp+311,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2]),128);
    bufp->fullWData(oldp+315,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3]),128);
    bufp->fullWData(oldp+319,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4]),128);
    bufp->fullWData(oldp+323,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5]),128);
    bufp->fullWData(oldp+327,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6]),128);
    bufp->fullWData(oldp+331,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7]),128);
    bufp->fullWData(oldp+335,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8]),128);
    bufp->fullWData(oldp+339,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9]),128);
    bufp->fullWData(oldp+343,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[10]),128);
    bufp->fullWData(oldp+347,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[11]),128);
    bufp->fullWData(oldp+351,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[12]),128);
    bufp->fullWData(oldp+355,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[13]),128);
    bufp->fullWData(oldp+359,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[14]),128);
    bufp->fullWData(oldp+363,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[15]),128);
    bufp->fullBit(oldp+367,((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))));
    bufp->fullIData(oldp+368,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
                              [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r]),24);
    bufp->fullCData(oldp+369,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r),4);
    bufp->fullIData(oldp+370,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0]),24);
    bufp->fullIData(oldp+371,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[1]),24);
    bufp->fullIData(oldp+372,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[2]),24);
    bufp->fullIData(oldp+373,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[3]),24);
    bufp->fullIData(oldp+374,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[4]),24);
    bufp->fullIData(oldp+375,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[5]),24);
    bufp->fullIData(oldp+376,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[6]),24);
    bufp->fullIData(oldp+377,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[7]),24);
    bufp->fullIData(oldp+378,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[8]),24);
    bufp->fullIData(oldp+379,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[9]),24);
    bufp->fullIData(oldp+380,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[10]),24);
    bufp->fullIData(oldp+381,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[11]),24);
    bufp->fullIData(oldp+382,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[12]),24);
    bufp->fullIData(oldp+383,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[13]),24);
    bufp->fullIData(oldp+384,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[14]),24);
    bufp->fullIData(oldp+385,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[15]),24);
    bufp->fullBit(oldp+386,((1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we) 
                                   >> 1U))));
    bufp->fullIData(oldp+387,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
                              [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r]),24);
    bufp->fullCData(oldp+388,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r),4);
    bufp->fullIData(oldp+389,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0]),24);
    bufp->fullIData(oldp+390,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[1]),24);
    bufp->fullIData(oldp+391,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[2]),24);
    bufp->fullIData(oldp+392,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[3]),24);
    bufp->fullIData(oldp+393,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[4]),24);
    bufp->fullIData(oldp+394,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[5]),24);
    bufp->fullIData(oldp+395,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[6]),24);
    bufp->fullIData(oldp+396,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[7]),24);
    bufp->fullIData(oldp+397,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[8]),24);
    bufp->fullIData(oldp+398,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[9]),24);
    bufp->fullIData(oldp+399,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[10]),24);
    bufp->fullIData(oldp+400,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[11]),24);
    bufp->fullIData(oldp+401,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[12]),24);
    bufp->fullIData(oldp+402,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[13]),24);
    bufp->fullIData(oldp+403,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[14]),24);
    bufp->fullIData(oldp+404,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[15]),24);
    bufp->fullBit(oldp+405,(vlSelf->CPU__DOT__Decode_inst__DOT__is_not_common_ir));
    bufp->fullCData(oldp+406,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 7U))),5);
    bufp->fullCData(oldp+407,((7U & (vlSelf->CPU__DOT__inst_id 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+408,((1U & ((0x73U == (0x7fU 
                                              & vlSelf->CPU__DOT__inst_id))
                                    ? (IData)(((0U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->CPU__DOT__inst_id)) 
                                               & ((0U 
                                                   != 
                                                   (vlSelf->CPU__DOT__inst_id 
                                                    >> 0x14U)) 
                                                  & (0x302U 
                                                     != 
                                                     (vlSelf->CPU__DOT__inst_id 
                                                      >> 0x14U)))))
                                    : (~ ((0xfU == 
                                           (0x7fU & vlSelf->CPU__DOT__inst_id)) 
                                          & (0U != 
                                             (3U & 
                                              (vlSelf->CPU__DOT__inst_id 
                                               >> 0xdU)))))))));
    bufp->fullCData(oldp+409,((0x1fU & (vlSelf->CPU__DOT__inst_ls 
                                        >> 7U))),5);
    bufp->fullCData(oldp+410,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                        >> 7U))),5);
    bufp->fullCData(oldp+411,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+412,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+413,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 7U))),5);
    bufp->fullCData(oldp+414,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+415,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+416,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use));
    bufp->fullBit(oldp+417,(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use));
    bufp->fullBit(oldp+418,((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
    bufp->fullIData(oldp+419,(vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe),32);
    bufp->fullBit(oldp+420,(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe));
    bufp->fullBit(oldp+421,(vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we));
    bufp->fullWData(oldp+422,(vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf),128);
    bufp->fullCData(oldp+426,(vlSelf->CPU__DOT__ICache_inst__DOT__r_index),4);
    bufp->fullCData(oldp+427,((0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                       >> 4U))),4);
    bufp->fullCData(oldp+428,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we),2);
    bufp->fullWData(oldp+429,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0]),128);
    bufp->fullWData(oldp+433,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1]),128);
    bufp->fullCData(oldp+437,(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we),2);
    bufp->fullIData(oldp+438,((vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                               >> 8U)),24);
    bufp->fullIData(oldp+439,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0]),25);
    bufp->fullIData(oldp+440,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1]),25);
    bufp->fullSData(oldp+441,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[0]),16);
    bufp->fullSData(oldp+442,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[1]),16);
    bufp->fullCData(oldp+443,(vlSelf->CPU__DOT__ICache_inst__DOT__hit),2);
    bufp->fullBit(oldp+444,((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))));
    bufp->fullBit(oldp+445,((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h3ff16b76__0)))));
    bufp->fullBit(oldp+447,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update));
    bufp->fullBit(oldp+448,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update));
    bufp->fullBit(oldp+449,(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem));
    bufp->fullBit(oldp+450,(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf));
    __Vtemp_h14324bb5__1[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][0U];
    __Vtemp_h14324bb5__1[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][1U];
    __Vtemp_h14324bb5__1[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][2U];
    __Vtemp_h14324bb5__1[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h1ef5202c__0, __Vtemp_h14324bb5__1, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+451,(__Vtemp_h1ef5202c__0),128);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h1c51f178__1, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+455,(__Vtemp_h1c51f178__1),128);
    bufp->fullSData(oldp+459,(vlSelf->CPU__DOT__ICache_inst__DOT__lru),16);
    bufp->fullCData(oldp+460,(vlSelf->CPU__DOT__ICache_inst__DOT__state),2);
    bufp->fullBit(oldp+461,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we))));
    __Vtemp_h3ba5ccd0__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][0U];
    __Vtemp_h3ba5ccd0__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][1U];
    __Vtemp_h3ba5ccd0__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][2U];
    __Vtemp_h3ba5ccd0__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][3U];
    bufp->fullWData(oldp+462,(__Vtemp_h3ba5ccd0__0),128);
    bufp->fullCData(oldp+466,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r),4);
    bufp->fullWData(oldp+467,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0]),128);
    bufp->fullWData(oldp+471,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1]),128);
    bufp->fullWData(oldp+475,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2]),128);
    bufp->fullWData(oldp+479,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3]),128);
    bufp->fullWData(oldp+483,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4]),128);
    bufp->fullWData(oldp+487,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5]),128);
    bufp->fullWData(oldp+491,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6]),128);
    bufp->fullWData(oldp+495,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7]),128);
    bufp->fullWData(oldp+499,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8]),128);
    bufp->fullWData(oldp+503,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9]),128);
    bufp->fullWData(oldp+507,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[10]),128);
    bufp->fullWData(oldp+511,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[11]),128);
    bufp->fullWData(oldp+515,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[12]),128);
    bufp->fullWData(oldp+519,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[13]),128);
    bufp->fullWData(oldp+523,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[14]),128);
    bufp->fullWData(oldp+527,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[15]),128);
    bufp->fullBit(oldp+531,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we) 
                                   >> 1U))));
    __Vtemp_he624d3e8__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][0U];
    __Vtemp_he624d3e8__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][1U];
    __Vtemp_he624d3e8__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][2U];
    __Vtemp_he624d3e8__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][3U];
    bufp->fullWData(oldp+532,(__Vtemp_he624d3e8__0),128);
    bufp->fullCData(oldp+536,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r),4);
    bufp->fullWData(oldp+537,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0]),128);
    bufp->fullWData(oldp+541,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1]),128);
    bufp->fullWData(oldp+545,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2]),128);
    bufp->fullWData(oldp+549,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3]),128);
    bufp->fullWData(oldp+553,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4]),128);
    bufp->fullWData(oldp+557,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5]),128);
    bufp->fullWData(oldp+561,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6]),128);
    bufp->fullWData(oldp+565,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7]),128);
    bufp->fullWData(oldp+569,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8]),128);
    bufp->fullWData(oldp+573,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9]),128);
    bufp->fullWData(oldp+577,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[10]),128);
    bufp->fullWData(oldp+581,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[11]),128);
    bufp->fullWData(oldp+585,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[12]),128);
    bufp->fullWData(oldp+589,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[13]),128);
    bufp->fullWData(oldp+593,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[14]),128);
    bufp->fullWData(oldp+597,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[15]),128);
    bufp->fullBit(oldp+601,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))));
    bufp->fullIData(oldp+602,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram
                              [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r]),24);
    bufp->fullCData(oldp+603,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r),4);
    bufp->fullIData(oldp+604,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0]),24);
    bufp->fullIData(oldp+605,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[1]),24);
    bufp->fullIData(oldp+606,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[2]),24);
    bufp->fullIData(oldp+607,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[3]),24);
    bufp->fullIData(oldp+608,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[4]),24);
    bufp->fullIData(oldp+609,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[5]),24);
    bufp->fullIData(oldp+610,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[6]),24);
    bufp->fullIData(oldp+611,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[7]),24);
    bufp->fullIData(oldp+612,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[8]),24);
    bufp->fullIData(oldp+613,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[9]),24);
    bufp->fullIData(oldp+614,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[10]),24);
    bufp->fullIData(oldp+615,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[11]),24);
    bufp->fullIData(oldp+616,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[12]),24);
    bufp->fullIData(oldp+617,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[13]),24);
    bufp->fullIData(oldp+618,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[14]),24);
    bufp->fullIData(oldp+619,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[15]),24);
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we) 
                                   >> 1U))));
    bufp->fullIData(oldp+621,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram
                              [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r]),24);
    bufp->fullCData(oldp+622,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r),4);
    bufp->fullIData(oldp+623,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0]),24);
    bufp->fullIData(oldp+624,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[1]),24);
    bufp->fullIData(oldp+625,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[2]),24);
    bufp->fullIData(oldp+626,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[3]),24);
    bufp->fullIData(oldp+627,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[4]),24);
    bufp->fullIData(oldp+628,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[5]),24);
    bufp->fullIData(oldp+629,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[6]),24);
    bufp->fullIData(oldp+630,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[7]),24);
    bufp->fullIData(oldp+631,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[8]),24);
    bufp->fullIData(oldp+632,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[9]),24);
    bufp->fullIData(oldp+633,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[10]),24);
    bufp->fullIData(oldp+634,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[11]),24);
    bufp->fullIData(oldp+635,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[12]),24);
    bufp->fullIData(oldp+636,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[13]),24);
    bufp->fullIData(oldp+637,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[14]),24);
    bufp->fullIData(oldp+638,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[15]),24);
    bufp->fullCData(oldp+639,((7U & (vlSelf->CPU__DOT__inst_ex 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+640,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),32);
    bufp->fullIData(oldp+641,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0]),32);
    bufp->fullIData(oldp+642,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1]),32);
    bufp->fullIData(oldp+643,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2]),32);
    bufp->fullIData(oldp+644,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3]),32);
    bufp->fullIData(oldp+645,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4]),32);
    bufp->fullIData(oldp+646,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5]),32);
    bufp->fullIData(oldp+647,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6]),32);
    bufp->fullIData(oldp+648,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7]),32);
    bufp->fullIData(oldp+649,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8]),32);
    bufp->fullIData(oldp+650,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9]),32);
    bufp->fullIData(oldp+651,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[10]),32);
    bufp->fullIData(oldp+652,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[11]),32);
    bufp->fullIData(oldp+653,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[12]),32);
    bufp->fullIData(oldp+654,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[13]),32);
    bufp->fullIData(oldp+655,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[14]),32);
    bufp->fullIData(oldp+656,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[15]),32);
    bufp->fullIData(oldp+657,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[16]),32);
    bufp->fullIData(oldp+658,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[17]),32);
    bufp->fullIData(oldp+659,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[18]),32);
    bufp->fullIData(oldp+660,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[19]),32);
    bufp->fullIData(oldp+661,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[20]),32);
    bufp->fullIData(oldp+662,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[21]),32);
    bufp->fullIData(oldp+663,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[22]),32);
    bufp->fullIData(oldp+664,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[23]),32);
    bufp->fullIData(oldp+665,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[24]),32);
    bufp->fullIData(oldp+666,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[25]),32);
    bufp->fullIData(oldp+667,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[26]),32);
    bufp->fullIData(oldp+668,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[27]),32);
    bufp->fullIData(oldp+669,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[28]),32);
    bufp->fullIData(oldp+670,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[29]),32);
    bufp->fullIData(oldp+671,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[30]),32);
    bufp->fullIData(oldp+672,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[31]),32);
    bufp->fullBit(oldp+673,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                   >> 3U))));
    bufp->fullCData(oldp+674,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt),3);
    bufp->fullCData(oldp+675,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt),2);
    bufp->fullBit(oldp+676,(vlSelf->clk));
    bufp->fullBit(oldp+677,(vlSelf->rstn));
    bufp->fullIData(oldp+678,(vlSelf->araddr),32);
    bufp->fullBit(oldp+679,(vlSelf->arvalid));
    bufp->fullBit(oldp+680,(vlSelf->arready));
    bufp->fullCData(oldp+681,(vlSelf->arlen),8);
    bufp->fullCData(oldp+682,(vlSelf->arsize),3);
    bufp->fullCData(oldp+683,(vlSelf->arburst),2);
    bufp->fullIData(oldp+684,(vlSelf->rdata),32);
    bufp->fullCData(oldp+685,(vlSelf->rresp),2);
    bufp->fullBit(oldp+686,(vlSelf->rvalid));
    bufp->fullBit(oldp+687,(vlSelf->rready));
    bufp->fullBit(oldp+688,(vlSelf->rlast));
    bufp->fullIData(oldp+689,(vlSelf->awaddr),32);
    bufp->fullBit(oldp+690,(vlSelf->awvalid));
    bufp->fullBit(oldp+691,(vlSelf->awready));
    bufp->fullCData(oldp+692,(vlSelf->awlen),8);
    bufp->fullCData(oldp+693,(vlSelf->awsize),3);
    bufp->fullCData(oldp+694,(vlSelf->awburst),2);
    bufp->fullIData(oldp+695,(vlSelf->wdata),32);
    bufp->fullCData(oldp+696,(vlSelf->wstrb),4);
    bufp->fullBit(oldp+697,(vlSelf->wvalid));
    bufp->fullBit(oldp+698,(vlSelf->wready));
    bufp->fullBit(oldp+699,(vlSelf->wlast));
    bufp->fullCData(oldp+700,(vlSelf->bresp),2);
    bufp->fullBit(oldp+701,(vlSelf->bvalid));
    bufp->fullBit(oldp+702,(vlSelf->bready));
    bufp->fullBit(oldp+703,(vlSelf->commit_wb));
    bufp->fullBit(oldp+704,(vlSelf->uncache_read_wb));
    bufp->fullIData(oldp+705,(vlSelf->inst),32);
    bufp->fullIData(oldp+706,(vlSelf->pc_cur),32);
    bufp->fullIData(oldp+707,(0x80000000U),32);
    bufp->fullIData(oldp+708,(4U),32);
    bufp->fullIData(oldp+709,(2U),32);
    bufp->fullCData(oldp+710,(3U),8);
    bufp->fullCData(oldp+711,(2U),3);
    bufp->fullIData(oldp+712,(0x20U),32);
    bufp->fullIData(oldp+713,(0U),32);
    bufp->fullIData(oldp+714,(4U),32);
    bufp->fullIData(oldp+715,(0x18U),32);
    bufp->fullIData(oldp+716,(0x10U),32);
    bufp->fullIData(oldp+717,(0x80U),32);
    bufp->fullCData(oldp+718,(1U),3);
    bufp->fullCData(oldp+719,(3U),3);
    bufp->fullCData(oldp+720,(5U),3);
    bufp->fullCData(oldp+721,(6U),3);
    bufp->fullCData(oldp+722,(7U),3);
}
