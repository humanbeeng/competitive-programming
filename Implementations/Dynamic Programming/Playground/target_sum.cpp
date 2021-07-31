#include <bits/stdc++.h>
using namespace std;

int subset_sum(vector<int> nums, int s1) {
    int dp[nums.size() + 1][s1 + 1];
    for (int i = 0; i < s1 + 1; ++i) {
        dp[0][i] = 0;
    }
    for (int i = 0; i < nums.size() + 1; ++i) {
        dp[i][0] = 1;
    }
    for (int i = 1; i < nums.size() + 1; ++i) {
        for (int j = 1; j < s1 + 1; ++j) {
            if (nums[i - 1] == 0)
                dp[i][j] = dp[i - 1][j];
            else if (nums[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
            } else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[nums.size()][s1];
}

int findTargetSumWays(vector<int> &nums, int target) {
    int sum = 0;
    int count_zero = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (nums[i] == 0)
            ++count_zero;
    }
    int s1 = (sum + target) / 2;
    if ((sum + target) % 2 != 0)
        return 0;
    else
        return pow(2, count_zero) * subset_sum(nums, s1);
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<int> nums;

    for (int i = 0; i < n_elements; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int target_sum;
    cin >> target_sum;

    int res = findTargetSumWays(nums, target_sum);
    cout << res;
    return 0;
}