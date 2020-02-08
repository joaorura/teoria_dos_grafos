#include "Graph.h"
#include "Prim.h"

int main() {
    Graph graph(6);
    graph.addVertex(0, 1, 2);
    graph.addVertex(0, 5, 5);
    graph.addVertex(1, 2, 1);
    graph.addVertex(1, 3, 2);
    graph.addVertex(1, 4, 3);
    graph.addVertex(4, 5, 1);

    Prim primExecution(&graph);
    primExecution.print();

    return 0;
}
