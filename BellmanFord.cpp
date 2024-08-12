#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge {
    int src, dest, weight;
};

void bellmanFord(int V, int E, vector<Edge>& edges, int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.src;
            int v = edge.dest;
            int weight = edge.weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }

    // Check for negative-weight cycles
    for (const auto& edge : edges) {
        int u = edge.src;
        int v = edge.dest;
        int weight = edge.weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains negative weight cycle" << endl;
            return;
        }
    }

    // Print distances
    cout << "Vertex Distance from Source" << endl;
    for (int i = 0; i < V; ++i)
        cout << i << "\t\t" << dist[i] << endl;
}

int main() {
    int V = 5;  // Number of vertices in graph
    int E = 8;  // Number of edges in graph
    vector<Edge> edges = {
        {0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2},
        {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}
    };

    int source = 0;
    bellmanFord(V, E, edges, source);

    return 0;
}

