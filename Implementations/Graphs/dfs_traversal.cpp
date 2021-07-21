/*
Author : humanbeeng
*/

/* 
Requirements : 
1. Construct graph when new object is initialized by default
2. User can perform bfs from any given node without having to construct graph again and again
perform_bfs(1); should yield vector <int> path;

 */

#include <bits/stdc++.h>
using namespace std;

class DFSTraversal {
private:
    int n_nodes;
    int n_connections;
    vector<vector<int>> adj_list;
    vector<int> res;
    bool visited[10000 + 1];

public:
    DFSTraversal(int n_nodes, int n_connections) {
        /*  INSIDE CONSTRUCTOR
        1. Taking in parameters 
        2. Initializing private variables
        3. Constructing the graph
         */
        this->n_connections = n_connections;
        this->n_nodes = n_nodes;

        this->adj_list.clear();
        memset(visited, false, sizeof(visited));

        this->adj_list = _construct_graph(this->n_nodes);
    }

private:
    vector<vector<int>> _construct_graph(int n_nodes) {
        vector<vector<int>> adj_list(n_nodes + 1);
        int from_node, to_node;
        for (int i = 0; i < n_connections; i++) {
            cin >> from_node >> to_node;
            adj_list[from_node].push_back(to_node);
            adj_list[to_node].push_back(from_node);
        }
        return adj_list;
    }

public:
    void initiate_bfs(int source) {
        visited[source] = true;
        res.push_back(source);
        for (int neighbour : adj_list[source]) {
            if (!visited[neighbour]) {
                initiate_bfs(neighbour);
            }
        }
    }

    void print_res() {
        for (int item : res) {
            cout << item << " ";
        }
    }
};

int main() {
    DFSTraversal dfs_obj = DFSTraversal(6, 7);
    dfs_obj.initiate_bfs(5);
    dfs_obj.print_res();
    return 0;
}