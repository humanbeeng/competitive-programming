/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int PerformBinarySearch(vector<int> arr, int left, int right) {
    const int key = 1;
    int index_of_first_one = left;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (arr[mid] == key) {
            index_of_first_one = mid;
            right = mid - 1;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else
            right = mid - 1;
    }
    return index_of_first_one;
}

int FindIndexOfFirstOne(vector<int> arr) {
    int left = 0;
    int right = 1;

    while (arr[right] == 0 && right < 10) {
        right = (right * 2);
    }

    return PerformBinarySearch(arr, left, right);
}

int main() {
    int n_elements = 0;
    cin >> n_elements;

    vector<int> arr;

    while (n_elements--) {
        int input_element;
        cin >> input_element;
        arr.push_back(input_element);
    }

    int res = FindIndexOfFirstOne(arr);

    cout << res;

    return 0;
}