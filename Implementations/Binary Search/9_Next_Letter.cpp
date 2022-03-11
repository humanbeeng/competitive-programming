/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

char FindNextLetter(vector<char> arr, int n_elements, char key) {

    int left = 0, right = n_elements - 1;

    char res = '#';

    while (left < right) {
        int mid = left + ((right - left) / 2);

		
    }
}

int main() {
    int n_elements = 0;
    cin >> n_elements;

    vector<char> arr;

    while (n_elements--) {
        int input_char;
        cin >> input_char;
        arr.push_back(input_char);
    }

    char key;
    cin >> key;

    int next_letter = FindNextLetter(arr, n_elements, key);
    cout << next_letter;

    return 0;
}