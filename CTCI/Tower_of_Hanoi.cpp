/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void solve(int n, int s, int h, int d) {
    if (n == 1) {
        cout << "Put plate number : " << n << " from " << s << " to " << d << " tower \n";
        return;
    }

    //make input smaller
    solve(n - 1, s, d, h);
    cout << "Put plate number : " << n << " from " << s << " to " << d << endl;
    solve(n - 1, h, s, d);
}

int main() {

    int n;
    cin >> n;

    solve(n, 1, 2, 3);

    return 0;
}

/* 
Tower -> 	1		-
			2	   ---
			3	----------

 */