#include <bits/stdc++.h>
#include <vector>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;

int main()
{
    

    int arr1[] = {3, 75, 17, 81, 41, 32, 54};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {99, 44, 5, 22, 67};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    int fp = 0;
    int sp = 0;
    int smallestDiff = INT_MAX;
    int pairDiff;
    int smallestpair[10] = {0};

    while (fp < (size1) && sp < (size2))
    {

        if (arr1[fp] < arr2[sp])
        {
            pairDiff = arr2[sp] - arr1[fp];
            fp++;
        }
        else if (arr2[sp] < arr1[fp])
        {
            pairDiff = arr1[fp] - arr2[sp];
            sp++;
        }
        else{
                cout << "Smallest Difference is 0 the elements are " << arr1[fp] << " " << arr2[sp];
                break;
            }
        if (pairDiff < smallestDiff)
        {
            smallestDiff = pairDiff;
            smallestpair[0] = arr1[fp-1];
            smallestpair[1] = arr2[sp-1];
        }
    }

    cout << "The smallest difference is " << smallestDiff << ", the elements are " << smallestpair[0] << " " << smallestpair[1] << endl;

    return 0;
}