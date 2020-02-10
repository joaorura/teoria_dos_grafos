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

bool Graph:: checkElement(unsigned int u) {
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

AdjancyList* Graph:: getAdjance(unsigned int u) {
    if(this->checkElement(u)) {
        return new AdjancyList(this->graph[u]);
    }
    else {
        return nullptr;
    }
}

unsigned int Graph::getSize() {
    return (unsigned int) this->graph.size();
}

string Graph::toString() {
    string out;
    for (unsigned int i = 0; i < this->graph.size(); i++) {
        out += to_string(i);
        out += ": ";

        for (Vertex aux : *this->getAdjance(i)) {
            out += "(";
            out += to_string(aux.first);
            out += "; ";
            out += to_string(aux.second);
            out += "); ";
        }

        out += "\n";
    }

    return out;
}
