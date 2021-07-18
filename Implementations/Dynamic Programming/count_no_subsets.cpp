/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class CountNoOfSubsets {

public:
    int res = 0;
    CountNoOfSubsets(int arr[], int sum, int n) {
        _solve(arr, sum, n);
    }

    void print_t(int sum, int n) {
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                cout << t[i][j] << " ";
            }
            cout << "\n";
        }
    }

private:
    int t[1002][1002];

private:
    void _initialize(int sum, int n) {
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                if (i == 0)
                    t[i][j] = 0;
                if (j == 0)
                    t[i][j] = 1;
            }
        }
    }

private:
    void _solve(int arr[], int sum, int n) {
        _initialize(sum, n);

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < sum + 1; j++) {
                if (arr[i - 1] > j) {
                    t[i][j] = t[i - 1][j];
                } else if (arr[i - 1] <= j) {
                    t[i][j] = (t[i - 1][j - arr[i - 1]]) + (t[i - 1][j]);
                }
            }
        }
        res = t[n][sum];
    }

public:
    int fetch_res() {
        return res;
    }
};

int main() {
    int arr[] = {2, 3, 5, 8, 6, 10};
    int sum = 10;
    int n = 6;
    CountNoOfSubsets cns = CountNoOfSubsets(arr, sum, n);
    int res = cns.fetch_res();

    cout << res;

    return 0;
}