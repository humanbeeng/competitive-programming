/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void maxSubarray(vector<int> &arr, int window_size) {

    if (arr.size() == 0)
        return;

    int start = 0, end = 0;
    deque<int> max_list;
    while (end < arr.size()) {

        while (!max_list.empty() && max_list.back() < arr[end]) {
            max_list.pop_back();
        }

        max_list.push_back(arr[end]);

        if (end - start + 1 == window_size) {
            cout << max_list.front() << " ";
            if (arr[start] == max_list.front()) {
                max_list.pop_front();
            }

            start++;
        }

        end++;
        vector<int> v;
    }
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

    int window_size;
    cin >> window_size;

    maxSubarray(arr, window_size);

    return 0;
}