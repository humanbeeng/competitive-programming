/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int countSubsetsWithTargetSum(int n_elements, int arr[], int target_sum) {
    int t[n_elements + 1][target_sum + 1];

    for (int i = 0; i <= n_elements; i++) {
        for (int j = 0; j <= target_sum; j++) {
            if (i == 0) {
                t[i][j] = 0;
            }

            if (j == 0) {
                t[i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= n_elements; i++) {
        for (int j = 1; j <= target_sum; j++) {
            if (arr[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            } else {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
        }
    }

    return t[n_elements][target_sum];
}

int main() {
    int n_elements;
    cin >> n_elements;

    int arr[n_elements + 1];

    for (int i = 0; i < n_elements; i++) {
        int input_element;
        cin >> input_element;
        arr[i] = input_element;
    }

    int target_sum;
    cin >> target_sum;

    int n_subsets_with_target_sum = countSubsetsWithTargetSum(n_elements, arr, target_sum);

    cout << n_subsets_with_target_sum;

    return 0;
}