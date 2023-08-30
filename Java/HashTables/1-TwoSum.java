package Java.HashTables;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map=new HashMap<Integer, Integer>();
        int[] result=new int[2];
        for (int i=0; i<nums.length; i++){
            if (map.keySet().contains(target-nums[i])){
                result[0]=map.get(target-nums[i]);
                result[1]=i;
                return result;
            }else{
                map.put(nums[i],i);
            }
        }
        return result;
        
    }
}