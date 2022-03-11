#include <bits/stdc++.h>
#include<vector>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    
        int numsSize = nums.size();
        int i;
        for(i = numsSize -2; i >=0; i--){
            if(nums[i] < nums[i+1]){
                break;
            }
            
        }
        int Idx1 = i;
        if(Idx1 < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            int j;
            for(j=numsSize-1; j>Idx1; j--){
                if(nums[Idx1] < nums[j]){
                    break;
                }
                
            }
            int Idx2 = j;
            swap(nums[Idx1], nums[Idx2]);
            reverse(nums.begin() + Idx1 + 1, nums.end());
        }
    }
};
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;

    while (t--) {


 
    }

    return 0;
}