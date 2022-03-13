/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int JosephusProblem(int n, int k, int curr_killer) {
    if (n == 1) {
        return curr_killer;
    }

    int prev_killer = JosephusProblem(n - 1, k, curr_killer);
    return (prev_killer + k - 1) % n + 1;
    // Note that (prev_killer + k - 1) % n, will give prev_killed, and adding 1 will give me the new killer
    // Hence (prev_killer + k - 1) % n ** +1 **
}

int main() {
    int n;
    int k;

    cin >> n;
    cin >> k;

    cout << JosephusProblem(n, k, 1);

    // cout << josephus(n, k);

    return 0;
}