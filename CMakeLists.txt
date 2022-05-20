cmake_minimum_required(VERSION 3.22)
project(task)

set(CMAKE_CXX_STANDARD 17)

add_executable(task
        src/main.cpp
        src/Figure.h
        src/Circle.h
        src/DrawHandler.h)
