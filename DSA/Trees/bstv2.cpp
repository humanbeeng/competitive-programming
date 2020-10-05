#include <iostream>
using namespace std;


void foo(int data){

}

int main(){
    int *p;
    int a = 10;
    p = &a;
    int **q;
    q = &p;
    // cout << "The content part of q is " << *q <<endl;
    // cout << "The content of p is " << *p << endl;
    // cout << "The address of p is " << &p << endl;
    // cout << "The address of q is " << &q << endl;
    // cout << "The content present in the value part of q is the address of p which holds the value of actual variable value " << **q << endl;
    // cout << q << endl;
    
    cout << "P Pointer node "<< endl << "[ " << &p << ", " << *p << " ]" << endl;
    cout << "Q pointer node" << endl << "[ " << &q << ", " << *&q << " ]" << endl;
    cout << **q;
    return 0;
}