/* 
Problem statement : To check whether a given sum can be made by a subset from a given array
IP : arr, sum
OP : true or false

main = n, arr, sum

subset_sum return bool to main

 */

/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

bool t[1002][1002];

bool is_subset_available(int arr[], int n, int sum) {
    /* 
here wt is arr

capacity is sum

since the return type is bool and two changing variables out t matrix will be of bool

 */
    // Step 1 : Base condition == initialization

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < sum + 1; j++) {
            /* smallest possible input is no elements in arr
			or
			the given knapsack could have no capacity at all
			or ie capacity == 0
			here sum == 0

			if no capacity then can we make sum of say 1, no
			can we make sum of 0 yes
			can we make sum of 3 no
1
			ie (i, j)==(0, 0) true, we can
			(i, j) == (n =0, sum =1)		nope ie false	
			 */

            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    // Lets handle the cases

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < sum + 1; j++) {
            if (arr[i - 1] <= j) {
                /*  here we are not calculating max profit for us to use max function. Instead we are checking both the cases.
				 if we add can we get the sum if so true
				 if we didnt add, can we get the sum 
				case 1 OR case 2 whichever works will return true hence overall it becomes true
				if both the cases did not yield then given small subproblem cannot add up to sum hence false will be stored for 
				now. 

				  */
                t[i][j] = (t[i - 1][j - arr[i - 1]] || t[i - 1][j]);
            } else {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][sum];
}

int main() {
    int n;
    cin >> n;
    int arr[n + 2];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int sum;
    cin >> sum;

    bool res = is_subset_available(arr, n, sum);

    cout << res << '\n';

    return 0;
}