class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multimap<int,int> mm;
        for(int i=0; i<nums.size();i++){
            mm.insert({nums[i],i});
        }
        int n=0;
        for(auto it= mm.begin(); it!=mm.end(); ++it){
            if(n==nums.size()-k)
                return it->first;
            n++;
        }
        return 0;    
    }
};