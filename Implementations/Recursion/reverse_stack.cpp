/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class ReverseStack {
private:
    int n_elements;
    stack<int> st;

public:
    ReverseStack() {
        cin >> n_elements;
        st = _take_input();
        _print_st(st);
        _reverse_stack(st);
        _print_st(st);
    }

private:
    stack<int> _take_input() {
        stack<int> st;

        for (int i = 0; i < n_elements; i++) {
            int num;
            cin >> num;
            st.push(num);
        }
        return st;
    }
};

int main() {
    ReverseStack reverse_stack = ReverseStack();

    return 0;
}