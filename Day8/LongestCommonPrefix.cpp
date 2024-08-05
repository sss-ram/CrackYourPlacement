class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mnl = strs[0].length(), n = mnl;
        for(int i=1; i<strs.size(); i++){
            int ind1 = 0, ind2 = 0, ans=0;
            while(ind1<n && ind2<strs[i].length()){
                if(strs[0][ind1] != strs[i][ind2])
                    break;
                ans++;
                ind1++;
                ind2++;
            }
            mnl = min(ans,mnl);
        }    
        return strs[0].substr(0,mnl);
    }
};