################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO.c \
../HMI_ECU.c \
../Keypad.c \
../LCD.c \
../Timer.c \
../UART.c 

OBJS += \
./GPIO.o \
./HMI_ECU.o \
./Keypad.o \
./LCD.o \
./Timer.o \
./UART.o 

C_DEPS += \
./GPIO.d \
./HMI_ECU.d \
./Keypad.d \
./LCD.d \
./Timer.d \
./UART.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


