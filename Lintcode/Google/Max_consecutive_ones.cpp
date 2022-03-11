/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int findMaxOnes(vector<int> &nums, int n_elements) {
    int count = 0;
    int res = 0;
    for (int num : nums) {
        if (num == 1) {
            count++;
            res = max(count, res);
        } else
            count = 0;
    }
    return res;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int res = findMaxOnes(arr, n);

    cout << res;
    return 0;
}