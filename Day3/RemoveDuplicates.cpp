class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), c = 0, fo = INT_MAX;
        map<int,int>m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        int i=0;
        for(auto it = m.begin(); it!=m.end(); ++it){
            nums[i++] = it->first;
        }
        return m.size();
    }
};