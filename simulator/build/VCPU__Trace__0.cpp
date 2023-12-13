// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j),32);
        bufp->chgIData(oldp+1,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j),32);
        bufp->chgIData(oldp+2,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i),32);
        bufp->chgIData(oldp+8,(vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+9,(vlSelf->CPU__DOT__i_rready));
        bufp->chgBit(oldp+10,(vlSelf->CPU__DOT__i_rlast));
        bufp->chgBit(oldp+11,(vlSelf->CPU__DOT__d_rready));
        bufp->chgBit(oldp+12,(vlSelf->CPU__DOT__d_rlast));
        bufp->chgBit(oldp+13,(vlSelf->CPU__DOT__d_wready));
        bufp->chgBit(oldp+14,(vlSelf->CPU__DOT__d_bvalid));
        bufp->chgBit(oldp+15,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en));
        bufp->chgCData(oldp+16,(((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                  ? ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                      ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)
                                          ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                              ? ((0U 
                                                  == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt))
                                                  ? 0U
                                                  : 1U)
                                              : 0U)
                                          : 3U) : 3U)
                                  : ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                      ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                          ? 3U : (((IData)(vlSelf->CPU__DOT__d_rready) 
                                                   & (IData)(vlSelf->CPU__DOT__d_rlast))
                                                   ? 
                                                  ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                                    ? 3U
                                                    : 2U)
                                                   : 1U))
                                      : (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                                          | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))
                                          ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__allign_error)
                                              ? 0U : 
                                             ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                               ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe)
                                                   ? 3U
                                                   : 1U)
                                               : ((0U 
                                                   != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))
                                                   ? 0U
                                                   : 1U)))
                                          : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                              ? 1U : 0U))))),2);
        bufp->chgCData(oldp+17,(((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                  ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en)
                                      ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                          ? ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe))
                                              ? 1U : 2U)
                                          : ((1U & 
                                              (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                               [(1U 
                                                 & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                     ? 
                                                    ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                                     >> 4U)
                                                     : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                               >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))
                                              ? 1U : 2U))
                                      : 0U) : ((1U 
                                                == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                                ? ((IData)(vlSelf->CPU__DOT__d_bvalid)
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                                    ? 
                                                   ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset)
                                                     ? 0U
                                                     : 2U)
                                                    : 0U)))),2);
        bufp->chgCData(oldp+18,(((0U == (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state))
                                  ? ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe)
                                      ? ((0U == (3U 
                                                 & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe))
                                          ? ((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))
                                              ? 0U : 1U)
                                          : 0U) : 0U)
                                  : ((1U == (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state))
                                      ? (((IData)(vlSelf->CPU__DOT__i_rready) 
                                          & (IData)(vlSelf->CPU__DOT__i_rlast))
                                          ? 2U : 1U)
                                      : 0U))),2);
        bufp->chgCData(oldp+19,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt),3);
        bufp->chgCData(oldp+20,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+21,(vlSelf->CPU__DOT__PC_inst__DOT__pc_reg),32);
        bufp->chgIData(oldp+22,(vlSelf->CPU__DOT__pc_if2),32);
        bufp->chgIData(oldp+23,(vlSelf->CPU__DOT__pc_id),32);
        bufp->chgIData(oldp+24,(vlSelf->CPU__DOT__pc_ex),32);
        bufp->chgIData(oldp+25,(vlSelf->CPU__DOT__pc_ls),32);
        bufp->chgIData(oldp+26,(vlSelf->CPU__DOT__pc_wb),32);
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
        bufp->chgIData(oldp+27,((((IData)(vlSelf->CPU__DOT__pc_set) 
                                  | ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf) 
                                     | (0U != (3U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe))))
                                  ? 0x13U : ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem)
                                              ? __Vtemp_h38679573__0[0U]
                                              : __Vtemp_h1c51f178__0[0U]))),32);
        bufp->chgIData(oldp+28,(vlSelf->CPU__DOT__inst_id),32);
        bufp->chgIData(oldp+29,(vlSelf->CPU__DOT__inst_ex),32);
        bufp->chgIData(oldp+30,(vlSelf->CPU__DOT__inst_ls),32);
        bufp->chgIData(oldp+31,(vlSelf->CPU__DOT__inst_wb),32);
        bufp->chgIData(oldp+32,(vlSelf->CPU__DOT__pc_target),32);
        bufp->chgIData(oldp+33,(((IData)(vlSelf->CPU__DOT__pc_set)
                                  ? vlSelf->CPU__DOT__pc_target
                                  : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg))),32);
        bufp->chgIData(oldp+34,(vlSelf->CPU__DOT__imm_id),32);
        bufp->chgIData(oldp+35,(vlSelf->CPU__DOT__imm_ex),32);
        bufp->chgIData(oldp+36,(vlSelf->CPU__DOT__rf_wdata_wb),32);
        bufp->chgIData(oldp+37,(((0x300U == (vlSelf->CPU__DOT__inst_id 
                                             >> 0x14U))
                                  ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                                  : ((0x305U == (vlSelf->CPU__DOT__inst_id 
                                                 >> 0x14U))
                                      ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                      : ((0x342U == 
                                          (vlSelf->CPU__DOT__inst_id 
                                           >> 0x14U))
                                          ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                          : ((0x341U 
                                              == (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U))
                                              ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                              : 0U))))),32);
        bufp->chgIData(oldp+38,(vlSelf->CPU__DOT__csr_rdata_ex),32);
        bufp->chgIData(oldp+39,(((0x4000U & vlSelf->CPU__DOT__inst_ex)
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
                                          ? (0x1fU 
                                             & (vlSelf->CPU__DOT__inst_ex 
                                                >> 0xfU))
                                          : 0U)) : 
                                 ((0x2000U & vlSelf->CPU__DOT__inst_ex)
                                   ? ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (vlSelf->CPU__DOT__csr_rdata_ex 
                                          & (~ vlSelf->CPU__DOT__alu_rf_data1))
                                       : (vlSelf->CPU__DOT__csr_rdata_ex 
                                          | vlSelf->CPU__DOT__alu_rf_data1))
                                   : ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? vlSelf->CPU__DOT__alu_rf_data1
                                       : 0U)))),32);
        bufp->chgIData(oldp+40,(vlSelf->CPU__DOT__csr_wdata_ls),32);
        bufp->chgIData(oldp+41,(vlSelf->CPU__DOT__csr_wdata_wb),32);
        bufp->chgIData(oldp+42,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                                  & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                               >> 0xfU)) 
                                     == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                                  >> 7U))))
                                  ? vlSelf->CPU__DOT__rf_wdata_wb
                                  : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+43,(vlSelf->CPU__DOT__rf_rdata1_ex),32);
        bufp->chgIData(oldp+44,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                                  & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                               >> 0x14U)) 
                                     == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                                  >> 7U))))
                                  ? vlSelf->CPU__DOT__rf_wdata_wb
                                  : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+45,(vlSelf->CPU__DOT__rf_rdata2_ex),32);
        bufp->chgIData(oldp+46,(vlSelf->CPU__DOT__forward1_data),32);
        bufp->chgIData(oldp+47,(vlSelf->CPU__DOT__forward2_data),32);
        bufp->chgIData(oldp+48,(vlSelf->CPU__DOT__alu_rf_data1),32);
        bufp->chgIData(oldp+49,(vlSelf->CPU__DOT__alu_rf_data2),32);
        bufp->chgIData(oldp+50,(vlSelf->CPU__DOT__alu_rs1),32);
        bufp->chgIData(oldp+51,(vlSelf->CPU__DOT__alu_rs2),32);
        bufp->chgIData(oldp+52,(vlSelf->CPU__DOT__alu_result_ex),32);
        bufp->chgIData(oldp+53,(vlSelf->CPU__DOT__alu_result_ls),32);
        bufp->chgIData(oldp+54,(vlSelf->CPU__DOT__alu_result_wb),32);
        bufp->chgIData(oldp+55,(vlSelf->CPU__DOT__jump_target),32);
        bufp->chgIData(oldp+56,(((0x10U & (IData)(vlSelf->CPU__DOT__mem_access_ex))
                                  ? ((0U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                      ? (vlSelf->CPU__DOT__alu_rf_data2 
                                         << (0x18U 
                                             & (vlSelf->CPU__DOT__alu_result_ex 
                                                << 3U)))
                                      : ((1U == (7U 
                                                 & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                          ? (vlSelf->CPU__DOT__alu_rf_data2 
                                             << (0x18U 
                                                 & (vlSelf->CPU__DOT__alu_result_ex 
                                                    << 3U)))
                                          : ((2U == 
                                              (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                              ? vlSelf->CPU__DOT__alu_rf_data2
                                              : 0U)))
                                  : 0U)),32);
        bufp->chgIData(oldp+57,(((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
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
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))))),32);
        bufp->chgIData(oldp+58,(vlSelf->CPU__DOT__mem_rdata_wb),32);
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
        bufp->chgIData(oldp+59,(((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__allign_error)
                                  ? 0U : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem)
                                           ? __Vtemp_h9b694aeb__0[0U]
                                           : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                               ? __Vtemp_hd40e0d09__0[0U]
                                               : __Vtemp_h4fc542b6__0[0U])))),32);
        bufp->chgIData(oldp+60,((0xfffffff0U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe)),32);
        bufp->chgIData(oldp+61,(vlSelf->CPU__DOT__d_raddr),32);
        bufp->chgIData(oldp+62,(vlSelf->CPU__DOT__CSR_inst__DOT__mepc),32);
        bufp->chgIData(oldp+63,(vlSelf->CPU__DOT__CSR_inst__DOT__mtvec),32);
        bufp->chgIData(oldp+64,(vlSelf->CPU__DOT__mcause_global),32);
        bufp->chgCData(oldp+65,(vlSelf->CPU__DOT__alu_op_id),5);
        bufp->chgCData(oldp+66,(vlSelf->CPU__DOT__alu_op_ex),5);
        bufp->chgCData(oldp+67,(vlSelf->CPU__DOT__mem_access_id),5);
        bufp->chgCData(oldp+68,(vlSelf->CPU__DOT__mem_access_ex),5);
        bufp->chgCData(oldp+69,(vlSelf->CPU__DOT__mem_access_ls),5);
        bufp->chgCData(oldp+70,(vlSelf->CPU__DOT__br_type_id),5);
        bufp->chgCData(oldp+71,(vlSelf->CPU__DOT__br_type_ex),5);
        bufp->chgBit(oldp+72,(vlSelf->CPU__DOT__priv_vec_if2));
        bufp->chgBit(oldp+73,(vlSelf->CPU__DOT__priv_vec_id_));
        bufp->chgCData(oldp+74,(vlSelf->CPU__DOT__priv_vec_id),7);
        bufp->chgCData(oldp+75,(vlSelf->CPU__DOT__priv_vec_ex),7);
        bufp->chgCData(oldp+76,(vlSelf->CPU__DOT__priv_vec_ls_),7);
        bufp->chgSData(oldp+77,(vlSelf->CPU__DOT__priv_vec_ls),9);
        bufp->chgSData(oldp+78,(vlSelf->CPU__DOT__priv_vec_wb),9);
        bufp->chgBit(oldp+79,((0U == (3U & (vlSelf->CPU__DOT__CSR_inst__DOT__mstatus 
                                            >> 1U)))));
        bufp->chgCData(oldp+80,(vlSelf->CPU__DOT__wstrb_ex),4);
        bufp->chgCData(oldp+81,(vlSelf->CPU__DOT__d_rsize),3);
        bufp->chgCData(oldp+82,(vlSelf->CPU__DOT__alu_rs1_sel_id),2);
        bufp->chgCData(oldp+83,(vlSelf->CPU__DOT__alu_rs1_sel_ex),2);
        bufp->chgCData(oldp+84,(vlSelf->CPU__DOT__alu_rs2_sel_id),2);
        bufp->chgCData(oldp+85,(vlSelf->CPU__DOT__alu_rs2_sel_ex),2);
        bufp->chgBit(oldp+86,(vlSelf->CPU__DOT__wb_rf_sel_id));
        bufp->chgBit(oldp+87,(vlSelf->CPU__DOT__wb_rf_sel_ex));
        bufp->chgBit(oldp+88,(vlSelf->CPU__DOT__wb_rf_sel_ls));
        bufp->chgBit(oldp+89,(vlSelf->CPU__DOT__wb_rf_sel_wb));
        bufp->chgBit(oldp+90,(vlSelf->CPU__DOT__rf_we_id));
        bufp->chgBit(oldp+91,(vlSelf->CPU__DOT__rf_we_ex));
        bufp->chgBit(oldp+92,(vlSelf->CPU__DOT__rf_we_ls));
        bufp->chgBit(oldp+93,(vlSelf->CPU__DOT__rf_we_wb));
        bufp->chgBit(oldp+94,(vlSelf->CPU__DOT__i_rvalid));
        bufp->chgBit(oldp+95,(vlSelf->CPU__DOT__d_rvalid));
        bufp->chgBit(oldp+96,(vlSelf->CPU__DOT__d_wvalid));
        bufp->chgBit(oldp+97,(vlSelf->CPU__DOT__d_wlast));
        bufp->chgBit(oldp+98,(vlSelf->CPU__DOT__d_bready));
        bufp->chgBit(oldp+99,(vlSelf->CPU__DOT__forward1_en));
        bufp->chgBit(oldp+100,(vlSelf->CPU__DOT__forward2_en));
        bufp->chgBit(oldp+101,(vlSelf->CPU__DOT__jump));
        bufp->chgBit(oldp+102,(vlSelf->CPU__DOT__pc_set));
        bufp->chgBit(oldp+103,(vlSelf->CPU__DOT__pc_stall));
        bufp->chgBit(oldp+104,(vlSelf->CPU__DOT__IF2_ID_stall));
        bufp->chgBit(oldp+105,(vlSelf->CPU__DOT__IF2_ID_flush));
        bufp->chgBit(oldp+106,(vlSelf->CPU__DOT__dcache_miss));
        bufp->chgBit(oldp+107,(vlSelf->CPU__DOT__ID_EX_flush));
        bufp->chgBit(oldp+108,((0U != vlSelf->CPU__DOT__mcause_global)));
        bufp->chgBit(oldp+109,(vlSelf->CPU__DOT__icache_miss));
        bufp->chgBit(oldp+110,(vlSelf->CPU__DOT__commit_if2));
        bufp->chgBit(oldp+111,(vlSelf->CPU__DOT__commit_id));
        bufp->chgBit(oldp+112,(vlSelf->CPU__DOT__commit_ex));
        bufp->chgBit(oldp+113,(vlSelf->CPU__DOT__commit_ls));
        bufp->chgQData(oldp+114,(vlSelf->CPU__DOT__ALU_inst__DOT__result_64),64);
        bufp->chgIData(oldp+116,(vlSelf->CPU__DOT__ALU_inst__DOT__result_div),32);
        bufp->chgIData(oldp+117,(vlSelf->CPU__DOT__ALU_inst__DOT__result_rem),32);
        bufp->chgCData(oldp+118,((((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0) 
                                   << 1U) | (vlSelf->CPU__DOT__alu_rs1 
                                             >> 0x1fU))),2);
        bufp->chgIData(oldp+119,(vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs),32);
        bufp->chgIData(oldp+120,(vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs),32);
        bufp->chgBit(oldp+121,((IData)((0x10U == (0x18U 
                                                  & (IData)(vlSelf->CPU__DOT__br_type_ex))))));
        bufp->chgBit(oldp+122,(((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0) 
                                & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                   >> 2U))));
        bufp->chgBit(oldp+123,(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr));
        bufp->chgSData(oldp+124,((vlSelf->CPU__DOT__inst_id 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+125,((vlSelf->CPU__DOT__inst_wb 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+126,((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))));
        bufp->chgBit(oldp+127,(vlSelf->CPU__DOT__CSR_inst__DOT__we));
        bufp->chgIData(oldp+128,(vlSelf->CPU__DOT__CSR_inst__DOT__mstatus),32);
        bufp->chgIData(oldp+129,(vlSelf->CPU__DOT__CSR_inst__DOT__mcause),32);
        bufp->chgCData(oldp+130,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ls))),3);
        bufp->chgIData(oldp+131,(vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data),32);
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                      >> 4U))));
        bufp->chgCData(oldp+133,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ex))),3);
        bufp->chgBit(oldp+134,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                      >> 3U))));
        bufp->chgBit(oldp+135,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                      >> 3U))));
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                      >> 4U))));
        bufp->chgBit(oldp+137,(vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we));
        bufp->chgIData(oldp+138,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe),32);
        bufp->chgIData(oldp+139,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe),32);
        bufp->chgCData(oldp+140,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe),4);
        bufp->chgCData(oldp+141,(vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe),3);
        bufp->chgBit(oldp+142,(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe));
        bufp->chgBit(oldp+143,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush));
        bufp->chgBit(oldp+144,(vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe));
        bufp->chgBit(oldp+145,(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe));
        bufp->chgBit(oldp+146,(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe));
        bufp->chgWData(oldp+147,(vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf),128);
        bufp->chgCData(oldp+151,(vlSelf->CPU__DOT__DCache_inst__DOT__r_index),4);
        bufp->chgCData(oldp+152,(vlSelf->CPU__DOT__DCache_inst__DOT__w_index),4);
        bufp->chgSData(oldp+153,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[0]),16);
        bufp->chgSData(oldp+154,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[1]),16);
        bufp->chgWData(oldp+155,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0]),128);
        bufp->chgWData(oldp+159,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1]),128);
        bufp->chgWData(oldp+163,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata),128);
        bufp->chgCData(oldp+167,(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we),2);
        bufp->chgIData(oldp+168,((vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                  >> 8U)),24);
        bufp->chgIData(oldp+169,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[0]),24);
        bufp->chgIData(oldp+170,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[1]),24);
        bufp->chgSData(oldp+171,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[0]),16);
        bufp->chgSData(oldp+172,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[1]),16);
        bufp->chgBit(oldp+173,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[0]));
        bufp->chgBit(oldp+174,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[1]));
        bufp->chgCData(oldp+175,(vlSelf->CPU__DOT__DCache_inst__DOT__hit),2);
        bufp->chgBit(oldp+176,((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))));
        bufp->chgBit(oldp+177,((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))));
        bufp->chgWData(oldp+178,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512),128);
        bufp->chgWData(oldp+182,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512),128);
        bufp->chgBit(oldp+186,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe));
        bufp->chgBit(oldp+187,(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem));
        bufp->chgBit(oldp+188,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel));
        bufp->chgBit(oldp+189,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update));
        bufp->chgBit(oldp+190,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update));
        bufp->chgSData(oldp+191,(vlSelf->CPU__DOT__DCache_inst__DOT__lru),16);
        bufp->chgBit(oldp+192,((1U & (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                      [(1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                               ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                                  >> 4U)
                                               : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                      >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))));
        bufp->chgBit(oldp+193,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill));
        bufp->chgBit(oldp+194,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we));
        bufp->chgBit(oldp+195,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all));
        bufp->chgSData(oldp+196,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[0]),16);
        bufp->chgSData(oldp+197,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[1]),16);
        bufp->chgWData(oldp+198,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf),128);
        bufp->chgBit(oldp+202,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we));
        bufp->chgIData(oldp+203,(vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf),32);
        bufp->chgBit(oldp+204,(vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we));
        bufp->chgBit(oldp+205,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en));
        bufp->chgBit(oldp+206,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset));
        bufp->chgBit(oldp+207,(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
        bufp->chgCData(oldp+208,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter),3);
        bufp->chgBit(oldp+209,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset));
        bufp->chgCData(oldp+210,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt),5);
        bufp->chgBit(oldp+211,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add));
        bufp->chgBit(oldp+212,(vlSelf->CPU__DOT__DCache_inst__DOT__uncache));
        bufp->chgBit(oldp+213,(vlSelf->CPU__DOT__DCache_inst__DOT__allign_error));
        bufp->chgBit(oldp+214,(vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt));
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
        bufp->chgWData(oldp+215,(__Vtemp_h495dcf24__0),128);
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
        bufp->chgWData(oldp+219,(__Vtemp_hf2137323__0),128);
        bufp->chgCData(oldp+223,(vlSelf->CPU__DOT__DCache_inst__DOT__state),2);
        bufp->chgCData(oldp+224,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state),2);
        bufp->chgCData(oldp+225,(((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                   ? 0U : 3U)),3);
        bufp->chgSData(oldp+226,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                                 [0U]),16);
        __Vtemp_h47c5a587__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][0U];
        __Vtemp_h47c5a587__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][1U];
        __Vtemp_h47c5a587__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][2U];
        __Vtemp_h47c5a587__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][3U];
        bufp->chgWData(oldp+227,(__Vtemp_h47c5a587__0),128);
        bufp->chgCData(oldp+231,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r),4);
        bufp->chgWData(oldp+232,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0]),128);
        bufp->chgWData(oldp+236,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1]),128);
        bufp->chgWData(oldp+240,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2]),128);
        bufp->chgWData(oldp+244,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3]),128);
        bufp->chgWData(oldp+248,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4]),128);
        bufp->chgWData(oldp+252,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5]),128);
        bufp->chgWData(oldp+256,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6]),128);
        bufp->chgWData(oldp+260,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7]),128);
        bufp->chgWData(oldp+264,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8]),128);
        bufp->chgWData(oldp+268,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9]),128);
        bufp->chgWData(oldp+272,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[10]),128);
        bufp->chgWData(oldp+276,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[11]),128);
        bufp->chgWData(oldp+280,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[12]),128);
        bufp->chgWData(oldp+284,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[13]),128);
        bufp->chgWData(oldp+288,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[14]),128);
        bufp->chgWData(oldp+292,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[15]),128);
        bufp->chgSData(oldp+296,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                                 [1U]),16);
        __Vtemp_h5ce51087__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][0U];
        __Vtemp_h5ce51087__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][1U];
        __Vtemp_h5ce51087__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][2U];
        __Vtemp_h5ce51087__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][3U];
        bufp->chgWData(oldp+297,(__Vtemp_h5ce51087__0),128);
        bufp->chgCData(oldp+301,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r),4);
        bufp->chgWData(oldp+302,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0]),128);
        bufp->chgWData(oldp+306,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1]),128);
        bufp->chgWData(oldp+310,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2]),128);
        bufp->chgWData(oldp+314,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3]),128);
        bufp->chgWData(oldp+318,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4]),128);
        bufp->chgWData(oldp+322,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5]),128);
        bufp->chgWData(oldp+326,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6]),128);
        bufp->chgWData(oldp+330,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7]),128);
        bufp->chgWData(oldp+334,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8]),128);
        bufp->chgWData(oldp+338,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9]),128);
        bufp->chgWData(oldp+342,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[10]),128);
        bufp->chgWData(oldp+346,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[11]),128);
        bufp->chgWData(oldp+350,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[12]),128);
        bufp->chgWData(oldp+354,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[13]),128);
        bufp->chgWData(oldp+358,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[14]),128);
        bufp->chgWData(oldp+362,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[15]),128);
        bufp->chgBit(oldp+366,((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))));
        bufp->chgIData(oldp+367,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
                                 [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r]),24);
        bufp->chgCData(oldp+368,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r),4);
        bufp->chgIData(oldp+369,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0]),24);
        bufp->chgIData(oldp+370,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[1]),24);
        bufp->chgIData(oldp+371,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[2]),24);
        bufp->chgIData(oldp+372,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[3]),24);
        bufp->chgIData(oldp+373,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[4]),24);
        bufp->chgIData(oldp+374,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[5]),24);
        bufp->chgIData(oldp+375,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[6]),24);
        bufp->chgIData(oldp+376,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[7]),24);
        bufp->chgIData(oldp+377,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[8]),24);
        bufp->chgIData(oldp+378,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[9]),24);
        bufp->chgIData(oldp+379,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[10]),24);
        bufp->chgIData(oldp+380,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[11]),24);
        bufp->chgIData(oldp+381,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[12]),24);
        bufp->chgIData(oldp+382,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[13]),24);
        bufp->chgIData(oldp+383,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[14]),24);
        bufp->chgIData(oldp+384,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[15]),24);
        bufp->chgBit(oldp+385,((1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we) 
                                      >> 1U))));
        bufp->chgIData(oldp+386,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
                                 [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r]),24);
        bufp->chgCData(oldp+387,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r),4);
        bufp->chgIData(oldp+388,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0]),24);
        bufp->chgIData(oldp+389,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[1]),24);
        bufp->chgIData(oldp+390,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[2]),24);
        bufp->chgIData(oldp+391,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[3]),24);
        bufp->chgIData(oldp+392,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[4]),24);
        bufp->chgIData(oldp+393,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[5]),24);
        bufp->chgIData(oldp+394,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[6]),24);
        bufp->chgIData(oldp+395,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[7]),24);
        bufp->chgIData(oldp+396,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[8]),24);
        bufp->chgIData(oldp+397,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[9]),24);
        bufp->chgIData(oldp+398,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[10]),24);
        bufp->chgIData(oldp+399,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[11]),24);
        bufp->chgIData(oldp+400,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[12]),24);
        bufp->chgIData(oldp+401,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[13]),24);
        bufp->chgIData(oldp+402,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[14]),24);
        bufp->chgIData(oldp+403,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[15]),24);
        bufp->chgBit(oldp+404,(vlSelf->CPU__DOT__Decode_inst__DOT__is_not_common_ir));
        bufp->chgCData(oldp+405,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                           >> 7U))),5);
        bufp->chgCData(oldp+406,((7U & (vlSelf->CPU__DOT__inst_id 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+407,((1U & ((0x73U == (0x7fU 
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
                                       : (~ ((0xfU 
                                              == (0x7fU 
                                                  & vlSelf->CPU__DOT__inst_id)) 
                                             & (0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 0xdU)))))))));
        bufp->chgCData(oldp+408,((0x1fU & (vlSelf->CPU__DOT__inst_ls 
                                           >> 7U))),5);
        bufp->chgCData(oldp+409,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                           >> 7U))),5);
        bufp->chgCData(oldp+410,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+411,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+412,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 7U))),5);
        bufp->chgCData(oldp+413,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+414,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+415,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use));
        bufp->chgBit(oldp+416,(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use));
        bufp->chgBit(oldp+417,((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
        bufp->chgIData(oldp+418,(vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe),32);
        bufp->chgBit(oldp+419,(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe));
        bufp->chgBit(oldp+420,(vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we));
        bufp->chgWData(oldp+421,(vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf),128);
        bufp->chgCData(oldp+425,(vlSelf->CPU__DOT__ICache_inst__DOT__r_index),4);
        bufp->chgCData(oldp+426,((0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                          >> 4U))),4);
        bufp->chgCData(oldp+427,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we),2);
        bufp->chgWData(oldp+428,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0]),128);
        bufp->chgWData(oldp+432,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1]),128);
        bufp->chgCData(oldp+436,(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we),2);
        bufp->chgIData(oldp+437,((vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                  >> 8U)),24);
        bufp->chgIData(oldp+438,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0]),25);
        bufp->chgIData(oldp+439,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1]),25);
        bufp->chgSData(oldp+440,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[0]),16);
        bufp->chgSData(oldp+441,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[1]),16);
        bufp->chgCData(oldp+442,(vlSelf->CPU__DOT__ICache_inst__DOT__hit),2);
        bufp->chgBit(oldp+443,((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))));
        bufp->chgBit(oldp+444,((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))));
        bufp->chgBit(oldp+445,((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h3ff16b76__0)))));
        bufp->chgBit(oldp+446,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update));
        bufp->chgBit(oldp+447,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update));
        bufp->chgBit(oldp+448,(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem));
        bufp->chgBit(oldp+449,(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf));
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
        bufp->chgWData(oldp+450,(__Vtemp_h1ef5202c__0),128);
        VL_SHIFTR_WWI(128,128,7, __Vtemp_h1c51f178__1, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                      (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                << 3U)));
        bufp->chgWData(oldp+454,(__Vtemp_h1c51f178__1),128);
        bufp->chgSData(oldp+458,(vlSelf->CPU__DOT__ICache_inst__DOT__lru),16);
        bufp->chgCData(oldp+459,(vlSelf->CPU__DOT__ICache_inst__DOT__state),2);
        bufp->chgBit(oldp+460,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we))));
        __Vtemp_h3ba5ccd0__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][0U];
        __Vtemp_h3ba5ccd0__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][1U];
        __Vtemp_h3ba5ccd0__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][2U];
        __Vtemp_h3ba5ccd0__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][3U];
        bufp->chgWData(oldp+461,(__Vtemp_h3ba5ccd0__0),128);
        bufp->chgCData(oldp+465,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r),4);
        bufp->chgWData(oldp+466,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0]),128);
        bufp->chgWData(oldp+470,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1]),128);
        bufp->chgWData(oldp+474,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2]),128);
        bufp->chgWData(oldp+478,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3]),128);
        bufp->chgWData(oldp+482,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4]),128);
        bufp->chgWData(oldp+486,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5]),128);
        bufp->chgWData(oldp+490,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6]),128);
        bufp->chgWData(oldp+494,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7]),128);
        bufp->chgWData(oldp+498,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8]),128);
        bufp->chgWData(oldp+502,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9]),128);
        bufp->chgWData(oldp+506,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[10]),128);
        bufp->chgWData(oldp+510,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[11]),128);
        bufp->chgWData(oldp+514,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[12]),128);
        bufp->chgWData(oldp+518,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[13]),128);
        bufp->chgWData(oldp+522,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[14]),128);
        bufp->chgWData(oldp+526,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[15]),128);
        bufp->chgBit(oldp+530,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we) 
                                      >> 1U))));
        __Vtemp_he624d3e8__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][0U];
        __Vtemp_he624d3e8__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][1U];
        __Vtemp_he624d3e8__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][2U];
        __Vtemp_he624d3e8__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
            [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][3U];
        bufp->chgWData(oldp+531,(__Vtemp_he624d3e8__0),128);
        bufp->chgCData(oldp+535,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r),4);
        bufp->chgWData(oldp+536,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0]),128);
        bufp->chgWData(oldp+540,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1]),128);
        bufp->chgWData(oldp+544,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2]),128);
        bufp->chgWData(oldp+548,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3]),128);
        bufp->chgWData(oldp+552,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4]),128);
        bufp->chgWData(oldp+556,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5]),128);
        bufp->chgWData(oldp+560,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6]),128);
        bufp->chgWData(oldp+564,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7]),128);
        bufp->chgWData(oldp+568,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8]),128);
        bufp->chgWData(oldp+572,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9]),128);
        bufp->chgWData(oldp+576,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[10]),128);
        bufp->chgWData(oldp+580,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[11]),128);
        bufp->chgWData(oldp+584,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[12]),128);
        bufp->chgWData(oldp+588,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[13]),128);
        bufp->chgWData(oldp+592,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[14]),128);
        bufp->chgWData(oldp+596,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[15]),128);
        bufp->chgBit(oldp+600,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))));
        bufp->chgIData(oldp+601,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram
                                 [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r]),24);
        bufp->chgCData(oldp+602,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r),4);
        bufp->chgIData(oldp+603,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0]),24);
        bufp->chgIData(oldp+604,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[1]),24);
        bufp->chgIData(oldp+605,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[2]),24);
        bufp->chgIData(oldp+606,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[3]),24);
        bufp->chgIData(oldp+607,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[4]),24);
        bufp->chgIData(oldp+608,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[5]),24);
        bufp->chgIData(oldp+609,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[6]),24);
        bufp->chgIData(oldp+610,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[7]),24);
        bufp->chgIData(oldp+611,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[8]),24);
        bufp->chgIData(oldp+612,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[9]),24);
        bufp->chgIData(oldp+613,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[10]),24);
        bufp->chgIData(oldp+614,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[11]),24);
        bufp->chgIData(oldp+615,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[12]),24);
        bufp->chgIData(oldp+616,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[13]),24);
        bufp->chgIData(oldp+617,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[14]),24);
        bufp->chgIData(oldp+618,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[15]),24);
        bufp->chgBit(oldp+619,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we) 
                                      >> 1U))));
        bufp->chgIData(oldp+620,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram
                                 [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r]),24);
        bufp->chgCData(oldp+621,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r),4);
        bufp->chgIData(oldp+622,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0]),24);
        bufp->chgIData(oldp+623,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[1]),24);
        bufp->chgIData(oldp+624,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[2]),24);
        bufp->chgIData(oldp+625,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[3]),24);
        bufp->chgIData(oldp+626,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[4]),24);
        bufp->chgIData(oldp+627,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[5]),24);
        bufp->chgIData(oldp+628,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[6]),24);
        bufp->chgIData(oldp+629,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[7]),24);
        bufp->chgIData(oldp+630,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[8]),24);
        bufp->chgIData(oldp+631,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[9]),24);
        bufp->chgIData(oldp+632,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[10]),24);
        bufp->chgIData(oldp+633,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[11]),24);
        bufp->chgIData(oldp+634,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[12]),24);
        bufp->chgIData(oldp+635,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[13]),24);
        bufp->chgIData(oldp+636,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[14]),24);
        bufp->chgIData(oldp+637,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[15]),24);
        bufp->chgCData(oldp+638,((7U & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+639,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 0xfU))),32);
        bufp->chgIData(oldp+640,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0]),32);
        bufp->chgIData(oldp+641,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1]),32);
        bufp->chgIData(oldp+642,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2]),32);
        bufp->chgIData(oldp+643,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3]),32);
        bufp->chgIData(oldp+644,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4]),32);
        bufp->chgIData(oldp+645,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5]),32);
        bufp->chgIData(oldp+646,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6]),32);
        bufp->chgIData(oldp+647,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7]),32);
        bufp->chgIData(oldp+648,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8]),32);
        bufp->chgIData(oldp+649,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9]),32);
        bufp->chgIData(oldp+650,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[10]),32);
        bufp->chgIData(oldp+651,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[11]),32);
        bufp->chgIData(oldp+652,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[12]),32);
        bufp->chgIData(oldp+653,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[13]),32);
        bufp->chgIData(oldp+654,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[14]),32);
        bufp->chgIData(oldp+655,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[15]),32);
        bufp->chgIData(oldp+656,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[16]),32);
        bufp->chgIData(oldp+657,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[17]),32);
        bufp->chgIData(oldp+658,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[18]),32);
        bufp->chgIData(oldp+659,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[19]),32);
        bufp->chgIData(oldp+660,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[20]),32);
        bufp->chgIData(oldp+661,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[21]),32);
        bufp->chgIData(oldp+662,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[22]),32);
        bufp->chgIData(oldp+663,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[23]),32);
        bufp->chgIData(oldp+664,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[24]),32);
        bufp->chgIData(oldp+665,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[25]),32);
        bufp->chgIData(oldp+666,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[26]),32);
        bufp->chgIData(oldp+667,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[27]),32);
        bufp->chgIData(oldp+668,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[28]),32);
        bufp->chgIData(oldp+669,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[29]),32);
        bufp->chgIData(oldp+670,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[30]),32);
        bufp->chgIData(oldp+671,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[31]),32);
        bufp->chgBit(oldp+672,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                      >> 3U))));
        bufp->chgCData(oldp+673,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt),3);
        bufp->chgCData(oldp+674,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt),2);
    }
    bufp->chgBit(oldp+675,(vlSelf->clk));
    bufp->chgBit(oldp+676,(vlSelf->rstn));
    bufp->chgIData(oldp+677,(vlSelf->araddr),32);
    bufp->chgBit(oldp+678,(vlSelf->arvalid));
    bufp->chgBit(oldp+679,(vlSelf->arready));
    bufp->chgCData(oldp+680,(vlSelf->arlen),8);
    bufp->chgCData(oldp+681,(vlSelf->arsize),3);
    bufp->chgCData(oldp+682,(vlSelf->arburst),2);
    bufp->chgIData(oldp+683,(vlSelf->rdata),32);
    bufp->chgCData(oldp+684,(vlSelf->rresp),2);
    bufp->chgBit(oldp+685,(vlSelf->rvalid));
    bufp->chgBit(oldp+686,(vlSelf->rready));
    bufp->chgBit(oldp+687,(vlSelf->rlast));
    bufp->chgIData(oldp+688,(vlSelf->awaddr),32);
    bufp->chgBit(oldp+689,(vlSelf->awvalid));
    bufp->chgBit(oldp+690,(vlSelf->awready));
    bufp->chgCData(oldp+691,(vlSelf->awlen),8);
    bufp->chgCData(oldp+692,(vlSelf->awsize),3);
    bufp->chgCData(oldp+693,(vlSelf->awburst),2);
    bufp->chgIData(oldp+694,(vlSelf->wdata),32);
    bufp->chgCData(oldp+695,(vlSelf->wstrb),4);
    bufp->chgBit(oldp+696,(vlSelf->wvalid));
    bufp->chgBit(oldp+697,(vlSelf->wready));
    bufp->chgBit(oldp+698,(vlSelf->wlast));
    bufp->chgCData(oldp+699,(vlSelf->bresp),2);
    bufp->chgBit(oldp+700,(vlSelf->bvalid));
    bufp->chgBit(oldp+701,(vlSelf->bready));
    bufp->chgBit(oldp+702,(vlSelf->commit_wb));
    bufp->chgBit(oldp+703,(vlSelf->uncache_read_wb));
    bufp->chgIData(oldp+704,(vlSelf->inst),32);
    bufp->chgIData(oldp+705,(vlSelf->pc_cur),32);
}

void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_cleanup\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
