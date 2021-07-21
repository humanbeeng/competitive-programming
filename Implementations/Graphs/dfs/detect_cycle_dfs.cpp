/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class DetectCycleDFS {
private:
    int n_nodes, n_connections;
    vector<vector<int>> adj_list;
    vector<bool> visited;

public:
    DetectCycleDFS(int n_nodes, int n_connections) {
        this->n_nodes = n_nodes;
        this->n_connections = n_connections;

        this->adj_list = _construct_graph(n_nodes, n_connections);
        visited.resize(n_nodes);
    }

private:
    vector<vector<int>> _construct_graph(int n_nodes, int n_connections) {
        vector<vector<int>> adj_list(n_nodes + 1);
        int from_node, to_node;

        for (int i = 0; i < n_connections; i++) {
            cin >> from_node >> to_node;
            adj_list[from_node].push_back(to_node);
            adj_list[to_node].push_back(from_node);
        }

        return adj_list;
    }

private:
    bool _hasCycle(int source, int parent) {
        visited[source] = true;

        for (int neighbour : adj_list[source]) {
            if (visited[neighbour] && neighbour != parent) {
                return true;
            } else if (!visited[neighbour]) {
                if (_hasCycle(neighbour, source))
                    return true;
            }
        }
        return false;
    }

public:
    void isDisconnected() {
        for (int i = 1; i <= n_nodes; i++) {
            if (!visited[i]) {
                if (_hasCycle(i, -1)) {
                    cout << "Contains Cycle";
                    return;
                }
            }
        }
        cout << "Does not contain Cycle !";
        return;
    }
};

int main() {
    DetectCycleDFS dfs_obj = DetectCycleDFS(6, 5);
    dfs_obj.isDisconnected();

    return 0;
}