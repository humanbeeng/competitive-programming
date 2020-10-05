#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class QueueDemo{
    private:
    struct node *head;
    struct node *tail;
    public:
    
    QueueDemo(){
        head = NULL;
        tail = NULL;
    }

    void push(int new_data){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        if(head == NULL){
            temp->data = new_data;
            temp->next = NULL;
            head = temp;
            tail = temp;
        }
        else{
            temp->data = new_data;
            temp->next = NULL;
            tail->next = temp;
            tail = temp;    
        }
        cout << tail->data << " has been inserted ! " << endl;
    }

    void pop(){
        if(head == NULL){
            cout << "Queue underflow !" << endl;
            exit(1);
        }
        else{
            cout << head->data<< " has been popped out of the queue !\n";
            struct node *temp;
            temp = head;
            head = head->next;
            free(temp);
        }
    }

    void display(){
        struct node *ptr;
        ptr = head;
        while(ptr != NULL){
            cout << "| " << ptr -> data << " |" << endl; 
            ptr = ptr -> next; 
        }
        // cout << "| " << ptr -> data << " |" << endl; 
        cout << "-----" << endl;
    }

    void peek(){
        cout << 
    }
};

int main(){
    QueueDemo qq;
    qq.push(1);
    qq.push(3);
    qq.push(7);
    qq.display();
    qq.pop();
    qq.pop();
    qq.pop();
    qq.push(10);
    qq.push(373);
    qq.pop();
    qq.display();
    return 0;
}