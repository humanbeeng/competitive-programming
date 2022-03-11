/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

pair<int, bool> findFirstOccurrence(const vector<int> &arr, int n_elements, int key) {
    int firstOccurrence = 0;
    int left = 0;
    int right = n_elements - 1;
    bool foundStatus = false;
    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key) {
            foundStatus = true;
            firstOccurrence = mid;
            right = mid - 1;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else if (key < arr[mid]) {
            right = mid - 1;
        }
    }

    return make_pair(firstOccurrence, foundStatus);
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> arr(n_elements + 1);

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int firstOccurrence;

    bool foundStatus = false;

    pair<int, bool> firstOccurrence;
    firstOccurrence = findFirstOccurrence(arr, n_elements, key);

    int secondOccurrence = findSecondOccurrence(arr, n_elements, key);

    cout << firstOccurrence.first << " " << res.second << '\n';

    return 0;
}