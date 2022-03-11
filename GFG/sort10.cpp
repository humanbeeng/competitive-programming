#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
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
        vi arr;
        int size, num;
        cin >> size;
        fo(i, size){
            cin >> num;
            arr.push_back(num);
        }
        
        int low=0, high = arr.size()-1, med=0;
        while(med<=high){
            if(arr[med]==0){
                swap(arr[low++], arr[med++]);
                
            }
            
            else if(arr[med]==1){
                med++;
                
            }
            else if(arr[med]==2){
                swap(arr[med],arr[high--]);
                
            }
        }

        fo(i, arr.size()){
            cout << arr[i] << " ";
        }
        cout << endl;
        arr.clear();


 
    }

    return 0;
}