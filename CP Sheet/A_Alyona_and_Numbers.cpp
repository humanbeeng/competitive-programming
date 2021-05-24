/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, init, n) for (int i = init; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr)                                                                \
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)                       \
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
  ll n, m;
  cin >> n >> m;
  ll ans = 0;

  for(int i = 1; i <= n ;i++){
    ans += (m/5);
    ans += ((i%5) + (m%5)) >= 5 ? 1 : 0;
  }
  cout << ans;

  return 0;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // setio("");
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}