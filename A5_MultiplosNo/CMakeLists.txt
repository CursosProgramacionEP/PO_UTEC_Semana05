cmake_minimum_required(VERSION 4.3)
project(A5_MultiplosNo)

set(CMAKE_CXX_STANDARD 20)

add_executable(A5_MultiplosNo src/main.cpp
        src/multiplos.cpp
        include/multiplos.h)
target_include_directories(A5_MultiplosNo PRIVATE include)
