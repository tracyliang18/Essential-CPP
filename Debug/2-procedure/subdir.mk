################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../2-procedure/Function-overloaded.cpp \
../2-procedure/multiply_type.cpp \
../2-procedure/template_function.cpp 

OBJS += \
./2-procedure/Function-overloaded.o \
./2-procedure/multiply_type.o \
./2-procedure/template_function.o 

CPP_DEPS += \
./2-procedure/Function-overloaded.d \
./2-procedure/multiply_type.d \
./2-procedure/template_function.d 


# Each subdirectory must supply rules for building sources it contributes
2-procedure/%.o: ../2-procedure/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


