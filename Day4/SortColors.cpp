class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a[3] ={0};
        for(auto i: nums){
            a[i]++;
        }
        int i=0,k=0;
        while(i<3){
            while(a[i]){
                nums[k++] = i;
                a[i]--;
            }
            i++;
        }
    }
};