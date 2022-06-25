/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int findKthSmallestElement(vector<int> &arr, int n_elements, int k) {
    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (int element : arr) {
        min_heap.push(element);
        if (min_heap.size() > k) {
            min_heap.pop();
        }
    }

    return min_heap.top();
} // TC : I(n log(k))

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

    int kth_smallest_element = findKthSmallestElement(arr, n_elements, k);

    cout << kth_smallest_element;

    return 0;
}