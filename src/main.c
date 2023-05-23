
/*Name: Osama Faisal Abdulatef 
  Section : 1 
  B.N 11
*/
#include "EXTI.h"
#include "Gpio.h"
#include  "Rcc.h"
#include "Bit_Operations.h"





uint8 counter =0 ;
uint8 *pointer =&counter ;

void display_7_seg(uint8 counter);

int main(){
    Rcc_Init();
	Rcc_Enable(RCC_GPIOA);
	Rcc_Enable(RCC_GPIOB);
	Rcc_Enable(RCC_SYSCFG);

	// set 0-7 as output from port A
	Gpio_ConfigPin(GPIO_A, 0, GPIO_OUTPUT, GPIO_PUSH_PULL);
	Gpio_ConfigPin(GPIO_A, 1, GPIO_OUTPUT, GPIO_PUSH_PULL);
	Gpio_ConfigPin(GPIO_A, 2, GPIO_OUTPUT, GPIO_PUSH_PULL);
	Gpio_ConfigPin(GPIO_A, 3, GPIO_OUTPUT, GPIO_PUSH_PULL);
	Gpio_ConfigPin(GPIO_A, 4, GPIO_OUTPUT, GPIO_PUSH_PULL);
	Gpio_ConfigPin(GPIO_A, 5, GPIO_OUTPUT, GPIO_PUSH_PULL);
	Gpio_ConfigPin(GPIO_A, 6, GPIO_OUTPUT, GPIO_PUSH_PULL);
	
	
	// make port_B  pins( PB0 , PB4)   as input
	Exti_Init(GPIO_B ,0 ,EXTI_Trigger_Falling);
	Exti_Init(GPIO_B ,4,EXTI_Trigger_Falling);

	// Enable Exti 0 and Exti4 
	Exti_Enable(0);
	Exti_Enable(4);


	while (1)
	{

	display_7_seg(*pointer);
	uint32 i;
	for (  i = 0; i < 1000000; i++);


	}

	return 0 ;
}






void EXTI0_IRQHandler(void) {

	if(*pointer==9){

		*pointer=0;
	}
	
	else{
		*pointer +=1;
	}

	//clear pending flag
		EXTI->PR &= ~(1 << (4));
}

void EXTI4_IRQHandler(void){

	if(*pointer==0){
		*pointer=9;
	}

	else{
		*pointer -=1 ;
	}
	
	//clear pending flag
		EXTI->PR &= ~(1 << (4));
}




void display_7_seg(uint8 counter){
	switch ( counter)
		{
		case 0:
			 Gpio_WritePin(GPIO_A , 0 , HIGH);
			 Gpio_WritePin(GPIO_A , 1 , HIGH);
			 Gpio_WritePin(GPIO_A , 2 , HIGH);
			 Gpio_WritePin(GPIO_A , 3 , HIGH);
			 Gpio_WritePin(GPIO_A , 4 , HIGH);
			 Gpio_WritePin(GPIO_A , 5 , HIGH);
			 Gpio_WritePin(GPIO_A , 6 , LOW);

			break;
		case 1:
			Gpio_WritePin(GPIO_A , 0 , LOW);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , LOW);
			Gpio_WritePin(GPIO_A , 4 , LOW);
			Gpio_WritePin(GPIO_A , 5 , LOW);
			Gpio_WritePin(GPIO_A , 6 , LOW);
			break ;
		case 2:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , LOW );
			Gpio_WritePin(GPIO_A , 3 , HIGH);
			Gpio_WritePin(GPIO_A , 4 , HIGH);
			Gpio_WritePin(GPIO_A , 5 , LOW);
			Gpio_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 3:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , HIGH);
			Gpio_WritePin(GPIO_A , 4 , LOW);
			Gpio_WritePin(GPIO_A , 5 , LOW);
			Gpio_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 4:
			Gpio_WritePin(GPIO_A , 0 , LOW);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , LOW);
			Gpio_WritePin(GPIO_A , 4 , LOW);
			Gpio_WritePin(GPIO_A , 5 , HIGH);
			Gpio_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 5:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , LOW);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , HIGH);
			Gpio_WritePin(GPIO_A , 4 , LOW);
			Gpio_WritePin(GPIO_A , 5 ,HIGH);
			Gpio_WritePin(GPIO_A , 6 , HIGH);

			break;

		case 6:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , LOW);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , HIGH);
			Gpio_WritePin(GPIO_A , 4 , HIGH);
			Gpio_WritePin(GPIO_A , 5 , HIGH);
			Gpio_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 7:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , LOW);
			Gpio_WritePin(GPIO_A , 4 , LOW);
			Gpio_WritePin(GPIO_A , 5 , LOW);
			Gpio_WritePin(GPIO_A , 6 , LOW);
			break;


		case 8:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , HIGH);
			Gpio_WritePin(GPIO_A , 4 , HIGH);
			Gpio_WritePin(GPIO_A , 5 , HIGH);
			Gpio_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 9:
			Gpio_WritePin(GPIO_A , 0 , HIGH);
			Gpio_WritePin(GPIO_A , 1 , HIGH);
			Gpio_WritePin(GPIO_A , 2 , HIGH);
			Gpio_WritePin(GPIO_A , 3 , HIGH);
			Gpio_WritePin(GPIO_A , 4 , LOW);
			Gpio_WritePin(GPIO_A , 5 , HIGH);
			Gpio_WritePin(GPIO_A , 6 , HIGH);
			break;

		default:
			break;
		}

}

