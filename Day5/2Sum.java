class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> m = new HashMap<>();
        for(int i=0; i<nums.length; i++){
            if(m.containsKey(target-nums[i])){
                int idx = m.get(target-nums[i]);
                return new int[]{i,idx};
            }
            m.put(nums[i],i);
        }
        return null;
    }
}