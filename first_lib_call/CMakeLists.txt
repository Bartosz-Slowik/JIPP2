include_directories(${CMAKE_SOURCE_DIR}/first_lib/include)

add_executable(first_lib_call src/main.cpp)

target_link_libraries(first_lib_call first_lib)