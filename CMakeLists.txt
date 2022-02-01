cmake_minimum_required(VERSION 3.20)
project(vector_lab C)

set(CMAKE_C_STANDARD 11)

add_executable(vector_lab main.c libs/data_structures/vector/vector.h libs/data_structures/vector/vector.c)

add_subdirectory(libs)
target_link_libraries(vector_lab vector)
