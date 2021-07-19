/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class BFSTraversal {
private:
    int n_nodes;

public:
    BFSTraversal(int n) {
        n_nodes = n;
        vector<int> arr[n_nodes + 1];
        construct_graph(arr, n_nodes);
    }

public:
    void construct_graph(vector<int> adj_list[], int n_nodes) {
        cout << "Enter your Graph : \n";
        cin >> n_nodes;

        int source, destination;
        for (int i = 0; i < n_nodes; i++) {
            cin >> source >> destination;
            arr[source].push_back(destination);
            arr[destination].push_back(source);
        }
    }
	
	void bfs(vector<int> arr[], )

    void bfs_initiator(vector<int> arr[], int n_nodes) {
        queue<int> q;
        vector<int> visited(n_nodes, 0);

    }
};

int main() {

    return 0;
}