/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void PrintPermutationsWithSpaces(string input_string, string output_string) {
    if (input_string.size() == 0)
        return;

    if (input_string.size() == 1) {
        output_string.append(input_string);
        cout << output_string << "\n";
        return;
    }
    // Decision 1 : Not include space
    output_string.push_back(input_string[0]);
    input_string.erase(input_string.begin());

    PrintPermutationsWithSpaces(input_string, output_string);

    // Decision 2 : Include space
    output_string.push_back('_');

    PrintPermutationsWithSpaces(input_string, output_string);
    return;
} // TC : O(2^N) : N -> Length of input_string

int main() {
    string input_string = "", output_string = "";
    cin >> input_string;

    PrintPermutationsWithSpaces(input_string, output_string);

    return 0;
}