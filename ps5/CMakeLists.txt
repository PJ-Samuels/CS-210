cmake_minimum_required(VERSION 3.11)
project(ps5 C)

set(CMAKE_C_STANDARD 99)

add_executable(ps5 main.c node.c node.h stack.c stack.h rpn.c rpn.h errors.h errors.c)