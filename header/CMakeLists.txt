cmake_minimum_required(VERSION 3.21.2)

project(myheader VERSION 0.0.1)

file(GLOB_RECURSE SOURCES src/calc/*.h src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})