#include <bits/stdc++.h>
#include <vector>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;

void threeWayPartition(vector<int> &arr, int lowVal, int highVal)
{

    int start = 0, end = arr.size() - 1;

    for (int i = 0; i <= end;)
    {
        if (arr[i] < lowVal)
            swap(arr[i++], arr[start++]);

        else if (arr[i] > highVal)
            swap(arr[i], arr[end--]);

        else i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    vector<int> arr = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int a = 10;
    int b = 20;
    threeWayPartition(arr, a, b);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}