//
// Created by jmess on 07/02/2020.
//

#ifndef KRUSKAL_UNIONFIND_H
#define KRUSKAL_UNIONFIND_H


class UnionFind {
    private:
        unsigned int size;
        int* elements;

    public:
        explicit UnionFind(unsigned int);

        int getRoot(int);

        bool checkSameSet(int, int);

        unsigned int getSetSize(int);

        void merge(int, int);
};


#endif //KRUSKAL_UNIONFIND_H
