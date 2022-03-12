/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void BalancedParenthesesPermutationGenerator(int n_opened, int n_closed, string parentheses_string, vector<string> &result) {

    if (n_opened == 0 && n_closed == 0) {
        result.push_back(parentheses_string);
        return;
    }

    if (n_opened == n_closed) {
        parentheses_string.push_back('(');
        BalancedParenthesesPermutationGenerator(n_opened - 1, n_closed, parentheses_string, result);
    } else {
        if (n_opened == 0) {
            parentheses_string.push_back(')');
            BalancedParenthesesPermutationGenerator(n_opened, n_closed - 1, parentheses_string, result);
        } else {
            string opened_parentheses = parentheses_string;
            opened_parentheses.push_back('(');
            BalancedParenthesesPermutationGenerator(n_opened - 1, n_closed, opened_parentheses, result);

            string closed_parentheses = parentheses_string;
            closed_parentheses.push_back(')');
            BalancedParenthesesPermutationGenerator(n_opened, n_closed - 1, closed_parentheses, result);
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