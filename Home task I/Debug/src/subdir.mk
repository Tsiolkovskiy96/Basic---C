################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Home\ task\ I.c 

OBJS += \
./src/Home\ task\ I.o 

C_DEPS += \
./src/Home\ task\ I.d 


# Each subdirectory must supply rules for building sources it contributes
src/Home\ task\ I.o: ../src/Home\ task\ I.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Home task I.d" -MT"src/Home\ task\ I.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


