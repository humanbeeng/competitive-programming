/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 10> arr;
    arr.fill(10);

    for (int i : arr) {
        cout << i << " ";
    }

    cout << '\n'
         << arr.empty();

    return 0;
}