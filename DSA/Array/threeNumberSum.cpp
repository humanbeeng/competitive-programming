#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = sizeof(nums)/sizeof(nums[0]); int targetsum = 0;
        sort(nums.begin(), nums.end());
    vector<vector<int>> solnarray;
    for(int i = 0; i<(n-2); i++){
        int cursum = 0;
        vector<int> solnset;
        int curElement = nums[i];
        int right = n-1;
        int left = i+1;
        while(left < right){
            cursum = curElement + nums[left] + nums[right];
            if(cursum < targetsum){
                left++;
            }
            else if(cursum > targetsum){
                right++;
            }
            else if(cursum == targetsum){
                    solnset.push_back(curElement);
                    solnset.push_back(nums[left]);
                    solnset.push_back(nums[right]);
                    solnarray.push_back(solnset);      
            }
        }
    }
    return solnarray ;
}

int main(){
    vector<int> arrayy;
    int arr[] =  {12,3,1,2,-6,5,-8,6};
    for(int i =0; i< 8;i++){
        arrayy.push_back(arr[i]);
    }
    vector<vector<int> res  = threeSum(*arrayy);
    return 0;
}