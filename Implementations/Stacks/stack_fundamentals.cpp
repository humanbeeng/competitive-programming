/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class StackFundamentals {
private:
    vector<int> arr;
    int n_elements;
    vector<int> res;

public:
    StackFundamentals(int n) {
        res.clear();
        arr.clear();
        n_elements = n;
        arr = _take_input(n);
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

public:
    void nearest_greater_right() {
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

        print_res(res);
    }

public:
    void nearest_greater_left() {
        vector<int> res;
        stack<int> st;

        for (int i = 0; i < n_elements; i++) {
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

        print_res(res);

        //NO REVERSING OF RES
    }

public:
    void nearest_smaller_right() {
        vector<int> res;
        stack<int> st;

        for (int i = n_elements - 1; i >= 0; i--) {
            if (st.empty()) {
                res.push_back(-1);
            } else if (!st.empty() && st.top() < arr[i]) {
                res.push_back(st.top());
            } else if (!st.empty() && st.top() >= arr[i]) {
                while (!st.empty() && st.top() >= arr[i]) {
                    st.pop();
                }
                if (st.empty())
                    res.push_back(-1);
                else if (st.top() < arr[i]) {
                    res.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        print_res(res);
    }

public:
    void nearest_smaller_left() {
        vector<int> res;
        stack<int> st;

        for (int i = 0; i < n_elements; i++) {
            if (st.empty()) {
                res.push_back(-1);
            } else if (!st.empty() && st.top() < arr[i]) {
                res.push_back(st.top());
            } else if (!st.empty() && st.top() >= arr[i]) {
                while (!st.empty() && st.top() >= arr[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    res.push_back(-1);
                } else if (st.top() < arr[i]) {
                    res.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        //NO REVERSING
        print_res(res);
    }

    //debug place

public:
    void print_res(vector<int> res) {
        for (int item : res) {
            cout << item << " ";
        }
        cout << "\n";
    }
};

int main() {
    StackFundamentals stack_fundamentals = StackFundamentals(5);
    stack_fundamentals.nearest_smaller_left();

    // ngr.print_res();
    return 0;
}