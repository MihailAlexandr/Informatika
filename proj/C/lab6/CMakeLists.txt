cmake_minimum_required(VERSION 3.9)
project(lab6)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS -pedantic-errors)

set(SOURCE_FILES main.c)
add_executable(lab6 ${SOURCE_FILES})
target_link_libraries(lab6 m)