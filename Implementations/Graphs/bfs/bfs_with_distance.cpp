/*
Author : humanbeeng
Features : 
1. Construct Graph once and perform queries again and again
2. Fully modular code with OOPS implementation
3. Can retrieve distance between any two node
4. Can retrive shortest path between any two nodes
*/
#include <bits/stdc++.h>
using namespace std;

class BFSDistance {

private:
    vector<vector<int>> adj_list;
    vector<int> parent_vector;

    int n_connections = 0;

private:
    int _perform_bfs(int source, int destination) {
        queue<int> q;
        vector<bool> visited(n_connections, false);
        vector<int> distance_vector(n_connections, 0);
        parent_vector.resize(n_connections);

        q.push(source);
        visited[source] = true;
        parent_vector[source] = -1;

        while (!q.empty()) {
            int curr_node = q.front();
            visited[curr_node] = true;
            q.pop();

            for (int neighbour : adj_list[curr_node]) {
                if (!visited[neighbour]) {
                    q.push(neighbour);
                    visited[neighbour] = true;
                    distance_vector[neighbour] = distance_vector[curr_node] + 1;
                    parent_vector[neighbour] = curr_node;
                }
            }
        }

        if (!distance_vector[destination])
            return -1;
        else
            return distance_vector[destination];
    }

public:
    void construct_graph(int n) {
        n_connections = n;
        adj_list.resize(n);

        int from_node, to_node;
        for (int i = 0; i < n; i++) {
            cin >> from_node >> to_node;
            adj_list[from_node].push_back(to_node);
            adj_list[to_node].push_back(from_node);
        }
    }

public:
    int find_distance(int source, int destination) {
        return _perform_bfs(source, destination);
    }

public:
    void print_path(int source, int destination) {
        cout << "\n";
        vector<int> path;
        for (int i = destination; i != -1; i = parent_vector[i]) {
            path.push_back(i);
        }
        reverse(path.begin(), path.end());

        for (int item : path) {
            cout << item << " ";
        }
    }
};

int main() {
    BFSDistance bfs_distance = BFSDistance();
    bfs_distance.construct_graph(6);
    int res = bfs_distance.find_distance(1, 2);
    cout << res;
    bfs_distance.print_path(1, 5);
}