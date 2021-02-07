cmake_minimum_required(VERSION 3.10)

project(library)

add_executable(library book.cpp library.cpp)
set(CMAKE_CPP_STANDARD 20)
set(CMAKE_CPP_STANDARD_REQUIRED True)