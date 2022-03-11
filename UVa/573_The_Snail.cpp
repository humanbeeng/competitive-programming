#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
#define pb(num) push_back(num)
#define ppb pop_back()
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef vector<string> vs;

int main()
{
	    double H, U, D, F;
    while(scanf("%lf %lf %lf %lf", &H, &U, &D, &F)==4 && H!=0.0)
    {
        double ff = U*(F/100);
        double ih = 0.0;
        int day=0;
        while(1)
        {
            day++;
            if(U>0) ih = ih + U;
            U = U - ff;
            if(ih>H)
                break;
            ih = ih - D;
            if(ih<0)
                break;
        }
        if(ih>=0)
            printf("success on day %d\n",day);
        else
            printf("failure on day %d\n",day);
    }
    return 0;
}