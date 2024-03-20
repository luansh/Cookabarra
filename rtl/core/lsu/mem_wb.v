/*-------------------------------------------------------------------------
// Module:  mem_wb
// File:    mem_wb.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: pass the signals from lsu stage to write back stage
--------------------------------------------------------------------------*/
`include "defines.v"

  module mem_wb(
    input ck_i,
    input rs_n_i,

    /*-- signals from contrl module -----*/
    input[5:0] stall_i,
    input flush_i,
  //LSU -> WB
    /*-- signals from mem -----*/
    input rd_we_i,
    input[`REG_BUS_A] rd_wa_i,
    input[`REG_BUS_D] rd_wd_i,

    input csr_we_i,
    input[`REG_BUS_D] csr_wa_i,
    input[`REG_BUS_D] csr_wd_i,

    /*-- signals passed to mem_wb stage -----*/
	//GPR
    output reg rd_we_o,
    output reg[`REG_BUS_A] rd_a_o,
    output reg[`REG_BUS_D] rd_wd_o,

    //CSR
    output reg csr_we_o,
    output reg[`REG_BUS_D] csr_wa_o,
    output reg[`REG_BUS_D] csr_wd_o,

    output reg instret_incr_o
);

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) ||
         ((flush_i == 1'b1) ||    //need to flush the pipeline
         ((stall_i[4] == `STOP) && (stall_i[5] == `NO_STOP)))//stall this stage
      begin
        instret_incr_o <= 1'b0;
      //CSR And GPR
        {csr_we_o, csr_wa_o, csr_wd_o} <= {`WRITE_DISABLE, `ZERO_WORD, `ZERO_WORD};
        {rd_we_o, rd_a_o, rd_wd_o} <= {`WRITE_DISABLE, `NOP_REG_A, `ZERO_WORD};
      end
      else if (stall_i[4] == `NO_STOP)
      begin
            //update the retired instruction counter by adding one
        instret_incr_o  <= 1'b1;
        {csr_we_o, csr_wa_o, csr_wd_o} <= {csr_we_i, csr_wa_i, csr_wd_i};
        {rd_we_o, rd_a_o, rd_wd_o} <= {rd_we_i, rd_wa_i, rd_wd_i};
      end

  endmodule