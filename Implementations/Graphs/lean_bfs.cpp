/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_connections;
    cin >> n_connections;
    vector<int> adj_list[n_connections + 1];
    vector<bool> visited(n_connections);
    vector<int> distance(n_connections);
    vector<int> parent(n_connections);

    int from_node, to_node;
    for (int i = 0; i < n_connections; i++) {
        cin >> from_node >> to_node;
        adj_list[from_node].push_back(to_node);
        adj_list[to_node].push_back(from_node);
    }

    int source, destination;
    cin >> source >> destination;

    // perform bfs from source

    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
        int curr_node = q.front();
        q.pop();

        for (int neighbour : adj_list[curr_node]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
                distance[neighbour] = distance[curr_node] + 1;
                parent[neighbour] = curr_node;
            }
        }
    }

    if (!distance[destination]) {
        cout << -1;
    } else
        cout << distance[destination];

    return 0;
}