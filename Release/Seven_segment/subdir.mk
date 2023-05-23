################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Seven_segment/seven_segment.c 

OBJS += \
./Seven_segment/seven_segment.o 

C_DEPS += \
./Seven_segment/seven_segment.d 


# Each subdirectory must supply rules for building sources it contributes
Seven_segment/%.o: ../Seven_segment/%.c Seven_segment/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra -g -DNDEBUG -DSTM32F401xE -DHSE_VALUE=8000000 -I"../include" -I"E:\Embedded C code\lab_8_Interrupt_Project\Seven_segment" -I"E:\Embedded C code\lab_8_Interrupt_Project\EXTI_driver" -I"E:\Embedded C code\lab_8_Interrupt_Project\Gpio" -I"E:\Embedded C code\lab_8_Interrupt_Project\Lib" -I"E:\Embedded C code\lab_8_Interrupt_Project\Rcc" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


