class Solution {
public:
    vector<string>res;
    void solve(int n, string s, int o, int c){
        if(o>n || c>o)
            return;
        if(s.length()== 2*n){
            res.push_back(s);
        }
        solve(n, s+"(", o+1,c);
        solve(n, s+")", o, c+1);
    }
    vector<string> generateParenthesis(int n) {
        res = vector<string>();
        solve(n,"",0,0);
        return res;
    }
};