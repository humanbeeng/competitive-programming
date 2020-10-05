#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, inputnum; vector<vector<int>> a;
    
    int x, y, z;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> t;
    a.resize(t);
    for(int i=0; i<t; i++){
       cin >> x >> y >> z;
       a[i].push_back(x);
       a[i].push_back(y);
       a[i].push_back(z);
    }
    for(int i=0; i<t; i++){
        sum1 += a[i][0];
        sum2 += a[i][1];
        sum3 += a[i][2];
    }

    if(sum1 +sum2 + sum3 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}
