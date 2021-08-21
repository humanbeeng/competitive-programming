/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_n_rotations(int arr[], int n_elements) {
    int left = 0;
    int right = n_elements - 1;
    int minimum_element = arr[0];

    if (arr[left] <= arr[right])
        return left;

    while (left <= right) {
        int mid = (left) + ((right - left) / 2);

        if (minimum_element > arr[mid]) {
            minimum_element = arr[mid];
            left = mid + 1;
        } else if (minimum_element < arr[mid]) {
            right = mid - 1;
        }
    }

    return
}

int main() {
    int n_elements;
    cin >> n_elements;

    int arr[n_elements + 2];

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }

    int n_rotations = 0;

    n_rotations = find_n_rotations(arr, n_elements);

    return 0;
}