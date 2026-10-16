//Program No. 31: Program to Implement Breadth First Search (BFS) in a Graph
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int graph[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int visited[5] = {0};
    queue<int> q;

    q.push(0);
    visited[0] = 1;

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < 5; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    return 0;
}
