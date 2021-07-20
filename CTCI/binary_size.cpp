/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int binary_search_implementation(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
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

    int pos = binary_search_implementation(arr, n, key);

    cout << pos;

    return 0;
}