#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallestdiff(int a[20], int b[20], int sizea, int sizeb){
    int i = 0, j=0, smalldiff=0;
    while(i < sizea && j < sizeb){
        if(a[i] < b[j]){
            smalldiff = b[j]-a[i];
            i++;
        }
        else if (b[j] < a[i]){
            smalldiff = a[i] - b[j];
            j++;
        }
    }
    return smalldiff;
}

int main(){
    int a[10] = {-1,5,10,20,28,3};
    int b[10] = {26,134,135,15,17};
    sort(a, a + (sizeof(a)/sizeof(a[0])));
    sort(b, b + (sizeof(b)/sizeof(b[0])));

    int res = smallestdiff(a,b, sizeof(a)/sizeof(a[0]), sizeof(b)/sizeof(b[0]));
    cout << res << endl;
    return 0;
}