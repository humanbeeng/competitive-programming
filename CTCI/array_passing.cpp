/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void test_reference(int arr[], int some_another) {

    // cout << "\nInside the test fxn. Size of array is : " << n << "\n";
    cout << "\n"
         << arr[3];
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    cout << "\nArray inside main function \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    int some_another = 10;
    test_reference(arr, some_another);

    return 0;
}