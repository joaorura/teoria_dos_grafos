//
// Created by jmess on 08/02/2020.
//

#include <iostream>
#include <algorithm>
#include "Kruskal.h"

bool myComparison(const pair<int,int> &a,const pair<int,int> &b) {
    return a.second < b.second;
}

Kruskal::Kruskal(Graph* graph) {
    this->graph = graph;
    this->result = new Graph(graph->getSize());
    this->uf = new UnionFind((int) graph->getSize());
    this->cost = 0;

    this->execute();
}

void Kruskal::execute() {
    this->result->addVertex(0, 0, 0);

    for(unsigned int i = 0; i < this->graph->getSize(); i++) {
        AdjancyList adj = *this->graph->getAdjance(i);
        sort(adj.begin(), adj.end(), [](Vertex &left, Vertex &right) {
            return left.second < right.second;
        });

        for(Vertex aux : *this->graph->getAdjance(i)) {
             if(!this->uf->checkSameSet(i, aux.first)) {
                this->cost += aux.second;
                this->result->addVertex((int) i, aux.first, aux.second);

                this->uf->merge(i, aux.first);
             }
        }
    }
}

void Kruskal::printAllResults() {
    cout << "MST Result\n";


    cout << "\tCost: " << this->cost << endl;
    cout << "\tUnion Find:\n";

    cout << this->result->toString();

    cout << endl;
}


