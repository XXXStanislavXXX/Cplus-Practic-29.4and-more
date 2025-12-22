cmake_minimum_required(VERSION 4.1)
project(Task3)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(Task3 main.cpp
        src/recursive_file_utils.cpp)
