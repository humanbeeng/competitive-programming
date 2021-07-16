/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int t[1002][1002];

int knapsack_memoized(int wt[], int val[], int capacity, int n) {
    if (n == 0 || capacity == 0)
        return 0;
    if (t[n][capacity] != -1)
        return t[n][capacity];

    if (wt[n - 1] > capacity) {
        return t[n][capacity] = knapsack_memoized(wt, val, capacity, n - 1);
    } else
        return t[n][capacity] = max(val[n - 1] + knapsack_memoized(wt, val, capacity - wt[n - 1], n - 1), knapsack_memoized(wt, val, capacity, n - 1));
}

int main() {
    memset(t, -1, sizeof(t));
    int n;
    cin >> n;
    int wt[n + 2];
    int val[n + 2];
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        wt[i] = num;
    }
    for (int i = 0; i < n; i++) {
        cin >> num;
        val[i] = num;
    }
    int capacity;
    cin >> capacity;
    int res = knapsack_memoized(wt, val, capacity, n);
    cout << res;

    return 0;
}