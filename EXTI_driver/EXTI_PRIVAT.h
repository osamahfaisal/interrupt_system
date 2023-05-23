/*Name: Osama Faisal Abdulatef 
  Section : 1 
  B.N 11
*/

#include "Std_Types.h"



#define SYSCOFG  ((SYSCFGType *)0x40013800)
#define NVIC_ISER0 (*(uint32 *)0xE000E100)


typedef struct {
	uint32 MEMRMP;
	uint32 PMC;
	uint32 EXTICR1;
	uint32 EXTICR2;
	uint32 EXTICR3 ;
	uint32 EXTICR4;
	uint32 CMPCR;

}SYSCFGType;



// function  to return value to  clear  SYSCONFG register 
uint32  CLEARSYSCONFG(uint32 pinNumber ){

    return (0xf<<4*(pinNumber%4));
}


// function  to return value to  set  SYSCONFG register 
uint32 SETSYSCONFG(uint8 GPIO_PORT ,uint32 pinNumber){
    uint8 portId= GPIO_PORT -GPIO_A ;
    
    return (portId<<4*(pinNumber%4));
}


