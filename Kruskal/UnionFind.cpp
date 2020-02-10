//
// Created by jmess on 07/02/2020.
//

#include "UnionFind.h"
#include <exception>

UnionFind::UnionFind(int size) {
    this->size = size;
    this->elements = new int[size];
    for (size--; size >= 0; size--) {
        this->elements[size] = -1;
    }
}

unsigned int UnionFind::getRoot(unsigned int v) {
    if (this->elements[v] < 0) {
        return v;
    }
    else {
        this->elements[v] = (int) this->getRoot( this->elements[v]);
        return this->elements[v];
    }
}

bool UnionFind::checkSameSet(unsigned int u, unsigned int v) {
    return this->getRoot(v) == this->getRoot(u);
}

void UnionFind::merge(unsigned int v, unsigned int u) {
    v = this->getRoot(v);
    u = this->getRoot(u);

    if (v == u) {
        return;
    }

    if (this->elements[u] < this->elements[v]) {
        int aux = this->elements[u];
        this->elements[u] = this->elements[v];
        this->elements[v] = aux;
    }

    this->elements[v] += this->elements[u];
    this->elements[u] = (int) v;
}
