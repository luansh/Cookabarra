// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimple_system.h"
#include "Vsimple_system__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vsimple_system::Vsimple_system(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimple_system__Syms(contextp(), _vcname__, this)}
    , ck_i{vlSymsp->TOP.ck_i}
    , rs_n_i{vlSymsp->TOP.rs_n_i}
    , jtag_TCK{vlSymsp->TOP.jtag_TCK}
    , jtag_TMS{vlSymsp->TOP.jtag_TMS}
    , jtag_TDI{vlSymsp->TOP.jtag_TDI}
    , jtag_TDO{vlSymsp->TOP.jtag_TDO}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsimple_system::Vsimple_system(const char* _vcname__)
    : Vsimple_system(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimple_system::~Vsimple_system() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimple_system___024root___eval_debug_assertions(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_system___024root___eval_static(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___eval_initial(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___eval_settle(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___eval(Vsimple_system___024root* vlSelf);

void Vsimple_system::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimple_system::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimple_system___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimple_system___024root___eval_static(&(vlSymsp->TOP));
        Vsimple_system___024root___eval_initial(&(vlSymsp->TOP));
        Vsimple_system___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimple_system___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimple_system::eventsPending() { return false; }

uint64_t Vsimple_system::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsimple_system::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsimple_system___024root___eval_final(Vsimple_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple_system::final() {
    Vsimple_system___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimple_system::hierName() const { return vlSymsp->name(); }
const char* Vsimple_system::modelName() const { return "Vsimple_system"; }
unsigned Vsimple_system::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsimple_system::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimple_system___024root__trace_init_top(Vsimple_system___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_system___024root*>(voidSelf);
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsimple_system___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsimple_system___024root__trace_register(Vsimple_system___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsimple_system::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimple_system::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimple_system___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
