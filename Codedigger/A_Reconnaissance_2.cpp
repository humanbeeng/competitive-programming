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
#define imn INT_MIN;
#define imx INT_MAX;

void setio(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    int res = abs(arr[1] - arr[n]);
    int resi = 1;
    int resj = n;
    int x = 1;
    int y = 2;
    while (y <= n) {
        if (res > abs(arr[x] - arr[y])) {
            res = abs(arr[x] - arr[y]);
            resi = x;
            resj = y;
        }
        x++;
        y++;
    }
    cout << resi << " " << resj;

    return 0;
}