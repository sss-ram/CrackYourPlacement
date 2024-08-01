class Solution {
public:
    void solve(vector<int>& candidates, int target, int i, 
                    vector<int>&ans, vector<vector<int>>&res ){
        
        if(target == 0){
            res.push_back(ans);
            return;
        }
        int p = -1;
        for(int x = i; x<candidates.size(); x++){
            if(target-candidates[x]>=0 || p==candidates[x])
                continue;
            p = candidates[x];
            ans.push_back(candidates[x]);
            solve(candidates, target-candidates[x], x+1, ans, res);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        sort(candidates.begin(), candidates.end());
        vector<int>ans;
        solve(candidates,target,0,ans,res);
        return res;
    }
};