#include <bits/stdc++.h>
using namespace std;

bool hasCycle(int source, int parent, vector<int> adj_list[], bool visited[]) {
    visited[source] = true;

    for (int neighbour : adj_list[source]) {
        if (!visited[neighbour]) {
            if (hasCycle(neighbour, source, adj_list, visited))
                return true;
        } else if (neighbour != parent) {
            return true;
        }
    }

    return false;
}

bool checkForCycle(int n_nodes, vector<int> adj_list[]) {
    bool visited[n_nodes];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n_nodes; i++) {
        if (!visited[i]) {
            if (hasCycle(i, -1, adj_list, visited)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    //construct adj list by taking in input;

    int n_nodes, n_edges;
    cin >> n_nodes >> n_edges;

    vector<int> adj_list[n_nodes + 1];

    for (int i = 0; i < n_edges; i++) {
        int source, dest;
        cin >> source >> dest;
        adj_list[source].push_back(dest);
        adj_list[dest].push_back(source);
    }

    bool res = checkForCycle(n_nodes, adj_list);

    if (res) {
        cout << "Contains Cycle" << endl;
    } else
        cout << "Does not contain cycle " << endl;

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