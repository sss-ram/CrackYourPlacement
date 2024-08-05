class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        multimap<string,string>m;
        vector<vector<string>>res;
        for(auto i : string_list){
            string ns = i;
            sort(ns.begin(),ns.end());
            m.insert({ns,i});
        }
        for(auto it = m.begin(); it!=m.end();){
            auto k = it->first;
            auto r = m.equal_range(k);
            vector<string>ans;
            for(auto pt = r.first; pt!= r.second; ++pt){
                ans.push_back(pt->second);
            }
            res.push_back(ans);
            it = r.second;
        }
        return res;
    }
};