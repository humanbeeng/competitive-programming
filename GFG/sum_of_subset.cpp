#include <bits/stdc++.h>
#include <vector>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;

int sumofsubset(int arr[], int sum, int n)
{
    int t[n + 1][sum + 1];
    int i;
    int j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= sum; j++)
        {
            if (i == 0)
            {
                t[i][j] = 0;
            }
            if (j == 0)
            {
                t[i][j] = 1;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j] + t[i][j - arr[i - 1]];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    for(int i=0; i<26; i++){
        arr[i] = i+1;
    } 
    int sum = 111;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n << endl;
    cout << sumofsubset(arr, sum, n) << endl;

    return 0;
}