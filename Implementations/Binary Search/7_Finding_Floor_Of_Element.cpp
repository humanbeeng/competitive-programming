/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_floor_of_key(vector<int> nums, int n_elements, int target) {

    int left = 0, right = n_elements - 1;

    int res = 0;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            res = mid + 1;
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid - 1;
        }
    }

    return res;
}

int main() {

    int n_elements = 0;
    cin >> n_elements;

    vector<int> nums;

    for (int i = 0; i < n_elements; i++) {
        int element = 0;
        cin >> element;

        nums.push_back(element);
    }

    int key = 0;
    cin >> key;

    int res = find_floor_of_key(nums, n_elements, key);
    cout << res;

    return 0;
}