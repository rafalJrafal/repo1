################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../sources/R_Conditional.cpp \
../sources/R_Mutex.cpp \
../sources/R_Thread.cpp 

OBJS += \
./sources/R_Conditional.o \
./sources/R_Mutex.o \
./sources/R_Thread.o 

CPP_DEPS += \
./sources/R_Conditional.d \
./sources/R_Mutex.d \
./sources/R_Thread.d 


# Each subdirectory must supply rules for building sources it contributes
sources/%.o: ../sources/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


