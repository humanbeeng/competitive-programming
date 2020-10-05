#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    string inputstring;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>inputstring;
        if(inputstring.size() > 10){
            cout << inputstring[0] << inputstring.size() -2 << inputstring[inputstring.size()-1] << endl;
        }
        else{
            cout << inputstring << endl;
        }
    }
    return 0;
}