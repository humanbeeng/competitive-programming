#include <bits/stdc++.h>
using namespace std;

void perform_bfs(int source, unordered_map<int, vector<int>> adj_list, bool visited[]) {
    queue<int> bfs_queue;
    bfs_queue.push(source);
    visited[source] = true;
    cout << source << " ";
    while (!bfs_queue.empty()) {
        int curr_node = bfs_queue.front();
        bfs_queue.pop();
        for (int neighbour : adj_list[curr_node]) {
            if (!visited[neighbour]) {
                cout << neighbour << " ";
                bfs_queue.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}

int main() {
    int n = 4;
    int a, b;
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    unordered_map<int, vector<int>> adj_list;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    //start bfs
    perform_bfs(1, adj_list, visited);
}