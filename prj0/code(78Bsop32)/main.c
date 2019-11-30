#define _main_c
#include "includeAll.h"
//---------------------------------------------
void main(){
   //初始化
   SysInit(); 
   VarsInit();
   F_ledOn();
   delayMs(500);
   F_turnOnWDT();
   while(1){
      //user coding
     while (1) {
    F_clearWDT();  //清除看门狗定时器
    delayMs(20);
    GetKeys();
     if (D_keyValue1 == keyValue) {
       F_ledNeg();
     }
     keyValue = D_keyNull;	  
   }
}
//---------------------------------------------
void delayMs(uint16_t msCount){
    uint16_t i ,j;
    for(i = 0; i< msCount; i++){
        for(j = 0; j<1000; j++){
        }
    }

}