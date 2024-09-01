#include<iostream>
#include<vector> // Include the vector header
using namespace std;

// Adjacency matrix
// Undirected unweighted graph

int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    // Correct the syntax for declaring a 2D vector
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, 0));

    int u, v;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
    }

    // Correct the typo in the inner loop from 'vertix' to 'vertex'
    for(int i = 0; i < vertex; i++) {
        for(int j = 0; j < vertex; j++)
            cout << AdjMat[i][j] << " ";
        cout << endl;
    }
}
