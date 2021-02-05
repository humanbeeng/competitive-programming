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

    
    int arr[] = {1,2,5,6,7,3,2,1,4,2};
    int fp = 0;
    int key = 2;
    int sp = sizeof(arr)/sizeof(arr[0]) - 1;
    while(fp<=sp){
        if(arr[fp] == key){
            swap(arr[fp], arr[sp]);
            sp--;   
        }
        else{
            fp++;
        }
    }
    fo(i, sizeof(arr)/sizeof(arr[0])){
        cout << arr[i] << " " ;
    }

    return 0;
}