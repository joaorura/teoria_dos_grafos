cmake_minimum_required(VERSION 3.15)
project(Prim)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prim main.cpp Graph.cpp Graph.h Prim.cpp Prim.h Compare.cpp Compare.h)