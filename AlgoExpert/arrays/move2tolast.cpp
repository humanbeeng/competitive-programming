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
        int size;
        cin >> size;
        int arr[size];
        fo(i, size){
            cin >> arr[i];
        }
        int fp=0;int sp = 0;int tp = size-1;
        while(sp<=tp){
            if(arr[sp] == 0){
                swap(arr[fp],  arr[sp]);
                sp++;
                fp++;
            }
            else if(arr[sp] == 1){
                sp++;
            }
            else if(arr[sp] == 2){
                swap(arr[sp], arr[tp]);
                tp--;
                
                
            }
        }
        fo(i, size){
            cout << arr[i] << " ";
        }
        cout << endl;

    }

    return 0;
}