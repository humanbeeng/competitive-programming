#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
typedef set<int, int>  sii
typedef set<int> si
typedef set<string> ss
typedef vector<int> vi;
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

    int t = 1;
    cin >> t;

    while (t--) {
        vs pile;
        fo(i, 52){
            string card;
            cin >> card;
            pile.pb(card);
        }
        int y = 0;
        fo(i, 3){
            string first_card = pile.top();
            int value = first_card[0];
            y += value;
            pile.pop_front();
            fo(j, 10-value){
                pile.pop_front();
            }

        }
        cout << pile[52 - y] << endl;

 
    }

    return 0;
}