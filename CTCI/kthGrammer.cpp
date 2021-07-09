/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_kth_grammer(int n, int k) {
    if (n == 1 || k == 1)
        return 0;

    int mid = (pow(2, n - 1)) / 2;

    if (k <= mid)
        return find_kth_grammer(n - 1, k);

    else
        return !(find_kth_grammer(n - 1, k - mid));
}

int main() {
    int n, k;
    cin >> n >> k;

    int res = find_kth_grammer(n, k);

    cout << res << endl;

    return 0;
}