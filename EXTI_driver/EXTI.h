
/*Name: Osama Faisal Abdulatef 
  Section : 1 
  B.N 11
*/



#include "Std_Types.h"



#define EXTI_Trigger_Rising  'R'
#define EXTI_Trigger_Falling  'F'
#define EXTI_Trigger_Rising_And_Falling  'B'

#define EXTI 	((ExtiType *)0x40013C00)


typedef struct {
	uint32 IMR;  // Interrupt mask register  // register after pandding flage 
	uint32 EMR ;  // Event mask register 
	uint32  RTSR ;  // Rising trigger selection register
	uint32 FTSR;	// Falling trigger selection register
	uint32 SWIER;	// Software interrupt event register
	uint32 PR;		// Pending register	
} ExtiType;



/*
The trigger_edgeDetection parameter in the Exti_Init function represents the 
triggering edge or event that will generate an interrupt. It determines whether
the interrupt will be triggered by a rising edge, falling edge, or both edges 
of the signal on the corresponding EXTI line.
 */
void Exti_Init(uint8 GPIO_PORT , uint32 pinNumber, uint32 trigger_edgeDetection);
void Exti_Disable(uint32 Exti_line) ;
void Exti_Enable(uint32 Exti_line);

