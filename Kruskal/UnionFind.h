//
// Created by jmess on 07/02/2020.
//

#ifndef KRUSKAL_UNIONFIND_H
#define KRUSKAL_UNIONFIND_H

#include <iostream>

using namespace std;

class UnionFind {
    private:
        int size;
        int* elements;

    public:
        explicit UnionFind(int);

        unsigned int getRoot(unsigned int);

        bool checkSameSet(unsigned int, unsigned int);

        void merge(unsigned int, unsigned int);
};


#endif //KRUSKAL_UNIONFIND_H
