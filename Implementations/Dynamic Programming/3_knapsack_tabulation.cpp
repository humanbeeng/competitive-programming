/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int t[1002][1002];
int knapsack_tabulation(int wt[], int val[], int W, int n) {
    memset(t, -1, sizeof(t));
    /* 
	Recursion = base condition + induction + hypothesis
	similarly here base condition = initialization
	the two changing variables are W and n
	hence make a matrix of that depicting the results of two
	variables. 
	 */

    //Step 1 : Initialization

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < W + 1; j++) {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 0;
        }
    }

    // Step 2 : solving for smaller inputs

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < W + 1; j++) {
            // here i = n and j = W
            /* 
			in recursive code we had three cases 
			if(n == 0 || W == 0) return 0;
			else if(wt[n - 1] <= W)
			return max(val[n - 1] + recursive_knapsack(wt, val, W - wt[n - 1], n - 1), recursive_knapsack(wt, val, W, n - 1));
			else return recursive_knapsack(wt, val, W, n - 1);
			

			We have already taken care of base condition
			 */
            if (wt[i - 1] <= j) {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            } else if (wt[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][W];
}

int main() {
    int n;
    cin >> n;
    int wt[n + 3];
    int val[n + 3];
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        wt[i] = num;
    }
    for (int i = 0; i < n; i++) {
        cin >> num;
        val[i] = num;
    }
    int W;
    cin >> W;

    int res = knapsack_tabulation(wt, val, W, n);
    cout << res << '\n';

    return 0;
}