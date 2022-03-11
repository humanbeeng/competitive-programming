#include <bits/stdc++.h>
#include <vector>
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;

class Solution
{
public:
    int findDuplicate(vector<int> &nums) {
        int hare = 0;
        int tortoise = 0;
        do{
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        }while(tortoise!=hare);

        tortoise = 0;
        while(tortoise!=hare){
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];

        }
        return hare;
    }
};