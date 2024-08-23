class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
    int fi(vector<int>&nums, int k){
        int f = 0, l = nums.size()-1;
        while(f<=l) {
            int m = (f+l)/2;
            if(nums[m] == k)
                return m;
            if(nums[m] > k){
                l = m-1;
            }
            else
                f = m+1;
        }
        return -1;
    }
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int>v = nums;
	    int temp, ans = 0;
	    sort(v.begin(), v.end());
	    for(int i=0; i<v.size(); i++){
	        while(nums[i] != v[i]){
	            int id = fi(v,nums[i]);
	            temp = nums[id];
	            nums[id] = nums[i];
	            nums[i] = temp;
	            ans++;
	        }
	    }
	    return ans;
	}
};
