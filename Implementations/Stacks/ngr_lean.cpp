/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n + 1];
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num;
    }

    stack<int> st;
    vector<int> res;

    for (int i = n - 1; i >= 0; i--) {

        if (st.empty()) {
            res.push_back(-1);
        } else if (!st.empty() && st.top() > arr[i]) {
            res.push_back(st.top());
        } else if (!st.empty() && st.top() <= arr[i]) {
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                res.push_back(-1);
            } else if (st.top() > arr[i]) {
                res.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    reverse(res.begin(), res.end());
    for (int item : res) {
        cout << item << " ";
    }
    cout << "\n";

    return 0;
}