/*-------------------------------------------------------------------------
// Module:  id
// File:    id_ex.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: instruction fetch
--------------------------------------------------------------------------*/

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//-----------------------------------------------------------------

`include "defines.v"

module id_ex(

    input wire clk_i,
    input wire n_rst_i,

    /* ------- signals from the ctrl unit --------*/
    input wire[5:0] stall_i,
    input wire flush_i,

    /* ------- signals from the decoder --------*/
    input wire[`REG_BUS_D] pc_i,
    input wire[`REG_BUS_D] ins_i,
    input wire[`REG_BUS_D] next_pc_i,
    input wire next_taken_i,
    input wire branch_slot_end_i,

    input wire[`AluSelBus] alusel_i,
    input wire[`AluOpBus] uop_i,

    input wire[`REG_BUS_D] rs1_d_i,
    input wire[`REG_BUS_D] rs2_d_i,
    input reg[`REG_BUS_D] imm_i,
    input wire rd_we_i,
    input wire[`REG_BUS_A] rd_wa_i,

    input wire csr_we_i,
    input wire[`REG_BUS_D] csr_addr_i,

    input wire[`REG_BUS_D] exception_i,

    /* ------- signals to exu --------*/
    output reg[`REG_BUS_D] pc_o,
    output reg[`REG_BUS_D] ins_o,
    output reg[`REG_BUS_D] next_pc_o,
    output reg next_taken_o,
    output reg branch_slot_end_o,

    output reg[`AluSelBus] alusel_o,
    output reg[`AluOpBus] uop_o,

    output reg[`REG_BUS_D] rs1_data_o,
    output reg[`REG_BUS_D] rs2_data_o,
    output reg[`REG_BUS_D] imm_o,
    output reg rd_we_o,

    output reg csr_we_o,
    output reg[`REG_BUS_A] rd_a_o,

    output reg[`REG_BUS_D] csr_addr_o,

    output reg[31:0] exception_o
);

    always @ (posedge clk_i) begin
        if (n_rst_i == `RST_EN) begin
            pc_o <= `ZERO_WORD;
            ins_o <= `NOP_INS;
            branch_slot_end_o <= 1'b0;

            alusel_o <= `EXE_TYPE_NOP;
            uop_o <= `UOP_NOP;

            rs1_data_o <= `ZERO_WORD;
            rs2_data_o <= `ZERO_WORD;
            imm_o <= `ZERO_WORD;

            rd_a_o <= `NOP_REG_A;
            rd_we_o <= `WRITE_DISABLE;

            csr_we_o <= `WRITE_DISABLE;
            csr_addr_o <= `ZERO_WORD;

            exception_o <= `ZERO_WORD;
        end else if (flush_i == 1'b1 ) begin
            pc_o <= `ZERO_WORD;
            ins_o <= `NOP_INS;
            branch_slot_end_o <= 1'b0;

            uop_o <= `UOP_NOP;
            alusel_o <= `EXE_TYPE_NOP;

            rs1_data_o <= `ZERO_WORD;
            rs2_data_o <= `ZERO_WORD;
            imm_o <= `ZERO_WORD;

            rd_a_o <= `NOP_REG_A;
            rd_we_o <= `WRITE_DISABLE;

            csr_we_o <= `WRITE_DISABLE;
            csr_addr_o <= `ZERO_WORD;

            exception_o <= `ZERO_WORD;
        end else if (stall_i[2] == `Stop && stall_i[3] == `NO_STOP) begin
            pc_o <= `ZERO_WORD;
            ins_o <= `NOP_INS;
            branch_slot_end_o <= 1'b0;

            uop_o <= `UOP_NOP;
            alusel_o <= `EXE_TYPE_NOP;

            rs1_data_o <= `ZERO_WORD;
            rs2_data_o <= `ZERO_WORD;
            imm_o <= `ZERO_WORD;

            rd_a_o <= `NOP_REG_A;
            rd_we_o <= `WRITE_DISABLE;

            csr_we_o <= `WRITE_DISABLE;
            csr_addr_o <= `ZERO_WORD;

            exception_o <= `ZERO_WORD;
        end else if (stall_i[2] == `NO_STOP) begin
            pc_o <= pc_i;
            ins_o <= ins_i;
            // pass down the branch prediction info
            next_pc_o <= next_pc_i;
            next_taken_o <= next_taken_i;
            branch_slot_end_o <= branch_slot_end_i;

            uop_o <= uop_i;
            alusel_o <= alusel_i;

            rs1_data_o <= rs1_d_i;
            rs2_data_o <= rs2_d_i;
            imm_o <= imm_i;

            rd_a_o <= rd_wa_i;
            rd_we_o <= rd_we_i;

            csr_we_o <= csr_we_i;
            csr_addr_o <= csr_addr_i;

            exception_o <= exception_i;
        end
    end

endmodule