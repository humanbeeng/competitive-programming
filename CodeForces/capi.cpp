#include <bits/stdc++.h>
#include<vector>
#include<string>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;


int main(){
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   string str;
   cin >> str;
   char rep = toupper(str[0]);
   str[0] = rep;
    cout << str;
   return 0;
}