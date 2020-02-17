#include "FordFulkerson.cpp"

int** buildGraph() {
    unsigned int size;
    int u, v, w;

    cout << "Building the graph!\n\tPlease enter with the number of elements of graph: ";
    cin >> size;
    cout << "\tEnter with edges of the Graph in format u v w, where are the vertices of origin, v the end and the weight of the edge:\n";
    cout << "\tIf you want to finish the entries, just enter -1 -1 -1.\n";

    qntVertices = size;
    int** graph = createGraph(qntVertices);
    while(true) {
        cout << "\n\t\tEnter with a new vertex: ";
        cin >> u >> v >> w;

        if (u == -1 and v == -1 and w == -1) {
            break;
        }

        addEdge(graph, u, v, w);
    }

    return graph;
}


int main(){
    int start, end;
    cout << "FORD-FULKERSON ALGORITHM" << endl;

    int** graph = buildGraph();

    cout << "Enter the start vertex: ";
    cin >> start;
    cout << "Enter the end vertex: ";
    cin >> end;
    
    fordFulkerson(graph, start, end);
    cout << endl;
    destroyGraph();

    return 0;
}