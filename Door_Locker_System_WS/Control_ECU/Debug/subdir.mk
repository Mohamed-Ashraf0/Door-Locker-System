################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Buzeer.c \
../Control_ECU.c \
../DC_Motor.c \
../GPIO.c \
../PIR.c \
../PWM.c \
../Timer.c \
../UART.c \
../external_eeprom.c \
../twi.c 

OBJS += \
./Buzeer.o \
./Control_ECU.o \
./DC_Motor.o \
./GPIO.o \
./PIR.o \
./PWM.o \
./Timer.o \
./UART.o \
./external_eeprom.o \
./twi.o 

C_DEPS += \
./Buzeer.d \
./Control_ECU.d \
./DC_Motor.d \
./GPIO.d \
./PIR.d \
./PWM.d \
./Timer.d \
./UART.d \
./external_eeprom.d \
./twi.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


