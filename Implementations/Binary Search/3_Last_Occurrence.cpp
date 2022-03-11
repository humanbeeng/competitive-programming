/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_last_occurrence(int arr[], int n_elements, int key) {
    int pos = -1;

    int left = 0;
    int right = n_elements - 1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (key == arr[mid]) {
            pos = mid;
            left = mid + 1;
        } else if (key < arr[mid]) {
            right = mid - 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        }
    }
    return pos;
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

    int last_occurrence = find_last_occurrence(arr, n_elements, key);

    cout << last_occurrence;

    return 0;
}