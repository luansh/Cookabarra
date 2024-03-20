// Description: fetch instruction from the instruction rom

  `include "defines.v"

  module if_id(
    input ck_i,
    input rs_n_i,
  //From CTRL
    input[5:0] stall_i,
    input flush_i,
  //From IF
    input[`INS_BUS_A] pc_i,
    input[`INS_BUS_A] next_pc_i,
    input next_taken_i,
    input branch_slot_end_i,
  //From Instruct ROM
    input[`INS_BUS_D] ins_i,
  //From EX
    input branch_redirect_i,
  //To ID
    output reg[`INS_BUS_A] pc_o,
    output reg[`INS_BUS_D] ins_o,
    output reg[`INS_BUS_A] next_pc_o,
    output reg next_taken_o,
    output reg branch_slot_end_o);

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) {pc_o, ins_o, branch_slot_end_o} <= {`ZERO_WORD, `NOP_INS, 1'b0};
    //通过分支重定向纠正预测失败？
      else if (branch_redirect_i == 1'b1) {pc_o, ins_o, branch_slot_end_o} <= {pc_i, `NOP_INS, 1'b0};
    //停止取指，ID阶段继续工作
      else if (flush_i == 1'b1) {pc_o, ins_o, branch_slot_end_o} <= {pc_i, `NOP_INS, 1'b0};
    //IF阶段暂停，ID阶段继续
      else if (stall_i[1] == `STOP && stall_i[2] == `NO_STOP) {pc_o, ins_o, branch_slot_end_o} <= {pc_i, `NOP_INS, 1'b0};
    //IF阶段不暂停
      else if (stall_i[1] == `NO_STOP)
      begin
        {pc_o, ins_o, branch_slot_end_o} <= {pc_i, ins_i, branch_slot_end_i};
        {next_pc_o, next_taken_o} <= {next_pc_i, next_taken_i};
      end

  endmodule