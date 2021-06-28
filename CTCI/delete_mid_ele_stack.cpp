/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int k) {

    if (k == 1) {
        int deleted_ele = st.top();
        cout << "Deleted element : " << deleted_ele << endl;
        st.pop();

        return;
    }
    //make input smaller and call solve
    int curr_top = st.top();
    st.pop();

    solve(st, k - 1);
    st.push(curr_top);
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

    int mid = (st_size / 2) + 1;

    solve(st, mid);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}