/*-------------------------------------------------------------------------
// Module:  define
// File:    define.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: the constant definition
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

`define RST_EN               1'b0   //reset by negative edge
`define RstDisable              1'b1

`define ChipEnable              1'b1
`define ChipDisable             1'b0

`define WriteEnable             1'b1
`define WRITE_DISABLE            1'b0

`define ReadEnable              1'b1
`define ReadDisable             1'b0

`define AluOpBus                15:0
`define AluSelBus               3:0

  `define INS_VALID 1'b1
  `define INS_INVALID 1'b0

`define Stop                    1'b1
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

`define InstAddrBus             31:0
`define InstBus                 31:0

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
`define DoubleRegBus            63:0
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
  `define INS_OPCODE_LUI 7'b0110111

//Add Upper Immediate (And) PC (To Rd)
//{imm[31:12], rd, opcode=0010111}
//该指令不会修改PC的值，可以配合JALR指令使用，以修改PC，跳转至指定位置
//auipc rd, imm_r ##x[rd]=pc+sext(immediate[31:12]<<12)
  `define INS_OPCODE_AUIPC 7'b0010111

//Jump And Link
//{imm[20|10:1|11|19:12], rd, opcode=1101111}
//jal rd, offset##x[rd]=pc+4;/pc+=sext(offset)
  `define INS_OPCODE_JAL 7'b1101111

//Jump And Link Register
//{imm[11:0], rs1, 000, rd, opcode=1100111}
//jalr rd, rs1, offset##v=pc+4;/pc=(x[rs1]+sext(offset))&∼1;/x[rd]=v
  `define INS_OPCODE_JALR 7'b1100111

//{imm[12|10:5], rs2, rs1, fun3, imm[4:1|11], opcode=1100011}
//beq rs1, rs2, offset##if (rs1==rs2) pc+=sext(offset)
//bne rs1, rs2, offset##if (rs1!=rs2) pc+=sext(offset)
//bge rs1, rs2, offset##if (rs1>=srs2) pc+=sext(offset)
//bgeu rs1, rs2, offset ##if (rs1>=urs2) pc+=sext(offset)
//blt rs1, rs2, offset##if (rs1<srs2) pc+=sext(offset)
//bltu rs1, rs2, offset ##if (rs1<urs2) pc+=sext(offset)
  `define INS_OPCODE_BRANCH 7'b1100011

//{imm[11:0], rs1, fun3, rd, opcode=0000011}
//lb rd, offset(rs1)##x[rd]=sext(M[x[rs1]+sext(offset)][7:0])
//lbu rd, offset(rs1) ##x[rd]=M[x[rs1]+sext(offset)][7:0]
//lh rd, offset(rs1)##x[rd]=sext(M[x[rs1]+sext(offset)][15:0])
//lhu rd, offset(rs1) ##x[rd]=M[x[rs1]+sext(offset)][15:0]
//lw rd, offset(rs1)##x[rd]=sext(M[x[rs1]+sext(offset)][31:0])
  `define INS_OPCODE_LOAD 7'b0000011

//{imm[11:5], rs2, rs1, fun3, imm[4:0], opcode=0100011}
//sb rs2, offset(rs1) ##M[x[rs1]+sext(offset)]=x[rs2][7:0]
//sh rs2, offset(rs1) ##M[x[rs1]+sext(offset)]=x[rs2][15:0]
//sw rs2, offset(rs1) ##M[x[rs1]+sext(offset)]=x[rs2][31:0]
  `define INS_OPCODE_STORE 7'b0100011

//{imm[11:0], rs1, fun3, rd, opcode=0010011}
//addi rd, rs1, imm ##x[rd]=x[rs1]+sext(imm)
//slti rd, rs1, imm ##x[rd]=x[rs1]<s(sext(imm))
//sltiu rd, rs1, imm##x[rd]=x[rs1]<u(sext(imm))
//andi rd, rs1, imm ##x[rd]=x[rs1]&sext(imm)
//ori rd, rs1, imm##[rd]=x[rs1]|sext(imm)
//xori rd, rs1, imm ##x[rd]=x[rs1]^sext(imm)
//https://blog.csdn.net/qq_33880925/article/details/123354557
//slli rd, rs1, imm ##x[rd]=x[rs1]<<imm
//srli rd, rs1, imm ##x[rd]=x[rs1]>>u(imm)
//srai rd, rs1, imm ##x[rd]=x[rs1]>>s(imm)
  `define INS_OPCODE_IMM 7'b0010011

//{fun7, rs2, rs1, fun3, rd, opcode=0110011}
//add rd, rs1, rs2##x[rd]=x[rs1]+x[rs2]
//sub rd, rs1, rs2##x[rd]=x[rs1]-x[rs2]
//and rd, rs1, rs2##x[rd]=x[rs1]&x[rs2]
//or rd, rs1, rs2 ##x[rd]=x[rs1]|x[rs2]
//xor rd, rs1, rs2##x[rd]=x[rs1]^x[rs2]
//sll rd, rs1, rs2##x[rd]=x[rs1]<<x[rs2]
//srl rd, rs1, rs2##x[rd]=x[rs1]>>u(x[rs2])
//sra rd, rs1, rs2##x[rd]=x[rs1]>>s(x[rs2])
//slt rd, rs1, rs2##x[rd]=x[rs1]<s(x[rs2])
//sltu rd, rs1, rs2 ##x[rd]=x[rs1]<u(x[rs2])
//mul rd, rs1, rs2##x[rd]=x[rs1]*x[rs2]
//mulh rd, rs1, rs2 ##x[rd]=((x[rs1])s*s(x[rs2]))>>s(XLEN)
//mulhu rd, rs1, rs2##x[rd]=((x[rs1])u*u(x[rs2]))>>u(XLEN)
//mulhsu rd, rs1, rs2 ##x[rd]=((x[rs1])s*u(x[rs2]))>>s(XLEN)
//div rd, rs1, rs2##x[rd]=x[rs1]/s(x[rs2])
//divu rd, rs1, rs2 ##x[rd]=x[rs1]/u(x[rs2])
//rem rd, rs1, rs2##x[rd]=x[rs1]%s(x[rs2])
//remu rd, rs1, rs2 ##x[rd]=x[rs1]%u(x[rs2])
  `define INS_OPCODE_REG 7'b0110011

`define INS_OPCODE_FENCE       7'b0001111   // {fm, pred, succ,    rs1, 000,    rd,          opcode=0001111}
`define INS_OPCODE_CSR         7'b1110011   // {csr,               rs1, fun3, rd,          opcode=1110011}


/*---------------------------------------AluOp-----------------------------------*/

