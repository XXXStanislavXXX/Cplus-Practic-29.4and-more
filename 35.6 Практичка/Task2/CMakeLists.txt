cmake_minimum_required(VERSION 4.1)
project(Task2)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(Task2 main.cpp
        include/unique_filter.h
        src/unique_filter.cpp)
