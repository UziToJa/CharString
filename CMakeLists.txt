cmake_minimum_required(VERSION 3.28)
project(CharString)

set(CMAKE_CXX_STANDARD 17)

add_executable(CharString main.cpp
        string.cpp
        string.h)
