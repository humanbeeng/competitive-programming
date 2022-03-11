/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int count_subset_sum(int arr[], int n_elements, int target_sum) {
    int t[n_elements + 3][target_sum + 3];

    for (int i = 0; i < target_sum + 1; i++) {
        t[0][i] = 0;
    }
    t[0][0] = 1;

    for (int i = 1; i <= n_elements; i++) {
        for (int j = 0; j <= target_sum; j++) {
            if (arr[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            } else if (arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
        }
    }
    return t[n_elements][target_sum];
}

int target_sum(int arr[], int n_elements, int target_sum) {

    int sum_arr = 0;
    for (int i = 0; i < n_elements; i++) {
        sum_arr = sum_arr + arr[i];
    }

    if (target_sum > sum_arr) {
        return 0;
    }
    if ((target_sum + sum_arr) % 2 != 0) {
        return 0;
    }

    int s2 = (sum_arr + target_sum) / 2;

    return count_subset_sum(arr, n_elements, s2);
}

int main() {
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int n_ways = target_sum(arr, n, target);
    cout << n_ways;

    return 0;
}