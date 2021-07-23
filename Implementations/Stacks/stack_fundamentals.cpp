/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class StackFundamentals {
private:
    vector<int> arr;
    int n_elements;

public:
    StackFundamentals(int n) {
        n_elements = n;
        arr = _take_input(n);
        _nearest_greater_right();
        // _print_arr();
    }

private:
    vector<int> _take_input(int n_elements) {
        vector<int> arr(n_elements + 1);
        for (int i = 0; i < n_elements; i++) {
            int num;
            cin >> arr[i];
        }
        return arr;
    }

private:
    void _nearest_greater_right() {
        vector<int> res;
        stack<int> st;

        for (int i = n_elements - 1; i >= 0; i--) {
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
    }

    //debug place

private:
    void _print_arr() {
        for (int item : arr) {
            cout << item << " ";
        }
        cout << "\n";
    }
};

int main() {
    StackFundamentals ngr = StackFundamentals(5);
    // ngr.print_res();
    return 0;
}