/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_first_occurrence(int arr[], int n_elements, int key) {
    int pos = -1;
    int left = 0, right = n_elements - 1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (arr[mid] == key) {
            pos = mid;
            right = mid - 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        } else if (key < arr[mid]) {
            right = mid - 1;
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

    int first_occurrence = find_first_occurrence(arr, n_elements, key);

    cout << first_occurrence;

    return 0;
}