class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        
        int left = 0, right = (m * n) - 1;
        
        while(left <= right) {

            int mid = (left + right) / 2;
            
            int i = mid / n;
            int j = ((mid) % n);
            
            int mid_element = matrix[i][j];
            
            if(mid_element == target) {
                return true;
            } else if(mid_element > target) {
                right = mid - 1;
            } else left = mid + 1;
            
        }
        
        return false;
        
    }
};