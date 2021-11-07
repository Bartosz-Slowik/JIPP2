cmake_minimum_required(VERSION 3.16)

project(kula)

SET(CMAKE_CXX_STANDARD 17)

include_directories(include)

ADD_EXECUTABLE(kula

        src/kula.cpp src/main.cpp)