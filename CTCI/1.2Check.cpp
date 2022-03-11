#include <bits/stdc++.h>
using namespace std;

bool isPermutation(string str1, string str2) {
  int sz_str1 = str1.size();
  int sz_str2 = str2.size();

  // basic check

  if (sz_str1 != sz_str2) {
    cout << "false";
    return false;
  }

  // sort the strings

  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  // check whether both the strings are equal

  if (str1 != str2)
    return false;
  return true;
} // end isPermutation

int main() {
  string string1 = "abcabcdde";
  string string2 = "abcddeabc";
  bool res = isPermutation(string1, string2);
  if (res)
    cout << "true";
  else
    cout << "false";

  return 0;
}
