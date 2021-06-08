cmake_minimum_required(VERSION 3.16)

project(Buzz-GB)

include_directories(./include ./src ./libs)

set(CMAKE_CXX_STANDARD 20)

add_executable(Buzz-GB ./src/main.cpp ./src/registers.cpp)
