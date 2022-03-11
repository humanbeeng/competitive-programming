/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void calculate_ngr(int arr[], int n) {
    stack<int> st;
    vector<int> ngr;

    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            st.push(arr[i]);
            continue;
        }
    }

    for (int item : ngr) {
        cout << item << " ";
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    calculate_ngr(arr, n);

    return 0;
}