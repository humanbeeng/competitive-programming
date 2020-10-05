#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool addComplToHashMap(int arr1[],int sum, int arrsize){
    int i;
    unordered_set<int> complement;
    unordered_set<int>::iterator it;

    for(i=0; i<arrsize; i++){
        it = complement.find(arr1[i]);
        if(it == complement.end() ){
            complement.insert(sum-arr1[i]);
        }
        else{
            return true;
        }    
    }
    return false;
}

int main(){
    int i, sum = 100;
    int array1[] = {1,4,3,92,8};
    int arrSize = sizeof(array1)/sizeof(array1[0]);
    bool found;
    found = addComplToHashMap(array1, sum, arrSize);
    if(found == true){
        cout << "Has a pair with sum of " << sum;
    }
    else{
        cout << "Not found";
    }
return 0;
}

