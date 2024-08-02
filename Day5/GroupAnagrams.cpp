class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>res;
        for(auto &s: strs){
            string k = s;
            sort(k.begin(), k.end());
            m[k].push_back(s);
        }
        for(auto it: m)
            res.push_back(it.second);
        return res;
    }
};