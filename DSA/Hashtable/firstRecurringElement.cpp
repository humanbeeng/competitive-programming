#include<iostream>
using namespace std;


int main(){
    int array[] = {2,6,4,1,2}; int i = 0, flag = 0;
    int size = sizeof(array)/sizeof(array[0]);
    int dupArr[size];
    for(i = 0; i< size ; i++){
        if(dupArr[array[i]] != array[i]){
            dupArr[array[i]] = array[i];
        }
        else if(dupArr[array[i]] == array[i] && i<size){
            flag = 1;
            cout << array[i] << " is the first recurring element !" << endl;
            break;
        }
        else{
            continue;
        }
        
    }
    if(flag == 0){
        cout << "Undefined !" << endl;
    }
    return 0;

}