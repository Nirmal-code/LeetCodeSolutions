class Solution(object):
    def pivotIndex(self, nums):
        total_sum=0

        for i in nums:
            total_sum+=i

        left_sum=0
        for i in range(len(nums)):
            if (total_sum-left_sum-nums[i]==left_sum):
                return i
            left_sum+=nums[i]
        if (total_sum-left_sum-nums[-1]==left_sum):
            return len(nums)

        return -1