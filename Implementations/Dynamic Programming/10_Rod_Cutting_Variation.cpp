/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int rod_cutting(int price[], int n_elements, int length) {

    int t[n_elements + 3][length + 3];
    memset(t, 0, sizeof(t));

    for (int i = 1; i <= n_elements; i++) {
        for (int j = 1; j <= length; j++) {
            if (i > j) {
                t[i][j] = t[i - 1][j];
            } else if (i <= j) {
                t[i][j] = max(t[i][j - i] + price[i - 1], t[i - 1][j]);
            }
        }
    }

    return t[n_elements][length];
}

int main() {
    int n_elements;
    cin >> n_elements;

    int price[n_elements + 3];

    for (int i = 0; i < n_elements; i++) {
        cin >> price[i];
    }

    int length;
    cin >> length;

    int res = rod_cutting(price, n_elements, length);

    cout << res;

    return 0;
}