cmake_minimum_required(VERSION 3.9)

project(cmake_docker)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp)

add_executable(cppdocker_run ${SOURCE_FILES})
