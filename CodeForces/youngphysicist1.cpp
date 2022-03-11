#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, y, z;
    long long xx=0, yy=0, zz=0;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        xx+=x; yy+=y; zz+=z;
    }
    if(xx + yy + zz == 0){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    
    
    
    return 0;
}
