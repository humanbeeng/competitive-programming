/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void InsertIntoArray(vector<int> &nums, int element) {

    if (nums.size() == 0 || nums.back() <= element) {
        nums.push_back(element);
        return;
    }

    int popped_element = nums.back();
    nums.pop_back();

    InsertIntoArray(nums, element);

    if (nums.back() < popped_element)
        nums.push_back(popped_element);
    else
        InsertIntoArray(nums, popped_element);
}

void SortArrayRecursively(vector<int> &nums) {

    if (nums.size() == 1) {
        return;
    }

    int popped_element = nums.back();
    nums.pop_back();

    SortArrayRecursively(nums);

    InsertIntoArray(nums, popped_element);
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

    int to_be_inserted_element = 4;

    SortArrayRecursively(nums);

    for (int i : nums) {
        cout << i << " ";
    }
    return 0;
}