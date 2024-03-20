//产生取指的PC值
  `include "defines.v"

  module ifu(
    input ck_i,
    input rs_n_i,
  //CTL -> IF
    input[5:0] stall_i,
    input flush_i,
    input[`INS_BUS_A] new_pc_i,
  //BP -> IF: 条件跳转指令
    input reg[`INS_BUS_A] next_pc_i,//BP预测的下一个PC
    input reg next_taken_i, //下一个PC是否为发生分支后的结果
  //EX -> IF: 绝对跳转指令
    input branch_redirect_i,
    input[`INS_BUS_A] branch_redirect_pc_i,

    /* ------- signals to inst_rom and decode unit --------*/
    output reg[`INS_BUS_A] pc_o, // the pc, to the inst_rom and decode module
    output reg ce_o,  // to inst_rom

    /* ---stall the pipeline, waiting for the rom to response with instruction ----*/
    output wire stall_req_o,
  //IF -> EX: 来自BP的预测信息，输出至EX进行校验，产生重定向修正
    output reg[`INS_BUS_A] next_pc_o,
    output reg next_taken_o,
    /*-----if miss predicted, redirected pc to branch target started from here*/
  //分支预测失败，重定向分支，原分支槽结束
    output reg branch_slot_end_o);

    // if the rom can not response in the same cycle, need to set the stall_req_o
    assign stall_req_o = 1'b0;
    assign next_pc_o = next_pc_i;
    assign next_taken_o = next_taken_i;

    always @ (posedge ck_i)
      ce_o <= (rs_n_i == `RST_EN) ? `CHIP_DISABLE : `CHIP_ENABLE;

    always @ (posedge ck_i)
      if (ce_o == `CHIP_DISABLE) {pc_o, branch_slot_end_o} <= {`REBOOT_A, 1'b0};
      else
      //跳转至中断（异常）处理函数，或者（中断）异常处理完毕，返回之前的执行点
        if (flush_i) {pc_o, branch_slot_end_o} <= {new_pc_i, 1'b0};
        else if (stall_i[0] == `NO_STOP)
        //分支预测错误，读取重定向的正确地址？
          if (branch_redirect_i == `Branch) {pc_o, branch_slot_end_o} <= {branch_redirect_pc_i, 1'b1};
        //分支预测正确，使用当前PC即可
          else {pc_o, branch_slot_end_o} <= {new_pc_i, 1'b0};
      //IF暂停，PC保持不变
        else {pc_o, branch_slot_end_o} <= {pc_o, 1'b0};

  endmodule