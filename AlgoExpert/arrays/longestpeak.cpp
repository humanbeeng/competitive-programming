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

    int arr[] = {1,2,3,3,4,0,10,6,5,-1,-3,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int peakIndex = 0;
    int peakElement = 0;
    int length = 0;

    fo(i, size){
        if(arr[i]<arr[i+1] && arr[i] > arr[i-1]){
            peakIndex = i;
            peakElement = arr[i];
        }
    }

    return 0;
}