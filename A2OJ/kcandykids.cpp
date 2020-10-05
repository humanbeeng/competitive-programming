#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcases, ndiffcandies, kcandy, remaining;
    vector<int> ans;
    cin >> testcases;
    for (int i = 0; i < testcases; i++){
        cin >> ndiffcandies >> kcandy;
        for (int j = 0; j < ndiffcandies; j++){
            cin >> remaining;
            ans.push_back(0);
            ans[i]+= (remaining / kcandy);
        }
    }
    for (int k = 0; k < testcases; k++){
        cout << ans[k] << endl;
    }

    return 0;
}