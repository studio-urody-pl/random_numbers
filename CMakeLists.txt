cmake_minimum_required(VERSION 3.24)
project(random_numbers)

set(CMAKE_CXX_STANDARD 17)

add_executable(random_numbers pseudorandom_numbers.cpp)
