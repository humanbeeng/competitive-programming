/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class MinimumSubsetDifference {
public:
    MinimumSubsetDifference() {
        int n_elements, range_arr = 0;
        cin >> n_elements;

        int arr[n_elements + 1];
        _take_input(arr, n_elements, range_arr);

        int res = _calculate_min_sub_difference(arr, n_elements, range_arr);

        cout << res;
    }

private:
    void _take_input(int arr[], int n_elements, int &range_arr) {
        int num;
        for (int i = 0; i < n_elements; i++) {
            cin >> num;
            arr[i] = num;
            range_arr += num;
        }
    }

private:
    int _calculate_min_sub_difference(int arr[], int n_elements, int range_arr) {

        int boundary = ceil(range_arr / 2);

        //calculate all the subsets upto the range_arr
        vector<int> possible_subset_sums = _calculate_possible_subset_sum(arr, n_elements, boundary);

        //Check for min
        int minimum_subsetsum_difference = INT_MAX;
        for (int subset_sum : possible_subset_sums) {
            minimum_subsetsum_difference = min(minimum_subsetsum_difference, abs(range_arr - (2 * subset_sum)));
        }

        return minimum_subsetsum_difference;
    }

private:
    vector<int> _calculate_possible_subset_sum(int arr[], int n_elements, int range_arr) {
        //Initialization of t matrix
        bool t[n_elements + 2][range_arr + 2];
        for (int i = 0; i <= n_elements; i++) {
            for (int j = 0; j <= range_arr; j++) {
                if (i == 0)
                    t[i][j] = false;
                if (j == 0)
                    t[i][j] = true;
            }
        }

        for (int i = 1; i <= n_elements; i++) {
            for (int j = 1; j <= range_arr; j++) {
                if (arr[i - 1] > j) {
                    t[i][j] = t[i - 1][j];
                } else if (arr[i - 1] <= j) {
                    t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
                }
            }
        }

        vector<int> possible_subset_sums;
        for (int j = 0; j <= range_arr; j++) {
            if (t[n_elements][j]) {
                possible_subset_sums.push_back(j);
            }
        }

        return possible_subset_sums;
    }
};

int main() {
    MinimumSubsetDifference msd = MinimumSubsetDifference();
    return 0;
}