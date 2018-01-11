cmake_minimum_required(VERSION 3.9)
project(Lab7 C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS -pedantic-errors)

add_executable(Lab7 main.c)
target_link_libraries(Lab7 m)