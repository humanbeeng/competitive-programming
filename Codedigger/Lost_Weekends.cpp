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


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin >> t;
    fo(i, t){
        int arr[6];
        fo(i, 5){
            cin >> arr[i];
        }
        int p;
        cin >> p;
        int workinghours = 0;
        int officehours = 24 * 5;
        fo(i, 5){
            workinghours += arr[i] * p;
        }
        if(workinghours <= officehours) cout << "No" << endl ;
        else cout << "Yes" << endl;
    }

    return 0;
}