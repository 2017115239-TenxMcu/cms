#define __init_c
 #include "includeAll.h"
 //=============================================================================
 void SysInit() {
   F_clearWDT(); //清除看门狗
   //时钟初始化
   CLKCON = 0x03; // Clock div 1
   STPPCK = 0;
   STPFCK = 0;
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   SELFCK = 1;
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   // IO 模式初始化
<<<<<<< HEAD
 P1MODL = 0xa8; //输入
 P1_0 = 0;
=======
 P1MODL = 0xaa; //输出
>>>>>>> a1cd8e8579a9397a23e800169b2b8d285ecda5bd
 // IO 状态初始化
 F_ledOff();
 } 
 //=============================================================================
 void VarsInit() {} 