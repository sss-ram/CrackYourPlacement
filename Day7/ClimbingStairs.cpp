class Solution {
public:
    vector<int>dp;
    int solve(int n){
        if(dp[n]!=-1)
            return dp[n];
        return dp[n] = solve(n-1)+solve(n-2);    
    }
    int climbStairs(int n) {
        dp = vector<int>(max(n+1,3), -1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        return solve(n);
    }
};