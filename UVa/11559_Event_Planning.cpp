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

    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
        int mincost = INT_MAX;
        fo(i, h){
            int a; int p;
            cin >> p;
            fo(j, w){
                cin >> a;
                if(a >= n){
                    mincost = min(mincost, p*n);
                }
            }
        }
        if(mincost > b){
            cout << "stay home" << endl;
        }else{
            cout << mincost << endl;
        }
        
    }
   
    return 0;
}