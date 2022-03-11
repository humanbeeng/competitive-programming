/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int max_ways(int coins[], int n_coins, int coin_sum) {

    int t[n_coins + 1][coin_sum + 1];

    for (int i = 0; i <= n_coins; i++) {
        for (int j = 0; j <= coin_sum; j++) {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 1;
        }
    }

    for (int i = 1; i <= n_coins; i++) {
        for (int j = 1; j <= coin_sum; j++) {
            if (coins[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            } else if (coins[i - 1] <= j) {
                t[i][j] = t[i - 1][j] + t[i][j - coins[i - 1]];
            }
        }
    }
    return t[n_coins][coin_sum];
}

int main() {

    int n_coins;
    cin >> n_coins;
    int coins[n_coins + 2];

    for (int i = 0; i < n_coins; i++) {
        cin >> coins[i];
    }

    int coin_sum;
    cin >> coin_sum;

    int res = max_ways(coins, n_coins, coin_sum);
    cout << res;

    return 0;
}