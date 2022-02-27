/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> FindKClosestElements(vector<int> &arr, int k, int x) {

    int n_elements = arr.size();

    int left = 0, right = n_elements - k;

    while (left < right) {

        int mid = left + ((right - left) / 2);

        int curr_closest = x - arr[mid];

        int possible_closest = arr[mid + k] - x;

        if (curr_closest > possible_closest) {
            left = mid + 1;
        }

        else if (curr_closest <= possible_closest) {
            right = mid;
        }
    }

    vector<int> result;

    for (int i = left; i < left + k; i++) {
        result.push_back(arr[i]);
    }

    return result;
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

    int target;
    cin >> target;

    int k;
    cin >> k;

    vector<int> res = FindKClosestElements(nums, k, target);

    for (int item : res) {
        cout << item << " ";
    }
    return 0;
}