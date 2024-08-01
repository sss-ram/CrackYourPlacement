class Solution {
    List<Integer> ans;
    List<List<Integer>> res;
    public void subset(int[] nums,int ix){
        res.add(new ArrayList<>(ans));
        for(int i=ix; i<nums.length; i++){
            ans.add(nums[i]);
            subset(nums,i+1);
            ans.remove(ans.size()-1);
        }
    }
    public List<List<Integer>> subsets(int[] nums) {
        ans = new ArrayList<>();
        res = new ArrayList<>();
        subset(nums,0);
        return res;
    }
}