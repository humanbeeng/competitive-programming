/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int FindCeilOfElement(vector<int> nums, int key) {
    int n_elements = nums.size();
    int left = 0, right = n_elements - 1;
    int res = 0;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (nums[mid] == key) {
            return nums[mid];
        }

        if (nums[mid] > key) {
            res = nums[mid];
            right = mid - 1;
        } else
            left = mid + 1;
    }
    return res;
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
    int key;
    cin >> key;

    int ceil_of_key = FindCeilOfElement(nums, key);
    cout << ceil_of_key;

    return 0;
}