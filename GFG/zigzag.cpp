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

    int size,num;
    vi arr;
    cin >> size;
    fo(i, size){
        cin >> num;
        arr.push_back(num);
    }
    int flag =0;
    fo(i, size){
        if(arr[i] > arr[i+1] && flag == 0){
            swap(arr[i], arr[i+1]);
            flag =1;
        }
        if(arr[i] < arr[i+1] && flag == 1){
                swap(arr[i], arr[i+1]);
                flag=0;
            }
        }
    }

    return 0;
}