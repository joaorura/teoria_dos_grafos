#include <queue> 
#include "graph.cpp"

bool bfs(int** graph, int s, int t, int parent[]) { 
	bool visited[qntVertices]; 
	memset(visited, 0, sizeof(visited)); 

	queue <int> pq; 
	pq.push(s); 
	visited[s] = true; 
	parent[s] = -1; 

	while (!pq.empty()) { 
		int u = pq.front(); 
		pq.pop(); 

		for (int v = 0; v < qntVertices; v++) { 
			if (visited[v] == false && graph[u][v] > 0) { 
				pq.push(v); 
				parent[v] = u; 
				visited[v] = true; 
			} 
		} 
	} 

	return (visited[t] == true); 
} 

void fordFulkerson(int** graph, int s, int t) { 
	int u, v; 
    int maxFlow = 0; 
	int parent[qntVertices];
	

	while(bfs(graph, s, t, parent)) { 
		
        int pathFlow = INT_MAX; 
		
        for (v = t; v != s; v = parent[v]) { 
			u = parent[v]; 
			pathFlow = min(pathFlow, graph[u][v]); 
		} 

		for (v = t; v != s; v = parent[v]) { 
			u = parent[v]; 
			graph[u][v] -= pathFlow; 
			graph[v][u] += pathFlow; 
		} 

		maxFlow += pathFlow; 
	} 

	cout << "Max flow = " << maxFlow << endl; 
}