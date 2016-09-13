cmake_minimum_required(VERSION 3.6)
project(ArtOfProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Algorithms.cpp Algorithms.h)
add_executable(ArtOfProgramming ${SOURCE_FILES})