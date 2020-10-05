var threeSum = function (nums) {
    if (nums.length >=3) {
        nums.sort();
        var i;
        var triplets = [];
        for (i = 0; i < nums.length - 2; i++) {
            var curElement = nums[i];
            var left = i + 1;
            var right = nums.length - 1;
            while (left < right) {
                var cursum = curElement + nums[left] + nums[right];
                if (cursum == 0) {
                    triplets.push([curElement, nums[left], nums[right]]);
                    left++; right--;
                    if(left < right)  {
                        break;
                    }
                    
                }
                else if (cursum < 0) {
                    left++;
                }
                else if (cursum > 0) {
                    right--;
                }
            }
        }
        return triplets;
    }
    else{
        var triplet = [];
        return triplet;
    }
};

console.log(threeSum([-1,0,1,2,-1,-4]));
