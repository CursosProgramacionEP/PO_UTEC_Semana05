cmake_minimum_required(VERSION 3.16)
project(A3_MetodosConArreglos)

set(CMAKE_CXX_STANDARD 20)

add_executable(A3_MetodosConArreglos src/main.cpp
        src/arreglos.cpp
        include/arreglos.h)
target_include_directories(A3_MetodosConArreglos PRIVATE include)
