class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        triplets = []
        for i in range(len(nums) - 2):
            left = i + 1
            right = len(nums) - 1
            while left < right:
                currentSum = nums[i] + nums[left] + nums[right]
                if currentSum == 0:
                    triplets.append([nums[i], nums[left], nums[right]])
                    if(nums[i] == 0 & nums[left] == 0 & nums[right] == 0):
                        break
                    left += 1
                    right -= 1
                    if (left < right):
                        break
                elif currentSum < 0:
                    left += 1
                elif currentSum > 0:
                    right -= 1
        return triplets
