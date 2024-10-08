class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1);
        for(int i=nums.size()-1; i>=0; i--){
            for(int j=nums.size()-1; j>i; j--){
                if(nums[i]<nums[j])
                    dp[i] = max(dp[i], 1+dp[j]);
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};