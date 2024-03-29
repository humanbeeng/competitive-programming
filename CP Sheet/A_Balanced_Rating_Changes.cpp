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
  int n;
  cin >> n;
  bool flag = true;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num % 2 == 0) {
      arr[i] = num / 2;
    } else {
      arr[i] = (flag ? floor((double)num / 2) : ceil((double)num / 2));
      flag = !flag;
    }
  }

  for (auto numbers : arr) {
    cout << numbers << br;
  }

  return 0;

  // int n;
  // scanf("%d", &n);
  // bool ok = true;
  // vector<int> newrating(n);
  // for (int i = 0; i < n; i++) {
  //   int x;
  //   scanf("%d", &x);
  //   if (x & 1) {
  //     newrating[i] = (ok ? floor((double)x / 2) : ceil((double)x / 2));
  //     ok ^= 1;
  //   } else
  //     newrating[i] = x / 2;
  // }

  // for (auto x : newrating) {
  //   printf("%d\n", x);
  // }
  // return 0;
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