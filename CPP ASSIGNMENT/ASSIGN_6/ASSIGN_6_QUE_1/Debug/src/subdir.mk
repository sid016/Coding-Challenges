################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/book.cpp \
../src/main.cpp \
../src/product.cpp \
../src/tapes.cpp 

OBJS += \
./src/book.o \
./src/main.o \
./src/product.o \
./src/tapes.o 

CPP_DEPS += \
./src/book.d \
./src/main.d \
./src/product.d \
./src/tapes.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


