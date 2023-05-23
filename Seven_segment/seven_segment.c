//
//#include "Std_Types.h"
//#include "Gpio.h"
//
//void display_7_seg(uint8 counter){
//	switch ( counter)
//		{
//		case 0:
//			 Gpio_WritePin(GPIO_A , 0 , HIGH);
//			 Gpio_WritePin(GPIO_A , 1 , HIGH);
//			 Gpio_WritePin(GPIO_A , 2 , HIGH);
//			 Gpio_WritePin(GPIO_A , 3 , HIGH);
//			 Gpio_WritePin(GPIO_A , 4 , HIGH);
//			 Gpio_WritePin(GPIO_A , 5 , HIGH);
//			 Gpio_WritePin(GPIO_A , 6 , LOW);
//
//			break;
//		case 1:
//			Gpio_WritePin(GPIO_A , 0 , LOW);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , LOW);
//			Gpio_WritePin(GPIO_A , 4 , LOW);
//			Gpio_WritePin(GPIO_A , 5 , LOW);
//			Gpio_WritePin(GPIO_A , 6 , LOW);
//			break ;
//		case 2:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , LOW );
//			Gpio_WritePin(GPIO_A , 3 , HIGH);
//			Gpio_WritePin(GPIO_A , 4 , HIGH);
//			Gpio_WritePin(GPIO_A , 5 , LOW);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//			break;
//		case 3:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , HIGH);
//			Gpio_WritePin(GPIO_A , 4 , LOW);
//			Gpio_WritePin(GPIO_A , 5 , LOW);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//			break;
//		case 4:
//			Gpio_WritePin(GPIO_A , 0 , LOW);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , LOW);
//			Gpio_WritePin(GPIO_A , 4 , LOW);
//			Gpio_WritePin(GPIO_A , 5 , HIGH);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//			break;
//		case 5:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , LOW);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , HIGH);
//			Gpio_WritePin(GPIO_A , 4 , LOW);
//			Gpio_WritePin(GPIO_A , 5 ,HIGH);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//
//			break;
//
//		case 6:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , LOW);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , HIGH);
//			Gpio_WritePin(GPIO_A , 4 , HIGH);
//			Gpio_WritePin(GPIO_A , 5 , HIGH);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//			break;
//		case 7:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , LOW);
//			Gpio_WritePin(GPIO_A , 4 , LOW);
//			Gpio_WritePin(GPIO_A , 5 , LOW);
//			Gpio_WritePin(GPIO_A , 6 , LOW);
//			break;
//
//
//		case 8:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , HIGH);
//			Gpio_WritePin(GPIO_A , 4 , HIGH);
//			Gpio_WritePin(GPIO_A , 5 , HIGH);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//			break;
//		case 9:
//			Gpio_WritePin(GPIO_A , 0 , HIGH);
//			Gpio_WritePin(GPIO_A , 1 , HIGH);
//			Gpio_WritePin(GPIO_A , 2 , HIGH);
//			Gpio_WritePin(GPIO_A , 3 , HIGH);
//			Gpio_WritePin(GPIO_A , 4 , LOW);
//			Gpio_WritePin(GPIO_A , 5 , HIGH);
//			Gpio_WritePin(GPIO_A , 6 , HIGH);
//			break;
//
//		default:
//			break;
//		}
//
//}
//
