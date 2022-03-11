/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void PushToBottom(stack<int> &st, int element) {
    if (st.size() == 0) {
        st.push(element);
        return;
    }

    int top_element = st.top();
    st.pop();

    PushToBottom(st, element);

    st.push(top_element);
    return;
}

void ReverseStack(stack<int> &st) {
    if (st.size() == 1) {
        return;
    }

    int top_element = st.top();
    st.pop();

    ReverseStack(st);

    PushToBottom(st, top_element);
}

int main() {
    int n_elements = 0;
    cin >> n_elements;

    stack<int> st;

    while (n_elements--) {
        int input_element;
        cin >> input_element;

        st.push(input_element);
    }

    ReverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}