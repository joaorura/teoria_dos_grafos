cmake_minimum_required(VERSION 3.15)
project(dijkstra_)

set(CMAKE_CXX_STANDARD 20)

add_executable(dijkstra_ main.cpp Graph.cpp Graph.h Dijkstra.cpp Dijkstra.h)