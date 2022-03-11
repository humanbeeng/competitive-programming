/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int binary_agnostic(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    bool isAscending = false;

    if (arr[left] < arr[right])
        isAscending = true;
    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid]) {
            if (isAscending) {
                right = mid - 1;
            } else
                left = mid + 1;
        } else if (key > arr[mid]) {
            if (isAscending)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    int key;
    cin >> key;
    int pos = binary_agnostic(arr, n, key);
    cout << pos << "\n";

    return 0;
}