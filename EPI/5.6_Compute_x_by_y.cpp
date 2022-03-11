/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int compute_quotient(int x, int y) {
    int result = 0;
    int power = 32;
    int y_times_power = (y << power);

    while (x >= y) {
        while (y_times_power > x) {
            y_times_power = y_times_power >> 1;
            --power;
        }
        result = result + (1U << power);
        x = x - (y_times_power);
    }
    return result;
}

int main() {

    int x, y;
    cin >> x >> y;

    int quotient = compute_quotient(x, y);

    cout << quotient;

    return 0;
}