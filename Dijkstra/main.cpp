#include <iostream>
#include "Graph.h"
#include "Dijkstra.h"

using namespace std;

void printVector(const vector<int>& theVector) {
    for (int i : theVector){
        cout << i << " ";
    }

    cout << endl;
}


int main() {
    Graph graph(3);
    graph.addVertex(0, 2, 4);
    graph.addVertex(0, 1, 3);

    Dijkstra dijkstra(&graph);
    dijkstra.run(0);
    vector<int> result = dijkstra.getAllResult();

    printVector(result);

    return 0;
}
