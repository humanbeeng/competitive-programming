#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
#define pb(num) push_back(num)
#define ppb pop_back()
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef vector<string> vs;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    int i=1;

    while (t--) {
        int num;
        int n;
        int res = INT_MIN;
        cin >> n;
        while(n--){
            cin >> num;
            res = max(res, num);
        }
        cout << "Case " << i << ": " << res << endl;
        i++;

 
    }

    return 0;
}