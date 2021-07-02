/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void insert_back(stack<int> &st, int to_under) {
    if (st.empty()) {
        st.push(to_under);
        return;
    }

    //else Hypothesis : make input smaller

    int on_top = st.top();
    st.pop();
    insert_back(st, to_under);

    // Induction step : curr_top must be placed back on top

    st.push(on_top);
    return;
}

void reverse_stack(stack<int> &st) {
    if (st.size() == 1) {
        return;
    }

    int curr_top = st.top();
    st.pop();

    reverse_stack(st);

    //now induction step
    insert_back(st, curr_top);

    return;
}

int main() {

    int st_size;
    cin >> st_size;
    stack<int> st;
    for (int i = 0; i < st_size; i++) {
        int num;
        cin >> num;
        st.push(num);
    }

    cout << "After reversing : ";

    reverse_stack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

     return 0;
}