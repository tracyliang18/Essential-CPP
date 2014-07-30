################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../1-basic/array_vector.cpp \
../1-basic/file_op.cpp \
../1-basic/init_object.cpp 

OBJS += \
./1-basic/array_vector.o \
./1-basic/file_op.o \
./1-basic/init_object.o 

CPP_DEPS += \
./1-basic/array_vector.d \
./1-basic/file_op.d \
./1-basic/init_object.d 


# Each subdirectory must supply rules for building sources it contributes
1-basic/%.o: ../1-basic/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


