#include <bits/stdc++.h>
#include<vector>
#define fo(i, n) for (int i = 1; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int arr[] = {0,6,10,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int isnondecreasing = 1;
    int isnonincreasing = 1;
    fo(i, size){
        if(arr[i] > arr[i+1]){
            isnonincreasing = 0;
        }
        if(arr[i] < arr[i+1]){
            isnondecreasing = 0;
        }
        
        
    }
    if(isnondecreasing == 1){
            cout << "true" << endl;
        }
        else if(isnonincreasing == 1){
            cout << "true" <<endl;
        }
        else if(isnonincreasing == 0 && isnondecreasing == 0){
            cout << "false" << endl;
        }

    
    

    return 0;
}