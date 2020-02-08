//
// Created by jmess on 07/02/2020.
//

#ifndef PRIM_COMPARE_H
#define PRIM_COMPARE_H

#include <tuple>

using namespace std;

class Compare {
    public:
        bool operator()(tuple<int, int, int>, tuple<int, int, int>);
};


#endif //PRIM_COMPARE_H
