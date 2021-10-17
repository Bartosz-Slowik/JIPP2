cmake_minimum_required(VERSION 3.16)

project(simple_calc)

SET(CMAKE_CXX_STANDARD 17)

include_directories(include)

ADD_EXECUTABLE(simple_calc

        src/calc.cpp src/main.cpp)

