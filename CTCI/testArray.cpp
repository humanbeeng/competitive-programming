
/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int static arr[5][5];

int main() {
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}