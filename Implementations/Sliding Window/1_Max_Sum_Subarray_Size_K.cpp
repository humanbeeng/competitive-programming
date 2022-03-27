/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int findMaxSumSubarrayOfSizeK(int arr[], int n_elements, int k) {
    int start = 0, end = 0;
    int max_sum = INT_MIN;
    int window_sum = 0;

    while (end < n_elements) {
        window_sum = window_sum + arr[end];
        max_sum = max(max_sum, window_sum);

        if (end - start + 1 == k) {
            window_sum = window_sum - arr[start];
            start++;
        }
        end++;
    }

    return max_sum;
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

    int k;
    cin >> k;

    int max_sum = findMaxSumSubarrayOfSizeK(arr, n_elements, k);

    cout << max_sum;

    return 0;
}