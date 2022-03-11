/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void PrintWithCaseChange(string input_string, string output_string) {
    if (input_string.size() == 0) {
        cout << output_string << endl;
        return;
    }

    output_string.push_back(input_string[0]);
    input_string.erase(input_string.begin());

    PrintWithCaseChange(input_string, output_string);

    int output_string_end_idx = output_string.size() - 1;

    char output_string_last_char = output_string.at(output_string_end_idx);
    output_string[output_string_end_idx] = toupper(output_string_last_char);

    PrintWithCaseChange(input_string, output_string);
    return;
}

int main() {
    string input_string = "", output_string = "";
    cin >> input_string;

    PrintWithCaseChange(input_string, output_string);
    return 0;
}