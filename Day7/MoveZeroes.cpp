class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0,i;
        for(i=0; i<nums.size() && j<nums.size(); i++){
            while(j<nums.size() && nums[j]==0)
                j++;
            if(j<nums.size()){
                nums[i] = nums[j];
                if(i!=j)
                    nums[j] = 0;
                else j++;
            }
        }
        while(i<nums.size())
            nums[i++] = 0;
    }
};