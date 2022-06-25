/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> sortKNearlySortedArray(vector<int> &arr, int n_elements, int k) {
    priority_queue<int, vector<int>, greater<int>> min_heap;
    vector<int> sorted_arr;

    for (int element : arr) {
        min_heap.push(element);

        if (min_heap.size() > k) {
            sorted_arr.push_back(min_heap.top());
            min_heap.pop();
        }
    }

    while (!min_heap.empty()) {
        sorted_arr.push_back(min_heap.top());
        min_heap.pop();
    }

    return sorted_arr;
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> arr;

    for (int i = 0; i < n_elements; i++) {
        int input_element;
        cin >> input_element;
        arr.push_back(input_element);
    }

    int k;
    cin >> k;

    vector<int> k_largest_elements = sortKNearlySortedArray(arr, n_elements, k);

    for (int element : k_largest_elements) {
        cout << element << " ";
    }

    return 0;
}