/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class DetectCycleBFS {
private:
    int n_nodes;
    int n_connections;
    vector<vector<int>> adj_list;

public:
    DetectCycleBFS(int n_nodes, int n_connections) {
        this->n_nodes = n_nodes;
        this->n_connections = n_connections;
        this->adj_list = _construct_graph(n_nodes, n_connections);
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
    bool _containsCycle(int source, bool visited[], vector<int> parent) {
        visited[source] = true;
        queue<int> q;
        q.push(source);
        parent[source] = -1;

        while (!q.empty()) {
            int curr_node = q.front();
            int curr_node_parent = parent[curr_node];
            q.pop();

            for (int neighbour : adj_list[curr_node]) {
                if (visited[neighbour] && neighbour != curr_node_parent) {
                    return true;
                } else if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                    parent[neighbour] = curr_node;
                }
            }
        }
        return false;
    }

public:
    bool isCyclic() {
        bool visited[n_nodes + 1];
        memset(visited, false, sizeof(visited));

        vector<int> parent(n_nodes + 1);

        for (int i = 1; i <= n_nodes; i++) {
            if (!visited[i]) {
                if (_containsCycle(i, visited, parent)) {
                    // cout << "Contains Cycle!\n";
                    return true;
                }
            }
        }

        // cout << "Does not contain cycle!\n";
        return false;
    }
};

int main() {
    DetectCycleBFS d_bfs = DetectCycleBFS(6, 5);
    cout << d_bfs.isCyclic();
    return 0;
}