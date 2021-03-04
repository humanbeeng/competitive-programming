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

    int t = 1;
    

    while (t--) {
        int s, r;
        while((cin >> s >> r), (s || r)){
            int sol[r];
            int left = 0;
            fo(i, r){
                sol[i] = i+1;
            }
            fo(i, r){
                int l, r;
                cin >> l >> r;
                int right = r+1;
                if(l == 1){
                    cout << "* " << sol[right] << endl;
                }else if(l==1 && r == s-1){
                    cout << "* *" << endl; 
                }
                
                else  {
                    cout << sol[left] << " "  << sol[right] << endl;
                }

            }
            cout << '-' << endl;
        }
        

 
    }

    return 0;
}