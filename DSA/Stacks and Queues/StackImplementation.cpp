#include<iostream>
using namespace std;

struct block{
    int data;
    struct block *next;
};

class StackDemo{
    public:
    struct block *head;
    struct block *tail;

    public:
    StackDemo(){
        head = NULL;
        tail = NULL;
    }

    void push(int new_data){
        struct block *temp_block = (struct block*)malloc(sizeof(struct block));
        if(!temp_block){
            cout << "Stack Overflow !"<< endl;
            exit(1);
        }
        if(head == NULL){
            temp_block -> data = new_data;
            temp_block -> next = NULL;
            head = temp_block;
            tail = temp_block;
        }
        else{
            temp_block -> data = new_data;
            temp_block->next = head;
            head = temp_block;
        }
        cout << head -> data << " has been pushed into the stack" << endl;
    }

    void pop(){
        if(head == NULL){
            cout << "Stack Underflow !" << endl;
            exit(1);
        }
        else{
            struct block *temp;
            cout << head -> data << " has been popped out !" << endl;
            temp = head;
            head = head-> next;
            free(temp);
        }
            
    }

    void display(){
        struct block *ptr;
        ptr = head;
        while(ptr != tail){
            cout << "| " << ptr -> data << " |" << endl; 
            ptr = ptr -> next; 
        }
        cout << "| " << ptr -> data << " |" << endl; 
        cout << "-----" << endl;
    }
};

int main(){
    StackDemo stk;
    stk.push(1);
    stk.push(2);
    stk.push(5);
    stk.display();
    stk.pop();
    stk.pop();stk.pop();stk.pop();
    stk.display();
    
    return 0;
}