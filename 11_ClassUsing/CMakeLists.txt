cmake_minimum_required(VERSION 3.15)
project(11_ClassUsing)

set(CMAKE_CXX_STANDARD 14)

add_executable(11_ClassUsing main.cpp )
add_executable(mytime0 mytime0.h mytime0.cpp usetime0.cpp mytime3.h)
add_executable(mytime1 mytime1.cpp mytime1.h usetime1.cpp)
add_executable(mytime3 mytime3.h mytime3.cpp usetime3.cpp)
add_executable(vector vector.h vector.cpp)