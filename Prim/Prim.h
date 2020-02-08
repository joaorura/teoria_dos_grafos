//
// Created by jmess on 07/02/2020.
//

#ifndef PRIM_PRIM_H
#define PRIM_PRIM_H

#include "Graph.h"
#include "Compare.h"
#include <queue>
#include <tuple>

typedef tuple<int, int, int> tupleInt;

class Prim {
    private:
        unsigned int size;
        int cost{};
        bool *elements;
        Graph *graph;
        priority_queue<tupleInt, vector<tupleInt>, Compare> pq;
        vector<tupleInt> result;

        void process(int);

        void execute();

public:
        explicit Prim(Graph*);

        void print();
};


#endif //PRIM_PRIM_H
