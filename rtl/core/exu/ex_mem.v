  `include "defines.v"

  module ex_mem(
    input wire clk_i,
    input wire n_rst_i,

  //From Ctrl
    input wire[5:0] stall_i,
    input wire flush_i,
  //From EX
    input wire[`REG_BUS_D] pc_i,
    input reg[`REG_BUS_D] ins_i,

    input wire branch_tag_i,       //this instruction is a branch instr
    input wire branch_slot_end_i,  //fetch unit started from the target inst

    input wire rd_we_i,
    input wire[`REG_BUS_A] rd_wa_i,
    input wire[`REG_BUS_D] rd_wd_i,

    input wire[`AluOpBus] uop_i,
    input wire[`REG_BUS_D] mem_a_i,
    input wire[`REG_BUS_D] mem_wd_i,

    input wire csr_we_i,
    input wire[`REG_BUS_D] csr_wa_i,
    input wire[`REG_BUS_D] csr_wd_i,

    input wire[`REG_BUS_D] exception_i,
  //To LSU
    output reg rd_we_o,
    output reg[`REG_BUS_A] rd_a_o,
    output reg[`REG_BUS_D] rd_wd_o,

    output reg[`AluOpBus] uop_o,
    output reg[`REG_BUS_D] mem_a_o,
    output reg[`REG_BUS_D] mem_wd_o,

    output reg csr_we_o,
    output reg[`REG_BUS_D] csr_wa_o,
    output reg[`REG_BUS_D] csr_wd_o,

    output reg[`REG_BUS_D] exception_o,
    output reg[`REG_BUS_D] pc_o,
    output reg[`REG_BUS_D] ins_o);

    reg branch_tag;
    reg[`REG_BUS_D] branch_pc;

    always @ (posedge clk_i) begin
      if (n_rst_i == `RST_EN) begin
        {rd_a_o, rd_we_o, rd_wd_o} <= {`NOP_REG_A, `WRITE_DISABLE, `ZERO_WORD};
			//CSR
        uop_o <= `UOP_NOP;
        {mem_a_o, mem_wd_o} <= {`ZERO_WORD, `ZERO_WORD};
        {csr_wa_o, csr_we_o, csr_wd_o} <= {`ZERO_WORD, `WRITE_DISABLE, `ZERO_WORD};

        exception_o <= `ZERO_WORD;
        pc_o <= `ZERO_WORD;
        ins_o <= `NOP_INS;

        branch_tag <= 1'b0;
        branch_pc <= `NOP_INS;
        //flush the pipeline
      end
      else if (flush_i == 1'b1 ) begin
            rd_a_o <= `NOP_REG_A;
            rd_we_o <= `WRITE_DISABLE;
            rd_wd_o <= `ZERO_WORD;

            uop_o <= `UOP_NOP;
            mem_a_o <= `ZERO_WORD;
            mem_wd_o <= `ZERO_WORD;

            csr_we_o <= `WRITE_DISABLE;
            csr_wa_o <= `ZERO_WORD;
            csr_wd_o <= `ZERO_WORD;

            exception_o <= `ZERO_WORD;
            pc_o <= `ZERO_WORD;
            ins_o <= `NOP_INS;

            branch_tag <= 1'b0;
            branch_pc <= `NOP_INS;
        // stall current stage
        end else if (stall_i[3] == `Stop && stall_i[4] == `NO_STOP) begin
            rd_a_o <= `NOP_REG_A;
            rd_we_o <= `WRITE_DISABLE;
            rd_wd_o <= `ZERO_WORD;

            uop_o <= `UOP_NOP;
            {mem_a_o, mem_wd_o} <= {`ZERO_WORD, `ZERO_WORD};

            csr_we_o <= `WRITE_DISABLE;
            csr_wa_o <= `ZERO_WORD;
            csr_wd_o <= `ZERO_WORD;

            exception_o <= `ZERO_WORD;
            pc_o <= `ZERO_WORD;
            ins_o <= `NOP_INS;

            branch_tag <= 1'b0;
            branch_pc <= `NOP_INS;
        end
        else if (stall_i[3] == `NO_STOP)
        begin
            {rd_a_o, rd_we_o, rd_wd_o} <= {rd_wa_i, rd_we_i, rd_wd_i};
            uop_o <= uop_i;
            {mem_a_o, mem_wd_o} <= {mem_a_i, mem_wd_i};
            {csr_wa_o, csr_we_o, csr_wd_o} <= {csr_wa_i, csr_we_i, csr_wd_i};
            exception_o <= exception_i;
            // handle the branch instructions
            if (branch_tag_i)
            begin   // branch started
                // note: branch_tag_i and branch_slot_end_i can be true simultaneously
                // for example: while(1) in c
                {branch_tag, branch_pc} <= {1'b1, pc_i};
            end
            else begin
                if (branch_tag && branch_slot_end_i) begin // branch ended
                    branch_tag <= 1'b0;
                end
            end

            pc_o <= branch_tag ? branch_pc : pc_i;
            ins_o <= ins_i;
        end    //if
    end      //always

  endmodule
