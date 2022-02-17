/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int search_nearly_sorted_array(vector<int> arr, int n_elements) {
}

int main() {
    int n_elements = 0;
    cin >> n_elements;

    vector<int> arr;

    for (int i : n_elements) {
        int input_element;
        cin >> input_element;

        arr.push_back(input_element);
        int key;
        cin >> key;

        int key_idx = search_nearly_sorted_array(arr, n_elements, key);

        cout << key_idx;
    }

    return 0;
}