//
// Created by jmess on 08/02/2020.
//

#ifndef KRUSKAL_KRUSKAL_H
#define KRUSKAL_KRUSKAL_H

#include "UnionFind.h"
#include "Graph.h"

using namespace std;

class Kruskal {
    private:
        UnionFind *uf;
        unsigned int cost;
        Graph* graph;

        void execute();
    public:
        explicit Kruskal(Graph*);

        void printAllResults();
};


#endif //KRUSKAL_KRUSKAL_H
