//
// Created by jmess on 07/02/2020.
//

#include "UnionFind.h"

UnionFind::UnionFind(unsigned int size) {
    this->size = size;
    this->elements = new int[size];

    for (size--; size >= 0; size--) {
        this->elements[size] = (int) size;
    }
}

int UnionFind::getRoot(int v) {
    if (this->elements[v] < 0) {
        return v;
    }
    else {
        this->elements[v] = this->getRoot( this->elements[v]);
        return this->elements[v];
    }
}

bool UnionFind::checkSameSet(int u, int v) {
    return this->getRoot(v) == this->getRoot(u);
}

unsigned int UnionFind::getSetSize(int v) {
    int aux = this->getRoot(v);
    aux = this->elements[aux] * -1;
    return aux;
}

void UnionFind::merge(int v, int u) {
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
    this->elements[u] = v;
}
