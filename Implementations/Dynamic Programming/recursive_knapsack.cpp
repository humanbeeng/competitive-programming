/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int recursive_knapsack(int wt[], int val[], int capacity, int n) {
    if (n == 0 || capacity == 0)
        return 0;
    if (wt[n - 1] <= capacity) {
        return max(val[n - 1] + recursive_knapsack(wt, val, capacity - wt[n - 1], n - 1), recursive_knapsack(wt, val, capacity, n - 1));
    } else if (wt[n - 1] > capacity)
        return recursive_knapsack(wt, val, capacity, n - 1);
    return 0;
}

int main() {
    int n;
    cin >> n;
    int wt[n + 1];
    int val[n + 1];
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

    // int res = knapSack(capacity, wt, val, n);
    int res = recursive_knapsack(wt, val, capacity, n);

    cout << res;

    return 0;
}