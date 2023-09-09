/*-------------------------------------------------------------------------
// Module:  mem_wb
// File:    mem_wb.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: pass the signals from lsu stage to write back stage
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

module mem_wb(

    input wire clk_i,
    input wire n_rst_i,

    /*-- signals from contrl module -----*/
    input wire[5:0] stall_i,
    input wire flush_i,

    /*-- signals from mem -----*/
	//GPR
    input wire rd_we_i,
    input wire[`REG_BUS_A] rd_wa_i,
    input wire[`REG_BUS_D] rd_wd_i,

    //CSR
    input wire csr_we_i,
    input wire[`REG_BUS_D] csr_wa_i,
    input wire[`REG_BUS_D] csr_wd_i,

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

    always @ (posedge clk_i) begin
        if (n_rst_i == `RST_EN) begin
		    // GPR
            rd_we_o <= `WRITE_DISABLE;
            rd_a_o <= `NOP_REG_A;
            rd_wd_o <= `ZERO_WORD;

			// CSR
            csr_we_o <= `WRITE_DISABLE;
            csr_wa_o <= `ZERO_WORD;
            csr_wd_o <= `ZERO_WORD;

            instret_incr_o  <= 1'b0;
        end else if (flush_i == 1'b1 ) begin  //need to flush the pipeline
            rd_we_o <= `WRITE_DISABLE;
            rd_a_o <= `NOP_REG_A;
            rd_wd_o <= `ZERO_WORD;

            csr_we_o <= `WRITE_DISABLE;
            csr_wa_o <= `ZERO_WORD;
            csr_wd_o <= `ZERO_WORD;

            instret_incr_o <= 1'b0;
        end else if (stall_i[4] == `STOP && stall_i[5] == `NO_STOP) begin  //stall this stage
            rd_we_o <= `WRITE_DISABLE;
            rd_a_o <= `NOP_REG_A;
            rd_wd_o <= `ZERO_WORD;

            csr_we_o <= `WRITE_DISABLE;
            csr_wa_o <= `ZERO_WORD;
            csr_wd_o <= `ZERO_WORD;

            instret_incr_o  <= 1'b0;
        end else if (stall_i[4] == `NO_STOP) begin
		    // write the GPR
            rd_we_o <= rd_we_i;
            rd_a_o <= rd_wa_i;
            rd_wd_o <= rd_wd_i;

			// write the CSR
            csr_we_o <= csr_we_i;
            csr_wa_o <= csr_wa_i;
            csr_wd_o <= csr_wd_i;
            //update the retired instruction counter by adding one
            instret_incr_o  <= 1'b1;
        end  //if
    end  //always
endmodule
