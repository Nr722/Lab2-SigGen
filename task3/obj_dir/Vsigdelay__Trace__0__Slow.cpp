// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBit(c+8,"wr", false,-1);
    tracep->declBit(c+9,"rd", false,-1);
    tracep->declBus(c+10,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+11,"offset", false,-1, 7,0);
    tracep->declBit(c+12,"count1", false,-1);
    tracep->declBit(c+13,"count2", false,-1);
    tracep->declBus(c+14,"delayed_signal", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBus(c+15,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBit(c+8,"wr", false,-1);
    tracep->declBit(c+9,"rd", false,-1);
    tracep->declBus(c+10,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+11,"offset", false,-1, 7,0);
    tracep->declBit(c+12,"count1", false,-1);
    tracep->declBit(c+13,"count2", false,-1);
    tracep->declBus(c+14,"delayed_signal", false,-1, 7,0);
    tracep->declBus(c+1,"address1", false,-1, 7,0);
    tracep->declBus(c+2,"address2", false,-1, 7,0);
    tracep->pushNamePrefix("addrCounter ");
    tracep->declBus(c+15,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+11,"offset", false,-1, 7,0);
    tracep->declBus(c+1,"count1", false,-1, 7,0);
    tracep->declBus(c+2,"count2", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRom ");
    tracep->declBus(c+16,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+8,"wr_en", false,-1);
    tracep->declBit(c+9,"rd_en", false,-1);
    tracep->declBus(c+3,"wr_addr", false,-1, 9,0);
    tracep->declBus(c+4,"rd_addr", false,-1, 9,0);
    tracep->declBus(c+10,"din", false,-1, 7,0);
    tracep->declBus(c+14,"dout", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->sigdelay__DOT__address1),8);
    bufp->fullCData(oldp+2,(vlSelf->sigdelay__DOT__address2),8);
    bufp->fullSData(oldp+3,(vlSelf->sigdelay__DOT__address1),10);
    bufp->fullSData(oldp+4,(vlSelf->sigdelay__DOT__address2),10);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst));
    bufp->fullBit(oldp+7,(vlSelf->en));
    bufp->fullBit(oldp+8,(vlSelf->wr));
    bufp->fullBit(oldp+9,(vlSelf->rd));
    bufp->fullCData(oldp+10,(vlSelf->mic_signal),8);
    bufp->fullCData(oldp+11,(vlSelf->offset),8);
    bufp->fullBit(oldp+12,(vlSelf->count1));
    bufp->fullBit(oldp+13,(vlSelf->count2));
    bufp->fullCData(oldp+14,(vlSelf->delayed_signal),8);
    bufp->fullIData(oldp+15,(8U),32);
    bufp->fullIData(oldp+16,(0xaU),32);
}
