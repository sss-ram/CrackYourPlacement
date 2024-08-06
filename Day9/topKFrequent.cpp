class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a= nums[0] ,n = nums.size(),i=1,c=1;
        vector<int> res;
        multimap<int, int> mm;
        multimap<int, int>:: iterator it;
        while(i<n)
        {
            if(a != nums[i])
            {
                mm.insert(pair<int,int>(c,a));
                a = nums[i];
                c=1;
            }
            else
                c++;
            i++; 
        }
        mm.insert(pair<int,int>(c,a));

        it = mm.end();
        --it;
        for(; k; --it)
        {
            cout<<it->first<< it->second<<"\n";
            res.push_back(it->second);
            k--;
        }
        return res;
    }
};