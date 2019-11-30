#define __keys_c
#include "includeAll.h"
//=============================================================================
void GetKeys() {
	static uint8_t tmpKeyValue = D_keyNull; //设初始值为0，并保持执行前的数值
   P1MODL  = 0xa8;//输入
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
   _nop_();
  if (P_key1 == 0) {
    tmpKeyValue = D_keyValue1;
  }else{
    keyValue = tmpKeyValue ;
    tmpKeyValue = D_keyNull;  
  }
  P1MODL = 0xaa; //输出
}