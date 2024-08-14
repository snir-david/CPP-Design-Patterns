cmake_minimum_required(VERSION 3.16)
project(Desgin_Patterns)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SRC_FILE ${PROJECT_SOURCE_DIR}/*.cpp ${PROJECT_SOURCE_DIR}/*.c)
file(GLOB_RECURSE HDR_FILE ${PROJECT_SOURCE_DIR}/*.hpp ${PROJECT_SOURCE_DIR}/*.h)

add_executable(main.cpp ${SRC_FILE} ${HDR_FILE})
