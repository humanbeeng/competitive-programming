/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {

    int prefix_product = 1;
    int suffix_product = 1;
    vector<int> result(nums.size(), 1);

    for (int i = 0; i < nums.size() - 1; i++) {
        prefix_product = prefix_product * nums[i];
        result[i + 1] = prefix_product;
    }

    for (int i = nums.size() - 1; i > 0; i--) {
        suffix_product = suffix_product * nums[i];
        result[i - 1] = result[i - 1] * suffix_product;
    }

    return result;
}

int main() {

    return 0;
}