//WB阶段，更新 GPR
  `include "defines.v"

  module regfile(
    input ck_i,
    input rs_n_i,

    input rd_we_i,
    input[`REG_BUS_A] rd_wa_i,
    input[`REG_BUS_D] rd_wd_i,

    input rs1_re_i,
    input[`REG_BUS_A] rs1_ra_i,
    output reg[`REG_BUS_D] rs1_rd_o,

    input rs2_re_i,
    input[`REG_BUS_A] rs2_ra_i,
    output reg[`REG_BUS_D] rs2_rd_o);

    reg[`REG_BUS_D] regs[0:`RegNum-1];

  //id阶段的读取使用组合逻辑？
  //wb阶段的写入使用时序逻辑？
    always @ (posedge ck_i)
      if (rs_n_i == `RstDisable)
      //gpr[0]不可写
        if ((rd_we_i == `WRITE_ENABLE) && (rd_wa_i != `REG_NUM_LOG2'd0)) regs[rd_wa_i] <= rd_wd_i;

    always @ (*)
      if (rs_n_i == `RST_EN) rs1_rd_o = `ZERO_WORD;
      else if (rs1_ra_i == `REG_NUM_LOG2'd0) rs1_rd_o = `ZERO_WORD;
    //Forward 将rd_wd_i 的值，直接传递给rs1_rd_o
    //rs1_ra_i来自id阶段，rd_wa_i 来自wb阶段
    //由于EX/LSU阶段会修改（计算）rd寄存器的值，这2 阶段不适合将rd Forwrd至rs1/2/
      else if ((rs1_ra_i == rd_wa_i) && (rd_we_i == `WRITE_ENABLE) && (rs1_re_i == `ReadEnable)) rs1_rd_o = rd_wd_i;
      else if (rs1_re_i == `ReadEnable) rs1_rd_o = regs[rs1_ra_i];
      else rs1_rd_o = `ZERO_WORD;

    always @ (*)
      if (rs_n_i == `RST_EN) rs2_rd_o = `ZERO_WORD;
      else if (rs2_ra_i == `REG_NUM_LOG2'd0) rs2_rd_o = `ZERO_WORD;
      else if ((rs2_ra_i == rd_wa_i) && (rd_we_i == `WRITE_ENABLE) && (rs2_re_i == `ReadEnable)) rs2_rd_o = rd_wd_i;
      else if (rs2_re_i == `ReadEnable) rs2_rd_o = regs[rs2_ra_i];
      else rs2_rd_o = `ZERO_WORD;

  endmodule