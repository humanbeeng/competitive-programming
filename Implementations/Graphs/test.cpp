/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void test() {
    vector<vector<int>> adj_list(10002);
    adj_list[1].push_back(2);
    adj_list[2].push_back(1);
    adj_list[2].push_back(3);
    cout << adj_list[1][0];
    adj_list[3].push_back(2);
}

int main() {
    test();
    return 0;
}