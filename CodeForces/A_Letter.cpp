#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num);
#define ppb pop_back()
typedef set<int, int>  sii;
typedef set<int> si;
typedef set<string> ss;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef vector<string> vs;
typedef INT_MAX imx;
typedef INT_MIN imn;
using namespace std;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;

    while (t--) {
        int n, m;
        char arr[n][m];
        cin >> i >> j;
        fo(i, n){
            fo(j, m){
                char num;
                cin >> num;
                arr[i][j] = num;
            }
        }
        int first_i= imx first_j=imx;
        int last_i = imn, last_j=imn;
        int drawstart_i, drawend_i;
        fo(i, n){
            fo(j, m){
                if(arr[i][j] == "*"){
                    drawstart_i = i;
                    break;
                }
            }
        }

        for(int i=n-1; i=>0; i--){
            for(int j = m-1; j=>0; i--){
                if(arr[i][j] == "*"){
                    drawend_i = i;
                }
            }
        }
        fo(i, n){
            fo(j, m){
                if(arr[i][j] == "*"){
                    
                    first_j = min(first_j, j);
                    last_j = max(last_j, j);
                    
                    

                }
                    
            }
        }
         for(int i = drawstart_i ; i<=drawstart_i; i++){
             for(int j=first_j; j<=last_j; j++){
                 cout << arr[i][j];
             }
             cout << endl;
         }
        


 
    }

    return 0;
}