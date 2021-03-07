
#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
using namespace std;
typedef vector<int> vi;
#define pi(arr)                                            \
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) \
        cout << arr[j] << " ";

typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;int a[200001];
    cin >> t;
 
	while(t--)
	{
		int n;
		cin >> n;
 
		for(int i=0;i<n;i++)
			cin >> a[i];
 
		a[n] = -1;
 
		map <int,int> m1,m2;
		int cnt = 1;
		bool flag = true;
 
		for(int i=0;i<n;i++)
		{
			if(a[i] == a[i+1])
				cnt++;
			else
			{
				m1[a[i]]++;
				m2[cnt]++;
				cnt = 1;
			}
		}
 
		for(auto i:m1)
		{
			if(i.second != 1)
			{
				flag = false;
				break;
			}
		}
 
		for(auto i:m2)
		{
			if(i.second != 1)
			{
				flag = false;
				break;
			}
		}
 
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}