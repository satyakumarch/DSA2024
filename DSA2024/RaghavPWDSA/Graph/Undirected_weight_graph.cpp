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
// output
// 5 6
// 0 1 10
// 0 2 5
// 1 2 9
// 1 3 8
// 3 4 11
// 2 4 5
// 0->(1, 10) (2, 5)
// 1->(0, 10) (2, 9) (3, 8)
// 2->(0, 5) (1, 9) (4, 5)
// 3->(1, 8) (4, 11)
// 4->(3, 11) (2, 5)
