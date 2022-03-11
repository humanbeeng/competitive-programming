/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int binary_search_function(int arr[], int n_elements, int key) {
    int left = 0;
    int right = n_elements - 1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            right = mid - 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n_elements;
    cin >> n_elements;

    int arr[n_elements + 2];

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int pos = binary_search_function(arr, n_elements, key);

    cout << pos;

    return 0;
}