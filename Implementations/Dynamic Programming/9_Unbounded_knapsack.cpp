/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class UnboundedKnapsack {
private:
    int n_elements;
    int res = 0;

public:
    UnboundedKnapsack() {
        cin >> n_elements;
        int wt[n_elements + 3];
        int val[n_elements + 3];

        _input_wt(wt, n_elements);
        _input_val(val, n_elements);

        int capacity;
        cin >> capacity;

        _calculate_max_profit(wt, val, n_elements, capacity);

        print_res();
    }

private:
    void _input_wt(int wt[], int n_elements) {
        for (int i = 0; i < n_elements; i++) {
            cin >> wt[i];
        }
    }

private:
    void _input_val(int val[], int n_elements) {
        for (int i = 0; i < n_elements; i++) {
            cin >> val[i];
        }
    }

private:
    void _calculate_max_profit(int wt[], int val[], int n_elements, int capacity) {
        int t[n_elements + 3][capacity + 3];
        memset(t, 0, sizeof(t));

        for (int i = 1; i <= n_elements; i++) {
            for (int j = 1; j <= capacity; j++) {
                if (wt[i - 1] > j) {
                    t[i][j] = t[i - 1][j];
                } else if (wt[i - 1] <= j) {
                    t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
                }
            }
        }

        res = t[n_elements][capacity];
    }

private:
    void print_res() {
        cout << res;
    }
};

int main() {
    UnboundedKnapsack ubkp = UnboundedKnapsack();
    return 0;
}