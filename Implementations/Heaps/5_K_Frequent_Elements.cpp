/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> kFrequentElements(vector<int> &arr, int n_elements, int k) {
    unordered_map<int, int> freq_map;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap_of_freq;
    vector<int> res;

    for (int element : arr) {
        freq_map[element]++;
    }

    for (pair<int, int> entry : freq_map) {
        min_heap_of_freq.push({entry.second, entry.first});

        if (min_heap_of_freq.size() > k) {
            min_heap_of_freq.pop();
        }
    }

    while (!min_heap_of_freq.empty()) {
        res.push_back(min_heap_of_freq.top().second);
        min_heap_of_freq.pop();
    }

    return res;
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

    vector<int> k_largest_elements = kFrequentElements(arr, n_elements, k);

    for (int element : k_largest_elements) {
        cout << element << " ";
    }

    return 0;
}