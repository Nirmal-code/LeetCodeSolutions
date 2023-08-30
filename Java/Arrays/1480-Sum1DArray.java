class Solution {
    public int[] runningSum(int[] nums) {
        int curr_sum=0;
        for (int i=0; i<nums.length; i++){
            curr_sum+=nums[i];
            nums[i]=curr_sum;
        }

        return nums;
        
    }
}