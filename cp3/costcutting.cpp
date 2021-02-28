#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef vector<string> vs;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    int caseno = 1;

    while (t--) {
        int sal1, sal2, sal3;
        cin >> sal1 >> sal2 >> sal3;
        int x = sal1-sal2;
        int y = sal2-sal3;
        int z = sal1-sal3;
        if (x * y > 0) 
        cout << "Case " << caseno++<<": "<< sal2 << endl;
  
    // Checking if c is middle (x and z both 
    // are positive) 
    else if (x * z > 0) 
        cout << "Case " << caseno++<<": " << sal3 << endl; 
    else
        cout << "Case " << caseno++<<": " << sal1 << endl;
 
    }

    return 0;
}