/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr) for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << ' '
#define imn INT_MIN
#define imx INT_MAX
#define mod 1000000007
#define sf(num) scanf("%d", &num)
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;


void setio(string s){
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

bool isvowel(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c=='i' || c=='o' || c=='u' || c=='y'){
        return true;
    }else return false;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    string str;
    getline(cin, str);
    string res;

    for(int i=0; i<str.size(); i++){
        if(!(isvowel(str[i]))){
            res.push_back('.');
            res.push_back(tolower(str[i]));
        }
    }
    cout << res << endl;




    return 0;
}