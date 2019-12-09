cmake_minimum_required(VERSION 3.15)
project(10_ClassAndObject)

set(CMAKE_CXX_STANDARD 14)

add_executable(10_ClassAndObject 0_main.cpp 0_stock.h 0_stock.cpp)
add_executable(new_stock 1_new_stock.h 1_new_stock.cpp 1main.cpp)
add_executable(this_array 1_new_stock.h 1_new_stock.cpp 2_this_main.cpp )
add_executable(stack_class 3_stack_class.h 3_stack_class.cpp 3_stacker.cpp)
