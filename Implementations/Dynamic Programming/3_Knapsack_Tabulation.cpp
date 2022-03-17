/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int t[1002][1002];
int knapsack_tabulation(int wt[], int val[], int W, int n) {
    memset(t, -1, sizeof(t));
    /*
    Recursion = base condition + induction + hypothesis
    similarly here base condition = initialization
    the two changing variables are W and n
    hence make a matrix of that depicting the results of two
    variables.
     */

    // Step 1 : Initialization
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0) {
                t[i][j] = 0;
            }
        }
    }

    // Step 2 : solving for smaller inputs

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (wt[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            } else {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            }
        }
    }
    return t[n][W];
}

int main() {
    int n;
    cin >> n;
    int wt[n + 3];
    int val[n + 3];
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        wt[i] = num;
    }
    for (int i = 0; i < n; i++) {
        cin >> num;
        val[i] = num;
    }
    int W;
    cin >> W;

    int res = knapsack_tabulation(wt, val, W, n);
    cout << res << '\n';

    return 0;
}