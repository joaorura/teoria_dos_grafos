//
// Created by jmess on 06/02/2020.
//

#ifndef DIJKSTRA__GRAPH_H
#define DIJKSTRA__GRAPH_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

typedef pair<int, int> Vertex;
typedef vector<Vertex> AdjancyList;
typedef vector<AdjancyList> TheGraph;

class Graph {
private:
    TheGraph graph;

public:
    explicit Graph(unsigned int);

    bool checkElement(unsigned int);

    bool addVertex(int, int, int);

    unsigned int getSize();

    AdjancyList* getAdjance(unsigned int);

    string toString();
};


#endif //DIJKSTRA__GRAPH_H
