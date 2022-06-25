/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class FrequencySort {
public:
    vector<int> frequencySort(vector<int> &arr, int n_elements, int k) {

        map<int, int, greater<int>> decreasing_freq_map;
        vector<int> result;

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