// B type inst  {imm[12|10:5], rs2, rs1, fun3, imm[4:1|11, opcode=1100011}
`define INS_BEQ                3'b000
`define INS_BNE                3'b001
`define INS_BLT                3'b100
`define INS_BGE                3'b101
`define INS_BLTU               3'b110
`define INS_BGEU               3'b111

// L type inst, {imm[11:0], rs1[4:0], fun3[2:0], rd[4:0],opcode=0000011}
`define INS_LB                 3'b000
`define INS_LH                 3'b001
`define INS_LW                 3'b010
`define INS_LBU                3'b100
`define INS_LHU                3'b101

// S type inst, {imm[11:5], rs2, rs1, fun3, imm[4:0], opcode=0100011}
`define INS_SB                 3'b000
`define INS_SH                 3'b001
`define INS_SW                 3'b010


// I type inst,  {imm[11:0], rs1[4:0], fun3[2:0], rd[4:0],opcode=0010011}
`define INS_ADDI               3'b000
`define INS_SLTI               3'b010
`define INS_SLTIU              3'b011
`define INS_XORI               3'b100
`define INS_ORI                3'b110
`define INS_ANDI               3'b111

`define INS_SLLI               3'b001  // {7'b0000000, shamt[4:0], rs1[4:0], fun3[2:0], rd[4:0],opcode=0010011}
`define INS_SRLI_SRAI          3'b101  // {7'b0000000, shamt[4:0], rs1[4:0], fun3[2:0], rd[4:0],opcode=0010011} INS_SRLI
                                        // {7'b0100000, shamt[4:0], rs1[4:0], fun3[2:0], rd[4:0],opcode=0010011} INS_SRAI


// R type inst, {fun7, rs2, rs1, fun3, rd, opcode=0110011}, fun7=0000000 or 0100000
// R-1: LOGIC inst
`define INS_ADD_SUB            3'b000  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011} ADD
                                        // {fun7=0100000, rs2, rs1, fun3, rd, opcode=0110011} SUB
`define INS_SLL                3'b001  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}
`define INS_SLT                3'b010  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}
`define INS_SLTU               3'b011  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}
`define INS_XOR                3'b100  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}
`define INS_SRL_SRA            3'b101  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011} SRL
                                        // {fun7=0100000, rs2, rs1, fun3, rd, opcode=0110011} SRA
`define INS_OR                 3'b110  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}
`define INS_AND                3'b111  // {fun7=0000000, rs2, rs1, fun3, rd, opcode=0110011}

//R-2: Multiply inst, {fun7, rs2, rs1, fun3, rd, opcode=0110011}, fun7=000001
`define INS_MUL                3'b000  // {fun7=0000001, rs2, rs1, fun3, rd, opcode=0110011}
`define INS_MULH               3'b001
`define INS_MULHSU             3'b010
`define INS_MULHU              3'b011
`define INS_DIV                3'b100
`define INS_DIVU               3'b101
`define INS_REM                3'b110
`define INS_REMU               3'b111

