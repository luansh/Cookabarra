#include "soc_reg.h"

.section .text

default_exc_handler:
  jal x0, simple_exc_handler

timer_handler:
  jal x0, simple_timer_handler

reset_handler:
//addi rd, rs1, 0 //mv rd, rs1
  mv x1, x0
  mv x2, x1
  mv x3, x1
  mv x4, x1
  mv x5, x1
  mv x6, x1
  mv x7, x1
  mv x8, x1
  mv x9, x1
  mv x10, x1
  mv x11, x1
  mv x12, x1
  mv x13, x1
  mv x14, x1
  mv x15, x1
  mv x16, x1
  mv x17, x1
  mv x18, x1
  mv x19, x1
  mv x20, x1
  mv x21, x1
  mv x22, x1
  mv x23, x1
  mv x24, x1
  mv x25, x1
  mv x26, x1
  mv x27, x1
  mv x28, x1
  mv x29, x1
  mv x30, x1
  mv x31, x1
//Load Address
//x2/sp:初始化SP指针
  la x2, _stack_start
_start:
  .global _start
  la x26, _bss_start
  la x27, _bss_end
//_bss_start > _bss_end 时，停止清除 BSS段，跳转至main
  bge x26, x27, zero_loop_end
zero_loop:
//将x26 中的值作为地址，向该地址加载x0的数据值 0：即*x26=0
  sw x0, 0(x26)
//*x26 += 4
  addi x26, x26, 4
//if (x26 <= x27) goto zero_loop
  ble x26, x27, zero_loop
zero_loop_end:
main_entry:
//[x10:x17] 用于保存函数的输入参数
//argc = argv = 0
  addi x10, x0, 0
  addi x11, x0, 0
//jal:Jump And Link/
//x1:ra 返回地址??
//跳转至main()
  jal x1, main

  /* Halt simulation */
  li x5, SIM_CTRL_BASE + SIM_CTRL_CTRL
  li x6, 1
  sw x6, 0(x5)

  /* If execution ends up here just put the core to sleep */
sleep_loop:
  wfi
  j sleep_loop

/* This section has to be down here, since we have to disable rvc for it  */

  .section .vectors, "ax"
  .option norvc;

  // All unimplemented interrupts/exceptions go to the default_exc_handler.
  .org 0x00
  .rept 7
  jal x0, default_exc_handler
  .endr
//Timer 的中断向量号为 7，在Vector模式中，其MCAUSE=7
  jal x0, timer_handler
  .rept 23
  jal x0, default_exc_handler
  .endr

  // reset vector
  .org 0x80
  jal x0, reset_handler
