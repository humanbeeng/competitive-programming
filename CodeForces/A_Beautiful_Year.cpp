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

    int yr;
    cin >> yr;
    while(true){
        yr++;
        int a = yr / 1000;
        
        int b = yr/100 % 10;
        
        int c = yr / 10 %10;

        int d = yr % 10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }


    }
    cout << yr;

    return 0;
}