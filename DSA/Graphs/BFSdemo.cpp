#include <map>
#include <list>
#include <iostream>
#include <queue>
using namespace std;

template <typename T> class BFSDemo{
private:
    map<T, list<T>> mapp;

public:
    void fxn(T element1, T element2){
        mapp[element1].push_back(element2);
        mapp[element2].push_back(element1);
    }

    void display(){
        for (int ele : mapp[3])
        {
            cout << ele << " ";
        }
    }

    void bfsTraversal(T srcNode){
        queue<T> q;
        map<T, bool> isVisited;
        q.push(srcNode);
        isVisited[srcNode] = true;

        while (!q.empty()){

            T nodeToCheckforNeighbour = q.front();
            cout << nodeToCheckforNeighbour << " ";
            q.pop();

            //to check the existence of any neighbours of that node we just got from the front of queue and
            //add them into the queue

            for (T ele : mapp[nodeToCheckforNeighbour]){
                if (isVisited[ele] != true){
                    q.push(ele);
                    isVisited[ele] = true;
                }
            }
        }
    }
};

int main(){
    BFSDemo<int> e; 
    // e.fxn(0,1);
    e.fxn(1,2);
    e.fxn(1,3);
    e.fxn(1,4);
    e.fxn(1,5);
    e.bfsTraversal(1);
    return 0;
}