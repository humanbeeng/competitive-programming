/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

string encodeStrings(vector<string> strings) {
    int n_strings = strings.size();
    string encoded_string = "";

    for (string str : strings) {
        int n_chars = str.size();
        string curr_string = "";
        for (int i = 0; i < n_chars; i++) {
            if (isalnum(str[i])) {
                curr_string.push_back(str[i]);
            } else {
                curr_string.push_back('/');
                curr_string.push_back(str[i]);
            }
        }
        encoded_string.append(curr_string);
        encoded_string.push_back('#');
        curr_string.clear();
    }
    return encoded_string;
} // O(n * m) n -> length of strings and m -> size of longest string in strings

vector<string> decodeString(string encoded_string) {

    int n_chars = encoded_string.size();
    vector<string> decoded_strings;
    string curr_word = "";

    for (int i = 0; i < n_chars; i++) {
        if (isalnum(encoded_string[i])) {
            curr_word.push_back(encoded_string[i]);
        } else if (encoded_string[i] == '/') {
            curr_word.push_back(encoded_string[i + 1]);
            i = i + 1;
        } else if (encoded_string[i] == '#') {
            decoded_strings.push_back(curr_word);
            curr_word.clear();
        }
    }

    return decoded_strings;
}

string encodeStringOptimized(vector<string> strings) {

    string encoded_string = "";

    for (string str : strings) {
        int n_chars = str.size();
        encoded_string.push_back((char)n_chars);
        encoded_string.append(str);
        encoded_string.push_back('#');
    }

    return encoded_string;
}

vector<string> decodeStringOptimized(string encoded_string) {

    vector<string> decoded_strings;

    int i = 0;
    int n_chars = encoded_string.size();

    string offset = "";
    string curr_word = "";
    while (i < n_chars) {
        char curr_char = encoded_string[i];

        if (curr_char == '#') {
			
        } else {
            offset.push_back(curr_char);
        }
    }
}

int main() {

    int n_strings;
    cin >> n_strings;

    vector<string> strings;

    for (int i = 0; i < n_strings; i++) {
        string str;
        cin >> str;
        strings.push_back(str);
    }

    string encoded_string = encodeStrings(strings);

    cout << encoded_string << endl;

    vector<string> decoded_strings = decodeString(encoded_string);

    for (string str : decoded_strings) {
        cout << str << " ";
    }
    return 0;
}