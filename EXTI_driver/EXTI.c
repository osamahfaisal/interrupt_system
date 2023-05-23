/*Name: Osama Faisal Abdulatef 
  Section : 1 
  B.N 11
*/


#include "EXTI.h"
#include "Bit_Operations.h"
#include "Rcc.h"
#include "Gpio.h"
#include "EXTI_PRIVAT.h"





void Exti_Init( uint8 GPIO_PORT,uint32 pinNumber, uint32 trigger_edgeDetection){
    Gpio_ConfigPin(GPIO_PORT , pinNumber ,  GPIO_INPUT, GPIO_PULL_UP); // sit pin  as input 

// type of triger 

    // falling edge dectection
    if(trigger_edgeDetection==EXTI_Trigger_Falling){

            EXTI->FTSR &= ~(1 << (pinNumber));
            EXTI->FTSR |=  (1 << (pinNumber));
     
    }
    // Rissing adge detection
    else if (trigger_edgeDetection==EXTI_Trigger_Rising){
        EXTI->RTSR &= ~(1 << (pinNumber));
        EXTI->RTSR |=  (1 << (pinNumber));
        
    }
    // Rissing and falling adge detection
    else if(trigger_edgeDetection==EXTI_Trigger_Rising_And_Falling){   
        EXTI->FTSR &= ~(1 << (pinNumber));
        EXTI->FTSR |=  (1 << (pinNumber));
        EXTI->RTSR &= ~(1 << (pinNumber));
        EXTI->RTSR |=  (1 << (pinNumber));

    }


//  line of nivc 
// this nvic for exti's pins from 0-4
    if(pinNumber<5 ){

            NVIC_ISER0 &= ~(1 << (6+pinNumber));  // clear  NVIC_ISER0
            NVIC_ISER0 |=  (1 << (6+pinNumber)); // set NVIC_ISER0 
    }


// this nvic for exti's pins from 5-9
    else if(pinNumber>4 && pinNumber <10){
     
            NVIC_ISER0 &= ~(1 << (23));  // clear  NVIC_ISER0
            NVIC_ISER0 |=  (1 << (23)); // set NVIC_ISER0 

    }

// this nvic for exti's pins from 5-9 
    else if(pinNumber>9 && pinNumber <16){
            NVIC_ISER0 &= ~(1 << (40));  // clear  NVIC_ISER0
            NVIC_ISER0 |=  (1 << (40)); // set NVIC_ISER0 
    }






/*SYSCOFG  */
    // 1-3 pin number -->  4-7  --> 8-11 --> 12-15
    if(pinNumber<4){
     ;
        SYSCOFG->EXTICR1  &= ~(CLEARSYSCONFG(pinNumber));   // clear  SYSCOFG pin 
        SYSCOFG->EXTICR1 |=   SETSYSCONFG(GPIO_PORT ,pinNumber);  // set SYSCOFG pin

    }
    else if(pinNumber>3 && pinNumber<8){
        SYSCOFG->EXTICR2  &=~(CLEARSYSCONFG(pinNumber));
        SYSCOFG->EXTICR2 |=   SETSYSCONFG(GPIO_PORT ,pinNumber);


    }
    else if(pinNumber>7 && pinNumber<12){
        SYSCOFG->EXTICR2 &= ~(CLEARSYSCONFG(pinNumber));
        SYSCOFG->EXTICR2 |=   SETSYSCONFG(GPIO_PORT ,pinNumber);

    }
    else if(pinNumber>11){
        SYSCOFG->EXTICR2 &=~ (CLEARSYSCONFG(pinNumber));
        SYSCOFG->EXTICR2 |=   SETSYSCONFG(GPIO_PORT ,pinNumber);

    }

}


// enable specific EXTI line 
void Exti_Enable(uint32 Exti_line){
    EXTI->IMR &= ~(1 << (Exti_line));
    EXTI->IMR|=  (1 << (Exti_line));

}

// disable specific EXTI line
void Exti_Disable(uint32 Exti_line) {
    EXTI->IMR &= ~(1 << (Exti_line));
}







