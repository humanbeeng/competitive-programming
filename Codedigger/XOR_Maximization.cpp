/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
using namespace std;
typedef vector<int> vi;
#define pi(arr) for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << ' '
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;
typedef INT_MIN imn;
typedef INT_MAX imx;


void setio(string s){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}


int main(){
    int n;
    cin >> n;
    int arr[100000] = {0};
    for(int i = 1; i<n; i++){
        int num;
        cin >> num;
        arr[i] = arr[i-1] ^ num;
        
    }



    return 0;
}