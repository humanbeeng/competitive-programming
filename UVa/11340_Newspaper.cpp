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


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    string line;    
    int l;
    fo(i, t){
        int k;
        cin >> k;
        unordered_map<char, double> st;
        unordered_map<char, double>::iterator itr;
        fo(i, k) {
            char key;
            double value;
            cin >> key >> value;
            st[key] = value;
        }
        int m;double pay = 0;
        cin >> m;
        cin.ignore();
        fo(i, m){
            line = "";
            getline(cin, line);
            l= line.size();
            fo(j, l){
                itr = st.find(line[j]);
                if(itr!=st.end()){
                    pay += itr->second;
                }
            }
        }

        
        
        
    pay /= 100;
		printf("%0.2lf$\n", pay);
    }

    return 0;
}