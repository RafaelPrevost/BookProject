cmake_minimum_required(VERSION 3.5.0)
project(ProjectBook VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ProjectBook main.cpp src/Book/book.cpp)
include_directories(src/Book)

