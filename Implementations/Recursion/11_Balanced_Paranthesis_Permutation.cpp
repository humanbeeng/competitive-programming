/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void BalancedParenthesesPermutationGenerator(int n_pairs, string parentheses_string, set<string> &result) {

    if (n_pairs == 0) {
        result.insert(parentheses_string);
        return;
    }

    // Choice 1 : Wrap parenthesis
    string wrapped_parentheses = "";
    wrapped_parentheses.push_back('(');
    wrapped_parentheses.append(parentheses_string);
    wrapped_parentheses.push_back(')');

    BalancedParenthesesPermutationGenerator(n_pairs - 1, wrapped_parentheses, result);
    // Choice 2 : Left appended parentheses
    string left_appended_parentheses = "()";
    left_appended_parentheses.append(parentheses_string);

    BalancedParenthesesPermutationGenerator(n_pairs - 1, left_appended_parentheses, result);

    // Choice 3 : Right appended parentheses
    string right_appended_parentheses = "";
    right_appended_parentheses.append(parentheses_string);
    right_appended_parentheses.append("()");

    BalancedParenthesesPermutationGenerator(n_pairs - 1, right_appended_parentheses, result);

    return;
}

set<string> BalancedParenthesisPermutation(int n_pairs) {
    set<string> result;
    string parentheses_string = "";

    BalancedParenthesesPermutationGenerator(n_pairs, parentheses_string, result);

    return result;
}

int main() {
    int n_pairs = 0;
    cin >> n_pairs;

    set<string> result = BalancedParenthesisPermutation(n_pairs);

    for (string balanced_pair : result) {
        cout << balanced_pair << endl;
    }

    return 0;
}