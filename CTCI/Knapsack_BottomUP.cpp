/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int static t[10001][10001];
/* t[n][W] =>  i = n, j = W 

i = row => n = Row
j = col => W = Col

*/

int knapsack(int wt[], int val[], int W, int n) {
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < n + 1; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;

	for(int i = 1; i < n+1; i++){
		for(int j = 1;  j < n+1; j++){
			if(wt[i - 1	])
		}
	}

}

int main() {

    int n;
    cin >> n;

    int wt[n + 1], val[n + 1];
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        wt[i] = num;
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        val[i] = num;
    }
    int cap;
    cin >> cap;

    int max_profit = knapsack(wt, val, cap, n);

    return 0;
}