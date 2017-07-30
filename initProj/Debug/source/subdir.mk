################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/R_Conditional.cpp \
../source/R_Mutex.cpp \
../source/R_Thread.cpp 

OBJS += \
./source/R_Conditional.o \
./source/R_Mutex.o \
./source/R_Thread.o 

CPP_DEPS += \
./source/R_Conditional.d \
./source/R_Mutex.d \
./source/R_Thread.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


