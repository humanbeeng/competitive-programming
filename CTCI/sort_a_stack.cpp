/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp) {
    /*below element, ie the only element must not be there ie must be empty or our only element must be
	smaller than or equal to temp element => BASE CONDITION
	 */

    if (st.empty() || st.top() <= temp) {
        st.push(temp);
        return;
    }
    int curr_greater = st.top();
    st.pop();
    insert(st, temp);
    st.push(curr_greater);
}

void sort(stack<int> &st) {
    //base condition
    /* 
	if stack has only one element => stack is sorted
	 */

    if (st.size() == 1) {
        return;
    }

    int temp = st.top();
    st.pop();

    sort(st);

    //now that after this, our stack has only one element inside it, we have to find a place for temp to get inserted

    insert(st, temp);
}

int main() {
    stack<int> st;

    int st_size;
    cin >> st_size;
    for (int i = 0; i < st_size; i++) {
        int num;
        cin >> num;
        st.push(num);
    }
    sort(st);

    cout << "After sorting " << endl;

    //print the stack

    for (int i = 0; i < st_size; i++) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}