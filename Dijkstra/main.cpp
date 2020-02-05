#include <iostream>
#include <bits/stdc++.h>
#include "Graph.h"

using namespace std;


int main() {
    Graph graph(4);
    graph.addVertex(0, 2, 4);
    graph.addVertex(0, 1, 4);
    graph.addVertex(3, 1, 4);
    graph.addVertex(2, 0, 4);
    graph.addVertex(1, 2, 4);
    graph.addVertex(2, 3, 4);

    return 0;
}
