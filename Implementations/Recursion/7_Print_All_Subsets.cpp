/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void PrintAllSubsets(string input_string, string output_string) {
    if (input_string.size() == 0) {
        cout << output_string << " ";
        return;
    }

    char back_char = input_string.back();
    input_string.pop_back();
    PrintAllSubsets(input_string, output_string + back_char);
    PrintAllSubsets(input_string, output_string);
    return;
}

int main() {
    string input_string;
    cin >> input_string;

    PrintAllSubsets(input_string, "");
    return 0;
}