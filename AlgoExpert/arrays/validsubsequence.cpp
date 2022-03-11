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
    int arr[] = {5,1,22,25,6,-1,8,10};
    int sub[] = {1,6,-1,10};
    while (t--) {
        int subindex=0; int arrindex=0; int found = 0;
        int subsize = sizeof(sub)/sizeof(sub[0]);
        int arrsize = sizeof(arr)/sizeof(arr[0]);
        for(int j = subindex; j<subsize; j++){
            for(int i = arrindex;i <arrsize; i++){
                if(sub[subindex] == arr[i]){
                    found++;
                }
            }
            subindex++;
            arrindex++;
            
        }
        cout << found << endl;

 
    }

    return 0;
}