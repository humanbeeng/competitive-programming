/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, init, n) for (int i = init; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr) for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << ' '
#define imn INT_MIN
#define imx INT_MAX
#define mod 1000000007
#define sf(num) scanf("%d", &num)
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;


void setio(string s){
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int adj(char *arr, int posi, int posj){
    // int points = 0;
    // if(arr[posi-1][posj] == '.')points++;
    // if(arr[posi+1][posj] == '.') points++;
    // if(arr[posi][posj+1] == '.') points++;
    // if(arr[posi][posj-1] == '.') points++;
    // return points;
    fo(i, 0, 5)
    fo(j, 0, 5)
    cout << arr[i][j];
    cout << endl;
}

int solve(){
    int n, m;
    char arr[n+4][m+4];
    cin >> n >> m;
    fo(i, 0, n){
        fo(j, 0, m){
            cin >> arr[i][j];
        }
    }

    int vertices = 0;
    fo(i, 0, n){
        fo(j, 0, m){
            int adjpoints;
            
            if(adjpoints == 3){
                vertices++;
            }
        }
        
    }
    adjpoints =  adj(arr, i, j);

    cout << vertices;


    return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    //setio("");
    int t=1; 
    //cin >> t;
    while(t--){
    solve();
    }



    return 0;
}