cmake_minimum_required(VERSION 4.3)
project(B2_Estadisticos)

set(CMAKE_CXX_STANDARD 20)

add_executable(B2_Estadisticos src/main.cpp
        src/estadisticos.cpp
        include/estadisticos.h)
target_include_directories(B2_Estadisticos PRIVATE include)
