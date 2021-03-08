#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
using namespace std;
typedef vector<int> vi;
#define it vector<int>::iterator itr
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
const int maxx = 1e5 + 100;
int a[maxx];
int b[maxx];
int vis[maxx];
int n;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    scanf("%d", &n);
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]), vis[a[i]] = 1;
    int cnt = 0;
    for (int i = n; i >= 0; i--)
        if (!vis[i])
            b[++cnt] = i;
    a[0] = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i - 1])
            cout << b[cnt--] << " ";
        else
            cout << a[i - 1] << " ";
    }
    cout << endl;
    return 0;

    return 0;
}