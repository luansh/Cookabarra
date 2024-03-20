`define RST_EN               1'b0   //reset by negative edge
`define RstDisable              1'b1

`define CHIP_ENABLE              1'b1
`define CHIP_DISABLE             1'b0

  `define WRITE_DISABLE 1'b0
  `define WRITE_ENABLE 1'b1

`define ReadEnable              1'b1
`define ReadDisable             1'b0

`define AluOpBus                15:0
`define AluSelBus               3:0

  `define INS_VALID 1'b1
  `define INS_INVALID 1'b0

`define STOP                    1'b1
`define NO_STOP                  1'b0

`define Branch                  1'b1
`define NotBranch               1'b0

`define InterruptAssert         1'b1
`define InterruptNotAssert      1'b0

`define TrapAssert              1'b1
`define TrapNotAssert           1'b0

`define True_v                  1'b1
`define False_v                 1'b0

`define NOP_INS 32'h00000013//ADDI x0, x0, 0
`define ZERO_WORD 32'd0

`define INS_BUS_A 31:0
`define INS_BUS_D 31:0

/*----------------------------------- inst rom ---------------------------------*/
`define InstMemNum              1048576
`define InstMemNumLog2          20    //20 bits addr

/*----------------------------------- data ram ---------------------------------*/
`define DataAddrBus             31:0
`define DataBus                 31:0
`define DataMemNum              1048576   //1M
`define DataMemNumLog2          20        //20 bits addr
`define ByteWidth               7:0

/*----------------------------------- regfile ----------------------------------*/
`define REG_BUS_A 4:0
`define REG_BUS_D 31:0
`define REG_WIDTH 32
`define DOUBLE_REG_WIDTH 64
`define REG_BUS_DOUBLE            63:0
`define RegNum                  32
`define REG_NUM_LOG2              5
`define NOP_REG_A              5'b00000

/*-------------------------------------- div -----------------------------------*/
`define DIV_FREE 2'd0
`define DIV_BY_ZERO 2'd1
`define DIV_ON 2'd2
`define DIV_END 2'd3
`define DIV_RESULT_READY          1'b1
`define DIV_RESULT_NOT_READY       1'b0
`define DIV_START                1'b1
`define DIV_STOP                 1'b0

//https://zhuanlan.zhihu.com/p/261705919
/*--------------------------------- instruction type ----------------------------*/
//Load U-Immediate
//{imm[31:12], rd, opcode=0110111}
//lui rd, imm_r ##x[rd]=sext(immediate[31:12]<<12)
  `define INS_OP_LUI 7'b0110111

//Add Upper Immediate (And) PC (To Rd)
//{imm[31:12], rd, opcode=0010111}
//该指令不会修改PC的值，可以配合JALR指令使用，以修改PC，跳转至指定位置
//auipc rd, imm_r ##x[rd]=pc+sext(immediate[31:12]<<12)
  `define INS_OP_AUIPC 7'b0010111

//Jump And Link
//{imm[20|10:1|11|19:12], rd, opcode=1101111}
//jal rd, offset##x[rd]=pc+4;/pc+=sext(offset)
  `define INS_OP_JAL 7'b1101111

//Jump And Link Register
//{imm[11:0], rs1, 000, rd, opcode=1100111}
//jalr rd, rs1, offset##v=pc+4;/pc=(x[rs1]+sext(offset))&∼1;/x[rd]=v
  `define INS_OP_JALR 7'b1100111

//{imm[12|10:5], rs2[4:0], rs1[4:0], fun3[2:0], imm[4:1|11], opcode=1100011}
  `define INS_OP_BRANCH 7'b1100011
//beq rs1, rs2, offset##if (rs1==rs2) pc+=sext(offset)
  `define INS_BEQ 3'b000
//bne rs1, rs2, offset##if (rs1!=rs2) pc+=sext(offset)
  `define INS_BNE 3'b001
//bge rs1, rs2, offset##if (rs1>=srs2) pc+=sext(offset)
  `define INS_BGE 3'b101
//bgeu rs1, rs2, offset ##if (rs1>=urs2) pc+=sext(offset)
  `define INS_BGEU 3'b111
//blt rs1, rs2, offset##if (rs1<srs2) pc+=sext(offset)
  `define INS_BLT 3'b100
//bltu rs1, rs2, offset ##if (rs1<urs2) pc+=sext(offset)
  `define INS_BLTU 3'b110

