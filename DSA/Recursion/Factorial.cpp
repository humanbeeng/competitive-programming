#include<iostream>
using namespace std;


int factorialRecursion(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    return n*factorialRecursion(n-1);   
}

int factorialInterative(int n){
    int fact = n;
    for(int i = n-1 ; i > 1; i--){
        fact = fact * i;
    }
    return fact;
}

int main(){
    // factorialIterative(8);
    int res = factorialRecursion(7);
    cout << "The Recursive factorial solution is : " <<res << endl;
    res = factorialInterative(4);
    cout << "The Iterative factorial solution is : " << res << endl;
    return 0;
}