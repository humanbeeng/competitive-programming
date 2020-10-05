#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

vector<int> arr = {5, 4, 8, 9, 1, 2, 3};



void sumofpair(int sum){
    unordered_set<int> mapp;
    int y; int soln[10];
    for (int i=0; i<arr.size(); i++){
        y = sum -  arr[i];
        if(mapp.find(y) == mapp.end()){
            mapp.insert(arr[i]);
        }
        else{
            soln[0] = arr[i];
            soln[1] = y;
            break;
        }
    }
    cout << soln[0] << " " << soln[1] << endl;
    
}
int main(){
    sumofpair(12);
    return 0;
}