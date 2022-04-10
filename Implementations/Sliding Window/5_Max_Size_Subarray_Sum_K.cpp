/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int maxSizeSubarray(vector<int> &arr, int n_elements, int window_sum) {
    int start = 0, end = 0;
    int curr_window_sum = 0;
    int curr_max_window_size = 0;

    while (end < n_elements) {
        curr_window_sum += arr[end];
        if (curr_window_sum == window_sum) {
            curr_max_window_size = max(curr_max_window_size, end - start + 1);
        } else if (curr_window_sum > window_sum) {
            while (curr_window_sum > window_sum) {
                curr_window_sum -= arr[start];
                start++;
            }
        }
        end++;
    }

    return curr_max_window_size;
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> arr;

    for (int i = 0; i < n_elements; i++) {
        int input_element;
        cin >> input_element;
        arr.push_back(input_element);
    }

    int window_sum;
    cin >> window_sum;

    int res = maxSizeSubarray(arr, n_elements, window_sum);

    cout << res;

    return 0;
}