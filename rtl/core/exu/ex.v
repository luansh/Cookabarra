`include "defines.v"

module ex(

    input wire n_rst_i,

    /* ------- signals from the decoder unit --------*/
    input wire[`RegBus] pc_i,
    input wire[`RegBus] ins_i,

    input wire[`RegBus] next_pc_i,
	input wire next_taken_i,
    input wire branch_slot_end_i,

    input wire[`AluSelBus] alusel_i,
    input wire[`AluOpBus] uop_i,

    input wire[`RegBus] rs1_d_i,
    input wire[`RegBus] rs2_d_i,
    input wire[`RegBus] imm_i,

    input wire rd_we_i,
    input wire[`RegAddrBus] rd_wa_i,

    input wire csr_we_i,       // write csr or not
    input wire[`RegBus] csr_addr_i,     // the csr address, could be read or write

    input wire[31:0] exception_i,    // the execeptions detected in the decode stage, ecall, mret, invalid instructions

    /* ------- signals with division unit --------*/
    output reg[`RegBus] dividend_o,
    output reg[`RegBus] divisor_o,
    output reg div_start_o,
    // output reg div_annul_o,   // not used at the moment
    output reg div_signed_o,

    input wire[`DoubleRegBus] div_result_i,   // the result of the division,the low 32 bits are the quotient, the higher 32 bits are the remainder
    input wire div_ready_i,    //the divison result is ready

    /* ------- signals to the ctrl unit --------*/
    output reg stall_req_o,     // need to stall the pipeline on the division operation, it needs 32 cycles

    /* ------- signals with csr unit --------*/
    output reg[`RegBus] csr_raddr_o,
    input wire[`RegBus] csr_rdata_i,

    /* ------- bypass signals from lsu, for csr dependance detection --------*/
    input wire mem_csr_we_i,
    input wire[`RegBus] mem_csr_waddr_i,
    input wire[`RegBus] mem_csr_wdata_i,

    /* ------- bypass signals from write back, for csr dependance detection --------*/
    input wire wb_csr_we_i,
    input wire[`RegBus] wb_csr_waddr_i,
    input wire[`RegBus] wb_csr_wdata_i,


    /* ------- passed to next pipeline --------*/
    output reg[`RegBus] pc_o,
    output reg[`RegBus] ins_o,

    //branch related
    output reg branch_request_o,  // is this instruction a branch/jump ?
    output reg branch_is_taken_o,
    output reg branch_is_call_o,
    output reg branch_is_ret_o,
    output reg branch_is_jmp_o,
    output reg[`RegBus] branch_target_o,

    output reg branch_redirect_o,  // if this is a branch instruction and branch miss predicted
    output reg[`RegBus] branch_redirect_pc_o,

    output reg branch_tag_o,
    output reg branch_slot_end_o,

    output reg csr_we_o,
    output reg[`RegBus] csr_waddr_o,
    output reg[`RegBus] csr_wdata_o,

    output reg rd_we_o,
    output reg[`RegAddrBus] rd_a_o,
    output reg[`RegBus] rd_wd_o,

    output reg[`AluOpBus] uop_o,    // used in the lsu, for determine it is a load or store
    output reg[`RegBus] mem_a_o,   // the memory address to access
    output reg[`RegBus] mem_wd_o,  // the data to write to the memory for the store instruction

	// the accumulated exception if there are some
    output reg[31:0] exception_o
);
    reg stallreq_for_div;

    assign pc_o = pc_i;
    assign ins_o = ins_i;
    assign branch_slot_end_o = branch_slot_end_i;

    // to identify call or ret
    wire[4:0] rs1 = ins_i[19:15];

    assign csr_we_o = csr_we_i;
    assign csr_waddr_o = csr_addr_i;

    assign rd_we_o = rd_we_i;
    assign rd_a_o = rd_wa_i;

    assign uop_o = uop_i;

    assign exception_o = exception_i;

    wire[`RegBus] pc_plus_4_w;
    assign pc_plus_4_w = pc_i + 4;    //for jar or jalr, the rd should be updated to pc + 4

    wire[`RegBus] pc_add_imm_w;
    assign pc_add_imm_w = pc_i + imm_i;

    wire[`RegBus] rs1_add_imm_w;
    assign rs1_add_imm_w = rs1_d_i + imm_i;

    wire[`RegBus] rs1_or_imm_w;
    assign  rs1_or_imm_w = rs1_d_i | imm_i;

    wire[`RegBus] rs1_and_imm_w;
    assign  rs1_and_imm_w = rs1_d_i & imm_i;

    wire[`RegBus] rs1_xor_imm_w;
    assign  rs1_xor_imm_w = rs1_d_i ^ imm_i;

    wire[`RegBus] rs1_add_rs2_w;
    assign rs1_add_rs2_w = rs1_d_i + rs2_d_i;

    wire[`RegBus] rs1_sub_rs2_w;
    assign rs1_sub_rs2_w = rs1_d_i - rs2_d_i;

    wire[`RegBus] rs1_and_rs2_w;
    assign  rs1_and_rs2_w = rs1_d_i & rs2_d_i;

    wire[`RegBus] rs1_or_rs2_w;
    assign  rs1_or_rs2_w = rs1_d_i |rs2_d_i;

    wire[`RegBus] rs1_xor_rs2_w;
    assign  rs1_xor_rs2_w = rs1_d_i ^ rs2_d_i;

    /* ------ used in the be, bne, bge, blt ------*/
    wire rs1_eq_rs2_w;
    wire rs1_ge_rs2_signed_w;
    wire rs1_ge_rs2_unsigned_w;

    assign rs1_ge_rs2_signed_w = $signed(rs1_d_i) >= $signed(rs2_d_i);
    assign rs1_ge_rs2_unsigned_w = rs1_d_i >= rs2_d_i;
    assign rs1_eq_rs2_w = (rs1_d_i == rs2_d_i);

    wire rs1_eq_imm_w;
    wire rs1_ge_imm_signed_w;
    wire rs1_ge_imm_unsigned_w;

    assign rs1_eq_imm_w = (rs1_d_i == imm_i);
    assign rs1_ge_imm_signed_w = $signed(rs1_d_i) >= $signed(imm_i);
    assign rs1_ge_imm_unsigned_w = rs1_d_i >= imm_i;

    wire[31:0] sr_shift_w;
    wire[31:0] sr_shift_mask_w;
    assign sr_shift_w = rs1_d_i >> rs2_d_i[4:0];
    assign sr_shift_mask_w = 32'hFFFFFFFF >> rs2_d_i[4:0];

    wire[31:0] sri_shift_w;
    wire[31:0] sri_shift_mask_w;
    assign sri_shift_w = rs1_d_i >> imm_i;
    assign sri_shift_mask_w = 32'hFFFFFFFF >> imm_i;

  //对于存储操作，执行单元ex，产生读写的内存地址以及写入数据
    // handle the load and store instruction
    // (1) calcuate the memory address to acccess
    // (2) if it is a store instruction, the data to write was required as well
    always @ (*) begin
        if (n_rst_i == `RstEnable) begin
            mem_a_o = `ZeroWord;
            mem_wd_o = `ZeroWord;
        end else begin
            case (uop_i)
                /* ---------------------L-type instruction --------------*/
                `UOP_CODE_LB, `UOP_CODE_LBU, `UOP_CODE_LH, `UOP_CODE_LHU, `UOP_CODE_LW:  begin
                    // lb rd,offset(rs1)  :  x[rd] = sext(M[x[rs1] + sext(offset)][7:0])
                    // lbu rd,offset(rs1)  :  x[rd] = M[x[rs1] + sext(offset)][7:0]
                    // lh rd,offset(rs1)  :  x[rd] = sext(M[x[rs1] + sext(offset)][15:0])
                    // lhu rs2,offset(rs1)  :  x[rd] = M[x[rs1] + sext(offset)][15:0]
                    // lw rd,offset(rs1)  :  x[rd] = sext(M[x[rs1] + sext(offset)][31:0])
//rs1+imm 作为所要加载数据的内存地址，输出到 LSU进行访存操作
                    mem_a_o = rs1_add_imm_w;
                end

                /* ---------------------S-type instruction --------------*/
                `UOP_CODE_SB, `UOP_CODE_SH, `UOP_CODE_SW:  begin
                    // sb rs2,offset(rs1)  :   M[x[rs1] + sext(offset)] = x[rs2][7:0]
                    // sh rs2,offset(rs1)  :   M[x[rs1] + sext(offset)] = x[rs2][15:0]
                    // sw rs2,offset(rs1)  :   M[x[rs1] + sext(offset)] = x[rs2][31:0]
                    mem_a_o = rs1_add_imm_w;
//rs2 中保存要存储到内存的数据值
                    mem_wd_o = rs2_d_i;
                end

                default: begin
                    // skip it
                end
            endcase
        end // else
    end //always

    reg[`RegBus] arithmetic_result_r;
    reg[`RegBus] csr_result_r;
    reg[`RegBus] div_result_r;
    reg[`RegBus] jump_result_r;
    reg[`RegBus] logic_result_r;
    reg[`RegBus] mul_result_r;
    reg[`RegBus] shift_result_r;

    // handle csr instruction
    wire read_csr_enable;
    assign read_csr_enable = (uop_i == `UOP_CODE_CSRRW) || (uop_i == `UOP_CODE_CSRRWI) || (uop_i == `UOP_CODE_CSRRS)
                            || (uop_i == `UOP_CODE_CSRRSI) || (uop_i == `UOP_CODE_CSRRC) || (uop_i == `UOP_CODE_CSRRCI);

    // get the lastest csr value to update the rd
    always @ (*) begin
        csr_result_r = `ZeroWord;
        csr_raddr_o = `ZeroWord;
        if (read_csr_enable) begin
            // If rd=x0, then the instruction shall not read the CSR and shall not cause any
            // of the side effects that might occur on a CSR read.
            // read the csr
            csr_raddr_o = csr_addr_i;
            csr_result_r = csr_rdata_i;
            // check the data dependance, if mem stage is updating the csr, use the lastest value
            if ( mem_csr_we_i == `WriteEnable && mem_csr_waddr_i == csr_addr_i) begin
                csr_result_r = mem_csr_wdata_i;
            // check the data dependance, if wb stage is updating the csr, use the lastest value
            end else if ( wb_csr_we_i == `WriteEnable && wb_csr_waddr_i == csr_addr_i) begin
                csr_result_r = wb_csr_wdata_i;
            end
        end
    end

    // calculate the data to write to the csr
    always @ (*) begin
        if (n_rst_i == `RstEnable) begin
            csr_waddr_o = `ZeroWord;
            csr_wdata_o = `ZeroWord;
        end else begin
            csr_wdata_o = `ZeroWord;
            case (uop_i)
                `UOP_CODE_CSRRW: begin
                    // csrrw rd,offset,rs1  :   t = CSRs[csr]; CSRs[csr] = x[rs1]; x[rd] = t
                    csr_wdata_o = rs1_d_i;
                end

                `UOP_CODE_CSRRWI: begin
                    // csrrwi rd,offset,uimm  :  x[rd] = CSRs[csr]; CSRs[csr] = zimm
                    csr_wdata_o = imm_i;
                end

                `UOP_CODE_CSRRS: begin
                    // csrrs rd,offset,rs1  :   t = CSRs[csr]; CSRs[csr] = t | x[rs1]; x[rd] = t
                    csr_wdata_o = rs1_d_i | csr_result_r;
                end

                `UOP_CODE_CSRRSI: begin
                   // csrrsi rd,offset,uimm  :  t = CSRs[csr]; CSRs[csr] = t | zimm; x[rd] = t
                    csr_wdata_o = imm_i | csr_result_r;
                end

                `UOP_CODE_CSRRC: begin
                    // csrrc rd,offset,rs1  :   t = CSRs[csr]; CSRs[csr] = t &∼x[rs1]; x[rd] = t
                    csr_wdata_o = csr_result_r & (~rs1_d_i);
                end

                `UOP_CODE_CSRRCI: begin
                    // csrrci rd,offset,uimm  :  t = CSRs[csr]; CSRs[csr] = t &∼zimm; x[rd] = t
                    csr_wdata_o = csr_result_r & (~imm_i);
                end

                default: begin

                end
            endcase
        end  //else begin
    end  //always

    // jump and branch instructions
    always @ (*) begin
        if (n_rst_i == `RstEnable) begin
            jump_result_r = `ZeroWord;

            branch_request_o = 1'b0;
            branch_is_taken_o = 1'b0;
            branch_is_call_o = 1'b0;
            branch_is_ret_o = 1'b0;
            branch_is_jmp_o = 1'b0;
            branch_target_o = `ZeroWord;

            branch_redirect_o = 1'b0;
            branch_redirect_pc_o = `ZeroWord;;
            branch_tag_o = 1'b0;

        end else begin
            jump_result_r = `ZeroWord;

            branch_request_o = 1'b0;
            branch_is_taken_o = 1'b0;
            branch_is_call_o = 1'b0;
            branch_is_ret_o = 1'b0;
            branch_is_jmp_o = 1'b0;
            branch_target_o = `ZeroWord;

            branch_redirect_o = 1'b0;
            branch_redirect_pc_o = `ZeroWord;;
            branch_tag_o = 1'b0;
            case (uop_i)
                `UOP_CODE_JAL: begin
                    // jal rd,offset  :  x[rd] = pc+4; pc += sext(offset)
                    jump_result_r = pc_plus_4_w;  //save to rd
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = 1'b1;

                    /* A JAL instruction should push the return address onto a return-address stack (RAS) only when rd=x1/x5.*/
                    if ( (rd_wa_i == 5'b00001) || (rd_wa_i == 5'b00101) ) begin
                        branch_is_call_o = 1'b1;
                    end else begin
                        branch_is_jmp_o = 1'b1;
                    end
                end

                `UOP_CODE_JALR: begin
                    // jalr rd,rs1,offset  :   t =pc+4; pc=(x[rs1]+sext(imm))&∼1; x[rd]=t
                    jump_result_r = pc_plus_4_w;
                    branch_target_o = rs1_d_i + imm_i;
                    branch_is_taken_o = 1'b1;

                    /* JALR instructions should push/pop a RAS as shown in the Table
                    ------------------------------------------------
                       rd    |   rs1    | rs1=rd  |   RAS action
                   (1) !link |   !link  | -       |   none
                   (2) !link |   link   | -       |   pop
                   (3) link  |   !link  | -       |   push
                   (4) link  |   link   | 0       |   push and pop
                   (5) link  |   link   | 1       |   push
                    ------------------------------------------------ */
                    if (rd_wa_i == 5'b00001 || rd_wa_i == 5'b00101) begin  //rd is linker reg
                        if (rs1 == 5'b00001 || rs1 == 5'b00101) begin  //rs1 is linker reg as well
                            if (rd_wa_i == rs1) begin     //(5)
                                branch_is_call_o = 1'b1;
                            end else begin
                                branch_is_call_o = 1'b1;   //(4)
                                branch_is_ret_o = 1'b1;
                            end
                        end else begin
                            branch_is_call_o = 1'b1; //(3)
                        end // if (rs1 == 5'b00001 || rs1 == 5'b00101) begin
                    end else begin  //rd is not linker reg
                        if (rs1 == 5'b00001 || rs1 == 5'b00101) begin  // rs1 is linker reg
                            branch_is_ret_o = 1'b1; //(2)
                        end else begin  //rs1 is not linker reg
                            branch_is_jmp_o = 1'b1; // (1)
                        end
                    end //if (rd_wa_i == 5'b00001 || rd_wa_i == 5'b00101) begin
               end

                /* ---------------------B-Type instruction --------------*/
                `UOP_CODE_BEQ: begin
                    // beq rs1,rs2,offset  :   if (rs1 == rs2) pc += sext(imm)
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = rs1_eq_rs2_w;
                end

                `UOP_CODE_BNE: begin
                   // bne rs1,rs2,offset  :   if (rs1 != rs2) pc += sext(offset)
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = (~rs1_eq_rs2_w);
                end

                `UOP_CODE_BGE: begin
                    // bge rs1,rs2,offset  :   if (rs1 >=s rs2) pc += sext(offset)
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = (rs1_ge_rs2_signed_w);
                end

                `UOP_CODE_BGEU: begin
                    // bgeu rs1,rs2,offset  :   if (rs1 >=u rs2) pc += sext(offset)
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = (rs1_ge_rs2_unsigned_w);
                end

                `UOP_CODE_BLT: begin
                   // blt rs1,rs2,offset  :   if (rs1 <s rs2) pc += sext(offset)
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = (~rs1_ge_rs2_signed_w);
                end

                `UOP_CODE_BLTU: begin
                    // bltu rs1,rs2,offset  :   if (rs1 >u rs2) pc += sext(offset)
                    branch_target_o = pc_add_imm_w;
                    branch_is_taken_o = (~rs1_ge_rs2_unsigned_w);
                end

                default: begin
                end
            endcase // case (uop_i)

            if ( (uop_i == `UOP_CODE_JAL) || (uop_i == `UOP_CODE_JALR) || (uop_i == `UOP_CODE_BEQ) || (uop_i == `UOP_CODE_BNE) ||
                (uop_i == `UOP_CODE_BGE) || (uop_i == `UOP_CODE_BGEU) || (uop_i == `UOP_CODE_BLT) || (uop_i == `UOP_CODE_BLTU) ) begin

                branch_request_o = 1'b1;

                if (branch_is_taken_o == 1'b1) begin   //taken
                    if ( (next_taken_i == 1'b0) || (next_pc_i != branch_target_o) ) begin     //miss predicted taken or target
                        branch_redirect_o = `Branch;
                        branch_redirect_pc_o = branch_target_o;
                        branch_tag_o = branch_redirect_o;  // indicate a branch started
                        $display("miss predicted, pc=%h, next_take=%d, branch_taken=%d, next_pc=%h, branch_target=%h is_call=%d, is_ret=%d, is_jmp=%d",
                        pc_i, next_taken_i, branch_is_taken_o, next_pc_i, branch_target_o, branch_is_call_o, branch_is_ret_o, branch_is_jmp_o);
                    end
                end else begin  //if (branch_is_taken_o == 1'b1) begin
                    if ( next_taken_i == 1'b1 ) begin //miss predicted taken
                        branch_redirect_o = `Branch;
                        branch_redirect_pc_o = pc_i+4;
                        branch_tag_o = branch_redirect_o;  // indicate a branch started
                        $display("miss predicted, pc=%h, branch_taken=%d, next_take=%d, next_pc=%h", pc_i, branch_is_taken_o, next_taken_i, next_pc_i);
                    end
                end  // if (branch_is_taken_o == 1'b1) begin
            end  //  if ( (uop_i == `UOP_CODE_JAL) || (uop_i == `UOP_CODE_JALR) ||
        end  // if (n_rst_i == `RstEnable) begin
    end //always

  //Logic
    always @ (*)
      if (n_rst_i == `RstEnable) logic_result_r = `ZeroWord;
      else
        case (uop_i)
          `UOP_CODE_LUI: logic_result_r = imm_i;
          `UOP_CODE_AUIPC: logic_result_r = pc_add_imm_w;
          `UOP_CODE_SLTI: logic_result_r = {32{(~rs1_ge_imm_signed_w)}} & 32'h1;
          `UOP_CODE_SLTIU: logic_result_r = {32{(~rs1_ge_imm_unsigned_w)}} & 32'h1;
          `UOP_CODE_ANDI: logic_result_r = rs1_and_imm_w;
          `UOP_CODE_ORI: logic_result_r = rs1_or_imm_w;
          `UOP_CODE_XORI: logic_result_r = rs1_xor_imm_w;
          `UOP_CODE_AND: logic_result_r = rs1_and_rs2_w;
          `UOP_CODE_OR: logic_result_r = rs1_or_rs2_w;
          `UOP_CODE_XOR: logic_result_r = rs1_xor_rs2_w;
          `UOP_CODE_SLT: logic_result_r = {32{(~rs1_ge_rs2_signed_w)}} & 32'h1;
          `UOP_CODE_SLTU: logic_result_r = {32{(~rs1_ge_rs2_unsigned_w)}} & 32'h1;
          default: logic_result_r = `ZeroWord;
        endcase
  //Shift
    always @ (*)
      if (n_rst_i == `RstEnable) shift_result_r = `ZeroWord;
      else
        case (uop_i)
          `UOP_CODE_SLLI: shift_result_r = rs1_d_i << imm_i;
          `UOP_CODE_SRLI: shift_result_r = rs1_d_i >> imm_i;
          `UOP_CODE_SRAI: shift_result_r = (sri_shift_w & sri_shift_mask_w) | ({32{rs1_d_i[31]}} & (~sri_shift_mask_w));
          `UOP_CODE_SLL: shift_result_r = rs1_d_i << rs2_d_i[4:0];
          `UOP_CODE_SRL: shift_result_r = rs1_d_i >> rs2_d_i[4:0];
          `UOP_CODE_SRA: shift_result_r = (sr_shift_w & sr_shift_mask_w) | ({32{rs1_d_i[31]}} & (~sr_shift_mask_w));
          default: shift_result_r = `ZeroWord;
        endcase

  //Arithmetic
    always @ (*) begin
        if (n_rst_i == `RstEnable) begin
            arithmetic_result_r = `ZeroWord;
        end else begin
            arithmetic_result_r = `ZeroWord;
            case (uop_i)
                `UOP_CODE_ADDI: begin
                    // addi rd,rs1,imm :  x[rd] = x[rs1] + sext(immediate)
                    arithmetic_result_r = rs1_add_imm_w;
                end

                `UOP_CODE_ADD: begin
                    // add rd,rs1,rs2  :  x[rd] = x[rs1] + x[rs2]
                    arithmetic_result_r = rs1_add_rs2_w;
                end

                `UOP_CODE_SUB: begin
                    // sub rd,rs1,rs2  :  x[rd] = x[rs1] - x[rs2]
                    arithmetic_result_r = rs1_sub_rs2_w;
                end

                default: begin

                end
            endcase // case (uop_i)
        end  // end else begin
    end //always



    // multiply instructions
    reg[`RegBus] mul_op1;
    reg[`RegBus] mul_op2;

    wire[`DoubleRegBus] mul_temp;
    wire[`DoubleRegBus] mul_temp_invert;

    assign mul_temp = mul_op1 * mul_op2;
    assign mul_temp_invert = ~mul_temp + 1;

    reg[`RegBus] rs1_data_invert;
    reg[`RegBus] rs2_data_invert;

    assign rs1_data_invert = ~rs1_d_i + 1;
    assign rs2_data_invert = ~rs2_d_i + 1;

    always @ (*) begin
        case (uop_i)
            `UOP_CODE_MULT, `UOP_CODE_MULHU: begin
                mul_op1 = rs1_d_i;
                mul_op2 = rs2_d_i;
            end

            `UOP_CODE_MULHSU: begin
                mul_op1 = (rs1_d_i[31] == 1'b1) ? (rs1_data_invert) : rs1_d_i;
                mul_op2 = rs2_d_i;
            end

            `UOP_CODE_MULH: begin
                mul_op1 = (rs1_d_i[31] == 1'b1)? (rs1_data_invert): rs1_d_i;
                mul_op2 = (rs2_d_i[31] == 1'b1)? (rs2_data_invert): rs2_d_i;
            end

            default: begin
                mul_op1 = rs1_d_i;
                mul_op2 = rs2_d_i;
            end
        endcase
    end


    always @ (*) begin
        if (n_rst_i == `RstEnable) begin
            mul_result_r = `ZeroWord;
        end else begin
            mul_result_r = `ZeroWord;
            case (uop_i)
                `UOP_CODE_MULT: begin
                    // mul rd,rs1,rs2  :    x[rd] = x[rs1] × x[rs2]
                    mul_result_r = mul_temp[31:0];
                end

                `UOP_CODE_MULHU: begin
                    // mulhu rd,rs1,rs2  :   x[rd] = (x[rs1] u × x[rs2]) >>u XLEN
                    mul_result_r = mul_temp[63:32];
                end

                `UOP_CODE_MULH: begin
                    // mulh rd,rs1,rs2  :   x[rd] = (x[rs1] s×s x[rs2]) >>s XLEN
                    case ({rs1_d_i[31], rs2_d_i[31]})
                        2'b00: begin
                            mul_result_r = mul_temp[63:32];
                        end
                        2'b11: begin
                            mul_result_r = mul_temp[63:32];
                        end
                        2'b10: begin
                            mul_result_r = mul_temp_invert[63:32];
                        end
                        default: begin
                            mul_result_r = mul_temp_invert[63:32];
                        end
                    endcase
                end

                `UOP_CODE_MULHSU: begin
                    // mulhsu rd,rs1,rs2  :   x[rd] = (x[rs1] s × x[rs2]) >>s XLEN
                    if (rs1_d_i[31] == 1'b1) begin
                        mul_result_r = mul_temp_invert[63:32];
                    end else begin
                        mul_result_r = mul_temp[63:32];
                    end
                end

                default: begin

                end
            endcase
        end // else begin
    end  //always


    // stall the pipeline if needed
    always @ (*) begin
        stall_req_o = stallreq_for_div;  //只有div指令才需要停止流水线
    end

    // division and rem instructions
    always @ (*) begin
        if (n_rst_i == `RstEnable) begin
            stallreq_for_div = `NoStop;
            dividend_o = `ZeroWord;
            divisor_o = `ZeroWord;
            div_start_o = `DivStop;
            div_signed_o = 1'b0;
        end else begin
            stallreq_for_div = `NoStop;
            dividend_o = `ZeroWord;
            divisor_o = `ZeroWord;
            div_start_o = `DivStop;
            div_signed_o = 1'b0;
            case (uop_i)
                `UOP_CODE_DIV:        begin
                    // div rd,rs1,rs2  :   x[rd] = x[rs1] /s x[rs2]
                    if (div_ready_i == `DivResultNotReady) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStart;
                        div_signed_o = 1'b1;       // signed division
                        stallreq_for_div = `Stop;  // stop the pipeline
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStop;
                        div_signed_o = 1'b1;
                        stallreq_for_div = `NoStop;  // resume the pipeline
                        div_result_r = div_result_i[31:0]; // get the quotient
                    end
                end

               `UOP_CODE_DIVU:       begin
                    // divu rd,rs1,rs2  :   x[rd] = x[rs1] /u x[rs2]
                    if (div_ready_i == `DivResultNotReady) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStart;
                        div_signed_o = 1'b0;        // unsigned division
                        stallreq_for_div = `Stop;
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStop;
                        div_signed_o = 1'b0;
                        stallreq_for_div = `NoStop;
                        div_result_r = div_result_i[31:0];
                    end
                end

                `UOP_CODE_REM: begin
                    // rem rd,rs1,rs2  :    x[rd] = x[rs1] %s x[rs2]
                    if (div_ready_i == `DivResultNotReady) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStart;
                        div_signed_o = 1'b1;
                        stallreq_for_div = `Stop;
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStop;
                        div_signed_o = 1'b1;
                        stallreq_for_div = `NoStop;
                        div_result_r = div_result_i[63:32]; // get the remainder
                    end
                end

                `UOP_CODE_REMU: begin
                    // remu rd,rs1,rs2  :   x[rd] = x[rs1] %u x[rs2]
                   if (div_ready_i == `DivResultNotReady) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStart;
                        div_signed_o = 1'b0;
                        stallreq_for_div = `Stop;
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DivStop;
                        div_signed_o = 1'b0;
                        stallreq_for_div = `NoStop;
                        div_result_r = div_result_i[63:32];
                    end
                end

                default: begin
                end
            endcase
        end // else begin
    end  //always

  //选择对应类型的运算结果
    /* selector the alu result to write to the rd*/
    always @ (*)
    begin
      rd_a_o = rd_wa_i;
      case (alusel_i)
        `EXE_TYPE_ARITHMETIC: rd_wd_o = arithmetic_result_r;
        `EXE_TYPE_BRANCH: rd_wd_o = jump_result_r;
        `EXE_TYPE_DIV: rd_wd_o = div_result_r;
        `EXE_TYPE_LOGIC: rd_wd_o = logic_result_r;
        `EXE_TYPE_MUL: rd_wd_o = mul_result_r;
        `EXE_TYPE_SHIFT: rd_wd_o = shift_result_r;
        `EXE_TYPE_CSR: rd_wd_o = csr_result_r;
        default: rd_wd_o = `ZeroWord;
      endcase
    end

  endmodule