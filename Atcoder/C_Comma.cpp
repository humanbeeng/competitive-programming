/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
#include <string>
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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   

    unsigned long long n, ans = 0;
    cin >> n;
    if (n >= 1000)
        ans += (n - 999);
    if (n >= 1000000)
        ans += (n - 999999);
    if (n >= 1000000000)
        ans += (n - 999999999);
    if (n >= 1000000000000)
        ans += (n - 999999999999);
    if (n >= 1000000000000000)
        ans += (n - 999999999999999);
    cout << ans;

    return 0;
}