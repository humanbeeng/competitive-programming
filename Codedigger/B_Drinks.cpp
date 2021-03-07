#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#include<iomanip>
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

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n;
    double numerator = 0;
    double res;
    cin >> n;
    fo(i, n)
    {
        double num;
        cin >> num;
        numerator += num;
    }
    res = numerator / n;
    cout << std::fixed;
    cout << setprecision(12);
    cout << res << endl;

    return 0;
}