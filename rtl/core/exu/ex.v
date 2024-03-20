`include "defines.v"

  module ex(
    input rs_n_i,
  //From ID
    input[`REG_BUS_D] pc_i,
    input[`REG_BUS_D] ins_i,

    input[`REG_BUS_D] next_pc_i,
  	input next_taken_i,
    input branch_slot_end_i,

    input[`AluSelBus] alusel_i,
    input[`AluOpBus] uop_i,

    input[`REG_BUS_D] rs1_d_i,
    input[`REG_BUS_D] rs2_d_i,
    input[`REG_BUS_D] imm_i,

    input rd_we_i,
    input[`REG_BUS_A] rd_wa_i,

    input csr_we_i,       // write csr or not
    input[`REG_BUS_D] csr_addr_i,     // the csr address, could be read or write

    input[31:0] exception_i,    // the execeptions detected in the decode stage, ecall, mret, invalid instructions

    /* ------- signals with division unit --------*/
    output reg[`REG_BUS_D] dividend_o,
    output reg[`REG_BUS_D] divisor_o,
    output reg div_start_o,
    // output reg div_annul_o,   // not used at the moment
    output reg div_signed_o,

    input[`REG_BUS_DOUBLE] div_result_i,   // the result of the division,the low 32 bits are the quotient, the higher 32 bits are the remainder
    input div_ready_i,    //the divison result is ready

    /* ------- signals to the ctrl unit --------*/
    output reg stall_req_o,     // need to stall the pipeline on the division operation, it needs 32 cycles

    /* ------- signals with csr unit --------*/
    output reg[`REG_BUS_D] csr_raddr_o,
    input[`REG_BUS_D] csr_rdata_i,

    /* ------- bypass signals from lsu, for csr dependance detection --------*/
    input mem_csr_we_i,
    input[`REG_BUS_D] mem_csr_wa_i,
    input[`REG_BUS_D] mem_csr_wd_i,

    /* ------- bypass signals from write back, for csr dependance detection --------*/
    input wb_csr_we_i,
    input[`REG_BUS_D] wb_csr_wa_i,
    input[`REG_BUS_D] wb_csr_wd_i,


    /* ------- passed to next pipeline --------*/
    output reg[`REG_BUS_D] pc_o,
    output reg[`REG_BUS_D] ins_o,

    //branch related
    output reg branch_request_o,  // is this instruction a branch/jump ?
    output reg branch_is_taken_o,
    output reg branch_is_call_o,
    output reg branch_is_ret_o,
    output reg branch_is_jmp_o,
    output reg[`REG_BUS_D] branch_target_o,

    output reg branch_redirect_o,  // if this is a branch instruction and branch miss predicted
    output reg[`REG_BUS_D] branch_redirect_pc_o,

    output reg branch_tag_o,
    output reg branch_slot_end_o,

    output reg csr_we_o,
    output reg[`REG_BUS_D] csr_wa_o,
    output reg[`REG_BUS_D] csr_wd_o,

    output reg rd_we_o,
    output reg[`REG_BUS_A] rd_a_o,
    output reg[`REG_BUS_D] rd_wd_o,

    output reg[`AluOpBus] uop_o,    // used in the lsu, for determine it is a load or store
    output reg[`REG_BUS_D] mem_a_o,
    output reg[`REG_BUS_D] mem_wd_o,

	// the accumulated exception if there are some
    output reg[31:0] exception_o);

    reg stallreq_for_div;

    assign pc_o = pc_i;
    assign ins_o = ins_i;
    assign branch_slot_end_o = branch_slot_end_i;

    // to identify call or ret
    wire[4:0] rs1_w = ins_i[19:15];

    assign csr_we_o = csr_we_i;
    assign csr_wa_o = csr_addr_i;

    assign rd_we_o = rd_we_i;
    assign rd_a_o = rd_wa_i;

    assign uop_o = uop_i;

    assign exception_o = exception_i;

    wire[`REG_BUS_D] pc_plus_4_w;
    assign pc_plus_4_w = pc_i + 4;    //for jar or jalr, the rd should be updated to pc + 4

    wire[`REG_BUS_D] pc_add_imm_w;
    assign pc_add_imm_w = pc_i + imm_i;

    wire[`REG_BUS_D] rs1_add_imm_w;
    assign rs1_add_imm_w = rs1_d_i + imm_i;

    wire[`REG_BUS_D] rs1_or_imm_w;
    assign  rs1_or_imm_w = rs1_d_i | imm_i;

    wire[`REG_BUS_D] rs1_and_imm_w;
    assign  rs1_and_imm_w = rs1_d_i & imm_i;

    wire[`REG_BUS_D] rs1_xor_imm_w;
    assign  rs1_xor_imm_w = rs1_d_i ^ imm_i;

    wire[`REG_BUS_D] rs1_add_rs2_w;
    assign rs1_add_rs2_w = rs1_d_i + rs2_d_i;

    wire[`REG_BUS_D] rs1_sub_rs2_w;
    assign rs1_sub_rs2_w = rs1_d_i - rs2_d_i;

    wire[`REG_BUS_D] rs1_and_rs2_w;
    assign  rs1_and_rs2_w = rs1_d_i & rs2_d_i;

    wire[`REG_BUS_D] rs1_or_rs2_w;
    assign  rs1_or_rs2_w = rs1_d_i |rs2_d_i;

    wire[`REG_BUS_D] rs1_xor_rs2_w;
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
        if (rs_n_i == `RST_EN) begin
            mem_a_o = `ZERO_WORD;
            mem_wd_o = `ZERO_WORD;
        end else begin
            case (uop_i)
                /* ---------------------L-type instruction --------------*/
                `UOP_LB, `UOP_LBU, `UOP_LH, `UOP_LHU, `UOP_LW:  begin
                    // lb rd,offset(rs1_w)  :  x[rd] = sext(M[x[rs1_w] + sext(offset)][7:0])
                    // lbu rd,offset(rs1_w)  :  x[rd] = M[x[rs1_w] + sext(offset)][7:0]
                    // lh rd,offset(rs1_w)  :  x[rd] = sext(M[x[rs1_w] + sext(offset)][15:0])
                    // lhu rs2,offset(rs1_w)  :  x[rd] = M[x[rs1_w] + sext(offset)][15:0]
                    // lw rd,offset(rs1_w)  :  x[rd] = sext(M[x[rs1_w] + sext(offset)][31:0])
//rs1_w+imm 作为所要加载数据的内存地址，输出到 LSU进行访存操作
                    mem_a_o = rs1_add_imm_w;
                end

                /* ---------------------S-type instruction --------------*/
                `UOP_SB, `UOP_SH, `UOP_SW:  begin
                    // sb rs2,offset(rs1_w)  :   M[x[rs1_w] + sext(offset)] = x[rs2][7:0]
                    // sh rs2,offset(rs1_w)  :   M[x[rs1_w] + sext(offset)] = x[rs2][15:0]
                    // sw rs2,offset(rs1_w)  :   M[x[rs1_w] + sext(offset)] = x[rs2][31:0]
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

    reg[`REG_BUS_D] arithmetic_result_r;
    reg[`REG_BUS_D] csr_result_r;
    reg[`REG_BUS_D] div_result_r;
    reg[`REG_BUS_D] jump_result_r;
    reg[`REG_BUS_D] logic_result_r;
    reg[`REG_BUS_D] mul_result_r;
    reg[`REG_BUS_D] shift_result_r;

    // handle csr instruction
    wire read_csr_enable;
    assign read_csr_enable = (uop_i == `UOP_CSRRW) || (uop_i == `UOP_CSRRWI) || (uop_i == `UOP_CSRRS)
                            || (uop_i == `UOP_CSRRSI) || (uop_i == `UOP_CSRRC) || (uop_i == `UOP_CSRRCI);

    // get the lastest csr value to update the rd
    always @ (*) begin
        csr_result_r = `ZERO_WORD;
        csr_raddr_o = `ZERO_WORD;
        if (read_csr_enable) begin
            // If rd=x0, then the instruction shall not read the CSR and shall not cause any
            // of the side effects that might occur on a CSR read.
            // read the csr
            csr_raddr_o = csr_addr_i;
            csr_result_r = csr_rdata_i;
            // check the data dependance, if mem stage is updating the csr, use the lastest value
            if ( mem_csr_we_i == `WRITE_ENABLE && mem_csr_wa_i == csr_addr_i) begin
                csr_result_r = mem_csr_wd_i;
            // check the data dependance, if wb stage is updating the csr, use the lastest value
            end else if ( wb_csr_we_i == `WRITE_ENABLE && wb_csr_wa_i == csr_addr_i) begin
                csr_result_r = wb_csr_wd_i;
            end
        end
    end

    // calculate the data to write to the csr
    always @ (*) begin
        if (rs_n_i == `RST_EN) begin
            csr_wa_o = `ZERO_WORD;
            csr_wd_o = `ZERO_WORD;
        end else begin
            csr_wd_o = `ZERO_WORD;
            case (uop_i)
                `UOP_CSRRW: begin
                    // csrrw rd,offset,rs1_w  :   t = CSRs[csr]; CSRs[csr] = x[rs1_w]; x[rd] = t
                    csr_wd_o = rs1_d_i;
                end

                `UOP_CSRRWI: begin
                    // csrrwi rd,offset,uimm  :  x[rd] = CSRs[csr]; CSRs[csr] = zimm
                    csr_wd_o = imm_i;
                end

                `UOP_CSRRS: begin
                    // csrrs rd,offset,rs1_w  :   t = CSRs[csr]; CSRs[csr] = t | x[rs1_w]; x[rd] = t
                    csr_wd_o = rs1_d_i | csr_result_r;
                end

                `UOP_CSRRSI: begin
                   // csrrsi rd,offset,uimm  :  t = CSRs[csr]; CSRs[csr] = t | zimm; x[rd] = t
                    csr_wd_o = imm_i | csr_result_r;
                end

                `UOP_CSRRC: begin
                    // csrrc rd,offset,rs1_w  :   t = CSRs[csr]; CSRs[csr] = t &∼x[rs1_w]; x[rd] = t
                    csr_wd_o = csr_result_r & (~rs1_d_i);
                end

                `UOP_CSRRCI: begin
                    // csrrci rd,offset,uimm  :  t = CSRs[csr]; CSRs[csr] = t &∼zimm; x[rd] = t
                    csr_wd_o = csr_result_r & (~imm_i);
                end

                default: begin

                end
            endcase
        end  //else begin
    end  //always

    // jump and branch instructions
    always @ (*) begin
      if (rs_n_i == `RST_EN)
      begin
        jump_result_r = `ZERO_WORD;

        branch_request_o = 1'b0;
        branch_is_taken_o = 1'b0;
        branch_is_call_o = 1'b0;
        branch_is_ret_o = 1'b0;
        branch_is_jmp_o = 1'b0;
        branch_target_o = `ZERO_WORD;

        branch_redirect_o = 1'b0;
        branch_redirect_pc_o = `ZERO_WORD;;
        branch_tag_o = 1'b0;
      end
      else
      begin
        jump_result_r = `ZERO_WORD;

        branch_request_o = 1'b0;
        branch_is_taken_o = 1'b0;
        branch_is_call_o = 1'b0;
        branch_is_ret_o = 1'b0;
        branch_is_jmp_o = 1'b0;
        branch_target_o = `ZERO_WORD;

        branch_redirect_o = 1'b0;
        branch_redirect_pc_o = `ZERO_WORD;;
        branch_tag_o = 1'b0;
        case (uop_i)
          `UOP_JAL:
          begin
            jump_result_r = pc_plus_4_w;  //save to rd
//JAL 绝对跳转指令，产生跳转，跳转后的目标地址为当前PC值+imm
            {branch_is_taken_o, branch_target_o} = {1'b1, pc_add_imm_w};
/* A JAL instruction should push the return address onto a return-address stack (RAS) only when rd=x1/x5.*/
//call伪指令有近跳转 (JAL)版本？
            if ((rd_wa_i == 5'd1) || (rd_wa_i == 5'd5)) branch_is_call_o = 1'b1;
          //普通JAL 指令（不是由call伪指令产生的调用指令，无需记录至 RAS）
            else branch_is_jmp_o = 1'b1;
          end
          `UOP_JALR: begin
            jump_result_r = pc_plus_4_w;
          //JALR为绝对跳转指令，产生跳转，跳转的地址为rs1 指向寄存器的值+imm
            {branch_is_taken_o, branch_target_o} = {1'b1, rs1_d_i + imm_i};
          //https://en.wikichip.org/wiki/risc-v/registers
          //https://blog.csdn.net/Caramel_biscuit/article/details/127414919
          //伪指令
          //call imm:auipc x1, imm[31:12]/jarl x1, x1, imm[11:0]
          //将imm[31:12]加载至x1中，跳转至x1+imm[11:0]指向的地址（即 imm），x1保存当前pc+4
          //ret:jarl x0, x1, 0##跳转至x1寄存器的值指向的位置
          //当rd为link时，将更新前的PC保存至rd，以可以跳转回对应地址继续执行，对应地址需要入栈保护
          //当rs1 为link时，跳转至rs1 寄存器的值
          /*
            //JALR指令中对应字段值，与RAS 的Push/Pop行为对应关系
            No rd    rs1   rs1=rd RAS      Description
            01 !link !link -      None     普通跳转
            02 !link link  -      Pop      ret 伪指令中的jarl x0, x1, 0
            03 link  !link -      Push     call伪指令中的 auipc x1, imm
            04 link  link  0      Push&Pop call/ret伪指令分别使用x1/5
            05 link  link  1      Push     call伪指令中的jarl x1, x1, imm
          */
            if (rd_wa_i == 5'd1 || rd_wa_i == 5'd5)
              if (rs1_w == 5'd1 || rs1_w == 5'd5) //rs1 is linker reg as well
                if (rd_wa_i == rs1_w) branch_is_call_o = 1'b1;//05
                else {branch_is_call_o, branch_is_ret_o} = 2'b11;//04
              else branch_is_call_o = 1'b1; //03
            else
              if (rs1_w == 5'd1 || rs1_w == 5'd5) branch_is_ret_o = 1'b1; //02
            //普通的JALR指令（不是由call/ret产生的）
              else branch_is_jmp_o = 1'b1;//01
          end
        //分支指令，其is_call/ret/jmp/标志均为 0
          `UOP_BEQ: {branch_is_taken_o, branch_target_o} = {rs1_eq_rs2_w, pc_add_imm_w};//rs1_w/2/中的源操作数相等，产生跳转
          `UOP_BNE: {branch_is_taken_o, branch_target_o} = {~rs1_eq_rs2_w, pc_add_imm_w}; //rs1_w/2/中的源操作数不等，产生跳转
          `UOP_BGE: {branch_is_taken_o, branch_target_o} = {rs1_ge_rs2_signed_w, pc_add_imm_w}; //rs1_w>=rs2，产生跳转
          `UOP_BGEU: {branch_is_taken_o, branch_target_o} = {rs1_ge_rs2_unsigned_w, pc_add_imm_w};//rs1_w>=rs2，产生跳转
          `UOP_BLT: {branch_is_taken_o, branch_target_o} = {~rs1_ge_rs2_signed_w, pc_add_imm_w};// rs1_w<rs2，产生跳转
          `UOP_BLTU: {branch_is_taken_o, branch_target_o} = {~rs1_ge_rs2_unsigned_w, pc_add_imm_w}; // rs1_w<rs2，产生跳转
          default:
          begin
          end
        endcase
        if (
          (uop_i == `UOP_JAL) || (uop_i == `UOP_JALR) || 
          (uop_i == `UOP_BEQ) || (uop_i == `UOP_BNE) || 
          (uop_i == `UOP_BGE) || (uop_i == `UOP_BGEU) || 
          (uop_i == `UOP_BLT) || (uop_i == `UOP_BLTU))
        begin
          branch_request_o = 1'b1;//当前指令为分支指令
          if (branch_is_taken_o)//实际发生跳转
          //BP预测不发生跳转，或者BP预测的跳转地址与实际跳转地址不一致，预测失败
          //分支需要重定向(redirect)至 branch_target_o，进行修正
            if ((~next_taken_i) || (next_pc_i != branch_target_o))
            begin
              branch_redirect_o = `Branch;
              branch_redirect_pc_o = branch_target_o;
              branch_tag_o = branch_redirect_o;  // indicate a branch started
              $display("BP Miss(pc=%h, next_take=%d, branch_taken=%d, next_pc=%h, branch_target=%h is_call=%d, is_ret=%d, is_jmp=%d)", pc_i, next_taken_i, branch_is_taken_o, next_pc_i, branch_target_o, branch_is_call_o, branch_is_ret_o, branch_is_jmp_o);
            end
          else//实际未发生跳转
          //BP预测发生跳转，预测失败
            if (next_taken_i)
            begin
              branch_redirect_o = `Branch;
              branch_redirect_pc_o = pc_i + 4;
              branch_tag_o = branch_redirect_o;  // indicate a branch started
              $display("miss predicted, pc=%h, branch_taken=%d, next_take=%d, next_pc=%h", pc_i, branch_is_taken_o, next_taken_i, next_pc_i);
            end
        end
      end
    end

  //Logic
    always @ (*)
      if (rs_n_i == `RST_EN) logic_result_r = `ZERO_WORD;
      else
        case (uop_i)
          `UOP_LUI: logic_result_r = imm_i;
          `UOP_AUIPC: logic_result_r = pc_add_imm_w;
          `UOP_SLTI: logic_result_r = {32{(~rs1_ge_imm_signed_w)}} & 32'h1;
          `UOP_SLTIU: logic_result_r = {32{(~rs1_ge_imm_unsigned_w)}} & 32'h1;
          `UOP_ANDI: logic_result_r = rs1_and_imm_w;
          `UOP_ORI: logic_result_r = rs1_or_imm_w;
          `UOP_XORI: logic_result_r = rs1_xor_imm_w;
          `UOP_AND: logic_result_r = rs1_and_rs2_w;
          `UOP_OR: logic_result_r = rs1_or_rs2_w;
          `UOP_XOR: logic_result_r = rs1_xor_rs2_w;
          `UOP_SLT: logic_result_r = {32{(~rs1_ge_rs2_signed_w)}} & 32'h1;
          `UOP_SLTU: logic_result_r = {32{(~rs1_ge_rs2_unsigned_w)}} & 32'h1;
          default: logic_result_r = `ZERO_WORD;
        endcase

  //Shift
    always @ (*)
      if (rs_n_i == `RST_EN) shift_result_r = `ZERO_WORD;
      else
        case (uop_i)
          `UOP_SLLI: shift_result_r = rs1_d_i << imm_i;
          `UOP_SRLI: shift_result_r = rs1_d_i >> imm_i;
          `UOP_SRAI: shift_result_r = (sri_shift_w & sri_shift_mask_w) | ({32{rs1_d_i[31]}} & (~sri_shift_mask_w));
          `UOP_SLL: shift_result_r = rs1_d_i << rs2_d_i[4:0];
          `UOP_SRL: shift_result_r = rs1_d_i >> rs2_d_i[4:0];
        //算数右移，高位补符号位（右移1 位，算数除 2）
          `UOP_SRA: shift_result_r = (sr_shift_w & sr_shift_mask_w) | ({32{rs1_d_i[31]}} & (~sr_shift_mask_w));
          default: shift_result_r = `ZERO_WORD;
        endcase

  //Arithmetic
    always @ (*)
      if (rs_n_i == `RST_EN) arithmetic_result_r = `ZERO_WORD;
      else
        case (uop_i)
          `UOP_ADDI: arithmetic_result_r = rs1_add_imm_w;
          `UOP_ADD: arithmetic_result_r = rs1_add_rs2_w;
          `UOP_SUB: arithmetic_result_r = rs1_sub_rs2_w;
          default: arithmetic_result_r = `ZERO_WORD;
        endcase

    reg[`REG_BUS_D] mul_op1_r;
    reg[`REG_BUS_D] mul_op2_r;

    wire[`REG_BUS_DOUBLE] mul_result_w;
    wire[`REG_BUS_DOUBLE] mul_result_invert_w;

    assign mul_result_w = mul_op1_r * mul_op2_r;
    assign mul_result_invert_w = ~mul_result_w + 1;

    reg[`REG_BUS_D] rs1_d_invert_r;
    reg[`REG_BUS_D] rs2_d_invert_r;

    assign rs1_d_invert_r = ~rs1_d_i + 1;
    assign rs2_d_invert_r = ~rs2_d_i + 1;

    always @ (*) begin
      case (uop_i)
        `UOP_MULT, `UOP_MULHU: {mul_op1_r, mul_op2_r} = {rs1_d_i, rs2_d_i};
        `UOP_MULHSU: {mul_op1_r, mul_op2_r} = {rs1_d_i[31] ? rs1_d_invert_r : rs1_d_i, rs2_d_i};
        `UOP_MULH: {mul_op1_r, mul_op2_r} = {rs1_d_i[31] ? rs1_d_invert_r : rs1_d_i, rs2_d_i[31] ? rs2_d_invert_r : rs2_d_i};
        default: {mul_op1_r, mul_op2_r} = {rs1_d_i, rs2_d_i};
      endcase
    end

    always @ (*)
      if (rs_n_i == `RST_EN) mul_result_r = `ZERO_WORD;
      else
        case (uop_i)
          `UOP_MULT: mul_result_r = mul_result_w[31:0];
          `UOP_MULHU: mul_result_r = mul_result_w[63:32];
          `UOP_MULH:
              case ({rs1_d_i[31], rs2_d_i[31]})
                2'b00, 2'b11: mul_result_r = mul_result_w[63:32];
                default: mul_result_r = mul_result_invert_w[63:32];
              endcase
          `UOP_MULHSU: mul_result_r = rs1_d_i[31] ? mul_result_invert_w[63:32] : mul_result_w[63:32];
          default: mul_result_r = `ZERO_WORD;
        endcase

    // stall the pipeline if needed
    always @ (*)
      stall_req_o = stallreq_for_div;  //只有div指令才需要停止流水线

    // division and rem instructions
    always @ (*) begin
        if (rs_n_i == `RST_EN) begin
            stallreq_for_div = `NO_STOP;
            dividend_o = `ZERO_WORD;
            divisor_o = `ZERO_WORD;
            div_start_o = `DIV_STOP;
            div_signed_o = 1'b0;
        end else begin
            stallreq_for_div = `NO_STOP;
            dividend_o = `ZERO_WORD;
            divisor_o = `ZERO_WORD;
            div_start_o = `DIV_STOP;
            div_signed_o = 1'b0;
            case (uop_i)
                `UOP_DIV:        begin
                    // div rd,rs1_w,rs2  :   x[rd] = x[rs1_w] /s x[rs2]
                    if (div_ready_i == `DIV_RESULT_NOT_READY) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_START;
                        div_signed_o = 1'b1;       // signed division
                        stallreq_for_div = `STOP;  // stop the pipeline
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_STOP;
                        div_signed_o = 1'b1;
                        stallreq_for_div = `NO_STOP;  // resume the pipeline
                        div_result_r = div_result_i[31:0]; // get the quotient
                    end
                end

               `UOP_DIVU:       begin
                    // divu rd,rs1_w,rs2  :   x[rd] = x[rs1_w] /u x[rs2]
                    if (div_ready_i == `DIV_RESULT_NOT_READY) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_START;
                        div_signed_o = 1'b0;        // unsigned division
                        stallreq_for_div = `STOP;
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_STOP;
                        div_signed_o = 1'b0;
                        stallreq_for_div = `NO_STOP;
                        div_result_r = div_result_i[31:0];
                    end
                end

                `UOP_REM: begin
                    // rem rd,rs1_w,rs2  :    x[rd] = x[rs1_w] %s x[rs2]
                    if (div_ready_i == `DIV_RESULT_NOT_READY) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_START;
                        div_signed_o = 1'b1;
                        stallreq_for_div = `STOP;
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_STOP;
                        div_signed_o = 1'b1;
                        stallreq_for_div = `NO_STOP;
                        div_result_r = div_result_i[63:32]; // get the remainder
                    end
                end

                `UOP_REMU: begin
                    // remu rd,rs1_w,rs2  :   x[rd] = x[rs1_w] %u x[rs2]
                   if (div_ready_i == `DIV_RESULT_NOT_READY) begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_START;
                        div_signed_o = 1'b0;
                        stallreq_for_div = `STOP;
                    end else begin
                        dividend_o = rs1_d_i;
                        divisor_o = rs2_d_i;
                        div_start_o = `DIV_STOP;
                        div_signed_o = 1'b0;
                        stallreq_for_div = `NO_STOP;
                        div_result_r = div_result_i[63:32];
                    end
                end

                default: begin
                end
            endcase
        end // else begin
    end  //always

  //选择对应类型的运算结果
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
        default: rd_wd_o = `ZERO_WORD;
      endcase
    end

  endmodule