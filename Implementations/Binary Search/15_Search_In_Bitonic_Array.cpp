/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int OrderAgnosticBinarySeach(vector<int> &nums, int target, int left, int right) {
    int n_elements = nums.size();
    bool isAscending = true;
    if (nums[0] > nums[n_elements - 1]) {
        isAscending = false;
    }

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (nums[mid] == target) {
            return mid;
        } else if (target < nums[mid]) {
            if (isAscending) {
                right = mid - 1;
            } else
                left = mid + 1;

        } else if (target > nums[mid]) {
            if (isAscending) {
                left = mid + 1;
            } else
                right = mid - 1;
        }
    }

    return -1;
}

int FindPeakElementIdx(vector<int> &nums) {
    int n_elements = nums.size();

    int left = 0, right = n_elements - 1;

    while (left < right) {
        int mid = left + ((right - left) / 2);

        if (nums[mid] > nums[mid + 1]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return right;
}

int SearchInBitonicArray(vector<int> &nums, int target) {
    int n_elements = nums.size();

    if (n_elements == 0)
        return -1;

    int left = 0, right = n_elements - 1;

    int peak_element_idx = FindPeakElementIdx(nums);

    int left_result = OrderAgnosticBinarySeach(nums, target, left, peak_element_idx - 1);
    int right_result = OrderAgnosticBinarySeach(nums, target, peak_element_idx, right);

    if (left_result != -1) {
        return left_result;
    }
    if (right_result != -1) {
        return right_result;
    }

    return -1;
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> nums;

    while (n_elements--) {
        int input_element;
        cin >> input_element;
        nums.push_back(input_element);
    }

    int target;
    cin >> target;

    int target_position = SearchInBitonicArray(nums, target);

    cout << target_position;
    return 0;
}