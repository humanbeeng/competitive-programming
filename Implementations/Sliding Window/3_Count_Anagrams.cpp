/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int countAnagrams(string str, string pattern) {
    int window_size = pattern.size();

    int start = 0, end = 0, n_distinct_char_used = 0, result = 0;

    unordered_map<char, int> pattern_map;
    for (char c : pattern) {
        pattern_map[c]++;
    }

    n_distinct_char_used = pattern_map.size();

    while (end < str.size()) {

        if (pattern_map.find(str[end]) != pattern_map.end()) {
            pattern_map[str[end]]--;
            if (pattern_map[str[end]] == 0) {
                n_distinct_char_used--;
            }
        }
        if (end - start + 1 < window_size) {
            end++;
        } else if (end - start + 1 == window_size) {

            if (n_distinct_char_used == 0) {
                result++;
            }
            if (pattern_map.find(str[start]) != pattern_map.end()) {
                if (pattern_map[str[start]] == 0) {
                    n_distinct_char_used++;
                }
                pattern_map[str[start]]++;
            }

            start++;
            end++;
        }
    }
    return result;
}

int main() {

    string input_string;
    cin >> input_string;

    string pattern;
    cin >> pattern;

    int res = countAnagrams(input_string, pattern);

    cout << res;

    return 0;
}