/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void DeleteMidElement(vector<int> &nums) {
    // Base condition
    if (nums.size() == 1) {
        nums.pop_back();
        return;
    }

    int front_element = nums.front();
    int back_element = nums.back();

    if (nums.size() == 2) {
        nums.pop_back();
        DeleteMidElement(nums);
        nums.push_back(back_element);
    } else {
        nums.pop_back();
        nums.erase(nums.begin());
        DeleteMidElement(nums);

        nums.push_back(back_element);
        nums.insert(nums.begin(), front_element);
    }

    return;
} // O(n)

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> nums;

    while (n_elements--) {
        int input_element;
        cin >> input_element;
        nums.push_back(input_element);
    }

    DeleteMidElement(nums);

    for (int element : nums) {
        cout << element << " ";
    }

    return 0;
}