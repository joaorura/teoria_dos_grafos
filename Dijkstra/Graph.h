//
// Created by alunoic on 05/02/2020.
//

#ifndef DIJKSTRA_GRAPH_H
#define DIJKSTRA_GRAPH_H

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> Vertex;
typedef vector<Vertex> AdjancyList;
typedef vector<AdjancyList> TheGraph;

class Graph {
    private:
        TheGraph graph;

    public:
        explicit Graph(int);

        explicit Graph(TheGraph);

        bool checkElement(int);

        bool addVertex(int, int, int);

        AdjancyList* getAdjance(int);

};


#endif //DIJKSTRA_GRAPH_H
