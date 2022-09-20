class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            int element = nums[i];
            int diff = target - element;
            
            if(m.find(diff) != m.end()) {
                result.push_back(m[diff]);
                result.push_back(i);
                return result;
            } else {
                m[element] = i;
            }
        }
        
        return result;
    }
};