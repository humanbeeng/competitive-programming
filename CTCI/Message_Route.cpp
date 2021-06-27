#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_computers, n_connections;
    cin >> n_computers >> n_connections;
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < n_connections; i++) {
        int source, dest;
        cin >> source >> dest;
        adj[source].push_back(dest);
        adj[dest].push_back(source);
    }

    queue<int> q;
    bool visited[n_computers + 1];
    memset(visited, false, sizeof(visited));
    vector<int> path(n_computers);

    q.push(1);
    visited[1] = true;
    path[1] = -1;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int neighbour : adj[curr]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
                path[neighbour] = curr;
            }
        }
    }

    if (!visited[n_computers]) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        vector<int> res;
        for (int i = n_computers; path[i] != -1; i = path[i]) {
            res.push_back(i);
        }
        res.push_back(1);
        cout << res.size() << endl;
        reverse(res.begin(), res.end());
        for (int item : res) {
            cout << item << " ";
        }
    }

    return 0;
}