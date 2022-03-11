#include <bits/stdc++.h>
using namespace std;

void helper(int n_nodes, vector<int> adj_list[]) {
    bool visited[n_nodes];
    memset(visited, false, sizeof(visited));
    int source = 6, dest = 2;
    vector<int> path(n_nodes, -1);

    //perform bfs from source

    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
        int curr_node = q.front();
        q.pop();
        for (int neighbour : adj_list[curr_node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
                path[neighbour] = curr_node;
            }
        }
    }
    vector<int> res;
    if (visited[dest]) {
        for (int i = dest; i != source; i = path[i]) {
            res.push_back(i);
        }
        cout << "Distance : " << res.size() << endl;
        cout << "Path followed : ";
        res.push_back(source);
    }

    reverse(res.begin(), res.end());

    for (int p : res) {
        cout << p << " ";
    }
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

    helper(n_nodes, adj_list);

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