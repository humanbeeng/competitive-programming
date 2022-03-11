/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int min_sub_difference(int arr[], int n_elements) {

    /* 
	I need possible subsets 
	from that i'll be taking the highest valued subset(say high), since range_arr - 2(high) will be as much minimum as possible
	this high should be less than or equal to range_arr / 2, since minimum at minimum is zero

	 */

    //Step 1 : Calculate range

    int range_arr = 0;

    for (int i = 0; i < n_elements; i++) {
        range_arr += arr[i];
    }
    int boundary = ceil(range_arr / 2);

    //Step 2 : Initialize

    bool t[n_elements + 2][boundary + 1];

    for (int i = 0; i < n_elements + 1; i++) {
        for (int j = 0; j < boundary + 2; j++) {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    //Step 3 : Calculate the subsets available till boundary

    for (int i = 1; i <= n_elements; i++) {
        for (int j = 1; j <= boundary; j++) {
            if (arr[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            } else if (arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
        }
    }

    // Step 4 : Filter out all the non possible subsets

    vector<int> possible_subsets;

    for (int i = 0; i <= boundary; i++) {
        if (t[n_elements][i]) {
            possible_subsets.push_back(i);
        }
    }

    int res = INT_MAX;
    for (int subset_sum : possible_subsets) {
        res = min(res, abs(range_arr - (2 * subset_sum)));
    }
    return res;
}

int main() {
    int n_elements;
    cin >> n_elements;

    int arr[n_elements + 1];

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }

    int res = min_sub_difference(arr, n_elements);
    cout << res;
    return 0;
}