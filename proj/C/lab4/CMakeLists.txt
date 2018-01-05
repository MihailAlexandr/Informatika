cmake_minimum_required(VERSION 3.8)
project(lab4)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS -pedantic-errors)

set(SOURCE_FILES main.c)
add_executable(lab4 ${SOURCE_FILES})
target_link_libraries(lab4 m)