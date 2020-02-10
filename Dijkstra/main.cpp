#include <iostream>
#include "Graph.h"
#include "Dijkstra.h"

using namespace std;

Graph buildGraph() {
    unsigned int size;
    int u, v, w;

    cout << "Building the graph!\n\tPlease enter with the number of elements of graph: ";
    cin >> size;
    cout << "\tEnter with edges of the Graph in format u v w, where are the vertices of origin, v the end and the weight of the edge:\n";
    cout << "\tIf you want to finish the entries, just enter -1 -1 -1.\n";

    Graph graph(size);
    while(true) {
        cout << "\n\t\tEnter with a new vertex: ";
        cin >> u >> v >> w;

        if (u == -1 and v == -1 and w == -1) {
            break;
        }

        graph.addVertex(u, v, w);
    }

    return graph;
}

void printVector(unsigned int start, const vector<int>& theVector) {
    for (unsigned int i = 0; i < theVector.size(); i++) {
        cout << "(" << start << ", " << i << "): " << theVector[i] << endl;
    }

    cout << endl;
}


int main() {
    Graph graph = buildGraph();
    Dijkstra dijkstra(&graph);
    unsigned int start;
    cout << "\n\nYour Graph: ";
    cout << graph.toString();

    cout << "Enter with start vertex of dijkstra: ";
    cin >> start;
    dijkstra.run((int) start);
    vector<int> result = dijkstra.getAllResult();

    printVector(start, result);

    return 0;
}
