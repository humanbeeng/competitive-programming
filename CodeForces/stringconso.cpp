#include <bits/stdc++.h>
#include<vector>
#include<string>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef push_back pb;
typedef vector<char> vc;
typedef vector<string> vs;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    string str;
    cin >> str;
    fo(i, str.size()){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            str.erase(i);
        }
        else{
            str.insert(i-1, '.');
            towlower(str[i]);
        }

    }
    return 0;
}