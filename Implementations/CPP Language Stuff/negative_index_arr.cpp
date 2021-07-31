/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_elements;
    scanf("%d", &n_elements);
    int arr[n_elements + 1];
    for (int i = 0; i < n_elements; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    cout << arr[-1];

    return 0;
}