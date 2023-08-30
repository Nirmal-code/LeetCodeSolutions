class Solution(object):
            
    def subarraySum(self, nums, k):
        ref={0:1}
        curr_sum=0
        result=0

        for i in nums:
            curr_sum+=i
            if (curr_sum-k) in ref:
                result+=ref[curr_sum-k]
            
            if (curr_sum) in ref:
                ref[curr_sum]+=1
            else:
                ref[curr_sum]=1
        return result

