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
#define pi(arr)                                            \
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) \
    cout << arr[i] << ' '
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;

void setio(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    //setio("");
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        while (n--) {
            int num;
            cin >> num;
            if (!(num & 1)) {
                int rev = 0;
                while (num > 0) {
                    rev <<= 1;
                    if (num & 1) {
                        rev ^= 1;
                    }
                    num >>= 1;
                }
                cout << rev << endl;
            } else {
                cout << num << endl;
            }
        }
    }

    return 0;
}