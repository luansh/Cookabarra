/*-------------------------------------------------------------------------
// Module:  gpr
// File:    gpr.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: the general purpose registers
//             (1) provide 2 read ports and 1 write port
//             (2) the gpr was updated at the wb stage
--------------------------------------------------------------------------*/
  `include "defines.v"

  module regfile(
    input wire clk_i,
    input wire n_rst_i,

    input wire rd_we_i,     // write enable
    input wire[`RegAddrBus] rd_wa_i,   // the register to write
    input wire[`RegBus] rd_wd_i,  // the data to write

    input wire rs1_re_i,     // read enable
    input wire[`RegAddrBus] rs1_ra_i,  // the register to read
    output reg[`RegBus] rs1_rd_o,  // the output for the reading

    input wire rs2_re_i,
    input wire[`RegAddrBus] rs2_ra_i,
    output reg[`RegBus] rs2_rd_o);

    reg[`RegBus] regs[0:`RegNum-1];

  //id阶段的读取使用组合逻辑？
  //wb阶段的写入使用时序逻辑？
    /* handle the write request */
    always @ (posedge clk_i)
      if (n_rst_i == `RstDisable)
      begin
      //gpr[0]不可写
        if((rd_we_i == `WriteEnable) && (rd_wa_i != `RegNumLog2'd0)) regs[rd_wa_i] <= rd_wd_i;

          /*used for ISA test */
          /*
          if(regs[26] == 32'b1 && regs[27] == 32'b1) begin
              $display("test passed!");
              $finish();
          end
          */
      end

	/* handle the read request on read port1 */
    always @ (*)
      if(n_rst_i == `RstEnable) rs1_rd_o = `ZeroWord;
      else if(rs1_ra_i == `RegNumLog2'd0) rs1_rd_o = `ZeroWord;
    //Forward 将rd_wd_i 的值，直接传递给rs1_rd_o
    //rs1_ra_i来自id阶段，rd_wa_i 来自wb阶段
    //由于ex/lsu阶段会修改（计算）rd寄存器的值，这2 阶段不适合将rd Forwrd至rs1/2/
      else if((rs1_ra_i == rd_wa_i) && (rd_we_i == `WriteEnable) && (rs1_re_i == `ReadEnable)) rs1_rd_o = rd_wd_i;
      else if(rs1_re_i == `ReadEnable) rs1_rd_o = regs[rs1_ra_i];
      else rs1_rd_o = `ZeroWord;

    /* handle the read request on read port2 */
    always @ (*)
      if(n_rst_i == `RstEnable) rs2_rd_o = `ZeroWord;
      else if(rs2_ra_i == `RegNumLog2'd0) rs2_rd_o = `ZeroWord;
      else if((rs2_ra_i == rd_wa_i) && (rd_we_i == `WriteEnable) && (rs2_re_i == `ReadEnable)) rs2_rd_o = rd_wd_i;
      else if(rs2_re_i == `ReadEnable) rs2_rd_o = regs[rs2_ra_i];
      else rs2_rd_o = `ZeroWord;
endmodule