//
// Created by jmess on 06/02/2020.
//

#include "Graph.h"
#include <algorithm>
#include <iostream>

using namespace std;

Graph:: Graph(unsigned int size) {
    for (; size > 0; size--) {
        this->graph.push_back(AdjancyList());
    }
}

bool Graph:: checkElement(int u) {
    return u < this->graph.size();
}

bool Graph:: addVertex(int u, int v, int weight) {
    Vertex vertex(v, weight);

    if (!this->checkElement(u) or
        find(this->graph[u].begin(), this->graph[u].end(), vertex) != this->graph[u].end()) {
        return false;
    }

    this->graph[u].push_back(vertex);
    return true;
}

AdjancyList* Graph:: getAdjance(int u) {
    if(this->checkElement(u)) {
        return new AdjancyList(this->graph[u]);
    }
    else {
        return nullptr;
    }
}

unsigned int Graph::getSize() {
    return this->graph.size();
}
