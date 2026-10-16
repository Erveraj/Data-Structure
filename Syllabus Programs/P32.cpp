//Program No. 32: Program to Implement Depth First Search (DFS) in a Graph
#include <iostream>
using namespace std;

int graph[5][5] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0}
};

int visited[5] = {0};

void DFS(int node) {
    cout << node << " ";
    visited[node] = 1;

    for (int i = 0; i < 5; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    cout << "DFS Traversal: ";
    DFS(0);

    return 0;
}
