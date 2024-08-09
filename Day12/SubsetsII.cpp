class Solution {
public:
    void solve(vector<int>& nums, set<vector<int>>& s, int i, vector<int> ans){
        if(i==nums.size()){
            s.insert(ans);
            return;
        }
        ans.push_back(nums[i]);
        solve(nums,s,i+1,ans);
        ans.pop_back();
        solve(nums,s,i+1,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        solve(nums,s,0,{});
        vector<vector<int>> res(s.begin(),s.end());
        return res;
    }
};