#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> graph[10];
class GraphImplementation{
    

public:
    void addEdge(int vertex1, int vertex2){
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1);
        cout << "Edge " << vertex1 << " --> " << vertex2 << " has been created " << endl;
    }

    void printGraph(){
        for (int v = 0; v < 10; ++v){
            cout << "\n Adjacency list of vertex " << v << "\n head ";
            for (auto x : graph[v]){
                cout << "-> " << x;
            }
            cout << endl;
        }
    }
};

int main(){
    GraphImplementation gph;
    gph.addEdge(2,400);
    gph.addEdge(2,40);
    gph.addEdge(2,410);
    gph.printGraph();
    return 0;
}