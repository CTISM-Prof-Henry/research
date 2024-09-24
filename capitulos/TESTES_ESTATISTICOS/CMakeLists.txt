cmake_minimum_required(VERSION 3.21)
project(compiler C)

set(CMAKE_C_STANDARD 23)

include_directories(include)

add_executable(rabbit src/main.c)