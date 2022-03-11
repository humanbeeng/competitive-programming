/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

bool t[10001][10001];

bool isSubsetAvailable(int arr[], int n, int equal_partition) {
    //initialization of t arr

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < equal_partition + 1; j++) {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < equal_partition + 1; j++) {
            if (arr[i] <= equal_partition) {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            } else if (arr[i] > equal_partition) {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][equal_partition];
}

bool isEquallyPartitionable(int arr[], int n) {
    long long sum_arr = 0;
    for (int i = 0; i < n; i++) {
        sum_arr += arr[i];
    }

    if (sum_arr % 2 != 0) {
        return false;
    }

    long long equal_partition = sum_arr / 2;

    return isSubsetAvailable(arr, n, equal_partition);
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    bool res = isEquallyPartitionable(arr, n);

    if (res)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}