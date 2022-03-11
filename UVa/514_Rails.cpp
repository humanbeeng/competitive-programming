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


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    while(cin >> n && n!=0){
        int a[n+1];
        for(int i=1; i<=n; i++){
            arr[i] = i;
        }
        for(int i=0; i<=n; i++){
            int num;
            cin >> num;
            if(num = 0) break;
            else{
                arr[i] = num;
            }
        }
    }


    return 0;
}