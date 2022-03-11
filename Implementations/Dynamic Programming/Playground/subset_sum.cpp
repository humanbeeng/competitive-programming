#include <bits/stdc++.h>
using namespace std;

class SubsetSum {

public:
    SubsetSum() {
        int n_elements;
        cin >> n_elements;
        vector<int> arr(n_elements + 1);

        for (int i = 0; i < n_elements; i++) {
            cin >> arr[i];
        }

        int sum;
        cin >> sum;

        int res = _isSubsetAvailable(arr, n_elements, sum);

        print_res(res);
    }

private:
    int _isSubsetAvailable(vector<int> &arr, int n_elements, int sum) {
        int t[n_elements + 3][sum + 3];

        //initialize t matrix

        for (int i = 0; i <= n_elements; i++) {
            for (int j = 0; j <= sum; j++) {
                if (i == 0)
                    t[i][j] = 0;
                if (j == 0)
                    t[i][j] = 1;
            }
        }

        for (int i = 1; i <= n_elements; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] > j) {
                    t[i][j] = t[i - 1][j];
                } else if (arr[i - 1] <= j) {
                    t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
                }
            }
        } //end double for loops

        return t[n_elements][sum];

    } //end isSubsetAvailable. TC : O(n_elements * sum)   SC : O(n_elements, sum)

public:
    void print_res(int res) {
        cout << res << endl;
        return;
    }
};

int main() {

    SubsetSum sbs = SubsetSum();

    return 0;
}
