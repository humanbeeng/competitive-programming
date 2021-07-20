/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class BFSTraversal {
private:
    int n_edges;

public:
    vector<int> res;

public:
    BFSTraversal(int n) {
        n_edges = n;
        _construct_graph(n_edges);
    }

private:
    void _construct_graph(int n_edges) {
        vector<int> adj_list[n_edges];

        int source, destination;
        for (int i = 0; i < n_edges; i++) {
            cin >> source >> destination;
            adj_list[source].push_back(destination);
            adj_list[destination].push_back(source);
        }
        int root;
        cin >> root;
        _bfs(adj_list, n_edges, root);
    }

private:
    void _bfs(vector<int> adj_list[], int n_edges, int root) {
        queue<int> q;
        vector<bool> visited(n_edges, false);
        visited[root] = true;
        res.push_back(root);
        q.push(root);
        cout << "\n";
        while (!q.empty()) {
            int curr_node = q.front();
            q.pop();

            for (int neighbour : adj_list[curr_node]) {
                if (!visited[neighbour]) {
                    q.push(neighbour);
                    visited[neighbour] = true;
                    res.push_back(neighbour);
                }
            }
        }
    }

public:
    void print_res() {
        for (int item : res) {
            cout << item << " ";
        }
    }
};

int main() {
    BFSTraversal bfs_1 = BFSTraversal(6);
    bfs_1.print_res();
    return 0;
}