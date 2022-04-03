/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void firstNegativeInWindowSizedK(vector<int> &arr, int n_elements, int k) {

    int start = 0, end = 0;

    queue<int> negative_queue;

    while (end < n_elements) {
        if (arr[end] < 0) {
            negative_queue.push(arr[end]);
        }

        if (end - start + 1 == k) {

            cout << negative_queue.front() << " ";
            if (negative_queue.size() == 0) {
                cout << 0 << " ";
            }
            if (negative_queue.front() == arr[start]) {
                negative_queue.pop();
            }
            start++;
        }
        end++;
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

    int k;
    cin >> k;

    firstNegativeInWindowSizedK(arr, n_elements, k);

    return 0;
}