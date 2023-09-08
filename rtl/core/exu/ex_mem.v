  `include "defines.v"

  module ex_mem(
    input wire clk_i,
    input wire n_rst_i,

    /* ------- signals from the ctrl unit --------*/
    input wire[5:0] stall_i,
    input wire flush_i,

    /* ------- signals from the exe unit --------*/
    input wire[`RegBus] pc_i,
    input reg[`RegBus] ins_i,

    input wire branch_tag_i,       //this instruction is a branch instr
    input wire branch_slot_end_i,  //fetch unit started from the target inst

    input wire rd_we_i,
    input wire[`RegAddrBus] rd_wa_i,
    input wire[`RegBus] rd_wd_i,

    input wire[`AluOpBus] uop_i,
    input wire[`RegBus] mem_addr_i,
    input wire[`RegBus] mem_wdata_i,

    input wire csr_we_i,
    input wire[`RegBus] csr_waddr_i,
    input wire[`RegBus] csr_wdata_i,

    input wire[`RegBus] exception_i,

    /* ------- signals to the lsu  --------*/
    output reg rd_we_o,
    output reg[`RegAddrBus] rd_a_o,
    output reg[`RegBus] rd_wd_o,

    output reg[`AluOpBus] uop_o,
    output reg[`RegBus] mem_a_o,
    output reg[`RegBus] mem_wd_o,

    output reg csr_we_o,
    output reg[`RegBus] csr_waddr_o,
    output reg[`RegBus] csr_wdata_o,

    output reg[`RegBus] exception_o,
    output reg[`RegBus] pc_o,
    output reg[`RegBus] ins_o

);

    reg branch_tag;
    reg[`RegBus] branch_pc;


    always @ (posedge clk_i) begin
        if(n_rst_i == `RstEnable) begin
            //GPR
            rd_a_o <= `NOPRegAddress;
            rd_we_o <= `WriteDisable;
            rd_wd_o <= `ZeroWord;
			//CSR
            uop_o <= `UOP_CODE_NOP;
            mem_a_o <= `ZeroWord;
            mem_wd_o <= `ZeroWord;
            csr_we_o <= `WriteDisable;
            csr_waddr_o <= `ZeroWord;
            csr_wdata_o <= `ZeroWord;

            exception_o <= `ZeroWord;
            pc_o <= `ZeroWord;
            ins_o <= `NOP_INST;

            branch_tag <= 1'b0;
            branch_pc <= `NOP_INST;
        //flush the pipeline
        end else if(flush_i == 1'b1 ) begin
            rd_a_o <= `NOPRegAddress;
            rd_we_o <= `WriteDisable;
            rd_wd_o <= `ZeroWord;

            uop_o <= `UOP_CODE_NOP;
            mem_a_o <= `ZeroWord;
            mem_wd_o <= `ZeroWord;

            csr_we_o <= `WriteDisable;
            csr_waddr_o <= `ZeroWord;
            csr_wdata_o <= `ZeroWord;

            exception_o <= `ZeroWord;
            pc_o <= `ZeroWord;
            ins_o <= `NOP_INST;

            branch_tag <= 1'b0;
            branch_pc <= `NOP_INST;
        // stall current stage
        end else if(stall_i[3] == `Stop && stall_i[4] == `NoStop) begin
            rd_a_o <= `NOPRegAddress;
            rd_we_o <= `WriteDisable;
            rd_wd_o <= `ZeroWord;

            uop_o <= `UOP_CODE_NOP;
            mem_a_o <= `ZeroWord;
            mem_wd_o <= `ZeroWord;

            csr_we_o <= `WriteDisable;
            csr_waddr_o <= `ZeroWord;
            csr_wdata_o <= `ZeroWord;

            exception_o <= `ZeroWord;
            pc_o <= `ZeroWord;
            ins_o <= `NOP_INST;

            branch_tag <= 1'b0;
            branch_pc <= `NOP_INST;
        end else if(stall_i[3] == `NoStop) begin
            rd_a_o <= rd_wa_i;
            rd_we_o <= rd_we_i;
            rd_wd_o <= rd_wd_i;

            uop_o <= uop_i;
            mem_a_o <= mem_addr_i;
            mem_wd_o <= mem_wdata_i;

            csr_we_o <= csr_we_i;
            csr_waddr_o <= csr_waddr_i;
            csr_wdata_o <= csr_wdata_i;

            exception_o <= exception_i;

            // handle the branch instructions
            if( branch_tag_i == 1'b1 ) begin   // branch started
                // note: branch_tag_i and branch_slot_end_i can be true simultaneously
                // for example: while(1) in c
                branch_tag <= 1'b1;
                branch_pc <= pc_i;
            end else begin
                if(branch_tag && branch_slot_end_i) begin // branch ended
                    branch_tag <= 1'b0;
                end
            end

            if(branch_tag) begin
                pc_o <= branch_pc;
            end else begin
                pc_o <= pc_i;
            end

            ins_o <= ins_i;
        end    //if
    end      //always
endmodule
