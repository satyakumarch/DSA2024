#include <iostream>
#include <vector>
using namespace std;

// Undirected weighted graph
int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    // Use a vector of vectors to represent the adjacency list
    vector<vector<pair<int, int>>> AdjList(vertex);

    int u, v, weight;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> weight;
        // Add edges to the adjacency list
        AdjList[u].push_back(make_pair(v, weight));
        AdjList[v].push_back(make_pair(u, weight));
    }

    // Print the adjacency list
    for (int i = 0; i < vertex; i++) {
        cout << i << "->";
        for (const auto &edge : AdjList[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
