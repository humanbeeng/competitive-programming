/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void pushToMaxHeap(priority_queue<pair<int, int>> &max_heap_of_pairs, int element, int x) {
    max_heap_of_pairs.push({abs(element - x), element});
}

vector<int> kClosestElements(vector<int> &arr, int n_elements, int k, int x) {
    priority_queue<pair<int, int>> max_heap_of_pairs;

    vector<int> result;

    for (int element : arr) {

        pushToMaxHeap(max_heap_of_pairs, element, x);

        if (max_heap_of_pairs.size() > k) {
            max_heap_of_pairs.pop();
        }
    }

    while (!max_heap_of_pairs.empty()) {
        result.push_back(max_heap_of_pairs.top().second);
        max_heap_of_pairs.pop();
    }

    return result;
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

    int k, x;
    cin >> k;
    cin >> x;

    vector<int> k_largest_elements = kClosestElements(arr, n_elements, k, x);

    for (int element : k_largest_elements) {
        cout << element << " ";
    }

    return 0;
}