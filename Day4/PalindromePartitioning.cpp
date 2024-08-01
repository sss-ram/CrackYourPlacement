class Solution {
public:
    bool ispalin(string &s, int i, int j){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void bt(string &s, int st, vector<vector<string>>& res, vector<string>& ans){
        if(st==s.length()){
            res.push_back(ans);
            return;
        }
        for(int i = st; i<s.length(); i++){
            if(ispalin(s,st,i)){
                ans.push_back(s.substr(st,i-st+1));
                bt(s,i+1,res,ans);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>ans;
        bt(s,0,res,ans);
        return res;
    }
};