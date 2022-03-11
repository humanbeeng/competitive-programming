/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_n_rotations(int arr[], int n_elements) {
    int left = 0, right = n_elements - 1;

    while (left < right) {
        if (arr[left] < arr[right]) {
            return n_elements - left;
        }

        int mid = (left + ((right - left) / 2));

        if (arr[mid] < (arr[mid - 1] % n_elements)) {
            return n_elements - mid;
        }
        if (arr[mid] < arr[left]) {
            right = mid - 1;
        } else
            left = mid + 1;
    }

    return right;
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

    cout << n_rotations;

    return 0;
}