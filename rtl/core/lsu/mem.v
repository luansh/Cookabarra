/*-------------------------------------------------------------------------
// Module:  mem
// File:    mem.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: LSU
//              (1) handle the load and store instruction
//              (2) process the exception
--------------------------------------------------------------------------*/

`include "defines.v"

module mem(

    input wire n_rst_i,

    /*-- signals from exu-----*/
    input wire[`REG_BUS_D] exception_i,       // exception type
    input wire[`REG_BUS_D] pc_i,       // the pc when exception happened
    input wire[`REG_BUS_D] ins_i,            // the instruction caused the exception

    input wire rd_we_i,
    input wire[`REG_BUS_A] rd_wa_i,
    input wire[`REG_BUS_D] rd_wd_i,

    input wire[`AluOpBus] uop_i,         //uop_code, to determine it is a load or a store
    input wire[`REG_BUS_D] mem_a_i,
    input wire[`REG_BUS_D] mem_wd_i,

    /*-- signals to access the external memory -----*/
    output reg[`REG_BUS_D] mem_a_o,
    output wire mem_we_o,
    output reg[3:0] mem_sel_o,          //the selector for bytes operation
    output reg[`REG_BUS_D] mem_data_o,
    output reg mem_ce_o,
    input wire[`REG_BUS_D] mem_data_i,        //the read result from memroy

    input wire csr_we_i,
    input wire[`REG_BUS_D] csr_wa_i,
    input wire[`REG_BUS_D] csr_wd_i,

    /*-- signals from write back for data dependance detection -----*/
    input wire wb_csr_we_i,
    input wire[`REG_BUS_D] wb_csr_waddr_i,
    input wire[`REG_BUS_D] wb_csr_wdata_i,

    /*-- pass down to mem_wb stage -----*/
    output reg rd_we_o,
    output reg[`REG_BUS_A] rd_a_o,
    output reg[`REG_BUS_D] rd_wd_o,

    output reg csr_we_o,
    output reg[`REG_BUS_D] csr_wa_o,
    output reg[`REG_BUS_D] csr_wd_o,

    /*------- signals to control ----------*/
    output wire stall_req_o,
    output reg[`REG_BUS_D] exception_o,
    output reg[`REG_BUS_D] pc_o,
    output reg[`REG_BUS_D] ins_o

);

    reg mem_we;
    reg mem_re;

    reg addr_align_halfword;
    reg addr_align_word;

    reg load_operation;
    reg store_operation;

    reg load_addr_align_exception;
    reg store_addr_align_exception;

    assign load_operation = ( (uop_i == `UOP_LH) || (uop_i == `UOP_LHU) ||(uop_i == `UOP_LW) ) ? 1'b1 : 1'b0;

    assign store_operation = ( (uop_i == `UOP_SH) ||(uop_i == `UOP_SW) ) ? 1'b1 : 1'b0;


    assign addr_align_halfword =(   ( (uop_i == `UOP_SH) || (uop_i == `UOP_LH) || (uop_i == `UOP_LHU) )
                                 && (mem_a_i[0] == 1'b0) ) ? 1'b1 : 1'b0;

    assign addr_align_word =(   ( (uop_i == `UOP_SW) || (uop_i == `UOP_LW) )
                             && (mem_a_i[1:0] == 2'b00 ) ) ? 1'b1 : 1'b0;

    assign load_addr_align_exception = (~ (addr_align_halfword || addr_align_word)) & load_operation;
    assign store_addr_align_exception = (~ (addr_align_halfword || addr_align_word)) & store_operation;

    // to ctrl module
    //exception ={ misaligned_load, misaligned_store, illegal_inst, misaligned_inst, ebreak, ecall, mret}
    assign exception_o = {25'b0, load_addr_align_exception, store_addr_align_exception, exception_i[4:0]};

    // to the next stage
    assign pc_o = pc_i;
    assign ins_o = ins_i;

    assign csr_we_o = csr_we_i;
    assign csr_wa_o = csr_wa_i;
    assign csr_wd_o = csr_wd_i;

    assign rd_we_o = rd_we_i;
    assign rd_a_o = rd_wa_i;
    assign rd_wd_o = rd_wd_i;

    assign mem_we = ( (uop_i == `UOP_SB) || (uop_i == `UOP_SH)
                    ||(uop_i == `UOP_SW) ) ? 1'b1 : 1'b0;

    assign mem_re = ( (uop_i == `UOP_LB) || (uop_i == `UOP_LBU)
	                ||(uop_i == `UOP_LH) || (uop_i == `UOP_LHU)
			   	    ||(uop_i == `UOP_LW) ) ? 1'b1 : 1'b0;

    assign mem_we_o = mem_we & (~(|exception_o));  // if exeception happened, give up the store operation on the ram
    assign mem_ce_o = mem_we_o | mem_re;
    assign mem_a_o = mem_a_i;

    assign stall_req_o = 0;

    always @ (*) begin
        if (n_rst_i == `RST_EN) begin
			//operation on RAM
            mem_a_o = `ZERO_WORD;
            mem_we = `WRITE_DISABLE;
            mem_sel_o = 4'b0000;
            mem_data_o = `ZERO_WORD;
            mem_ce_o = `CHIP_DISABLE;

            //GPR
            rd_a_o = `NOP_REG_A;
            rd_we_o = `WRITE_DISABLE;
            rd_wd_o = `ZERO_WORD;

			//CSR
            csr_we_o = `WRITE_DISABLE;
            csr_wa_o = `ZERO_WORD;
            csr_wd_o = `ZERO_WORD;

            exception_o = `ZERO_WORD;
            pc_o = `ZERO_WORD;
            ins_o = `NOP_INS;
        end else begin
            mem_sel_o = 4'b1111;
            case (uop_i)
                `UOP_LB:     begin
                    case (mem_a_i[1:0])
                        2'b00:  begin
                            rd_wd_o = {{24{mem_data_i[7]}},mem_data_i[7:0]};
                            mem_sel_o = 4'b1000;
                        end
                        2'b01:  begin
                            rd_wd_o = {{24{mem_data_i[15]}},mem_data_i[15:8]};
                            mem_sel_o = 4'b0100;
                        end
                        2'b10:  begin
                            rd_wd_o = {{24{mem_data_i[23]}},mem_data_i[23:16]};
                            mem_sel_o = 4'b0010;
                        end
                        2'b11:  begin
                            rd_wd_o = {{24{mem_data_i[31]}},mem_data_i[31:24]};
                            mem_sel_o = 4'b0001;
                        end
                        default:    begin
                            rd_wd_o = `ZERO_WORD;
                        end
                    endcase
                end

                `UOP_LBU:        begin
                    case (mem_a_i[1:0])
                        2'b00:  begin
                            rd_wd_o = {{24{1'b0}},mem_data_i[7:0]};
                            mem_sel_o = 4'b1000;
                        end
                        2'b01:  begin
                            rd_wd_o = {{24{1'b0}},mem_data_i[15:8]};
                            mem_sel_o = 4'b0100;
                        end
                        2'b10:  begin
                            rd_wd_o = {{24{1'b0}},mem_data_i[23:16]};
                            mem_sel_o = 4'b0010;
                        end
                        2'b11:  begin
                            rd_wd_o = {{24{1'b0}},mem_data_i[31:24]};
                            mem_sel_o = 4'b0001;
                        end
                        default:    begin
                            rd_wd_o = `ZERO_WORD;
                        end
                    endcase
                end

                `UOP_LH:     begin
                    case (mem_a_i[1:0])
                        2'b00:  begin
                            rd_wd_o = {{16{mem_data_i[15]}},mem_data_i[15:0]};
                            mem_sel_o = 4'b1100;
                        end
                        2'b10:  begin
                            rd_wd_o = {{16{mem_data_i[31]}},mem_data_i[31:16]};
                            mem_sel_o = 4'b0011;
                        end
                        default:    begin
                            rd_wd_o = `ZERO_WORD;
                        end
                    endcase
                end

                `UOP_LHU:        begin
                    case (mem_a_i[1:0])
                        2'b00:  begin
                            rd_wd_o = {{16{1'b0}},mem_data_i[15:0]};
                            mem_sel_o = 4'b1100;
                        end
                        2'b10:  begin
                            rd_wd_o = {{16{1'b0}},mem_data_i[31:16]};
                            mem_sel_o = 4'b0011;
                        end
                        default:    begin
                            rd_wd_o = `ZERO_WORD;
                        end
                    endcase
                end

                `UOP_LW:     begin
                    rd_wd_o = mem_data_i;
                    mem_sel_o = 4'b1111;
                end

                `UOP_SB:     begin
                    mem_data_o = {mem_wd_i[7:0],mem_wd_i[7:0],mem_wd_i[7:0],mem_wd_i[7:0]};
                    case (mem_a_i[1:0])
                        2'b00:  begin
                            mem_sel_o = 4'b0001;
                        end
                        2'b01:  begin
                            mem_sel_o = 4'b0010;
                        end
                        2'b10:  begin
                            mem_sel_o = 4'b0100;
                        end
                        2'b11:  begin
                            mem_sel_o = 4'b1000;
                        end
                        default:    begin
                            mem_sel_o = 4'b0000;
                        end
                    endcase
                end

                `UOP_SH:     begin
                    mem_data_o = {mem_wd_i[15:0],mem_wd_i[15:0]};
                    case (mem_a_i[1:0])
                        2'b00:  begin
                            mem_sel_o = 4'b0011;
                        end
                        2'b10:  begin
                            mem_sel_o = 4'b1100;
                        end
                        default:    begin
                            mem_sel_o = 4'b0000;
                        end
                    endcase
                end

                `UOP_SW:  begin
                    // check the address align with 4 bytes
                    mem_data_o = mem_wd_i;
                    mem_sel_o = 4'b1111;
                end

                default:  begin
                    //nothing to do
                end
            endcase
        end    //if
    end   //always
endmodule



