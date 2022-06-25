/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class ParenthesesState {
public:
    string parentheses_string;
    int n_opened;
    int n_closed;

    ParenthesesState(string parentheses_string, int n_opened, int n_closed) {
        parentheses_string = parentheses_string;
        n_opened = n_opened;
        n_closed = n_closed;
    }
};

void BalancedParenthesesPermutationGenerator(int n_opened, int n_closed, string parentheses_string, vector<string> &result) {

    stack<ParenthesesState> st;
    st.push(ParenthesesState("", n_opened, n_closed));

    while (!st.empty()) {
        ParenthesesState curr_state = st.top();

        int curr_opened = curr_state.n_opened;
        int curr_closed = curr_state.n_closed;
        string curr_string = curr_state.parentheses_string;

        if (curr_opened == 0 && curr_closed == 0) {
            result.push_back(curr_state.parentheses_string);
        }

        else if (curr_opened == curr_closed) {
            curr_string.push_back('(');
            st.push(ParenthesesState(curr_string, n_opened - 1, n_closed));
        }

        else {

            if (curr_opened == 0) {
                curr_string.push_back(')');
                st.push(ParenthesesState(curr_string, curr_opened, curr_closed - 1));
            } else {
                string curr_string_with_closed = curr_string;
                curr_string_with_closed.push_back(')');
                st.push(ParenthesesState(curr_string_with_closed, curr_opened, curr_closed - 1));

                string curr_string_with_opened = curr_string;
                curr_string_with_opened.push_back('(');
                st.push(ParenthesesState(curr_string_with_opened, curr_opened - 1, curr_closed));
            }
        }
    }

    return;

} // TC : O(2 ^ N)

vector<string> BalancedParenthesesPermutation(int n_pairs, vector<string> &result) {
    string parentheses_string = "";
    int n_opened = n_pairs, n_closed = n_pairs;

    BalancedParenthesesPermutationGenerator(n_opened, n_closed, parentheses_string, result);

    return result;
}

int main() {

    int n_pairs;
    cin >> n_pairs;

    vector<string> result;

    result = BalancedParenthesesPermutation(n_pairs, result);

    for (string it : result) {
        cout << it << endl;
    }
    return 0;
}