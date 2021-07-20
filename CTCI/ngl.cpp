/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
/*
ip : arr[] = {1, 5, 2, 4, 10, 3}
op : ngl[] = {-1, -1, 5, 5, -1, 10}
 */

vector<int> calculate_nsr(int arr[], int n) {
    stack<int> st;
    vector<int> nsr;
    for (int i = n - 1; i >= 0; i--) {
        if (st.empty()) {
            nsr.push_back(-1);
        } else if (!st.empty() && arr[st.top()] < arr[i]) {
            nsr.push_back(st.top());
        } else if (!st.empty() && arr[st.top()] >= arr[i]) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                nsr.push_back(-1);
            } else if (arr[st.top()] < arr[i]) {
                nsr.push_back(st.top());
            }
        }
        st.push(i);
    }
    reverse(nsr.begin(), nsr.end());
    return nsr;
}

vector<int> calculate_nsl(int arr[], int n) {
    vector<int> nsl;
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            nsl.push_back(-1);
        } else if (!st.empty() && arr[st.top()] < arr[i]) {
            nsl.push_back(st.top());
        } else if (!st.empty() && arr[st.top()] >= arr[i]) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                nsl.push_back(-1);
            } else if (arr[st.top()] < arr[i]) {
                nsl.push_back(st.top());
            }
        }
        st.push(i);
    }
    return nsl;
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
    // vector<int> idx_right = calculate_nsr(arr, n);
    vector<int> idx_left = calculate_nsl(arr, n);

    int res = INT_MIN;

    for (int idx : idx_left) {
        cout << idx << " ";
    }
    // cout << res;
    cout << "\nSpan : \n";
    int i = 0;
    for (int idx : idx_left) {
        if (idx != -1) {
            cout << idx - i << " ";
        } else
            cout << 1 << " ";
        i++;
    }
    return 0;
}