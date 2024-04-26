#include <iostream>
#include <climits>

using namespace std;

// Function to print the final solution
void printSolution(int **dist, int V) {
    cout << "Shortest Path between all pairs of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << "   ";
            }
        }
        cout << endl;
    }
}

// Function to implement Floyd Warshall's algorithm for a weighted graph
void floydWarshall(int **graph, int V) {
    // Array to store the shortest distance between all pairs of vertices
    int **dist = new int *[V];
    for (int i = 0; i < V; i++) {
        dist[i] = new int[V];
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    // Find shortest path for all pairs of vertices
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                // If vertex k is on the shortest path from i to j,
                // then update the value of dist[i][j]
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX
                    && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print the shortest path between all pairs of vertices
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
    floydWarshall(graph, V);
    return 0;
}

