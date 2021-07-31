/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int rod_cutting(int price[], int n_elements, int length) {
    //code here

    int t[n_elements + 1][length + 1];
    memset(t, 0, sizeof(t)); //O(n)

    for (int i = 1; i <= n_elements; i++) {
        for (int j = 1; j <= length; j++) {
            if (i <= j) {
                t[i][j] = max(t[i - 1][j], t[i][j - i] + price[i - 1]);
            } else if (i > j) {
                t[i][j] = t[i - 1][j];
            }
        }
    } //O(n2)
    return t[n_elements][length];
}

int main() {

    int n_elements;
    cin >> n_elements;

    int price[n_elements + 3];
    int length;
    cin >> length;

    for (int i = 0; i < n_elements; i++) {
        cin >> price[i];
    }

    int res = rod_cutting(price, n_elements, length);

    cout << res;

    return 0;
}