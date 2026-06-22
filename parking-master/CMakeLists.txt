cmake_minimum_required(VERSION 4.2)
project(parking1)

set(CMAKE_CXX_STANDARD 20)

add_executable(parking1 main.cpp
        parking.h
        parking.cpp)
