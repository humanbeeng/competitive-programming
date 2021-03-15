#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream input("promote.in");
    ofstream output("promote.out");
    int count[100][100];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> count[i][j];
        }
    }

    int BS = count[1][1] + count[2][1] + count[3][1] - count[1][0] - count[2][0] - count[3][0];
    int SG = count[2][1] + count[3][1] - count[2][0] - count[3][0];
    int GP = count[3][1] - count[3][0];
    cout << BS << "\n"
         << SG << "\n"
         << GP;

    return 0;
}