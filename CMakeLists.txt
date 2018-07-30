cmake_minimum_required(VERSION 3.12)
project(hwLFG2)

set(CMAKE_CXX_STANDARD 11)

add_executable(hwLFG2 main.cpp lfgqueue.h player.cpp player.h lfgqueue.cpp)