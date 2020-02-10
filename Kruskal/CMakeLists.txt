cmake_minimum_required(VERSION 3.15)
project(Kruskal)

set(CMAKE_CXX_STANDARD 20)

add_executable(Kruskal UnionFind.cpp UnionFind.h Graph.cpp Graph.h Kruskal.cpp Kruskal.h main.cpp)