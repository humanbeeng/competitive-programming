#include <bits/stdc++.h>
using namespace std;

void dfs(int source, vector<int> adj_list[], bool visited[]) {
    visited[source] = true;
    for (int neighbour : adj_list[source]) {
        if (!visited[neighbour]) {
            dfs(neighbour, adj_list, visited);
        }
    }
}

int helper(int n_nodes, vector<int> adj_list[]) {
    bool visited[n_nodes];
    memset(visited, false, sizeof(visited));

    int result = 0;
    for (int i = 1; i <= n_nodes; i++) {
        if (!visited[i]) {
            dfs(i, adj_list, visited);
            result++;
        }
    }

    return result;
}

int main() {
    int n_nodes, n_edges;
    cin >> n_nodes >> n_edges;

    vector<int> adj_list[n_nodes + 1];

    for (int i = 0; i < n_edges; i++) {
        int source, dest;
        cin >> source >> dest;
        adj_list[source].push_back(dest);
        adj_list[dest].push_back(source);
    }

    int result = helper(n_nodes, adj_list);

    cout << result;
    // cout << n_nodes << endl;
    // for (int i = 1; i <= n_nodes; i++) {
    //     cout << i << " -> ";
    //     for (int neighbour : adj_list[i]) {
    //         cout << neighbour << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}