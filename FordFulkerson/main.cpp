#include "FordFulkerson.cpp"

int main(){
    cout << "FORD-FULKERSON ALGORITHM" << endl;

    qntVertices = 6;
    int** graph = createGraph(qntVertices);

    addEdge(graph, 0, 1, 16);
    addEdge(graph, 0, 2, 13);
    addEdge(graph, 1, 2, 10);
    addEdge(graph, 2, 1, 4);
    addEdge(graph, 1, 3, 12);
    addEdge(graph, 3, 2, 9);
    addEdge(graph, 2, 4, 14);
    addEdge(graph, 4, 3, 7);
    addEdge(graph, 3, 5, 20);
    addEdge(graph, 4, 5, 4);

    fordFulkerson(graph, 0, 4);
    cout << endl;
    destroyGraph();

    return 0;
}