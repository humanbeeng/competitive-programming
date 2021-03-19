/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr)                                            \
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) \
    cout << arr[i] << ' '
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

void setio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //setio("");
    int t = 1;
    cin >> t;
    while (t--) {

        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int w, b;
        cin >> w >> b;

        int numblack = 0;
        int numwhite = 0;

        numblack = n - k1;
        numblack += n - k2;
        numwhite = k1 + k2;

        
        if(numwhite%2 == 1){
            numwhite--;
        }
        if(numblack%2 == 1){
            numblack--;
        }

        

        if(numblack/2 >= b && numwhite/2 >= w){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
        

    }

    return 0;
}