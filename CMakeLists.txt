cmake_minimum_required(VERSION 3.13)
project(armadillo_sample)

set(CMAKE_CXX_STANDARD 11)

add_executable(armadillo_sample main.cpp)
target_link_libraries(armadillo_sample armadillo lapack blas)