// CSR inst, {csr, rs1, fun3, rd, opcode=1110011}
`define INS_CSRRW              3'b001
`define INS_CSRRS              3'b010
`define INS_CSRRC              3'b011
`define INS_CSRRWI             3'b101
`define INS_CSRRSI             3'b110
`define INS_CSRRCI             3'b111
`define INS_CSR_SPECIAL        3'b000

// Fence type inst
`define INS_FENCE              3'b000
`define INS_FENCE_I            3'b001



/*-------------------------- AluSel -----------------------------------*/
`define EXE_TYPE_NOP            4'b0000
`define EXE_TYPE_BRANCH         4'b0001
`define EXE_TYPE_LOGIC          4'b0010
`define EXE_TYPE_SHIFT          4'b0011
`define EXE_TYPE_ARITHMETIC     4'b0100
`define EXE_TYPE_MUL            4'b0101
`define EXE_TYPE_DIV            4'b0110
`define EXE_TYPE_LOAD_STORE     4'b0111
`define EXE_TYPE_CSR            4'b1000

//https://zhuanlan.zhihu.com/p/349758402
//Micro Opcode(uop)
`define UOP_NOP            16'D0
`define UOP_LUI            16'D1
`define UOP_AUIPC          16'D2
`define UOP_JAL            16'D3
`define UOP_JALR           16'D4

`define UOP_BEQ            16'D5
`define UOP_BNE            16'D6
`define UOP_BGE            16'D7
`define UOP_BGEU           16'D8
`define UOP_BLT            16'D9
`define UOP_BLTU           16'D10

`define UOP_LB             16'D11
`define UOP_LBU            16'D12
`define UOP_LH             16'D13
`define UOP_LHU            16'D14
`define UOP_LW             16'D15

`define UOP_SB             16'D16
`define UOP_SH             16'D17
`define UOP_SW             16'D18

`define UOP_ADDI           16'D19
`define UOP_SLTI           16'D20
`define UOP_SLTIU          16'D21
`define UOP_ANDI           16'D22
`define UOP_ORI            16'D23
`define UOP_XORI           16'D24
`define UOP_SLLI           16'D25
`define UOP_SRLI           16'D26
`define UOP_SRAI           16'D27

`define UOP_ADD            16'D28
`define UOP_SUB            16'D29
`define UOP_AND            16'D30
`define UOP_OR             16'D31
`define UOP_XOR            16'D32
`define UOP_SLL            16'D33
`define UOP_SRL            16'D34
`define UOP_SRA            16'D35
`define UOP_SLT            16'D36
`define UOP_SLTU           16'D37
`define UOP_MULT           16'D38
`define UOP_MULH           16'D39
`define UOP_MULHU          16'D40
`define UOP_MULHSU         16'D41
`define UOP_DIV            16'D42
`define UOP_DIVU           16'D43
`define UOP_REM            16'D44
`define UOP_REMU           16'D45

`define UOP_CSRRW          16'D46
`define UOP_CSRRWI         16'D47
`define UOP_CSRRS          16'D48
`define UOP_CSRRSI         16'D49
`define UOP_CSRRC          16'D50
`define UOP_CSRRCI         16'D51

`define UOP_ECALL          16'D52
`define UOP_MRET           16'D53


/*-------------------------- CSR reg addr -------------------------*/
`define CSR_MVENDORID_ADDR       12'hF11
`define CSR_MARCHID_ADDR         12'hF12
`define CSR_MIMPID_ADDR          12'hF13
`define CSR_MHARTID_ADDR         12'hF14

/* ------ Machine trap setup ---------*/
`define CSR_MSTATUS_ADDR         12'h300
`define CSR_MISA_ADDR            12'h301
`define CSR_MIE_ADDR             12'h304
`define CSR_MTVEC_ADDR           12'h305
`define CSR_MCOUNTEREN_ADDR      12'h306
`define CSR_MCOUNTINHIBIT_ADDR   12'h320

/* ------ Machine trap handling ------*/
`define CSR_MSCRATCH_ADDR        12'h340
`define CSR_MEPC_ADDR            12'h341
`define CSR_MCAUSE_ADDR          12'h342
`define CSR_MTVAL_ADDR           12'h343
`define CSR_MIP_ADDR             12'h344

`define CSR_CYCLE_ADDR           12'hc00
`define CSR_CYCLEH_ADDR          12'hc80
`define CSR_MCYCLE_ADDR          12'hB00
`define CSR_MCYCLEH_ADDR         12'hB80
`define CSR_MINSTRET_ADDR        12'hB02
`define CSR_MINSTRETH_ADDR       12'hB82

/* -------- Debug trigger -----------*/
`define CSR_TSELECT_ADDR         12'h7A0
`define CSR_TDATA1_ADDR          12'h7A1
`define CSR_TDATA2_ADDR          12'h7A2
`define CSR_TDATA3_ADDR          12'h7A3
`define CSR_MCONTEXT_ADDR        12'h7A8
`define CSR_SCONTEXT_ADDR        12'h7AA

/* -------- Debug/trace -------------*/
`define CSR_DCSR_ADDR            12'h7b0
`define CSR_DPC_ADDR             12'h7b1

/* ------------ Debug ----------------*/
`define CSR_DSCRATCH0_ADDR       12'h7b2
`define CSR_DSCRATCH1_ADDR       12'h7b3


/* --------------config parameters -----------*/
`define REBOOT_ADDRESS 32'h00000080         //  32'h80 for c-test program, 32'h00000000: for isa test
`define MTVEC_RESET 32'h00000001