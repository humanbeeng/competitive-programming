#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class LinkedList{
    public:
    struct node *head;
    struct node *tail;
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void reverse(){
        struct node *cur, *next = NULL, *prev = NULL;
        cur = head;
        tail = head;
        while(cur != NULL){
            next = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;   
    }

    void insertHead(int new_data){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        if(head == NULL){
            temp -> data = new_data;
            temp -> next = NULL;
            tail = temp;
            head = temp;
        }
        else{
            temp -> data = new_data;
            temp -> next = head;
            head = temp;
        }
        
    }

    void insertTail(int new_data){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        if(head == NULL){
            temp -> data = new_data;
            temp -> next = NULL;
            head = temp;
            tail = temp;
            // cout << head -> data << endl;
        }

        else{
            temp -> data = new_data;
            tail -> next = temp;
            tail = temp;
            tail -> next = NULL;
            // cout << tail -> data << endl;
        }     
    }

    void display(){
        struct node *ptr;
        cout << "[!] Executing..." << endl;
        ptr = head;
        while(ptr != tail){
            cout << ptr -> data << " " ;
            ptr = ptr -> next; 
        }
        cout << ptr -> data << endl;
    }

    struct node* getHead(){
        return head;
    }


    void traverse(struct node *head){
        while(head->next!=nullptr){
            cout << head->data << endl;
            head = head->next;
        }   
    }
};


int main(){
    LinkedList lst;
    lst.insertTail(2);lst.insertTail(9);
    lst.display();
    lst.insertHead(7);
    lst.display();
    struct node *headPtr = lst.getHead();
    lst.traverse(headPtr);
    return 0;
}