//{imm[11:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0000011}
  `define INS_OP_LOAD 7'b0000011
//lb rd, offset(rs1)##x[rd]=sext(M[x[rs1]+sext(offset)][7:0])
  `define INS_FUN3_LB 3'b000
//lbu rd, offset(rs1) ##x[rd]=M[x[rs1]+sext(offset)][7:0]
  `define INS_FUN3_LBU 3'b100
//lh rd, offset(rs1)##x[rd]=sext(M[x[rs1]+sext(offset)][15:0])
  `define INS_FUN3_LH 3'b001
//lhu rd, offset(rs1) ##x[rd]=M[x[rs1]+sext(offset)][15:0]
  `define INS_FUN3_LHU 3'b101
//lw rd, offset(rs1)##x[rd]=sext(M[x[rs1]+sext(offset)][31:0])
  `define INS_FUN3_LW 3'b010

//{imm[11:5], rs2, rs1, fun3, imm[4:0], opcode=0100011}
  `define INS_OP_STORE 7'b0100011
//sb rs2, offset(rs1) ##M[x[rs1]+sext(offset)]=x[rs2][7:0]
  `define INS_FUN3_SB 3'b000
//sh rs2, offset(rs1) ##M[x[rs1]+sext(offset)]=x[rs2][15:0]
  `define INS_FUN3_SH 3'b001
//sw rs2, offset(rs1) ##M[x[rs1]+sext(offset)]=x[rs2][31:0]
  `define INS_FUN3_SW 3'b010

//{imm[11:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0010011}
  `define INS_OP_IMM 7'b0010011
//addi rd, rs1, imm ##x[rd]=x[rs1]+sext(imm)
  `define INS_FUN3_ADDI 3'b000
//slti rd, rs1, imm ##x[rd]=x[rs1]<s(sext(imm))
  `define INS_FUN3_SLTI 3'b010
//sltiu rd, rs1, imm##x[rd]=x[rs1]<u(sext(imm))
  `define INS_FUN3_SLTIU 3'b011
//andi rd, rs1, imm ##x[rd]=x[rs1]&sext(imm)
  `define INS_FUN3_ANDI 3'b111
//ori rd, rs1, imm##[rd]=x[rs1]|sext(imm)
  `define INS_FUN3_ORI 3'b110
//xori rd, rs1, imm ##x[rd]=x[rs1]^sext(imm)
  `define INS_FUN3_XORI 3'b100
//https://blog.csdn.net/qq_33880925/article/details/123354557
//{7'b0000000, shamt[4:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0010011}
//slli rd, rs1, shamt ##x[rd]=x[rs1]<<shamt
  `define INS_FUN3_SLLI 3'b001
//{7'b0000000, shamt[4:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0010011} INS_SRLI
//srli rd, rs1, shamt ##x[rd]=x[rs1]>>u(shamt)
//{7'b0100000, shamt[4:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0010011} INS_SRAI
//srai rd, rs1, shamt ##x[rd]=x[rs1]>>s(shamt)
  `define INS_FUN3_SRLI_SRAI 3'b101  

//{fun7, rs2[4:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0110011}
  `define INS_OP_REG 7'b0110011
//fun7=0000000/0100000
//Logic
//{fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}: Add
//add rd, rs1, rs2##x[rd]=x[rs1]+x[rs2]
//{fun7=0100000, rs2, rs1, fun3, rd, opcode=0110011}: Sub
//sub rd, rs1, rs2##x[rd]=x[rs1]-x[rs2]
  `define INS_FUN3_ADD_SUB 3'b000  
//and rd, rs1, rs2##x[rd]=x[rs1]&x[rs2]
  `define INS_FUN3_AND 3'b111
//or rd, rs1, rs2 ##x[rd]=x[rs1]|x[rs2]
  `define INS_FUN3_OR 3'b110
//xor rd, rs1, rs2##x[rd]=x[rs1]^x[rs2]
  `define INS_FUN3_XOR 3'b100
//sll rd, rs1, rs2##x[rd]=x[rs1]<<x[rs2]
  `define INS_FUN3_SLL 3'b001
//slt rd, rs1, rs2##x[rd]=x[rs1]<s(x[rs2])
  `define INS_FUN3_SLT 3'b010
