################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/AS1.c \
../Generated_Code/ASerialLdd2.c \
../Generated_Code/BitIoLdd1.c \
../Generated_Code/BitIoLdd2.c \
../Generated_Code/BitIoLdd3.c \
../Generated_Code/Cpu.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PTB2.c \
../Generated_Code/PTB3.c \
../Generated_Code/PTC2.c \
../Generated_Code/Pins1.c 

OBJS += \
./Generated_Code/AS1.o \
./Generated_Code/ASerialLdd2.o \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitIoLdd3.o \
./Generated_Code/Cpu.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PTB2.o \
./Generated_Code/PTB3.o \
./Generated_Code/PTC2.o \
./Generated_Code/Pins1.o 

C_DEPS += \
./Generated_Code/AS1.d \
./Generated_Code/ASerialLdd2.d \
./Generated_Code/BitIoLdd1.d \
./Generated_Code/BitIoLdd2.d \
./Generated_Code/BitIoLdd3.d \
./Generated_Code/Cpu.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PTB2.d \
./Generated_Code/PTB3.d \
./Generated_Code/PTC2.d \
./Generated_Code/Pins1.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/jesse/Desktop/CC2511/Corey_smith_Assignment1/Static_Code/System" -I"C:/Users/jesse/Desktop/CC2511/Corey_smith_Assignment1/Static_Code/PDD" -I"C:/Users/jesse/Desktop/CC2511/Corey_smith_Assignment1/Static_Code/IO_Map" -I"C:\Freescale\KDS_v3\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:/Users/jesse/Desktop/CC2511/Corey_smith_Assignment1/Sources" -I"C:/Users/jesse/Desktop/CC2511/Corey_smith_Assignment1/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


