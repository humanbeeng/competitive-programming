/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void InsertIntoProperPosition(stack<int> &st, int element) {
    if (st.size() == 0 || st.top() > element) {
        st.push(element);
        return;
    }

    int popped_element = st.top();
    st.pop();

    InsertIntoProperPosition(st, element);

    if (st.top() > popped_element) {
        st.push(popped_element);
    } else
        InsertIntoProperPosition(st, popped_element);
    return;
}

void SortStack(stack<int> &st) {
    if (st.size() == 1) {
        return;
    }

    int popped_element = st.top();
    st.pop();

    SortStack(st);

    InsertIntoProperPosition(st, popped_element);

    return;
}

int main() {
    int n_elements;
    cin >> n_elements;

    stack<int> st;

    while (n_elements--) {
        int input_element;
        cin >> input_element;

        st.push(input_element);
    }

    SortStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}