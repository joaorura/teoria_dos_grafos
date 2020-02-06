//
// Created by jmess on 06/02/2020.
//

#ifndef DIJKSTRA__GRAPH_H
#define DIJKSTRA__GRAPH_H

#include <vector>

using namespace std;

typedef pair<int, int> Vertex;
typedef vector<Vertex> AdjancyList;
typedef vector<AdjancyList> TheGraph;

class Graph {
private:
    TheGraph graph;

public:
    explicit Graph(int);

    bool checkElement(int);

    bool addVertex(int, int, int);

    unsigned int getSize();

    AdjancyList* getAdjance(int);

};


#endif //DIJKSTRA__GRAPH_H
