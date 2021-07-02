/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int static t[10001][10001];

int knapsack(int wt[], int val[], int n, int W) {
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < n + 1; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < W + 1; j++) {
            if (wt[i - 1] <= j) {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            } else if (wt[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][W];
}

int main() {
    memset(t, -1, sizeof(t));

    int n;
    cin >> n;
    int wt[n + 1];
    int val[n + 1];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        wt[i] = num;
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        val[i] = num;
    }

    int cap;
    cin >> cap;

    int res = knapsack(wt, val, n, cap);
    cout << endl;
    cout << "Maximum Profit : " << res << endl;

    return 0;
}