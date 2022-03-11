/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class ReverseStack {
private:
    int n_elements;

public:
    ReverseStack() {
        cin >> n_elements;
        stack<int> st = _take_input();
        _print_stack(st);
        _reverse_stack(st);
        _print_stack(st);
    }

private:
    stack<int> _take_input() {
        stack<int> st;

        for (int i = 0; i < n_elements; i++) {
            int num;
            cin >> num;
            st.push(num);
        }

        // cout << st.top() << '\n';
        return st;
    }

private:
    void _reverse_stack(stack<int> &st) {
        if (st.size() == 1) {
            return;
        }
        int curr_top = st.top();
        st.pop();

        _reverse_stack(st);

        //insert the curr_top to the back of the stack

        _insert_back(st, curr_top);
        return;
    }

private:
    void _insert_back(stack<int> &st, int to_bottom) {
        if (st.empty()) {
            st.push(to_bottom);
            return;
        }

        int curr_top = st.top();
        st.pop();

        _insert_back(st, to_bottom);

        st.push(curr_top);
        return;
    }

private:
    void _print_stack(stack<int> st) {
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
        return;
    }
};

int main() {
    ReverseStack reverse_stack = ReverseStack();

    return 0;
}