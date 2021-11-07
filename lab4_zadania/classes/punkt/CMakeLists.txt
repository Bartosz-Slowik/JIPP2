cmake_minimum_required(VERSION 3.16)

project(punkt)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(punkt src/main.cpp src/punkt.cpp)