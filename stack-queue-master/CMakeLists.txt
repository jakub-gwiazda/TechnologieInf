cmake_minimum_required(VERSION 4.2)
project(stack)

set(CMAKE_CXX_STANDARD 20)

add_executable(stack main.cpp
        cmake-build-debug/stack.h)
