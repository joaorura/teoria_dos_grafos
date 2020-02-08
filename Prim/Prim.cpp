//
// Created by jmess on 07/02/2020.
//

#include "Prim.h"
#include <iostream>

using namespace std;

Prim::Prim(Graph* graph) {
    this->graph = graph;
    this->size = graph->getSize();

    this->elements = new bool[size];
    for (int i = 0; i < this->size; i++) {
        this->elements[i] = false;
    }

    this->execute();
}

void Prim::process(int u) {
    this->elements[u] = true;

    for (Vertex aux : *this->graph->getAdjance(u)) {
        if (!this->elements[aux.first]) {
            this->pq.push(tupleInt(u, aux.first, aux.second));
        }
    }
}


void Prim::execute() {
    cost = 0;
    tupleInt aux;

    process(0);
    this->result.emplace_back(0, 0, 0);

    while (!pq.empty()) {
        aux = pq.top();
        pq.pop();

        if (!this->elements[get<1>(aux)]) {
            this->result.push_back(aux);

            cost += get<2>(aux);
            process(get<1>(aux));
        }
    }
}

void Prim::print() {
    cout << "\nMST Result\n\tCost: " << cost << endl;
    cout << "\tTree: ";

    for (tupleInt i : result) {
        cout << "(" << get<0>(i) << ", " << get<1>(i) << ", " << get<2>(i) << "); ";
    }

    cout << endl;
}


