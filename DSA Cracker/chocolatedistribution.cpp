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
        int n;
        
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            int num;
            cin >> num;
            arr[i] = num;
        }
        int numstuds;
        int mindiff = INT_MAX;
        cin >> numstuds;
        sort(arr, arr+n);
        for(int i=0; i+numstuds-1<n; i++){
            mindiff = min(mindiff, arr[i+numstuds-1]-arr[i]);
        }
        cout << mindiff << endl;

 
    }

    return 0;
}