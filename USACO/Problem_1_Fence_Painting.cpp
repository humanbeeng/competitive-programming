#include <bits/stdc++.h>
#include <fstream>
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

int main() {
     
freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
   
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    int ans = b-a;
    ans = ans + (d-c);
    int intersection =  max(min(b, d) - max(a,c), 0);
    ans = ans - intersection;
    cout << ans << endl;

    return 0;
}