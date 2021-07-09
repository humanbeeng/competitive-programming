/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, init, n) for (int i = init; i < n; i++)
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

int f(string a){

}



int solve(){
    string n, k;
    cin >> n >> k;
    cout << n << endl;

    string g2 = n;
    sort(g2.begin(), g2.end());
    string g1 = n;
    sort(g1.rbegin(), g1.rend());

    stringstream converter1(g1);
    int g11 = 0;
    converter1 >> g11;
    stringstream converter2(g2);
    int g22 = 0;
    converter2 >> g22;
    cout << g11 << " " << g22 << " ";
    
    int res = n;

    fo(i, 0, k){
        
    }


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