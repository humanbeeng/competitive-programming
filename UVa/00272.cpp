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
    while(t--){
        int num1, num2;
        cin >> num1 >> num2;
        (num1 > num2) ? cout << ">" << endl : (num1 < num2) ? cout << "<" << endl : cout << "=" << endl;
    }
}/*
"To be or not to be," quoth the Bard, "that
*/