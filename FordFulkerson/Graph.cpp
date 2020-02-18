#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int qntVertices;
int qntEdges = 0;

struct Edge {
  int source;
  int dest;
  int cost;
};

typedef vector<Edge> edgeList;
edgeList edges; 

typedef vector<tuple<int, int>> vertexNeighbors;

int** createGraph(unsigned qntVertices) {
  int** graph = 0;
  graph = new int*[qntVertices];

  for(int row = 0; row < qntVertices; row++) {
    graph[row] = new int[qntVertices];

    for(int col = 0; col < qntVertices; col++){
      graph[row][col] = -1;
    }
  }

  return graph;
}

void destroyGraph() {
  edges.clear();
  qntVertices = 0;
  qntEdges = 0;
}

void addEdge(int** graph, int source, int dest, int cost) {
  graph [source][dest] = cost;
  
  Edge newEdge;
  newEdge.source = source;
  newEdge.dest = dest;
  newEdge.cost = cost;

  edges.push_back(newEdge);
  qntEdges += 1;
}

void addDoubleEdge(int** graph, int source, int dest, int cost) {
  addEdge(graph, source, dest, cost);
  addEdge(graph, dest, source, cost);
}



vertexNeighbors getVerticeNeighbors(int** graph, int verticeId) {
  vertexNeighbors neighbors; 
  for(int i = 0; i < qntVertices; i++) {
    if (graph[verticeId][i] != -1) {
      neighbors.push_back(tuple<int, int> (i, graph[verticeId][i]));
    }
  }
  return neighbors;
}

void printGraph(int ** graph) {
  for(int i = 0; i < edges.size(); i++) {
    cout << "(" << edges.at(i).source << ", " << edges.at(i).dest << ", " << edges.at(i).cost << ")" << endl;  
  }
}