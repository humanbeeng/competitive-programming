/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
int bit_addition(int x, int y) {
    if (y == 0) {
        return x;
    }
    int carry = (x & y) << 1;
    int sum = x ^ y;
    return bit_addition(sum, carry);
}

int bit_multiply(int x, int y) {
    int curr_step_sum = 0;
    while (x) {
        if (x & 1) {
            curr_step_sum = bit_addition(curr_step_sum, y);
        }
        x = x >> 1;
        y = y << 1;
    }
    return curr_step_sum;
}

int main() {
    int x = 5;
    int y = 9;

    int res = bit_multiply(x, y);
    cout << res;

    return 0;
}