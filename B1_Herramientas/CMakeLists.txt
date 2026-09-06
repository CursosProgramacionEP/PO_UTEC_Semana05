cmake_minimum_required(VERSION 4.3)
project(B1_Herramientas)

set(CMAKE_CXX_STANDARD 20)

add_executable(B1_Herramientas src/main.cpp
        src/herramientas.cpp
        include/herramientas.h)
target_include_directories(B1_Herramientas PRIVATE include)
