/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &A, int target) {
    int lo = 0;
    int hi = A.size() - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (A[mid] == target)
            return mid;

        if (A[lo] <= A[mid]) {
            if (target >= A[lo] && target < A[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        } else {
            if (target > A[mid] && target <= A[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    return A[lo] == target ? lo : -1;
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

    int target = 0;
    cin >> target;

    int res = search(nums, target);
    cout << res;

    return 0;
}