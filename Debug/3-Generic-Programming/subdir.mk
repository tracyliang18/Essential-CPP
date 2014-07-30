################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../3-Generic-Programming/Iterator.cpp \
../3-Generic-Programming/Iterator_inserter.cpp \
../3-Generic-Programming/algorithm.cpp \
../3-Generic-Programming/map.cpp \
../3-Generic-Programming/sequence_containers.cpp \
../3-Generic-Programming/set.cpp 

OBJS += \
./3-Generic-Programming/Iterator.o \
./3-Generic-Programming/Iterator_inserter.o \
./3-Generic-Programming/algorithm.o \
./3-Generic-Programming/map.o \
./3-Generic-Programming/sequence_containers.o \
./3-Generic-Programming/set.o 

CPP_DEPS += \
./3-Generic-Programming/Iterator.d \
./3-Generic-Programming/Iterator_inserter.d \
./3-Generic-Programming/algorithm.d \
./3-Generic-Programming/map.d \
./3-Generic-Programming/sequence_containers.d \
./3-Generic-Programming/set.d 


# Each subdirectory must supply rules for building sources it contributes
3-Generic-Programming/%.o: ../3-Generic-Programming/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


