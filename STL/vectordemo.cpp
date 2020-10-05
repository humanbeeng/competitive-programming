#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    vi a;
    a.insert(a.begin(), 10);
    a.insert(a.begin() + 1, 29);
    for (auto i = a.begin(); i != a.end(); i++){
        cout << *i << endl;
    }
    auto i = a.rend()-1;
    
    cout << *i;

    return 0;
}