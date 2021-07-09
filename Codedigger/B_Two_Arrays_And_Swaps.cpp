#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
using namespace std;
typedef vector<int> vi;
#define it vector<int>:: iterator itr
#define pi(arr) for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << ' '
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());


    int t; cin >> t;
    fo(i, t){
        int n, k;
        cin >> n >> k;
        int arr1[n+1];
        int arr2[n+1];
        fo(i, n){
            cin >> arr1[i];
        }
        fo(i, n){
            cin >> arr2[i];
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);
        int ptr1 = 0;
        int ptr2 = n-1;
        while(k-- && ptr1 < n && ptr2 >= 0){
            if(arr1[ptr1] < arr2[ptr2]) swap(arr1[ptr1], arr2[ptr2]);
            ptr1++; ptr2--;
        }
        int res =0;
        fo(i, n){
            res += arr1[i];
        }
        cout << res << endl;

    }



    return 0;
}