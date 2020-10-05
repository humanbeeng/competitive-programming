#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, k;
    vector<int> type, f;
    cin >> t;
    for (int i = 0; i < t; i++)    {
        cin >> n >> k;

        for (int j = 0; j < n; j++){
            int temp;
            cin >> temp;
            f.push_back(0);
            f[i] += temp / k;
        }
    }

    for (int i = 0; i < t; i++){
        cout << f[i] << endl;
    }

    return 0;
}