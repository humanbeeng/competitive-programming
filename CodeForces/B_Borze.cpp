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


    string str;
    cin >> str;
    
    fo(i, str.size()){
        if(str.compare(i, 1, ".") == 0){
            cout << "0";
        }else if(str.compare(i, 1, "-") == 0 && str.compare(i+1, 1, "-") == 0){
            cout << "2";
            i++;
        }else if(str.compare(i, 1, "-") == 0 && str.compare(i+1, 1, ".") == 0){
            cout << "1";
            i++;
        }
    }

    return 0;
}