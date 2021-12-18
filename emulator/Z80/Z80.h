// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_Z80_H_
#define VERILATED_Z80_H_  // guard

#include "verilated.h"

class Z80__Syms;
class Z80___024root;

// This class is the main interface to the Verilated model
class Z80 VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Z80__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_OUT8(&nM1,0,0);
    VL_OUT8(&nMREQ,0,0);
    VL_OUT8(&nIORQ,0,0);
    VL_OUT8(&nRD,0,0);
    VL_OUT8(&nWR,0,0);
    VL_OUT8(&nRFSH,0,0);
    VL_OUT8(&nHALT,0,0);
    VL_OUT8(&nBUSACK,0,0);
    VL_IN8(&nWAIT,0,0);
    VL_IN8(&nINT,0,0);
    VL_IN8(&nNMI,0,0);
    VL_IN8(&nRESET,0,0);
    VL_IN8(&nBUSRQ,0,0);
    VL_INOUT8(&D,7,0);
    VL_OUT16(&A,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Z80___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Z80(VerilatedContext* contextp, const char* name = "TOP");
    explicit Z80(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Z80();
  private:
    VL_UNCOPYABLE(Z80);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
