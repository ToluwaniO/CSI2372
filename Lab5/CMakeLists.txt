cmake_minimum_required(VERSION 3.8)
project(Lab5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp device.cpp device.h ChargeStack.cpp ChargeStack.h)
add_executable(Lab5 ${SOURCE_FILES})