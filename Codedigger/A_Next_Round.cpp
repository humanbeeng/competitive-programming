#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
using namespace std;
typedef vector<int> vi;
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

    int n, k;
    int res = 0;
    vi arr;
    cin >> n >> k;
    fo(i, n)
    {
        int num;
        cin >> num;
        arr.pb(num);
        
    }
    int kth = arr[k-1];
    fo(i, n){
        if (arr[i] >=kth && arr[i]!=0) res++;
    }
    cout << res << endl;


return 0;
}