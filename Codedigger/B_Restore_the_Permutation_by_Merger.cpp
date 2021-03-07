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

    int t;
    cin >> t;
    fo(i, t)
    {
        int n;
        cin >> n;
        unordered_set<int> st;
        fo(i, 2 * n)
        {
            int num;
            cin >> num;
            if(st.find(num) == st.end()){
                cout << num << " ";
                st.insert(num);
                
            }
            
            
            
        }
        
        
        cout << endl;
    }

    return 0;
}