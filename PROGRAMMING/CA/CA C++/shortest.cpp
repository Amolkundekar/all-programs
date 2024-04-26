#include <iostream>
#include <climits>

using namespace std;

// Function to find the vertex with the minimum distance
// value, from the set of vertices not yet included in the
// shortest path tree
int minDistance(int dist[], bool sptSet[], int V) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v], min_index = v;
        }
    }
    return min_index;
}

// Function to print the final solution
void printSolution(int dist[], int V) {
    cout << "Vertex \t Distance from Source\n";
    for (int i = 0; i < V; i++) {
        cout << i << " \t\t " << dist[i] << endl;
    }
}

// Function to implement Dijkstra's algorithm for a weighted graph
void dijkstra(int **graph, int src, int V) {
    // Array to store the shortest distance from src to i
    int dist[V];
    // Array to store if a vertex is included in shortest path tree or not
    bool sptSet[V];

    // Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX, sptSet[i] = false;
    }

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices
        // not yet processed. u is always equal to src in first iteration.
        int u = minDistance(dist, sptSet, V);
        // Mark the picked vertex as processed
        sptSet[u] = true;
        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++) {
            // Update dist[v] only if it is not in sptSet, there is an edge
            // from u to v, and total weight of path from src to v through u
            // is smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    // Print the shortest path to all vertices
    printSolution(dist, V);
}

int main() {
    int V;
    
    cout << "Enter the number of vertices: ";
    cin >> V;
    int **graph = new int *[V];
    for (int i = 0; i < V; i++) {
        graph[i] = new int[V];
        cout << "Enter the values of row " << i << ": ";
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }
    int src;
    cout << "Enter the source vertex: ";
    cin >> src;
    dijkstra(graph, src, V);
    return 0;
}
