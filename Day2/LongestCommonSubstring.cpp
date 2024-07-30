class Solution {
  public:

    int longestCommonSubstr(string s1, string s2) {
        // your code here
        int l1 = s1.length(), l2 = s2.length(), ans = 0;
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,0));
        for(int i=0; i<l1; i++){
            for(int j=0; j<l2; j++){
                if(s1[i] == s2[j]){
                    dp[i+1][j+1] = dp[i][j]+1;
                }
                else
                    dp[i+1][j+1] = 0;
                ans = max(dp[i+1][j+1],ans);
            }
        }
        return ans;
        
    }
};