//sltu rd, rs1, rs2 ##x[rd]=x[rs1]<u(x[rs2])
  `define INS_FUN3_SLTU 3'b011
//{fun7=0000000, rs2[4:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0110011} SRL
//srl rd, rs1, rs2##x[rd]=x[rs1]>>u(x[rs2])
//{fun7=0100000, rs2[4:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=0110011} SRA
//sra rd, rs1, rs2##x[rd]=x[rs1]>>s(x[rs2])
  `define INS_FUN3_SRL_SRA 3'b101
//fun7=000001
//Multiply
//mul rd, rs1, rs2##x[rd]=x[rs1]*x[rs2]
  `define INS_FUN3_MUL 3'b000
//mulh rd, rs1, rs2 ##x[rd]=((x[rs1])s*s(x[rs2]))>>s(XLEN)
  `define INS_FUN3_MULH 3'b001
//mulhu rd, rs1, rs2##x[rd]=((x[rs1])u*u(x[rs2]))>>u(XLEN)
  `define INS_FUN3_MULHU 3'b011
//mulhsu rd, rs1, rs2 ##x[rd]=((x[rs1])s*u(x[rs2]))>>s(XLEN)
  `define INS_FUN3_MULHSU 3'b010
//div rd, rs1, rs2##x[rd]=x[rs1]/s(x[rs2])
  `define INS_FUN3_DIV 3'b100
//divu rd, rs1, rs2 ##x[rd]=x[rs1]/u(x[rs2])
  `define INS_FUN3_DIVU 3'b101
//rem rd, rs1, rs2##x[rd]=x[rs1]%s(x[rs2])
  `define INS_FUN3_REM 3'b110
//remu rd, rs1, rs2 ##x[rd]=x[rs1]%u(x[rs2])
  `define INS_FUN3_REMU 3'b111

//{csr[11:0], rs1[4:0], fun3[2:0], rd[4:0], opcode=1110011}
  `define INS_OP_CSR 7'b1110011
  `define INS_FUN3_CSR_SPECIAL 3'b000
  `define INS_FUN3_CSR_RW 3'b001
  `define INS_FUN3_CSR_RS 3'b010
  `define INS_FUN3_CSR_RC 3'b011
  `define INS_FUN3_CSR_RWI 3'b101
  `define INS_FUN3_CSR_RSI 3'b110
  `define INS_FUN3_CSR_RCI 3'b111

//{fm, pre, success, rs1[4:0], fun3=000, rd[4:0], opcode=0001111}
  `define INS_OP_FENCE 7'b0001111
  `define INS_FUN3_FENCE 3'b000
  `define INS_FUN3_FENCE_I 3'b001

//ALU Select
  `define EXE_TYPE_NOP 4'b0000
  `define EXE_TYPE_BRANCH 4'b0001
  `define EXE_TYPE_LOGIC 4'b0010
  `define EXE_TYPE_SHIFT 4'b0011
  `define EXE_TYPE_ARITHMETIC 4'b0100
  `define EXE_TYPE_MUL 4'b0101
  `define EXE_TYPE_DIV 4'b0110
  `define EXE_TYPE_LOAD_STORE 4'b0111
  `define EXE_TYPE_CSR 4'b1000

