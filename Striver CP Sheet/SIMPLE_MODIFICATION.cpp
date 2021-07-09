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
#define ssz(arrayy) sizeof(arrayy) / sizeof(arrayy[0])
#define sf(num) scanf("%d", &num)
#define br "\n"
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
    int n, m, u, q;
    cin >> n >> m >> u >> q;

    int arr[n + 2][m + 2];
    memset(arr, 0, sizeof(arr));
    int prefix[n + 3][m + 3];
    memset(prefix, 0, sizeof(prefix));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int num;
            cin >> num;
            arr[i][j] = num;
            prefix[i][j] = arr[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    int k, r1, c1, r2, c2;
<<<<<<< HEAD

    for (int i = 0; i < u; i++) {
=======
    for(int i = 0; i < u; i++){
>>>>>>> 512570bfdf6553a2fab65687c4844b7cfce86c90
        cin >> k >> r1 >> c1 >> r2 >> c2;
        

    }

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