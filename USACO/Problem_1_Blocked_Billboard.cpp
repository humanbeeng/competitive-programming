#include <bits/stdc++.h>
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
using namespace std;
typedef vector<int> vi;
#define pi(arr) for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << ' '
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;


struct Rect{
    int x1, x2, y1, y2;
    int area(){
        return (x2 - x1)*(y2-y1);
    }
};


int intersection(Rect p, Rect q){
    int xIntersect = max(0, (min(p.x2, q.x2) - max(p.x1, q.x1)));
    int yIntersect = max(0, (min(p.y2, q.y2) - max(p.y1, q.y1)));
    int areaOfIntersection = xIntersect * yIntersect;
    return areaOfIntersection;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ifstream cin ("billboard.in");
    ofstream cout ("billboard.out");
    Rect p, q, t;
    cin >> p.x1 >> p.y1 >> p.x2 >> p.y2;
    cin >> q.x1 >> q.y1 >> q.x2 >> q.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
    int ans = p.area() + q.area() - intersection(p, t) - intersection(q, t);
    cout << ans ;


    



    return 0;
}