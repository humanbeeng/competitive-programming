#include <bits/stdc++.h>
#include<vector>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;

typedef vector<char> vc;
typedef vector<string> vs;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    
    while (t--) {
        int sum=0;
        int size;
        vi arr;
        int n;
        cin >> size;
        fo(i, size){
            cin >> n;
            arr.push_back(n);
        }
        fo(i, size){
            sum += arr[i];
        }
        cout << sum << endl;
        arr.clear();

 
    }

    return 0;
}