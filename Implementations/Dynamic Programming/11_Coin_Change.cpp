/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class CoinChange {

public:
    CoinChange() {
        int n_coins;
        cin >> n_coins;
        int coin_sum;

        int coins[n_coins + 1];

        for (int i = 0; i < n_coins; i++) {
            cin >> coins[i];
        }
        cin >> coin_sum;

        int max_ways = _calculate_max_ways(coins, n_coins, coin_sum);
        // cout << max_ways;
    }

private:
    int _calculate_max_ways(int coins[], int n_coins, int coin_sum) {
        //initialize
        /*
			if n_coins == 0 no given coins max_ways == 0
			if coin_sum == 0 then one way to do that ie dont include any coins 
		*/

        int t[n_coins + 1][coin_sum + 1];

        //i -> n_coins j-> coin_sum

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
        cout << t[n_coins][coin_sum];
        return t[n_coins][coin_sum];

    } //end calculate_max_ways TC & SC : O(n_coins * coin_sum)
};

int main() {
    CoinChange cc = CoinChange();
    return 0;
}