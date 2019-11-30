#define _main_c
#include "includeAll.h"
int modeValue = 1;
//---------------------------------------------
void main(){
  //初始化
  SysInit(); 
  VarsInit();
  F_turnOnWDT();
  while (1) {
    F_clearWDT();  //喂狗
    TimeProcess();
    TaskSetting();
  }
}
void TimeProcess() {
  static uint8_t timer5ms = 0;
  if (b1ms) {//1ms
    b1ms = 0;
    timer5ms++;
  }
  if (timer5ms >= 5) {//5ms
    P1MODL = 0xa8;
    GetKeys();	 
  }  
}
//---------------------------------------------
void TaskProcess() {}
void TaskSetting() {
	if (modeValue == 1){//输出
 		if(D_keyValue1 == keyValue){
 			modeValue = ~modeValue;		
 		}
 		P1MODL = 0xaa;		
  }	else {//输入
 		if(D_keyValue1 == keyValue){
 			modeValue = ~modeValue;	
 		}
 	}
}	
 //--------------------------------------------
 void DisplayProcess() {}  