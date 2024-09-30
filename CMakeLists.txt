cmake_minimum_required(VERSION 3.5.0)
project(ProjectBook VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address -g")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")

add_executable(ProjectBook src/main.cpp src/CBook/cbook.cpp src/CLibrary/clibrary.cpp src/CScenario/CScenario.cpp)
include_directories(src/CBook src/CLibrary src/CScenario)


