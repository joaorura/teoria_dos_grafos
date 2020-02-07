//
// Created by jmess on 06/02/2020.
//

#ifndef DIJKSTRA__DIJKSTRA_H
#define DIJKSTRA__DIJKSTRA_H

#include "Graph.h"

class Dijkstra {
    private:
        unsigned int size;

        Graph* graph;
        int* dist;
        bool* visited;

        void clear();

    public:
        explicit Dijkstra(Graph* graph);

        void run(int);

        vector<int> getAllResult();
};


#endif //DIJKSTRA__DIJKSTRA_H
