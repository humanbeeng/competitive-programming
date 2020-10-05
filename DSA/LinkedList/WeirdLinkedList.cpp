#include <iostream>
#include <unordered_map>
using namespace std;

struct node{
    int data;
    struct node *next;
};

unordered_map<int, node *> umap;
//Map contains Node data and a pointer to the node

class WeirdLinkedList{

private:
    struct node *createNode(int new_data)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = new_data;
        newNode->next = nullptr;
        return newNode;
    }

public:
    struct node *getNodePointer(int key){
        auto it = umap.find(key);
        return it->second;
    }

    void addNode(int new_data){
        struct node *vertexPtr = createNode(new_data);
        umap.insert({new_data, vertexPtr});
        cout << "Node " << new_data << " has been created. \n";
    }

    void addLink(int node1, int node2){
        struct node *firstNode = getNodePointer(node1);
        struct node *secondNode = getNodePointer(node2);
        firstNode->next = secondNode;
        cout << node1 << " and " << node2 << " are linked successfully. \n";
    }

    void checkLink(int node1){
        struct node *ptr = getNodePointer(node1);
        if(ptr->next != nullptr){
            ptr = ptr->next;
            cout << node1 << " --> " << ptr->data << endl;
        }
        else{
            cout << "[!] Link does not exist from " << node1 << endl;
        }
        
    }
};

int main(){
    WeirdLinkedList wll;
    wll.addNode(10);
    wll.addNode(20);
    wll.addNode(30);
    wll.addNode(40);
    wll.addLink(20, 10);
    wll.addLink(30, 20);
    wll.checkLink(20);
    wll.checkLink(10);

    return 0;
}