cmake_minimum_required(VERSION 3.16)

project(Buzz-GB)

set(CMAKE_CXX_STANDARD 20)

add_library(Registers SHARED registers.h registers.cpp)

add_executable(Buzz-GB main.cpp)

target_link_libraries(Buzz-GB Registers)
