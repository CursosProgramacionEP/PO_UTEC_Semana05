cmake_minimum_required(VERSION 4.3)
project(A4_Notas)

set(CMAKE_CXX_STANDARD 20)

add_executable(A4_Notas src/main.cpp
        src/notas.cpp
       )

target_include_directories(A4_Notas PRIVATE include)
