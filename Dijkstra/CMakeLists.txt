cmake_minimum_required(VERSION 3.15)
project(Dijkstra)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(Dijkstra
        CMakeLists.txt
        Graph.cpp
        Graph.h
        main.cpp)
