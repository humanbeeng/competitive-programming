#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
using namespace std;
typedef vector<int> vi;
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

    vi arr;
    int num;
    int size=0;
    while(scanf("%d", &num)!=EOF){
        arr.pb(num);
        size++;
        int nth, res;
        if(size%2==0){
            nth=size/2;
        }else {
            nth = (size/2);
            
        }
        
        nth_element(arr.begin(), arr.begin()+nth, arr.end());
        if(size%2 == 0) res = (arr[nth]+arr[nth-1])/2;
        else res = arr[nth];
        cout << res << endl;
    }

    return 0;
}