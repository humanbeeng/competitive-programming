/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, initial, n) for (int i = initial; i < n; i++)
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

int solve(){
    int n;
    cin >> n;
    string res = "NO";
    int arr[] = {4,7,44,77,47,74,477,774,777,444,474,747,477,744};
    int sizee = sizeof(arr)/sizeof(arr[0]);
    fo(i, 0, sizee){
        if(n%arr[i] == 0) {res = "YES";break;}
    }
    cout << res;


    return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    //setio("");
    int t=1; 
    //cin >> t;
    while(t--){
    solve();
    }



    return 0;
}