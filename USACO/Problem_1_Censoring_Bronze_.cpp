/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
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

void setio(string s) { // FastIO See General -> Input/Output
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setio("promote");
    
    int count[100][100];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> count[i][j];
        }
    }

    int BS = count[1][1] + count[2][1] + count[3][1] - count[1][0] - count[2][0] - count[3][0];
    int SG = count[2][1] + count[3][1] - count[2][0] - count[3][0];
    int GP = count[3][1] - count[3][0];
    cout << BS << "\n"
         << SG << "\n"
         << GP;

    return 0;
}