/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> FindRangeOfTarget(vector<int> &nums, int target) {

    int n_elements = nums.size();

    vector<int> range;

    if (n_elements == 0) {
        range.push_back(-1);
        range.push_back(-1);
        return range;
    }

    int left = 0, right = n_elements - 1;

    int range_left = 0, range_right = n_elements - 1;

    while (left + 1 < right) {

        int mid = left + ((right - left) / 2);

        if (nums[mid] == target) {

            if (nums[mid - 1] < target) {
                range_left = mid;
                left = mid;
            }
            if (nums[mid + 1] > target) {
                range_right = mid;
                right = mid;
            }
        }

        else if (nums[mid] > target) {
            right = mid;
        }

        else if (nums[mid] < target) {
            left = mid;
        }
    }

    if (nums[range_left] == target && nums[range_right] == target) {
        range.push_back(range_left);
        range.push_back(range_right);
    } else {
        range.push_back(-1);
        range.push_back(-1);
    }

    return range;
}

int main() {

    int n_elements;
    cin >> n_elements;

    vector<int> nums;

    while (n_elements--) {
        int input_element = 0;
        cin >> input_element;
        nums.push_back(input_element);
    }

    int target = 0;

    cin >> target;

    vector<int> range = FindRangeOfTarget(nums, target);

    cout << range[0] << " " << range[1];

    return 0;
}