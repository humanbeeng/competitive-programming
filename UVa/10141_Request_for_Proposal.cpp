#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
typedef vector<int> vi;
typedef sii set<int, int>
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef vector<string> vs;
typedef INT_MAX imx
typedef INT_MIN imn
using namespace std;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n, p;
    vs arr;
    string req;
    set<int> list;
    cin >> n >> p;
    fo(i, n){
        cin >> req;
        list.insert(req);
    }

    return 0;
}