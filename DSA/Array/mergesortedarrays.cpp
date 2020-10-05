#include<iostream>
using namespace std;

void mergesortedarrays(int a[], int b[], int c[], int n1, int n2){
    int p = 0, q = 0;
    cout << "Size of given arrays are " << n1 << " and " << n2<< endl;
    int i = 0;
    while(p < n1 && q < n2){
        if(a[p] < b[q]){
            c[i] = a[p];
            p++;i++;
        }
        else{
            c[i] = b[q];
            q++;i++;
        }
    }
    while(p<n1){
        c[i++] = a[p++];
        
    }
    while(q<n2){
        c[i++] = b[q++];
    }
    
}   

int main(){
    int a[4] = {0,3,4,31}, b[4] = {3,4,6,30};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int c[n1+n2];
    mergesortedarrays(a,b,c,n1,n2);
    cout << "Size of C array is " << n1+n2 << endl;
    cout << "The merge sorted array is "<< endl;
    cout << "[ ";
    for(int j = 0; j < n1+n2; j++){
        cout << c[j] << "  ";
    }
    cout << "]";
    return 0;
}