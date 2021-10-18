cmake_minimum_required(VERSION 3.16)

project(first_lib)

SET(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(first_lib STATIC src/lib.cpp)

