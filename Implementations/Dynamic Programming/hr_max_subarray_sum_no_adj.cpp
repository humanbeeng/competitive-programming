/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n_elements, int t[]) {
    if (n_elements == 0) {
        return 0;
    }

    t[0] = max(arr[0], 0); //Deal with first negative element, since 0 > negative_element

    if (n_elements == 1) {
        return t[0];
    }

    t[1] = max(t[0], arr[1]);

    for (int i = 2; i <= n_elements; i++) {
        /*   t[i] = include or not include
         if not include then t[i] would be the same state 
		*/

        t[i] = max(t[i - 2], max(t[i - 1], arr[i] + t[i - 2]));
    }
    return t[n_elements - 1];
}

int main() {
    int n_elements;
    cin >> n_elements;

    int arr[n_elements + 1];

    int t[n_elements + 2];
    memset(t, 0, sizeof(t));

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }

    int res = max_sum(arr, n_elements, t);
    cout << res;

    return 0;
}