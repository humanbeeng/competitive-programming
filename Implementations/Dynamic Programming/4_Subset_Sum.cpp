/*
Problem statement : To check whether a given sum can be made by a subset from a given array
IP : arr, sum
OP : true or false

main = n, arr, sum

subset_sum return bool to main

 */

/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

bool t[1002][1002];

bool isSubSetSumAvailable(int arr[], int n, int sum) {

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (i == 0) {
                t[i][j] = false;
            }
            if (j == 0) {
                t[i][j] = true;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (arr[i - 1] > sum) {
                t[i][j] = t[i - 1][j];
            } else {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

int main() {
    int n;
    cin >> n;
    int arr[n + 2];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int sum;
    cin >> sum;

    bool res = isSubSetSumAvailable(arr, n, sum);

    cout << res << '\n';

    return 0;
}