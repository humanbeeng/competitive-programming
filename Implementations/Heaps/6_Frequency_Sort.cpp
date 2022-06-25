/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class PairComparator {
public:
    int operator()(pair<int, int> &pair_1, pair<int, int> &pair_2) {

        if (pair_1.first < pair_2.first) {
            return true;
        } else if (pair_1.first > pair_2.first) {
            return false;
        } else {
            if (pair_1.second > pair_2.second) {
                return true;
            } else
                return false;
        }
    }
};

class FrequencySort {
public:
    vector<int> frequencySort(vector<int> &arr, int n_elements, int k) {
        unordered_map<int, int> freq_map;
        priority_queue<pair<int, int>, vector<pair<int, int>>, PairComparator> min_heap_with_freq;
        vector<int> result;

        for (int element : arr) {
            freq_map[element]++;
        }

        for (pair<int, int> entry : freq_map) {
            min_heap_with_freq.push({entry.second, entry.first});
        }

        while (!min_heap_with_freq.empty()) {
            result.push_back(min_heap_with_freq.top().first);
            min_heap_with_freq.pop();
        }

        return result;
    }
};

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

    vector<int> k_largest_elements = FrequencySort().frequencySort(arr, n_elements, k);

    for (int element : k_largest_elements) {
        cout << element << " ";
    }

    return 0;
}