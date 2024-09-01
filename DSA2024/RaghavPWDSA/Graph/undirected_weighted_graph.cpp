#include<iostream>
#include<vector> // Include the vector header
using namespace std;

// Adjacency matrix
// Undirected unweighted graph

int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    // Correct the syntax for declaring a 2D vector
    vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));

    int u,v ,weight;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v >>weight;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
    }

    // Correct the typo in the inner loop from 'vertix' to 'vertex'
    for(int i = 0; i < vertex; i++) {
        for(int j = 0; j < vertex; j++)
            cout << AdjMat[i][j] << " ";
        cout << endl;
    }
}
//output
// 5 6
// 0 1 4
// 0 2 10
// 1 2 7
// 1 3 8
// 3 4
// 4
// 2 4 11
// 0 4 10 0 0 
// 4 0 7 8 0
// 10 7 0 0 11
// 0 8 0 0 4
// 0 0 11 4 0
