/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int FindMinimumDifferenceElement(vector<int> &arr, int key) {
    int n_elements = arr.size();
    int left = 0, right = n_elements - 1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (key == arr[mid]) {
            return arr[mid];
        } else if (key < arr[mid]) {
            right = mid - 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        }
    }
    int prev_difference = abs(arr[left] - key);
    int next_difference = abs(arr[right] - key);

    if (prev_difference < next_difference) {
        return arr[left];
    } else
        return arr[right];
}

int main() {
    int n_input_elements = 0;
    cin >> n_input_elements;

    vector<int> arr;

    while (n_input_elements--) {
        int input_element;
        cin >> input_element;
        arr.push_back(input_element);
    }

    int key;
    cin >> key;

    int min_difference_element = FindMinimumDifferenceElement(arr, key);

    cout << min_difference_element;

    return 0;
}