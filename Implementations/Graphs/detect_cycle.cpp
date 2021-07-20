/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class CycleExists {
private:
    vector<vector<int>> adj_list;
    int n_connections;

public:
    CycleExists(int n) {
        n_connections = n;
        _construct_graph();
    }

private:
    void _construct_graph() {
        adj_list.resize(n_connections);
        int from_node, to_node;

        for (int i = 0; i < n_connections; i++) {
            cin >> from_node >> to_node;
            adj_list[from_node].push_back(to_node);
            adj_list[to_node].push_back(from_node);
        }
    }

private:
    void bfs_from_source(int source) {
        queue<int> q;
        vector<bool> visited(n_connections, false);
        q.push(source);
        visited[source];
    }

    void bfs() {
    }

public:
    bool does_cycle_exists() {
    }
};

int main() {

    return 0;
}