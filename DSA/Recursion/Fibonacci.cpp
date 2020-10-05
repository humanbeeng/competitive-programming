#include<iostream>
using namespace std;

int recursionLogic(int n){
    if(n <= 1){
        return n;
    }
    return recursionLogic(n-1)+recursionLogic(n-2);
}

void fibonacciRecursion(int n){
    for(int i = 0; i < n; i++){
        cout << recursionLogic(i) << " ";
    }
    

int main(){
    fibonacciRecursion(7);
}