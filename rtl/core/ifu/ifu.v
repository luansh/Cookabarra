/*-------------------------------------------------------------------------
// Module:  ifu
// File:  ifu.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: generate the pc for instruction fetching
--------------------------------------------------------------------------*/

  `include "defines.v"

  module ifu(
    input wire clk_i,
    input wire n_rst_i,
  //From CTRL
    input wire[5:0] stall_i,
    input wire flush_i,
    input wire[`INS_BUS_A] new_pc_i,
  //From BP
    input reg[`INS_BUS_A] next_pc_i,//BP预测的下一个PC
    input reg next_taken_i, //下一个PC是否为发生分支后的结果
  //From EX
    input wire branch_redirect_i,   //miss predicted, need to redirect the pc
    input wire[`INS_BUS_A] branch_redirect_pc_i,

    /* ------- signals to inst_rom and decode unit --------*/
    output reg[`INS_BUS_A] pc_o, // the pc, to the inst_rom and decode module
    output reg ce_o,  // to inst_rom

    /* ---stall the pipeline, waiting for the rom to response with instruction ----*/
    output wire stall_req_o,

    /*-----the prediction info to exe unit---------------*/
    output reg[`INS_BUS_A] next_pc_o,   // next pc predicted by bp
    output reg next_taken_o,

    /*-----if miss predicted, redirected pc to branch target started from here*/
    output reg branch_slot_end_o);

    // if the rom can not response in the same cycle, need to set the stall_req_o
    assign  stall_req_o = 0;
    assign  next_pc_o = next_pc_i;
    assign  next_taken_o = next_taken_i;

    always @ (posedge clk_i or negedge n_rst_i) begin
      if (n_rst_i == `RST_EN) begin
        ce_o <= `ChipDisable;
      end else begin
        ce_o <= `ChipEnable;
      end
    end

    always @ (posedge clk_i) begin
      if (ce_o == `ChipDisable) begin  // delay one tap,
        pc_o <= `REBOOT_ADDRESS;
        branch_slot_end_o <= 1'b0;
      end
      else begin
        if (flush_i) begin
          pc_o <= new_pc_i;
          branch_slot_end_o <= 1'b0;
        end
        else if (stall_i[0] == `NO_STOP) begin
          if (branch_redirect_i == `Branch) begin
            pc_o <= branch_redirect_pc_i;  // fetch the instruction from the branch target address
            branch_slot_end_o <= 1'b1;
          end else begin
            pc_o <= next_pc_i;    // next line prediction  current_pc
            branch_slot_end_o <= 1'b0;
          end
        end
        else
        begin //IFU 暂停
          // if stall[0] == `STOP，the pc value will be kept
          pc_o <= pc_o;
          branch_slot_end_o <= 1'b0;
        end
      end
    end

  endmodule