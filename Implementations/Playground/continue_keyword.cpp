/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_elements;
    cin >> n_elements;
    int arr[n_elements + 1];

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n_elements; i++) {
        if (i == 1)
            continue;
        cout << arr[i] << ' ';
    }

    return 0;
}

/* 
continue keyword is used to skip the parts below the continue keyword
continue = skip below and iterate again
 */