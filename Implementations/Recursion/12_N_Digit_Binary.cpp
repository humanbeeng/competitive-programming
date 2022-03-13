/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void PrintNDigitBinary(int n_digits, int n_ones, int n_zeroes, string n_digit_binary_string, vector<string> &result) {
    if (n_digits == 0) {
        result.push_back(n_digit_binary_string);
        return;
    }

    if (n_ones > n_zeroes + 1) {
        string n_digit_binary_string_with_zero = n_digit_binary_string;
        n_digit_binary_string_with_zero.push_back('0');
        PrintNDigitBinary(n_digits - 1, n_ones, n_zeroes + 1, n_digit_binary_string_with_zero, result);
    }
    string n_digit_binary_string_with_one = n_digit_binary_string;
    n_digit_binary_string_with_one.push_back('1');
    PrintNDigitBinary(n_digits - 1, n_ones + 1, n_zeroes, n_digit_binary_string_with_one, result);

    return;
}

int main() {
    int n_digits;
    cin >> n_digits;
    vector<string> result;

    PrintNDigitBinary(n_digits, 0, 0, "", result);

    for (string n_digit_binary_string : result) {
        cout << n_digit_binary_string << endl;
    }
    return 0;
}