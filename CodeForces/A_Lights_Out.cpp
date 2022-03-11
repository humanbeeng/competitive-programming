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

    int arr[3][3];
    fo(i,3){
        fo(j,3){
            arr[i][j] = 1;
        }
        
    }
   
    int ip;
    fo(i, 3){
        fo(j, 3){
            cin >> ip;
           
            if (ip % 2 == 1){
                if (arr[i][j]) arr[i][j] = 0; else arr[i][j] = 1;
                if (i != 0)
                    if (arr[i-1][j]) arr[i-1][j] = 0; else arr[i-1][j] = 1;
                if (i != 2)
                    if (arr[i+1][j]) arr[i+1][j] = 0; else arr[i+1][j] = 1;
                if (j != 0)
                    if (arr[i][j-1]) arr[i][j-1] = 0; else arr[i][j-1] = 1;
                if (j != 2)
                    if (arr[i][j+1]) arr[i][j+1] = 0; else arr[i][j+1] = 1;
            }
        }
    }
    fo(i,3){
        fo(j,3){
            cout << arr[i][j];
        }
        printf("\n");
    }

    return 0;
}