cmake_minimum_required(VERSION 3.11)
project(ps2 C)

set(CMAKE_C_STANDARD 99)

add_executable(ps2 main.c maths.h maths.c)