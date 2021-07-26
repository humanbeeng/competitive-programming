/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return;
}

void insert_back(stack<int> &st, int to_bottom) {
    if (st.size() == 0) {
        st.push(to_bottom);
        return;
    }

    int curr_top = st.top();
    st.pop();
    insert_back(st, to_bottom);
    st.push(curr_top);
    return;
}

void reverse_stack(stack<int> &st) {
    if (st.size() == 1) {
        //Already reversed !
        return;
    }
    int curr_top = st.top();
    st.pop();
    reverse_stack(st);

    insert_back(st, curr_top);
    return;
}

int main() {
    int n_elements;
    cin >> n_elements;

    stack<int> st;

    for (int i = 0; i < n_elements; i++) {
        int num;
        cin >> num;
        st.push(num);
    }

    cout << "Before reversing \n";
    print_stack(st);

    reverse_stack(st);

    cout << "\nAfter reversing\n";
    print_stack(st);

    return 0;
}