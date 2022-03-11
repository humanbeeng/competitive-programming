/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int FindMaximumElementInBitonicArray(vector<int> &nums) {
    int n_elements = nums.size();

    if (n_elements == 0) {
        return -1;
    }

    int left = 0, right = n_elements - 1;

    while (left < right) {
        int mid = left + ((right - left) / 2);

        if (nums[mid] > nums[mid + 1]) {
            right = mid;
        } else
            left = mid + 1;
    }

    return right;
}

int main() {

    int n_elements = 0;
    cin >> n_elements;

    vector<int> nums;

    while (n_elements--) {
        int input_element;
        cin >> input_element;
        nums.push_back(input_element);
    }

    int max_element_position = FindMaximumElementInBitonicArray(nums);

    cout << max_element_position;

    return 0;
}