
/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, init, n) for (int i = init; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr)                                            \
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) \
    cout << arr[i] << ' '
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

void setio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int solve() {
    int n, l;
    cin >> n >> l;
    int arr[n+1];

    fo(i, 0, n){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int x = arr[0];
    int y = l - arr[n-1];
    double maxdist = max(x, y); 

    fo(i, 0, n-1){
        double adjdist = arr[i+1] - arr[i];
        adjdist = adjdist / 2.0;
        maxdist = max(maxdist, adjdist);

    }
    cout << fixed;
    cout << setprecision(10);
    cout << maxdist;

    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //setio("");
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}