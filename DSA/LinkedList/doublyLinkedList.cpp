#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

class DoublyLinkedList{
    private:
    struct node *head;
    struct node *tail;

    public:

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    

    void insert(int new_data){
        struct node *temp = (struct node*) malloc(sizeof(struct node));
        if(head == NULL){
            temp -> data = new_data;
            head = temp;
            tail = temp;
            tail->next = NULL;
            tail->prev = NULL;
        }

        else{           
            temp->data = new_data;
            temp->next = NULL;
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    void display(){
        struct node *cur;
        cout << "Displaying" << endl;
        cur = head;
        if(cur->next == NULL){
            cout << cur -> data << endl;
        }
        else{
            while(cur->next != NULL){
                cout << cur->data << " ";
                cur = cur->next;
            }
        }
        cout << cur->data << endl;
    }

    void reverse(){
        
    }

};

int main(){
    DoublyLinkedList dll;
    dll.insert(2);dll.insert(2);dll.insert(4);dll.insert(2);dll.insert(6);
    dll.display();
    return 0;
}