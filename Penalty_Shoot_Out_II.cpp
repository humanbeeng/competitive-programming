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
        string goals;
        cin >> goals;
        int zf = 0;
        int zs = 0;
        for(int i=0; i<2*n; i++){
            if(goals[i] == '0' && i%2 == 0){
                zf++;
                
            }
            else if(goals[i] == '0' && i%2 != 0){
                zs++;
            }
            else if(goals[i] == '1' && i%2 == 0){
                if(zs >= (2*n) - (i+1)){
                    cout << i << endl;
                    break;
                }
                else{
                    continue;
                }
            }
            else if(goals[i] == '1' && i%2 != 0){
                if(zf >= (2*n) - (i+1)){
                    cout << i+1 << endl;
                    break;
                }
                else{
                    continue;
                }
            }
            
            
        }

 
    }

    return 0;
}