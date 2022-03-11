/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int BinarySearchRecursive(vector<int> &nums, int target, int left, int right) {
    if (left <= right) {
        int mid = left + ((right - left) / 2);

        if (nums[mid] == target) {
            return mid;
        }

        else if (nums[mid] > target) {
            return BinarySearchRecursive(nums, target, left, mid - 1);
        }

        else if (nums[mid] < target) {
            return BinarySearchRecursive(nums, target, mid + 1, right);
        }
    }
    return -1;
}

int main() {
    int n_elements = 0;
    cin >> n_elements;

    vector<int> nums;

    for (int i = 0; i < n_elements; i++) {
        int input_element = 0;
        cin >> input_element;
        nums.push_back(input_element);
    }

    int target = 0;
    cin >> target;

    int res = BinarySearchRecursive(nums, target, 0, n_elements - 1);

    cout << res;
    return 0;
}