/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class DFSIterative {
private:
    int n_nodes, n_connections;
    vector<vector<int>> adj_list;

public:
    DFSIterative(int n_nodes, int n_connections) {
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
    void _perform_dfs(int source, bool visited[]) {
        visited[source] = true;
        stack<int> st;
        st.push(source);

        while (!st.empty()) {
            int curr_node = st.top();
            cout << curr_node << " ";
            st.pop();

            for (int neighbour : adj_list[curr_node]) {
                if (!visited[neighbour]) {
                    st.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }

public:
    void initiate_dfs(int source) {
        bool visited[n_nodes + 1];
        memset(visited, false, sizeof(visited));

        for (int i = 1; i <= n_nodes; i++) {
            if (!visited[i]) {
                _perform_dfs(i, visited);
            }
        }
    }
};

int main() {
    DFSIterative dfs_it = DFSIterative(6, 5);
    dfs_it.initiate_dfs(1);
    return 0;
}