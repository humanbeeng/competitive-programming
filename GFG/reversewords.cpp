#include <bits/stdc++.h>
#include <vector>

#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;

typedef vector<char> vc;
typedef vector<string> vs;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;

    while (t--){
        string str;
        string temp;
        cin>>str;
        reverse(str.begin(), str.end());
        stringstream ss(str);
        str = "";
        while(getline(ss, temp, '.')){
            reverse(temp.begin(), temp.end());
            str = str+ temp + ".";
            

            
        }
        str.pop_back();
        cout << str << endl; 
        
        
        
    }

    return 0;
}