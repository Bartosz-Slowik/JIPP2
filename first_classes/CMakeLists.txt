cmake_minimum_required(VERSION 3.16)

project(first_classes)

SET(CMAKE_CXX_STANDARD 17)

include_directories(include)

ADD_EXECUTABLE(first_classes

        src/main.cpp)