cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_C_STANDARD 90)
set(CMAAKE_C_FLAGS -pedantic -errors)

set(SOURCE_FILES main.c)
add_executable(untitled ${SOURCE_FILES})
target_link_libraries(untitled m)