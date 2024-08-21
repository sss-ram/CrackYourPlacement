class Solution {
public:

    bool canJump(vector<int>& nums) {
        if(nums.size() == 1)
            return true;
        vector<bool>dp(nums.size(), false);

        int recent = INT_MAX;
        for(int i = nums.size()-2; i>=0; i--){
            if(i+nums[i]>= nums.size()-1 || i+nums[i]>= recent){
                recent = i;
                dp[i] = true;
            }
        }
        return dp[0];
    }
};
