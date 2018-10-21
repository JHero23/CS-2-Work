cmake_minimum_required(VERSION 3.10)
project(hwPKM1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(PROJECT_HEADERS pokemon.h)
set(PROJECT_SOURCES main.cpp pokemon.cpp)

add_executable(hwPKM1 ${PROJECT_SOURCES} ${PROJECT_HEADERS})