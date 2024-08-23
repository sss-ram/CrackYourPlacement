class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x = columnNumber;
        if(x==1)
            return "A";
        string ans = "";
        while(x!=0){
            int r = x%26;
            x/=26;
            if(r!=0)
                ans+= ('A'+r-1);
        
            if(r==0 && x>0){
                ans+='Z';
                x-=1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
