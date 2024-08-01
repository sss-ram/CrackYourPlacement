class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<vector<int>>& matrix, int i, int j, int val){
        if(i>=matrix.size() || j>=matrix[0].size() || i<0 || j<0)
            return 0;
        if(matrix[i][j]<=val)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int x = matrix[i][j];
        dp[i][j] = max(dp[i][j], 1+max(solve(matrix,i+1,j,x), solve(matrix,i,j+1,x)));
        dp[i][j] = max(dp[i][j], 1+max(solve(matrix,i-1,j,x), solve(matrix,i,j-1,x)));

        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans = INT_MIN;
        dp = vector<vector<int>>(201,vector<int>(201,-1));
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                ans = max(ans,solve(matrix, i,j,INT_MIN));
            }
        }
        return ans;
    }
};