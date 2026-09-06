cmake_minimum_required(VERSION 4.3)
project(A6_Busquedas)

set(CMAKE_CXX_STANDARD 20)

add_executable(A6_Busquedas src/main.cpp
        src/busqueda.cpp
        include/busqueda.h)
target_include_directories(A6_Busquedas PRIVATE include)
