  `include "defines.v"

  module id(
    input wire n_rst_i,

    /* ------- signals from the if_id unit --------*/
    input wire[`InstAddrBus] pc_i,
    input wire[`InstBus] ins_i,
    input wire branch_slot_end_i,

    input wire[`REG_BUS_D] next_pc_i,
    input wire next_taken_i,

  //控制GPR 读取，以获得源操作数
    output reg rs1_re_o,
    output reg rs2_re_o,
    output reg[`REG_BUS_A] rs1_ra_o,
    output reg[`REG_BUS_A] rs2_ra_o,
  //GPR 响应上述读请求，返回的源操作数的值（组合逻辑，立即返回）
    input wire[`REG_BUS_D] rs1_rd_i,
    input wire[`REG_BUS_D] rs2_rd_i,

    /* ---------signals from exu -----------------*/
    input wire branch_redirect_i,

    // some neccessary signals forwarded from exe unit, to detect data dependance.
    // if the exe unis is executing load instruction, and the rd_w is one of the rs,
    // notify the ctrl unit to stall pipeline
  //当前时刻，EX阶段执行的指令微码
    input wire[`AluOpBus] ex_uop_i,
  //EX阶段是否可以得到的rd寄存器的的数值，可以时，反馈具体值以及rd地址
  //EX阶段得到rd最新值反馈至ID阶段，以进行rs的 Forward更新
    // the rd_w info fowarded from ex to determine the data dependance
    input wire ex_rd_we_i,//是否更新rd（Load指令时，LSU 阶段才能获得rd的值，EX阶段不更新rd）
    input wire[`REG_BUS_A] ex_rd_wa_i,
    input wire[`REG_BUS_D] ex_rd_wd_i,
  //当前时刻，LSU 阶段执行Load的结果
  //当we_i有效时，Load访存读完成，rd准备写回 GPR
    input wire mem_rd_we_i,
    input wire[`REG_BUS_A] mem_rd_wa_i,
    input wire[`REG_BUS_D] mem_rd_wd_i,


    /* ------- signals to the ctrl  ---------------*/
    output wire stall_req_o,

    /* ------- signals to the execution unit --------*/
    output reg[`REG_BUS_D] pc_o,
    output reg[`REG_BUS_D] ins_o,
    output reg[`REG_BUS_D] next_pc_o,
    output reg next_taken_o,
    output reg branch_slot_end_o,

    output reg[`REG_BUS_D] imm_o,

    output reg csr_we_o,
    output reg[`REG_BUS_D] csr_addr_o,

    output reg[`REG_BUS_D] rs1_data_o,
    output reg[`REG_BUS_D] rs2_data_o,
    output reg rd_we_o,
    output reg[`REG_BUS_A] rd_wa_o,

    output reg[`AluSelBus] alusel_o,
    output reg[`AluOpBus] uop_o,

    output wire[31:0] exception_o);

    wire[6:0] opcode_w = ins_i[6:0];
    wire[4:0] rd_w = ins_i[11:7];
    wire[2:0] fun3 = ins_i[14:12];
    wire[4:0] rs1_w = ins_i[19:15];
    wire[4:0] rs2_w = ins_i[24:20];
    wire[6:0] fun7 = ins_i[31:25];

    reg[`REG_BUS_D] imm_r;
    reg csr_we;
    reg[`REG_BUS_D] csr_addr;

    reg ins_valid_r;

    reg rs1_load_depend;
    reg rs2_load_depend;
    wire pre_ins_is_load;

    reg excepttype_mret;
    reg excepttype_ecall;
    reg excepttype_ebreak;
    reg excepttype_illegal_inst;

    assign stall_req_o = rs1_load_depend | rs2_load_depend;

    assign pre_ins_is_load = ((ex_uop_i == `UOP_LB) || (ex_uop_i == `UOP_LBU) || (ex_uop_i == `UOP_LH) || (ex_uop_i == `UOP_LHU) || (ex_uop_i == `UOP_LW)) ? 1'b1 : 1'b0;

    assign pc_o = pc_i;
    assign imm_o = imm_r;

    // pass down the branch prediction info
    assign next_pc_o = next_pc_i;
    assign next_taken_o = next_taken_i;
    assign branch_slot_end_o = branch_slot_end_i;

    assign csr_we_o = csr_we;
    assign csr_addr_o = csr_addr;

    assign rs1_ra_o = rs1_w;
    assign rs2_ra_o = rs2_w;

    //exception ={ misaligned_load, misaligned_store, illegal_inst, misaligned_inst,  ebreak, ecall,  mret}
    assign exception_o = {28'b0, excepttype_illegal_inst, excepttype_ebreak, excepttype_ecall, excepttype_mret};

    always @ (*) begin
      if (n_rst_i == `RST_EN) begin
            //reset to default
            ins_o = `NOP_INS;
            rs1_re_o = 1'b0;
            rs2_re_o = 1'b0;
            rs1_ra_o = `NOP_REG_A;
            rs2_ra_o = `NOP_REG_A;

            imm_r = `ZERO_WORD;

            csr_we = `WRITE_DISABLE;
            csr_addr = `ZERO_WORD;

            rs1_data_o = `ZERO_WORD;
            rs2_data_o = `ZERO_WORD;

            {rd_we_o, rd_wa_o} = {`WRITE_DISABLE, `NOP_REG_A};

            alusel_o = `EXE_TYPE_NOP;
            uop_o = `UOP_NOP;

            excepttype_ecall = `False_v;
            excepttype_mret = `False_v;
            excepttype_ebreak = `False_v;
            excepttype_illegal_inst = `False_v;

            ins_valid_r = `INS_VALID;
        end
        else if (branch_redirect_i)
        begin  // branch detected in the exe unit, replaced with a NOP
            // set the default
            ins_o = `NOP_INS;
            {rs1_re_o, rs1_data_o} = {1'b0, `ZERO_WORD};
            {rs2_re_o, rs2_data_o} = {1'b0, `ZERO_WORD};

            imm_r = `ZERO_WORD;

            csr_we = `WRITE_DISABLE;
            csr_addr = `ZERO_WORD;

            rd_we_o = `WRITE_DISABLE;
            rd_wa_o = `NOP_REG_A;

            alusel_o = `EXE_TYPE_NOP;
            uop_o = `UOP_NOP;

            excepttype_ecall = `False_v;
            excepttype_mret = `False_v;
            excepttype_ebreak = `False_v;
            excepttype_illegal_inst = `False_v;

            ins_valid_r = `INS_VALID;
        end
      else
      begin
        ins_o = ins_i;
            // set the default
        {rs1_re_o, rs1_data_o} = {1'b0, `ZERO_WORD};
        {rs2_re_o, rs2_data_o} = {1'b0, `ZERO_WORD};

            imm_r = `ZERO_WORD;

            csr_we = `WRITE_DISABLE;
            csr_addr = `ZERO_WORD;

        {rd_we_o, rd_wa_o} = {`WRITE_DISABLE, `NOP_REG_A};

            alusel_o = `EXE_TYPE_NOP;
            uop_o = `UOP_NOP;

            excepttype_ecall = `False_v;
            excepttype_mret = `False_v;
            excepttype_ebreak = `False_v;
            excepttype_illegal_inst = `False_v;

            ins_valid_r = `INS_INVALID;

        case (opcode_w)
          `INS_OPCODE_LUI:
          begin
          //由指令中解析 imm、rd地址，将imm 赋值给rd地址
          //由于 imm就绪，we有效，可立即写入（EX在下一周期执行写操作）
            imm_r = {ins_i[31:12], 12'd0};
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            {ins_valid_r, alusel_o, uop_o} = {`INS_VALID, `EXE_TYPE_LOGIC, `UOP_LUI};
          end
          `INS_OPCODE_AUIPC:
          begin
            imm_r = {ins_i[31:12], 12'd0};
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            {ins_valid_r, alusel_o, uop_o} = {`INS_VALID, `EXE_TYPE_LOGIC, `UOP_AUIPC};
          end
          `INS_OPCODE_JAL:
          begin
          //跳转+-1M
            imm_r = {{12{ins_i[31]}}, ins_i[19:12], ins_i[20], ins_i[30:21], 1'b0};
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            {ins_valid_r, alusel_o, uop_o} = {`INS_VALID, `EXE_TYPE_BRANCH, `UOP_JAL};
          end
          `INS_OPCODE_JALR:
          begin
            imm_r = {{20{ins_i[31]}}, ins_i[31:20]};
          //读取rs1 中的值，作为pc的基址
            rs1_re_o = 1'b1;
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            {ins_valid_r, alusel_o, uop_o} = {`INS_VALID, `EXE_TYPE_BRANCH, `UOP_JALR};
          end
          `INS_OPCODE_BRANCH:
          begin
              // imm_r(12,10:5):[31:25], rs2_w:[24:20], rs1_w:[19:15], fun3:[14:12], imm_r(4:1,11):[11:7], opcode_w[6:0]
              // Branch if equal (beq), not equal (bne), less than (blt), less than unsigned (bltu), greater or equal (bge),
              // greater or equal unsigned (bgeu).
              // These instructions perform the designated comparison between two registers and,
              // if the condition is satisfied, transfer control to the address offset provided in the 12-bit signed immediate value.
            imm_r = {{20{ins_i[31]}}, ins_i[7], ins_i[30:25], ins_i[11:8], 1'b0};
          //条件跳转，读取rs1/2/，获取比较的源操作数
            {rs1_re_o, rs2_re_o} = 2'b11;
            {ins_valid_r, alusel_o} = {`INS_VALID, `EXE_TYPE_BRANCH};
            case (fun3)
              `INS_BEQ: uop_o = `UOP_BEQ;
              `INS_BNE: uop_o = `UOP_BNE;
              `INS_BGE: uop_o = `UOP_BGE;
              `INS_BGEU: uop_o = `UOP_BGEU;
              `INS_BLT: uop_o = `UOP_BLT;
              `INS_BLTU: uop_o = `UOP_BLTU;
              default:
              begin
                $display("Invalid Fun3 In Branch Type(pc=%h, ins=%h, fun3=%d)", pc_i, ins_i, fun3);
                ins_valid_r = `INS_INVALID;
              end
            endcase
          end
          `INS_OPCODE_LOAD:
          begin
            imm_r = {{20{ins_i[31]}}, ins_i[31:20]};
            rs1_re_o = 1'b1;
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            {ins_valid_r, alusel_o} = {`INS_VALID, `EXE_TYPE_LOAD_STORE};
            case (fun3)
              `INS_LB: uop_o = `UOP_LB;
              `INS_LBU: uop_o = `UOP_LBU;
              `INS_LH: uop_o = `UOP_LH;
              `INS_LHU: uop_o = `UOP_LHU;
              `INS_LW: uop_o = `UOP_LW;
              default:
              begin
                $display("Invalid Fun3 In Load Type(pc=%h, ins=%h, fun3=%d)", pc_i, ins_i, fun3);
                ins_valid_r = `INS_INVALID;
              end
            endcase
          end
          `INS_OPCODE_STORE:
          begin
            imm_r = {{20{ins_i[31]}}, ins_i[31:25], ins_i[11:7]};
          //rs1/2/分别记录存储的地址以及数据值
            {rs1_re_o, rs2_re_o} = 2'b11;
            {ins_valid_r, alusel_o} = {`INS_VALID, `EXE_TYPE_LOAD_STORE};
            case (fun3)
              `INS_SB: uop_o = `UOP_SB;
              `INS_SH: uop_o = `UOP_SH;
              `INS_SW: uop_o = `UOP_SW;
              default:
              begin
                $display("Invalid Fun3 In Store Type(pc=%h, inst=%h, fun3=%d)", pc_i, ins_i, fun3);
                ins_valid_r = `INS_INVALID;
              end
            endcase
          end
          `INS_OPCODE_IMM:
          begin
            imm_r = {{20{ins_i[31]}}, ins_i[31:20]};
            rs1_re_o = 1'b1;
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            ins_valid_r = `INS_VALID;
            case (fun3)
              `INS_ADDI: {alusel_o, uop_o} = {`EXE_TYPE_ARITHMETIC, `UOP_ADDI};
            //rs1 中的值小于立即数，rd=1
              `INS_SLTI: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_SLTI};
              `INS_SLTIU: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_SLTIU};
              `INS_ANDI: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_ANDI};
              `INS_ORI: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_ORI};
              `INS_XORI: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_XORI};
              `INS_SLLI:
              begin
                imm_r = {27'b0, ins_i[24:20]};
                {alusel_o, uop_o} = {`EXE_TYPE_SHIFT, `UOP_SLLI};
              end
              `INS_SRLI_SRAI:
              begin
                imm_r = {27'b0, ins_i[24:20]};
                if (fun7[6:1] == 6'b000000) {alusel_o, uop_o} = {`EXE_TYPE_SHIFT, `UOP_SRLI};
                else if (fun7[6:1] == 6'b010000) {alusel_o, uop_o} = {`EXE_TYPE_SHIFT, `UOP_SRAI};
                else
                begin
                  $display("Invalid Fun7 (%b) For SRI(pc=%h, inst=%h, fun3=%d)", fun7[6:1], pc_i, ins_i, fun3);
                  ins_valid_r = `INS_INVALID;
                end
              end
              default:
              begin
                $display("Invalid Fun3 In I Type(pc=%h, inst=%h, fun3=%d)", pc_i, ins_i, fun3);
                ins_valid_r = `INS_INVALID;
              end
            endcase
          end
          `INS_OPCODE_REG:
          begin
            {rs1_re_o, rs2_re_o} = 2'b11;
            {rd_we_o, rd_wa_o} = {`WriteEnable, rd_w};
            ins_valid_r = `INS_VALID;
            if ((fun7 == 7'b0000000) || (fun7 == 7'b0100000))
              case (fun3)
                  `INS_ADD_SUB:
                    if (fun7 == 7'b0000000) {alusel_o, uop_o} = {`EXE_TYPE_ARITHMETIC, `UOP_ADD};
                    else {alusel_o, uop_o} = {`EXE_TYPE_ARITHMETIC, `UOP_SUB};
                  `INS_AND: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_AND};
                  `INS_OR: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_OR};
                  `INS_XOR: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_XOR};
                  `INS_SLL: {alusel_o, uop_o} = {`EXE_TYPE_SHIFT, `UOP_SLL};
                  `INS_SRL_SRA:
                      if (fun7 == 7'b0000000) {alusel_o, uop_o} = {`EXE_TYPE_SHIFT, `UOP_SRL};
                      else {alusel_o, uop_o} = {`EXE_TYPE_SHIFT, `UOP_SRA};
                  `INS_SLT: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_SLT};
                  `INS_SLTU: {alusel_o, uop_o} = {`EXE_TYPE_LOGIC, `UOP_SLTU};
                  default:
                  begin
                    $display("Invalid Fun3 In R Type(pc=%h, inst=%h, fun3=%d)", pc_i, ins_i, fun3);
                    ins_valid_r = `INS_INVALID;
                  end
              endcase
            else if (fun7 == 7'b0000001)
              case (fun3)
                `INS_MUL: {alusel_o, uop_o} = {`EXE_TYPE_MUL, `UOP_MULT};
                `INS_MULH: {alusel_o, uop_o} = {`EXE_TYPE_MUL, `UOP_MULH};
                `INS_MULHU: {alusel_o, uop_o} = {`EXE_TYPE_MUL, `UOP_MULHU};
                `INS_MULHSU: {alusel_o, uop_o} = {`EXE_TYPE_MUL, `UOP_MULHSU};
                `INS_DIV: {alusel_o, uop_o} = {`EXE_TYPE_DIV, `UOP_DIV};
                `INS_DIVU: {alusel_o, uop_o} = {`EXE_TYPE_DIV, `UOP_DIVU};
                `INS_REM: {alusel_o, uop_o} = {`EXE_TYPE_DIV, `UOP_REM};
                `INS_REMU: {alusel_o, uop_o} = {`EXE_TYPE_DIV, `UOP_REMU};
                default:
                begin
                  $display("Invalid Fun3 In R Type(pc=%h, inst=%h, fun3=%d)", pc_i, ins_i, fun3);
                  ins_valid_r = `INS_VALID;
                end
              endcase
            else
            begin
              $display("Invalid Fun7 In R Type(pc=%h, inst=%h, fun3=%d)", pc_i, ins_i, fun3);
              ins_valid_r = `INS_INVALID;
            end
          end

/*-----------------------------------decode Type CSR instruction, started -------------------------------------------------------*/
                `INS_OPCODE_CSR: begin
                    // csr[31:20], rs1_w:[19:15], fun3[14:12], opcode_w[6:0] = 7'b1110011
                    // csr[31:20], uimm[19:15], fun3[14:12], opcode_w[6:0] = 7'b1110011
                    csr_addr = {20'h0, ins_i[31:20]};
                    imm_r = {27'b0, ins_i[19:15]};
                    rd_wa_o = rd_w;
                    ins_valid_r = `INS_VALID;

                    case (fun3)
                        `INS_CSRRW: begin
                            // csrrw(csr read and write): Read the specified CSR into a destination register
                            // and write a source operand value to the register
                            // if rd_w=x0, then the instruction shall not read the CSR
                            // csrrw rd_w,offset,rs1_w  :   t = CSRs[csr]; CSRs[csr] = x[rs1_w]; x[rd_w] = t
                            rs1_re_o = 1'b1;
                            // rs2_w is not required
                            rd_we_o = `WriteEnable;
                            csr_we = `WriteEnable;

                            alusel_o = `EXE_TYPE_CSR;
                            uop_o = `UOP_CSRRW;
                        end

                        `INS_CSRRWI: begin
                            // csrrw(csr read and write): Read the specified CSR into a destination register
                            // and write a source operand value to the register
                            // csrrwi rd_w,offset,uimm  :  x[rd_w] = CSRs[csr]; CSRs[csr] = zimm
                            //zero-extending a 5-bit unsigned immediate (uimm[4:0]) to  an XLEN-bit value
                            // no rs required
                            rd_we_o = `WriteEnable;
                            csr_we = `WriteEnable;

                            alusel_o = `EXE_TYPE_CSR;
                            uop_o = `UOP_CSRRWI;
                        end

                        `INS_CSRRS: begin
                            // CSRRC(CSR read and set): Read the specified CSR into a destination register and
                            // set any 1 bit in the source operand in the register
                            // csrrs rd_w,offset,rs1_w  :   t = CSRs[csr]; CSRs[csr] = t | x[rs1_w]; x[rd_w] = t
                            rs1_re_o = 1'b1;
                            // rs2_w is not required
                            rd_we_o = `WriteEnable;
                            csr_we = `WriteEnable;

                            alusel_o = `EXE_TYPE_CSR;
                            uop_o = `UOP_CSRRS;
                        end

                        `INS_CSRRSI: begin
                            // CSRRC(CSR read and set): Read the specified CSR into a destination register and
                            // set any 1 bit in the source operand in the register
                            // csrrsi rd_w,offset,uimm  :  t = CSRs[csr]; CSRs[csr] = t | zimm; x[rd_w] = t

                            //zero-extending a 5-bit unsigned immediate (uimm[4:0]) to  an XLEN-bit value
                            // no rs required
                            rd_we_o = `WriteEnable;
                            csr_we = `WriteEnable;

                            alusel_o = `EXE_TYPE_CSR;
                            uop_o = `UOP_CSRRSI;
                        end

                        `INS_CSRRC: begin
                            // CSRRC(CSR read and clear): Read the specified CSR into a destination register and
                            // clear any 1 bit in the source operand in the register
                            // csrrc rd_w,offset,rs1_w  :   t = CSRs[csr]; CSRs[csr] = t &∼x[rs1_w]; x[rd_w] = t
                            rs1_re_o = 1'b1;
                            // rs2_w is not required
                            rd_we_o = `WriteEnable;
                            csr_we = `WriteEnable;

                            alusel_o = `EXE_TYPE_CSR;
                            uop_o = `UOP_CSRRC;
                        end

                        `INS_CSRRCI: begin
                            // CSRRC(CSR read and clear): Read the specified CSR into a destination register and
                            // clear any 1 bit in the source operand in the register
                            // csrrci rd_w,offset,uimm  :  t = CSRs[csr]; CSRs[csr] = t &∼zimm; x[rd_w] = t
                            //zero-extending a 5-bit unsigned immediate (uimm[4:0]) to  an XLEN-bit value
                            // no rs required
                            rd_we_o = `WriteEnable;
                            csr_we = `WriteEnable;

                            uop_o = `UOP_CSRRCI;
                            alusel_o = `EXE_TYPE_CSR;
                        end

                        /*----------csr special instruction, ecall, ebreak, eret, mret, sret, wfi, sfence.wma -------------*/
                        `INS_CSR_SPECIAL: begin
                            if ((fun7==7'b0000000) &&  (rs2_w == 5'b00000))  begin // INS_ECALL:

                                // {00000, 00, rs2_w(00000), rs1_w(00000), fun3(000), rd_w(00000), opcode_w = 7b'1110011 }
                                // Make a request to the supporting execution environment.
                                // When executed in U-mode, S-mode, or M-mode, it generates an
                                // environment-call-from-U-mode exception, environment-call-from-S-mode
                                // exception, or environment-call-from-M-mode exception, respectively, and
                                // performs no other operation.
                                // ecall  :   RaiseException(EnvironmentCall)
                                alusel_o = `EXE_TYPE_NOP;
                                uop_o = `UOP_ECALL;
                                excepttype_ecall= `True_v;
                            end

                            if ( (fun7==7'b0011000) && (rs2_w == 5'b00010)) begin   //INS_MRET
                                // {00110, 00, rs2_w(00010), rs1_w(00000), fun3(000), rd_w(00000), opcode_w = 7b'1110011 }
                                // Return from traps in M-mode, and MRET copies MPIE into MIE, then sets MPIE.
                                // mret  :   ExceptionReturn(Machine)
                                alusel_o = `EXE_TYPE_NOP;
                                uop_o = `UOP_MRET;
                                excepttype_mret = `True_v;
                            end

/*
                            if ( (fun7==7'b0000000) && (rs2_w == 5'b00010) ) begin   //INS_ERET
                                // {00000, 00, rs2_w(00010), rs1_w(00000), fun3(000), rd_w(00000), opcode_w = 7b'1110011 }
                                // Return from traps in U-mode, and URET copies UPIE into UIE, then sets UPIE.
                                // uret  :   ExceptionReturn(User)
                                alusel_o = `EXE_TYPE_NOP;
                                uop_o = `UOP_ERET;
                                excepttype_is_eret = `True_v;
                            end

                            if ((fun7==7'b0000000) && (rs2_w == 5'b00001)) begin   //INS_EBREAK:
                                // {00000, 00, rs2_w(00001), rs1_w(00000), fun3(000), rd_w(00000), opcode_w = 7b'1110011 }
                                // Used by debuggers to cause control to be transferred back to a debugging environment.
                                // It generates a breakpoint exception and performs no other operation.
                                // ebreak  :   RaiseException(Breakpoint)
                                alusel_o = `EXE_TYPE_NOP;
                                uop_o = `UOP_EBREAK;
                            end

                            if ( (fun7==7'b0000100) && (rs2_w == 5'b00010) ) begin   // INS_SRET
                                // {00010, 00, rs2_w(00010), rs1_w(00000), fun3(000), rd_w(00000), opcode_w = 7b'1110011 }
                                // Return from traps in S-mode, and SRET copies SPIE into SIE, then sets SPIE.
                                // sret  :   ExceptionReturn(User)
                            end



                            if ( (fun7==7'b0010000) && (rs2_w == 5'b00101) ) begin  //INS_WFI
                                // {00100, 00, rs2_w(00101), rs1_w(00000), fun3(000), rd_w(00000), opcode_w = 7b'1110011 }
                                // Provides a hint to the implementation that the current hart can be stalled
                                // until an interrupt might need servicing.
                                // Execution of the WFI instruction can also be used to inform the hardware
                                // platform that suitable interrupts should preferentially be routed to this hart.
                                // WFI is available in all privileged modes, and optionally available to U-mode.
                                // This instruction may raise an illegal instruction exception when TW=1 in mstatus.
                                // wfi   :   while (noInterruptsPending) idle
                            end

                            if ( fun7==7'b0001001) begin  //INS_SFENCE_WMA
                                // {00010, 01, rs2_w, rs1_w, fun3(000), rd_w, opcode_w = 7b'1110011 }
                                // Guarantees that any previous stores already visible to the current RISC-V
                                // hart are ordered before all subsequent implicit references from that hart to
                                // the memory-management data structures.
                                // The SFENCE.VMA is used to flush any local hardware caches related to address translation.
                                // It is specified as a fence rather than a TLB flush to provide cleaner semantics
                                // with respect to which instructions are affected by the flush operation and to
                                // support a wider variety of dynamic caching structures and memory-management schemes.
                                // SFENCE.VMA is also used by higher privilege levels to synchronize page
                                // table writes and the address translation hardware.
                                // sfence.vma rs1_w,rs2_w  :   Fence(Store, AddressTranslation)
                            end
*/
                        end //`INS_CSR_SPECIAL: begin

                        /*----------csr special instruction, ecall, ebreak, eret, mret, sret, wfi, sfence.wma -------------*/

                        default: begin
                            ins_valid_r = `INS_VALID;
                            $display("invalid fun7 in csr type, pc=%h, inst=%h, fun3=%d", pc_i, ins_i, fun3);
                        end
                    endcase  // case (fun3)
                end //`INS_OPCODE_CSR: begin
/*-----------------------------------decode Type CSR instruction, ended -------------------------------------------------------*/



/*-----------------------------------decode Type Fence instruction, started -------------------------------------------------------*/
          `INS_OPCODE_FENCE:
            case (fun3)
              `INS_FENCE: begin   //fun3 = 000
                    // Used to order device I/O and memory accesses as viewed by other RISC-V
                    // harts and external devices or coprocessors.
                    // Any combination of device input (I), device output (O), memory reads (R), and
                    // memory writes (W) may be ordered with respect to any combination of the same.
                    // Informally, no other RISC-V hart or external device can observe any
                    // operation in the successor set following a FENCE before any operation in
                    // the predecessor set preceding the FENCE.
                    // fm:[32:28]=0000, pred:[27:24], succ[23:20], rs1_w=00000, fun3=000, rd_w=00000, opcode_w=0001111
                    // fence pred, succ :  Fence(pred, succ)

                end

                `INS_FENCE_I: begin   //fun3 = 001
                    // Provides explicit synchronization between writes to instruction memory and
                    // instruction fetches on the same hart.
                    // fm:[32:27]=00000, pred:[26:25]=00, succ[24:20]=00000, rs1_w=00000, fun3=001, rd_w=00000, opcode_w=0001111
                end

                default: begin

                end
            endcase
    /*-----------------------------------decode Type Fence instruction, ended -------------------------------------------------------*/

                default: begin
                    $display("invalid instruction opcode_w (%h), pc=%d,  the instruction is (%h)", opcode_w, pc_i, ins_i);
                end
            endcase
        end  //if_else
    end  //always

/*==========================================================decoded end here ==========================================================*/

    always @ (*)
      if (n_rst_i == `RST_EN) {rs1_data_o, rs1_load_depend} = {`ZERO_WORD, `NO_STOP};
      else
      begin
        {rs1_data_o, rs1_load_depend} = {`ZERO_WORD, `NO_STOP};
        if (rs1_ra_o == 5'd0) rs1_data_o = 32'd0;
        else
        //前一条指令为Load
        //EX阶段要写入的目的寄存器地址，恰好为rs1 当前要读取的地址
        //即rs1 要读取的地址已经被修改，只是该修改还在由慢速设备请求数据，未写回 GPR
        //需要暂停流水线，等待慢速设备返回数据
        //可以通过 Forward方式，在WB阶段，将返回的最新数据直接赋值给 rs1，无需写入再读出 GPR
          if (pre_ins_is_load == 1'b1 && ex_rd_wa_i == rs1_ra_o && rs1_re_o == 1'b1) rs1_load_depend = `Stop;
          else
          //所要读取的 rs1寄存器，与EX阶段更新的rd寄存器相同
          //即rd中保存着 rs1的最新值，rs1 通过 Forward直接获取该值，无需写入再读出 GPR
            if ((rs1_re_o == 1'b1) && (ex_rd_we_i == 1'b1) && (ex_rd_wa_i == rs1_ra_o)) rs1_data_o = ex_rd_wd_i;
          //Load操作完成，写回 GPR的rd，与要读取的 rs1相同，通过 Forward直接获取该值，无需写入再读出 GPR
            else if ((rs1_re_o == 1'b1) && (mem_rd_we_i == 1'b1) && (mem_rd_wa_i == rs1_ra_o)) rs1_data_o = mem_rd_wd_i;
          //无数据依赖，不需要暂停流水线或者 Forward，在要求读取 rs1时，返回rs1 的读取内容(rs1_rd_i)
            else if (rs1_re_o == 1'b1) rs1_data_o = rs1_rd_i;
      end

    always @ (*)
      if (n_rst_i == `RST_EN) {rs2_load_depend, rs2_data_o} = {`NO_STOP, `ZERO_WORD};
      else
      begin
        {rs2_load_depend, rs2_data_o} = {`NO_STOP, `ZERO_WORD};
        if (rs2_ra_o == 5'd0) rs2_data_o = 32'd0;
        else
          if (pre_ins_is_load == 1'b1 && ex_rd_wa_i == rs2_ra_o && rs2_re_o == 1'b1 ) rs2_load_depend = `Stop;
          else
            if ((rs2_re_o == 1'b1) && (ex_rd_we_i == 1'b1) && (ex_rd_wa_i == rs2_ra_o)) rs2_data_o = ex_rd_wd_i;
            else if ((rs2_re_o == 1'b1) && (mem_rd_we_i == 1'b1) && (mem_rd_wa_i == rs2_ra_o)) rs2_data_o = mem_rd_wd_i;
            else if (rs2_re_o == 1'b1) rs2_data_o = rs2_rd_i;
      end

  endmodule
