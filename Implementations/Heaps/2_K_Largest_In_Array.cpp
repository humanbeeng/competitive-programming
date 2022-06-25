/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> fetchKLargestElements(vector<int> &arr, int n_elements, int k) {
    vector<int> k_largest_elements;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (int element : arr) {
        min_heap.push(element);

        if (min_heap.size() > k) {
            min_heap.pop();
        }
    }

    while (!min_heap.empty()) {
        k_largest_elements.push_back(min_heap.top());
        min_heap.pop();
    }

    return k_largest_elements;
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

    vector<int> k_largest_elements = fetchKLargestElements(arr, n_elements, k);

    for (int element : k_largest_elements) {
        cout << element << " ";
    }
    return 0;
}