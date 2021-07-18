/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class EqualSumPartition {

public:
    bool res;
    EqualSumPartition(int arr[], int sum, int n) {
        _solve(arr, sum, n);
    }

private:
    bool t[1002][1002];

private:
    void _initialize(int sum, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < sum; j++) {
                if (i == 0)
                    t[i][j] = false;
                if (j == 0)
                    t[i][j] = true;
            }
        }
    }

    bool _isEven(int sum) {
        if (sum % 2 == 0)
            return true;
        return false;
    }

private:
    void _solve(int arr[], int sum, int n) {
        if (!_isEven(sum)) {
            res = false;
        }
        sum = sum / 2;
        _initialize(sum, n);
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < sum + 1; j++) {
                if (arr[i - 1] > j) {
                    t[i][j] = t[i - 1][j];
                } else if (arr[i - 1] <= j) {
                    t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
                }
            }
        }
        res = t[n][sum];
    }

public:
    bool fetch_res() {
        return res;
    }
};

int main() {
    int n = 4;
    int arr[] = {1000, 300, 800, 500};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }
    EqualSumPartition eq_sum = EqualSumPartition(arr, sum, n);
    bool res = eq_sum.fetch_res();
    cout << res;
    return 0;
}