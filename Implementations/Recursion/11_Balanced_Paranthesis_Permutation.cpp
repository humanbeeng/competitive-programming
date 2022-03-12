/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void BalancedParanthesesPermutationGenerator(int n_pairs, string parantheses_string, set<string> &result) {

    if (n_pairs == 0) {
        result.insert(parantheses_string);
        return;
    }

    // Choice 1 : Wrap paranthesis
    string wrapped_parantheses = "";
    wrapped_parantheses.push_back('(');
    wrapped_parantheses.append(parantheses_string);
    wrapped_parantheses.push_back(')');

    BalancedParanthesesPermutationGenerator(n_pairs - 1, wrapped_parantheses, result);
    // Choice 2 : Left appended parantheses
    string left_appended_parantheses = "()";
    left_appended_parantheses.append(parantheses_string);

    BalancedParanthesesPermutationGenerator(n_pairs - 1, left_appended_parantheses, result);

    // Choice 3 : Right appended parantheses
    string right_appended_parantheses = "";
    right_appended_parantheses.append(parantheses_string);
    right_appended_parantheses.append("()");

    BalancedParanthesesPermutationGenerator(n_pairs - 1, right_appended_parantheses, result);

    return;
}

set<string> BalancedParanthesisPermutation(int n_pairs) {
    set<string> result;
    string parantheses_string = "";

    BalancedParanthesesPermutationGenerator(n_pairs, parantheses_string, result);

    return result;
}

int main() {
    int n_pairs = 0;
    cin >> n_pairs;

    set<string> result = BalancedParanthesisPermutation(n_pairs);

    for (string balanced_pair : result) {
        cout << balanced_pair << endl;
    }

    return 0;
}