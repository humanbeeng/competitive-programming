/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr)                                            \
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) \
    cout << arr[i] << ' '
#define imn INT_MIN
#define imx INT_MAX
#define mod 1000000007
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;

void setio(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    //setio("");
    int num;
    while (cin >> num && num != 0) {
        bitset<32> a(0);
        bitset<32> b(0);
        bitset<32> n(num);
        int sw = 0;
        int i = 0;
        while(i<32){
            if(n.test(i) && sw == 0){
                a.set(i);
                sw = 1;
            }else if(n.test(i) && sw == 1){
                b.set(i);
                sw = 0;
            }
            i++;
        }
        int aa = a.to_ulong();
        int bb = b.to_ulong();
        cout << aa << " " << bb << endl;


    }

    return 0;
}