/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_first_occurrence(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    int res = -1;
    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key) {
            res = mid;
            right = mid - 1;
        } else if (key > arr[mid])
            left = mid + 1;
        else if (key < arr[mid])
            right = mid - 1;
    }
    return res;
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

    int res = find_first_occurrence(arr, n, key);
    cout << "First occurrence is : " << res;

    return 0;
}