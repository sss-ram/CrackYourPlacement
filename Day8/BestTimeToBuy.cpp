class Solution {
public:
    int maxProfit(vector<int>& prices) {
        deque<int> ans;
        int max =0;
        for(auto i: prices)
        {
            while(1)
            {
                if(!ans.empty() && ans.back()>=i)
                    ans.pop_back();
                else
                    break;
            }
            ans.push_back(i);

            if(ans.size()>=2)
            {   
                int t =  ans.back() -ans.front();
                max = max>t? max:t;      
            }
        }

        return max;
    }
};