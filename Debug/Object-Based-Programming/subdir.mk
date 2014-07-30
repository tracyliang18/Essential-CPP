################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../Object-Based-Programming/main.o \
../Object-Based-Programming/stack.o 

CPP_SRCS += \
../Object-Based-Programming/iterator.cpp \
../Object-Based-Programming/main.cpp \
../Object-Based-Programming/stack.cpp 

OBJS += \
./Object-Based-Programming/iterator.o \
./Object-Based-Programming/main.o \
./Object-Based-Programming/stack.o 

CPP_DEPS += \
./Object-Based-Programming/iterator.d \
./Object-Based-Programming/main.d \
./Object-Based-Programming/stack.d 


# Each subdirectory must supply rules for building sources it contributes
Object-Based-Programming/%.o: ../Object-Based-Programming/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


