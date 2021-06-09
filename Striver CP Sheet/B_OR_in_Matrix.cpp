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
    int n, m;
    cin >> m >> n;
    int b[120][120];
    // memset(b, 1, sizeof(b));
    int a[120][120];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            int num;
            cin >> num;
            b[i][j] = num;
            a[i][j] = 1;
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j] == 0) {
                for (int k = 1; k <= m; k++) {
                    a[k][j] = 0;
                }
                for (int l = 1; l <= n; l++) {
                    a[i][l] = 0;
                }
            }
        }
    }
    int c[120][120];
    memset(c, 0, sizeof(c));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j]) {
                for (int k = 1; k <= m; k++) {
                    c[k][j] = 1;
                }
                for (int k = 1; k <= n; k++) {
                    c[i][k] = 1;
                }
            }
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j] != c[i][j]) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES" << br;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << br;
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