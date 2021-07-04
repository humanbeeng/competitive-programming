/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

bool t[10001][10001];

bool ifSubsetSum(int arr[], int sum, int n) {
    //intialization
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < sum + 1; j++) {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < sum + 1; j++) {
            if (arr[i - 1] <= sum) {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            } else if (arr[i - 1] > sum) {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1], sum;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;

        cin >> sum;

        bool res = ifSubsetSum(arr, sum, n);

        res ? cout << "Yes" : cout << "No";

        return 0;
    }
}