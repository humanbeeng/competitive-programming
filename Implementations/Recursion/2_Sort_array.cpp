/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void insert_proper(vector<int> &arr, int element) {
    if (arr.size() == 0 || arr[arr.size() - 1] <= element) {
        arr.push_back(element);
        return;
    }

    int temp = arr[arr.size() - 1];
    arr.pop_back();
    insert_proper(arr, element);
    arr.push_back(temp);
}

void sort_arr(vector<int> &arr) {
    if (arr.size() == 1 || arr.size() == 0) {
        return;
    }
    int curr_top = arr[arr.size() - 1];
    arr.pop_back();

    sort_arr(arr);

    insert_proper(arr, curr_top);
    return;
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> arr;

    for (int i = 0; i < n_elements; i++) {
        int num;
        cin >> num;

        arr.push_back(num);
    }

    for (int num : arr) {
        cout << num << " ";
    }
    cout << '\n';

    sort_arr(arr);
    cout << '\n';
    for (int num : arr) {
        cout << num << " ";
    }
    cout << '\n';

    return 0;
}