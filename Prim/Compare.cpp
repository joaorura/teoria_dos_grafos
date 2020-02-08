//
// Created by jmess on 07/02/2020.
//

#include "Compare.h"

using namespace std;

bool Compare::operator()(tuple<int, int, int> n1, tuple<int, int, int> n2) {
    return get<2>(n1) > get<2>(n2);
}
