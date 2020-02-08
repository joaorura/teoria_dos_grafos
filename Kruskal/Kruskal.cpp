//
// Created by jmess on 08/02/2020.
//

#include "Kruskal.h"

Kruskal::Kruskal(Graph* graph) {
    this->graph = graph;
    this->uf = new UnionFind(graph->getSize());
    this->cost = 0;
}

void Kruskal::execute() {
    for(unsigned int i = 0; i < this->graph->getSize(); i++) {
        for(AdjancyList adj : *this->graph->getAdjance(i)) {
             
        }
    }
}


