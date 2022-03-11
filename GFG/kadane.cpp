#include <bits/stdc++.h>

#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;





int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n, arr[10], i=0;
    while(cin>>n){
        arr[i++]=n;
    }
    for(int i=0; i < sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i] << " ";
    }

    return 0;
}
