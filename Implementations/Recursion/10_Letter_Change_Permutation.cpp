/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

char CaseSwitch(char c) {
    char switched_c;
    if (isupper(c)) {
        switched_c = tolower(c);
    } else
        switched_c = toupper(c);

    return switched_c;
}

void TransferFirstChar(string &source, string &destination) {
    destination.push_back(source[0]);
    source.erase(source.begin());
}

void LetterCasePermutation(string input_string, string output_string) {
    if (input_string.size() == 0) {
        cout << output_string << endl;
        return;
    }

    if (!isalpha(input_string[0])) {
        TransferFirstChar(input_string, output_string);
        LetterCasePermutation(input_string, output_string);
    } else {
        TransferFirstChar(input_string, output_string);

        LetterCasePermutation(input_string, output_string);

        int end_idx = output_string.size() - 1;
        output_string[end_idx] = CaseSwitch(output_string[end_idx]);
        LetterCasePermutation(input_string, output_string);
    }

    return;
}

int main() {

    string input_string;
    cin >> input_string;

    string output_string = "";

    LetterCasePermutation(input_string, output_string);

    return 0;
}