//
// Created by jmess on 06/02/2020.
//

#include "Dijkstra.h"
#include <queue>
#include <iostream>

using namespace std;

class CompareDist {
    public:
        bool operator()(pair<int,int> n1,pair<int,int> n2) {
            return n1.second > n2.second;
        }
};

Dijkstra::Dijkstra(Graph* graph) {
    this->graph = graph;
    this->size = graph->getSize();
    this->dist = new int[this->size];
    this->visited = new bool[this->size];
}

void Dijkstra::clear() {
    for (int i= 0; i < this->size; i++){
        this->dist[i] = INT32_MAX;
        this->visited[i] = false;
    }
}

void Dijkstra::run(int start) {
    int aux;
    Vertex v;
    AdjancyList adj_aux;

    this->clear();

    priority_queue<Vertex, AdjancyList, CompareDist> pq;
    this->dist[start] = 0;
    pq.push(Vertex(start, 0));


    while (!pq.empty()) {
        v = pq.top();
        pq.pop();

        if (this->visited[v.first]) {
            continue;
        }
        else {
            visited[v.first] = true;
            adj_aux = *this->graph->getAdjance(v.first);
//            cout << v.first << endl;

            for (Vertex u : adj_aux ) {
                aux = this->dist[v.first] + u.second;
//                cout << u.first << " | " << u.second << endl;

                if (aux < this->dist[u.first]) {
                    this->dist[u.first] = aux;
                    pq.push(u);
                }
            }
        }
    }
}

vector<int> Dijkstra::getAllResult() {
    vector<int> result;

    result.reserve(this->size);
    for (int i = 0; i < this->size; i++) {
        result.push_back(this->dist[i]);
    }

    return result;
}


