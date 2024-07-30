class Solution {
public:
    string minWindow(string s, string t) {
        if(t=="" || s.length()<t.length())
            return "";
        unordered_map<char,int>ms,mt;
        for(char c: t)
            mt[c]++;
        int ans = INT_MAX, l=0, r=0, tl = 0;
        int pre = 0, req = mt.size();
        for(int i=0; i<s.length(); i++){
            ms[s[i]]++;
            if(mt[s[i]] && ms[s[i]] == mt[s[i]])
                pre++;
            while(pre == req){
                if(i-tl+1<ans){
                    l = tl;
                    r = i;
                    ans = r-l+1;
                }
                ms[s[tl]]--;
                if(mt[s[tl]] && ms[s[tl]]<mt[s[tl]])
                    pre--;
                tl++;
            }
        }
        return ans!=INT_MAX? s.substr(l,ans):""; 
    }
};