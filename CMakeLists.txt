cmake_minimum_required(VERSION 3.22)
project(task)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O0 -Wall -Wextra")

add_executable(task
        src/main.cpp
        )
