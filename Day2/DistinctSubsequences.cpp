class Solution {
public:
    int solve(string &s, string&t, int i, int j, vector<vector<int>>& dp){
        if(j == t.length())
            return 1;
        if(i == s.length())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==t[j])
            dp[i][j] = solve(s,t,i+1,j,dp) + solve(s,t,i+1,j+1,dp);
        else
            dp[i][j] = solve(s,t,i+1,j,dp);
        return dp[i][j];
    }
    int numDistinct(string s, string t) {
        if(t=="")
            return 1;
        if(s=="")
            return 0;
        vector<vector<int>>dp(s.length(),vector<int>(t.length(),-1));
        return solve(s,t,0,0,dp);
    }
};