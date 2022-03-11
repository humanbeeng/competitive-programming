#include <bits/stdc++.h>
using namespace std;

string urlify(string str, int trueLength) {

  // Step 1 : Count the spaces
  int n_spaces = 0;

  for (int i = 0; i < trueLength; i++) {
    if (str[i] == ' ')
      n_spaces++;
  } // end for

  // Step 2 : initialize the correct_idx
  int correct_idx = trueLength + (n_spaces * 2) - 1;

  // Step 3 : To replace all the spaces with %20

  for (int i = trueLength - 1; i >= 0; i--) {
    if (str[i] != ' ') {
      str[correct_idx] = str[i];
      correct_idx--;
    } // end if
    else if (str[i] == ' ') {
      str[correct_idx] = '0';
      str[correct_idx - 1] = '2';
      str[correct_idx - 2] = '%';
      correct_idx = correct_idx - 3;
    } // end else if
  }
  // end for
  //   cout << str << endl;
  return str;
} // end urlify

int main() {
  string str = "Mr John Smith    ";

  int trueLength = 13;
  string res = urlify(str, trueLength);
  cout << res;
}