//https://zhuanlan.zhihu.com/p/349758402
//Micro Opcode(uop)
  `define UOP_NOP 16'd0
  `define UOP_LUI 16'd1
  `define UOP_AUIPC 16'd2
  `define UOP_JAL 16'd3
  `define UOP_JALR 16'd4

  `define UOP_BEQ 16'd5
  `define UOP_BNE 16'd6
  `define UOP_BGE 16'd7
  `define UOP_BGEU 16'd8
  `define UOP_BLT 16'd9
  `define UOP_BLTU 16'd10
//INS_LS
  `define UOP_LB 16'd11
  `define UOP_LBU 16'd12
  `define UOP_LH 16'd13
  `define UOP_LHU 16'd14
  `define UOP_LW 16'd15
  `define UOP_SB 16'd16
  `define UOP_SH 16'd17
  `define UOP_SW 16'd18
//INS_OP_IMM
  `define UOP_ADDI 16'd19
  `define UOP_SLTI 16'd20
  `define UOP_SLTIU 16'd21
  `define UOP_ANDI 16'd22
  `define UOP_ORI 16'd23
  `define UOP_XORI 16'd24
  `define UOP_SLLI 16'd25
  `define UOP_SRLI 16'd26
  `define UOP_SRAI 16'd27

  `define UOP_ADD 16'd28
  `define UOP_SUB 16'd29
  `define UOP_AND 16'd30
  `define UOP_OR 16'd31
  `define UOP_XOR 16'd32
  `define UOP_SLL 16'd33
  `define UOP_SRL 16'd34
  `define UOP_SRA 16'd35
  `define UOP_SLT 16'd36
  `define UOP_SLTU 16'd37
  `define UOP_MULT 16'd38
  `define UOP_MULH 16'd39
  `define UOP_MULHU 16'd40
  `define UOP_MULHSU 16'd41
  `define UOP_DIV 16'd42
  `define UOP_DIVU 16'd43
  `define UOP_REM 16'd44
  `define UOP_REMU 16'd45

  `define UOP_CSRRW 16'd46
  `define UOP_CSRRWI 16'd47
  `define UOP_CSRRS 16'd48
  `define UOP_CSRRSI 16'd49
  `define UOP_CSRRC 16'd50
  `define UOP_CSRRCI 16'd51

  `define UOP_ECALL 16'd52
  `define UOP_MRET 16'd53
//https://zhuanlan.zhihu.com/p/613259839
//https://blog.csdn.net/m0_53157173/article/details/131154336
//CSR Register
//Machine Trap Setup
  `define CSR_MSTATUS_A 12'h300
  `define CSR_MISA_A 12'h301
//中断使能
  `define CSR_MIE_A 12'h304
//Machine Trap-Vector Base-Address
//指令执行发生异常时，跳转到该寄存器中设置的地址，根据异常原因，执行异常处理程序
  `define CSR_MTVEC_A 12'h305
  `define CSR_MCOUNTEREN_A 12'h306
  `define CSR_MCOUNTINHIBIT_A 12'h320
//Machine Trap Handling
  `define CSR_MSCRATCH_A 12'h340
//异常发生时的地址以及异常处理完毕的返回地址
  `define CSR_MEPC_A 12'h341
//异常原因
  `define CSR_MCAUSE_A 12'h342
  `define CSR_MTVAL_A 12'h343
  `define CSR_MIP_A 12'h344
//Debug Trigger
  `define CSR_TSELECT_A 12'h7A0
  `define CSR_TDATA1_A 12'h7A1
  `define CSR_TDATA2_A 12'h7A2
  `define CSR_TDATA3_A 12'h7A3
  `define CSR_MCONTEXT_A 12'h7A8
  `define CSR_SCONTEXT_A 12'h7AA

  `define CSR_DCSR_A 12'h7B0
  `define CSR_DPC_A 12'h7B1
  `define CSR_DSCRATCH0_A 12'h7B2
  `define CSR_DSCRATCH1_A 12'h7B3

  `define CSR_MCYCLE_A 12'hB00
  `define CSR_MINSTRET_A 12'hB02
  `define CSR_MCYCLEH_A 12'hB80
  `define CSR_MINSTRETH_A 12'hB82
  `define CSR_CYCLE_A 12'hC00
  `define CSR_CYCLEH_A 12'hC80

  `define CSR_MVENDORID_A 12'hF11
  `define CSR_MARCHID_A 12'hF12
  `define CSR_MIMPID_A 12'hF13
  `define CSR_MHARTID_A 12'hF14
/* --------------config parameters -----------*/
`define REBOOT_A 32'h00000080         //  32'h80 for c-test program, 32'h00000000: for isa test
`define MTVEC_RESET 32'h00000001

  `define MCAUSE_INT_SOFTWARE 4'd3
  `define MCAUSE_INT_TIMER 4'd7
  `define MCAUSE_INT_EXTERNAL 4'd11
  `define MCAUSE_TRAP_INSTRUCTION_ADDRESS_MISALIGN 4'd0
  `define MCAUSE_TRAP_INSTRUCTION_ILLEGAL 4'd2
  `define MCAUSE_TRAP_INSTRUCTION_EBREAK 4'd3
  `define MCAUSE_TRAP_LOAD_DATA_MISALIGN 4'd4
  `define MCAUSE_TRAP_STORE_DATA_MISALIGN 4'd6
  `define MCAUSE_TRAP_INSTRUCTION_ECALL 4'd11