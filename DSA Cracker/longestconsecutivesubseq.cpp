// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int N)
{
  unordered_set<int> mapp;  
  //Your code here
  for(int i=0; i<N;i++){
    mapp.insert(arr[i]);
  }
  
  int res=INT_MIN;
  for(int i=0;i<N;i++){
     if(mapp.find(arr[i]-1) == mapp.end()){
         int j=arr[i];
         while(mapp.find(j) != mapp.end()){
             j++;
         }
         res = max(res, j-arr[i]);
     }
     
  }
  return res;
  
}